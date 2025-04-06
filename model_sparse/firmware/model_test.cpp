#include <iostream>

#include "model_test.h"
#include "parameters.h"


template <class T> class Op_nonzero {
    public:
      T operator()(T a, T b) { return (a.value == 0) ? b : a; }
};
  
constexpr int _floorlog2(int x) { return (x < 2) ? 0 : 1 + _floorlog2(x / 2); }
constexpr int _pow2(int x) { return x == 0 ? 1 : 2 * _pow2(x - 1); }

template <typename T>
struct value_idx_pair {
    T value;
    ap_uint<12> index;
};

template <class T, int N, class Op> T find_nonzero(T *x, Op op) {
#pragma HLS INLINE
    // this function finds the leftmost nonzero element in an array

    // split the array with two subarrays
    // leftN: largest power of 2 that is less than N
    static constexpr int leftN = _pow2(_floorlog2(N - 1)) > 0 ? _pow2(_floorlog2(N - 1)) : 0;
    static constexpr int rightN = N - leftN > 0 ? N - leftN : 0;

    if (N == 1) {
        return x[0];
    }
    if (N == 2) {
        return op(x[0], x[1]);
    }
    return op(find_nonzero<T, leftN, Op>(x, op), find_nonzero<T, rightN, Op>(x + leftN, op));
}


template <class data_T, class hash_T, int N_h, int N_w, int N_c, int N_sparse>
void sparse_input_reduce(data_T input_arr[N_h * N_w * N_c],
                         data_T sparse_arr_feat[N_sparse * N_c],
                         hash_T sparse_arr_hash[N_sparse * 2]) {

    value_idx_pair<data_T> pair_arr[N_h * N_w];
    #pragma HLS ARRAY_PARTITION variable=pair_arr type=complete dim=0

    // scan the first channel only, and assume the same sparsity structure for the rest of channels
    int j_h_arr[N_h * N_w];
    int j_w_arr[N_h * N_w];
    #pragma HLS ARRAY_PARTITION variable=j_h_arr type=complete dim=0
    #pragma HLS ARRAY_PARTITION variable=j_w_arr type=complete dim=0

    DataPrepareLoop:
    for (int j = 0; j < N_h * N_w; j++) {
        #pragma HLS UNROLL
        pair_arr[j].value = input_arr[N_c * j];
        pair_arr[j].index = j;

        int pixels_per_channel = N_h * N_w;
        //int j_c = j / pixels_per_channel + 1;
        int remainder = j % pixels_per_channel;
        int j_h = remainder / N_h + 1;
        int j_w = remainder % N_w + 1;

        j_h_arr[j] = j_h;
        j_w_arr[j] = j_w;
        // ^ I tried pre-computing these and storing in row_arr[N_h * N_w] and col_arr[N_h * N_w]
        // but resources stayed exactly the same
    }

    Op_nonzero<value_idx_pair<data_T>> op_nonzero;
    MaxPixelsLoop:
    for (int i = 0; i < N_sparse; i++) {
        #pragma HLS PIPELINE
        value_idx_pair<data_T> pair = find_nonzero<value_idx_pair<data_T>,
                                                   N_h * N_w,
                                                   Op_nonzero<value_idx_pair<data_T>>>(pair_arr, op_nonzero);
        // first channel
        sparse_arr_feat[N_c * i] = pair.value;
        // other channels
        for (int j = 1; j < N_c; j++) {
            #pragma HLS UNROLL
            sparse_arr_feat[N_c * i + j] = input_arr[N_c * pair.index + j];
        }

        sparse_arr_hash[2 * i] = j_h_arr[pair.index]; 
        sparse_arr_hash[2 * i + 1] = j_w_arr[pair.index];

        pair_arr[pair.index].value = 0;
    }
}

template <class data_T, class res_T, class w_T, int n_chan, int n_filt, int N_sparse>
res_T mult_for_sparse_conv(int offset_h, int offset_w, data_T sparse_arr_feat_in[n_chan * N_sparse], w_T filt_w[3 * 3 * n_chan * n_filt], int i_filt, int i_in) {
    #pragma HLS INLINE

    res_T acc = 0;
    for (int i_chan = 0; i_chan < n_chan; i_chan++) {
        #pragma HLS UNROLL
        w_T w = 0;
        int w_idx = n_chan * i_filt + i_chan;
        if ((offset_h == 1) && (offset_w == 1))        { w = filt_w[w_idx]; }
        else if ((offset_h == 1) && (offset_w == 0))   { w = filt_w[w_idx + n_filt * n_chan]; }
        else if ((offset_h == 1) && (offset_w == -1))  { w = filt_w[w_idx + n_filt * n_chan * 2]; }
        else if ((offset_h == 0) && (offset_w == 1))   { w = filt_w[w_idx + n_filt * n_chan * 3]; }
        // the central one has been done outside this, as it needs no offset check, and some LUTs are saved
        else if ((offset_h == 0) && (offset_w == -1))  { w = filt_w[w_idx + n_filt * n_chan * 5]; }
        else if ((offset_h == -1) && (offset_w == 1))  { w = filt_w[w_idx + n_filt * n_chan * 6]; }
        else if ((offset_h == -1) && (offset_w == 0))  { w = filt_w[w_idx + n_filt * n_chan * 7]; }
        else if ((offset_h == -1) && (offset_w == -1)) { w = filt_w[w_idx + n_filt * n_chan * 8]; }
        
        acc += w * sparse_arr_feat_in[n_chan * i_in + i_chan];
    }
    return acc;
}

template <class data_T, class res_T, class hash_T, class w_T, class b_T, int N_sparse, int n_chan, int n_filt>
void sparse_conv(data_T sparse_arr_feat_in[N_sparse * n_chan],
                 res_T sparse_arr_feat_out[N_sparse * n_filt],
                 hash_T sparse_arr_hash[N_sparse * 2],
                 w_T w[3 * 3 * n_chan * n_filt],
                 b_T b[n_filt]) {
    // note the order of filter weights stored by hls4ml
    // pixel_loop->filter_loop->channel_loop, so (h, w, f, c) fattened
    // if 2 channels, 2 filters:
    // [p1-f1-c1, p1-f1-c2, p1-f2-c1, p1-f2-c2, p2-f1-c1,...]

    OutputPixelLoop:
    for (int i_out = 0; i_out < N_sparse; i_out++) {
        #pragma HLS UNROLL

        OutputFilterLoop:
        for (int i_filt = 0; i_filt < n_filt; i_filt++) {
            #pragma HLS UNROLL
            res_T acc = 0;

            // central field per input channel per output filter
            InputChannelLoopForCentralField:
            for (int i_chan = 0; i_chan < n_chan; i_chan++) {
                #pragma HLS UNROLL
                acc += sparse_arr_feat_in[n_chan * i_out + i_chan] * w[4 * n_chan * n_filt + n_chan * i_filt + i_chan];
            }
        
            // look for fields away from the central by offset checking
            InputPixelLoop:
            for (int i_in = 0; i_in < N_sparse; i_in++) {
                #pragma HLS UNROLL

                int offset_h = sparse_arr_hash[2 * i_out] - sparse_arr_hash[2 * i_in];
                int offset_w = sparse_arr_hash[2 * i_out + 1] - sparse_arr_hash[2 * i_in + 1];

                acc += mult_for_sparse_conv<data_T, res_T, w_T, n_chan, n_filt, N_sparse>(offset_h, offset_w, sparse_arr_feat_in, w, i_filt, i_in);
            }
            sparse_arr_feat_out[n_filt * i_out + i_filt] = acc + b[i_filt];
        }
    }
}

template <class data_T, class res_T, int N_sparse, int n_chan>
void sparse_relu(data_T sparse_arr_feat_in[N_sparse * n_chan], res_T sparse_arr_feat_out[N_sparse * n_chan]) {
    #pragma HLS PIPELINE
    data_T data;
    for (int i = 0; i < N_sparse * n_chan; i++) {
        data = sparse_arr_feat_in[i];
        if (data > 0) {
            sparse_arr_feat_out[i] = data;
        } else {
            sparse_arr_feat_out[i] = 0;
        }
    }
}

template <class data_T, class res_T, class hash_T, int N_sparse, int n_chan, int pool_size>
void sparse_pooling_avg(data_T sparse_arr_feat_in[N_sparse * n_chan],
                        res_T sparse_arr_feat_out[N_sparse * n_chan],
                        hash_T sparse_arr_hash_in[N_sparse * 2],
                        hash_T sparse_arr_hash_out[N_sparse * 2]) {
    int hash_tmp[N_sparse * 2];
    #pragma HLS ARRAY_PARTITION variable=hash_tmp type=complete dim=0

    ap_fixed<10,0> pool_size_recip = 0;
    if (pool_size == 2) { pool_size_recip = 0.5; }
    else if (pool_size == 3) { pool_size_recip = 0.33333; }
    else if (pool_size == 4) { pool_size_recip = 0.25; }
    else if (pool_size == 5) { pool_size_recip = 0.2; }
    else if (pool_size == 6) { pool_size_recip = 0.16667; }

    ComputePoolCoord:
    for (int i = 0; i < N_sparse; i++) {
        #pragma HLS UNROLL
        hash_tmp[2 * i] = (sparse_arr_hash_in[2 * i] - 1) * pool_size_recip + 1;
        hash_tmp[2 * i + 1] = (sparse_arr_hash_in[2 * i + 1] - 1) * pool_size_recip + 1;
    }

    data_T sparse_arr_feat_in_local[N_sparse * n_chan];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_in_local type=complete dim=0
    for (int ii = 0; ii < N_sparse * n_chan; ii++) {
        #pragma HLS UNROLL
        sparse_arr_feat_in_local[ii] = sparse_arr_feat_in[ii];
    }

    HashOutLoop:
    for (int i = 0; i < N_sparse; i++) {
        #pragma HLS UNROLL
        int i_h_out = hash_tmp[2 * i];
        int i_w_out = hash_tmp[2 * i + 1];

        ChannelLoop:
        for (int i_chan = 0; i_chan < n_chan; i_chan++) {
            #pragma HLS UNROLL
            res_T acc = 0;

            HashInLoop:
            for (int j = 0; j < N_sparse; j++) {
                #pragma HLS UNROLL
                int j_h_out = hash_tmp[2 * j];
                int j_w_out = hash_tmp[2 * j + 1];

                data_T data = sparse_arr_feat_in_local[n_chan * j + i_chan];
                if ((i_h_out == j_h_out) && (i_w_out == j_w_out)) {
                    acc += data;
                    sparse_arr_feat_in_local[n_chan * j + i_chan] = 0;
                }
            }
            sparse_arr_feat_out[n_chan * i + i_chan] = acc * pool_size_recip * pool_size_recip;
        }
        sparse_arr_hash_out[2 * i] = i_h_out;
        sparse_arr_hash_out[2 * i + 1] = i_w_out;
    }
}

template<class data_T, class hash_T, int n_height, int n_width, int n_chan, int N_sparse>
void sparse_flatten(data_T sparse_arr_feat[N_sparse * n_chan],
                    hash_T sparse_arr_hash[N_sparse * 2],
                    data_T flat_arr[n_height * n_width * n_chan]) {
    InitFlatArr:
    for (int i = 0; i < n_height * n_width * n_chan; i++) {
        #pragma HLS UNROLL
        flat_arr[i] = 0;
    }

    FillFlatArr:
    for (int i = 0; i < N_sparse; i++) {
        #pragma HLS UNROLL
        int j_h = sparse_arr_hash[2 * i];
        int j_w = sparse_arr_hash[2 * i + 1];
        int pixel_idx = (j_h - 1) * n_width + (j_w - 1);

        for (int i_chan = 0; i_chan < n_chan; i_chan++) {
            #pragma HLS UNROLL
            data_T data = sparse_arr_feat[n_chan * i + i_chan];
            if (data != 0) { // this check is needed as the hash arr after pooling could have duplicate pixels with 0 feat val
                flat_arr[n_chan * pixel_idx + i_chan] = data;
            }
        }
    }
}


void model_test(
    input_t x_in[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    result_t layer7_out[N_LAYER_7]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=x_in complete dim=0
    //#pragma HLS ARRAY_PARTITION variable=x_in complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=x_in,layer7_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<weight2_t, 54>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 2>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight7_t, 50>(w7, "w7.txt");
        nnet::load_weights_from_txt<bias7_t, 1>(b7, "b7.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************


    // hls-fpga-machine-learning insert layers

    input_t sparse_arr_feat_reduce_out[N_MAX_PIXELS * N_INPUT_3_1];
    ap_uint<10> sparse_arr_hash_reduce_out[N_MAX_PIXELS * 2];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_reduce_out complete dim=0
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_hash_reduce_out complete dim=0
    sparse_input_reduce<input_t, ap_uint<10>, N_INPUT_1_1, N_INPUT_2_1, N_INPUT_3_1, N_MAX_PIXELS>(x_in, sparse_arr_feat_reduce_out, sparse_arr_hash_reduce_out); // sparse array creation

    model_default_t sparse_arr_feat_conv1_out[N_MAX_PIXELS * 2];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_conv1_out complete dim=0
    sparse_conv<input_t, model_default_t, ap_uint<10>, weight2_t, bias2_t, N_MAX_PIXELS, 3, 2>(sparse_arr_feat_reduce_out, sparse_arr_feat_conv1_out, sparse_arr_hash_reduce_out, w2, b2); // sparse conv1

    model_default_t sparse_arr_feat_act1_out[N_MAX_PIXELS * 2];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_act1_out complete dim=0
    sparse_relu<model_default_t, model_default_t, N_MAX_PIXELS, 2>(sparse_arr_feat_conv1_out, sparse_arr_feat_act1_out); // sparse relu1

    model_default_t sparse_arr_feat_pool1_out[N_MAX_PIXELS * 2];
    ap_uint<10> sparse_arr_hash_pool1_out[N_MAX_PIXELS * 2];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_pool1_out complete dim=0
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_hash_pool1_out complete dim=0
    sparse_pooling_avg<model_default_t, model_default_t, ap_uint<10>, N_MAX_PIXELS, 2, 4>(sparse_arr_feat_act1_out, sparse_arr_feat_pool1_out, sparse_arr_hash_reduce_out, sparse_arr_hash_pool1_out); // sparse pool1

    model_default_t flatten_out[5 * 5 * 2];
    #pragma HLS ARRAY_PARTITION variable=flatten_out complete dim=0
    sparse_flatten<model_default_t, ap_uint<10>, 5, 5, 2, N_MAX_PIXELS>(sparse_arr_feat_pool1_out, sparse_arr_hash_pool1_out, flatten_out); // sparse flatten

    nnet::dense<model_default_t, result_t, config7>(flatten_out, layer7_out, w7, b7); // dense1

    /*
    std::cout << "feat" << std::endl;
    for (int i = 0; i < N_MAX_PIXELS * 3; i++) {
        std::cout << sparse_arr_feat_reduce_out[i] << ' ';
    }
    std::cout << " " << std::endl << std::endl;

    std::cout << "hash" << std::endl;
    for (int i = 0; i < N_MAX_PIXELS * 2; i++) {
        std::cout << sparse_arr_hash_reduce_out[i] << ' ';
    }
    std::cout << " " << std::endl << std::endl;

    std::cout << "conv" << std::endl;
    for (int i = 0; i < N_MAX_PIXELS * 2; i++) {
        std::cout << sparse_arr_feat_conv1_out[i] << ' ';
    }
    std::cout << " " << std::endl << std::endl;

    std::cout << "act" << std::endl;
    for (int i = 0; i < N_MAX_PIXELS * 2; i++) {
        std::cout << sparse_arr_feat_act1_out[i] << ' ';
    }
    std::cout << " " << std::endl << std::endl;

    std::cout << "pool (feat)" << std::endl;
    for (int i = 0; i < N_MAX_PIXELS * 2; i++) {
        std::cout << sparse_arr_feat_pool1_out[i] << ' ';
    }
    std::cout << " " << std::endl << std::endl;

    std::cout << "pool (hash)" << std::endl;
    for (int i = 0; i < N_MAX_PIXELS * 2; i++) {
        std::cout << sparse_arr_hash_pool1_out[i] << ' ';
    }
    std::cout << " " << std::endl << std::endl;

    std::cout << "flat" << std::endl;
    for (int i = 0; i < 50; i++) {
        std::cout << flatten_out[i] << ' ';
    }
    std::cout << " " << std::endl << std::endl;
    */

}