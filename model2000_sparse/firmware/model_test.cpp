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
                         data_T sparse_arr_feat[N_sparse],
                         hash_T sparse_arr_hash[N_sparse * 2]) {

    value_idx_pair<data_T> pair_arr[N_h * N_w * N_c];
    #pragma HLS ARRAY_PARTITION variable=pair_arr type=complete dim=0

    int j_h_arr[N_h * N_w * N_c];
    int j_w_arr[N_h * N_w * N_c];
    #pragma HLS ARRAY_PARTITION variable=j_h_arr type=complete dim=0
    #pragma HLS ARRAY_PARTITION variable=j_w_arr type=complete dim=0

    DataPrepareLoop:
    for (int j = 0; j < N_h * N_w * N_c; j++) {
        #pragma HLS UNROLL
        pair_arr[j].value = input_arr[j];
        pair_arr[j].index = j;

        int pixels_per_channel = N_h * N_w;
        int j_c = j / pixels_per_channel + 1;
        int remainder = j % pixels_per_channel;
        int j_h = remainder / N_h + 1;
        int j_w = remainder % N_w + 1;

        j_h_arr[j] = j_h;
        j_w_arr[j] = j_w;
    }

    Op_nonzero<value_idx_pair<data_T>> op_nonzero;
    MaxPixelsLoop:
    for (int i = 0; i < N_sparse; i++) {
        #pragma HLS PIPELINE
        value_idx_pair<data_T> pair = find_nonzero<value_idx_pair<data_T>,
                                                   N_h * N_w * N_c,
                                                   Op_nonzero<value_idx_pair<data_T>>>(pair_arr, op_nonzero);

        sparse_arr_feat[i] = pair.value;
        sparse_arr_hash[2 * i] = j_h_arr[pair.index];
        sparse_arr_hash[2 * i + 1] = j_w_arr[pair.index];

        pair_arr[pair.index].value = 0;
    }
}

template <class data_T, class res_T, class w_T>
res_T mult_for_sparse_conv(int offset_h, int offset_w, data_T feat_in, w_T filt_w[9]) {
    #pragma HLS INLINE

    w_T w = 0;
    if ((offset_h == 1) && (offset_w == 1))        { w = filt_w[0]; }
    else if ((offset_h == 1) && (offset_w == 0))   { w = filt_w[1]; }
    else if ((offset_h == 1) && (offset_w == -1))  { w = filt_w[2]; }
    else if ((offset_h == 0) && (offset_w == 1))   { w = filt_w[3]; }
    // the central one has been done outside this, as it needs no offset check
    else if ((offset_h == 0) && (offset_w == -1))  { w = filt_w[5]; }
    else if ((offset_h == -1) && (offset_w == 1))  { w = filt_w[6]; }
    else if ((offset_h == -1) && (offset_w == 0))  { w = filt_w[7]; }
    else if ((offset_h == -1) && (offset_w == -1)) { w = filt_w[8]; }

    return feat_in * w;
}

template <class data_T, class res_T, class hash_T, class w_T, int N_sparse>
void sparse_conv(data_T sparse_arr_feat_in[N_sparse],
                 res_T sparse_arr_feat_out[N_sparse],
                 hash_T sparse_arr_hash[N_sparse * 2],
                 w_T filt_w[9]) {
    OutputPixelLoop:
    for (int i_out = 0; i_out < N_sparse; i_out++) {
        #pragma HLS UNROLL

        // center of 3x3 filter
        res_T acc = sparse_arr_feat_in[i_out] * filt_w[4];

        if (sparse_arr_feat_in[i_out] != 0){
            InputPixelLoop:
            for (int i_in = 0; i_in < N_sparse; i_in++) {
                #pragma HLS UNROLL

                int offset_h = sparse_arr_hash[2 * i_out] - sparse_arr_hash[2 * i_in];
                int offset_w = sparse_arr_hash[2 * i_out + 1] - sparse_arr_hash[2 * i_in + 1];

                acc += mult_for_sparse_conv<data_T, res_T, w_T>(offset_h, offset_w, sparse_arr_feat_in[i_in], filt_w);
            }
        }
        sparse_arr_feat_out[i_out] = acc;
    }
}

template <class data_T, class res_T, int N_sparse>
void sparse_relu(data_T sparse_arr_feat_in[N_sparse], res_T sparse_arr_feat_out[N_sparse]) {
    #pragma HLS PIPELINE

    data_T data;
    for (int i = 0; i < N_sparse; i++) {
        data = sparse_arr_feat_in[i];
        if (data > 0) {
            sparse_arr_feat_out[i] = data;
        } else {
            sparse_arr_feat_out[i] = 0;
        }
    }
}

template <class data_T, class res_T, class hash_T, int N_sparse, int pool_size>
void sparse_pooling_avg(data_T sparse_arr_feat_in[N_sparse],
                        res_T sparse_arr_feat_out[N_sparse],
                        hash_T sparse_arr_hash_in[N_sparse * 2],
                        hash_T sparse_arr_hash_out[N_sparse * 2]) {
    int hash_tmp[N_sparse * 2];
    #pragma HLS ARRAY_PARTITION variable=hash_tmp type=complete dim=0

    ap_fixed<10,0> pool_size_recip = 0.5;
    if (pool_size == 3) { pool_size_recip = 0.33333; }
    else if (pool_size == 4) { pool_size_recip = 0.25; }
    else if (pool_size == 5) { pool_size_recip = 0.2; }
    else if (pool_size == 6) { pool_size_recip = 0.16667; }

    ComputePoolCoord:
    for (int i = 0; i < N_sparse; i++) {
        #pragma HLS UNROLL
        int j_h_in = sparse_arr_hash_in[2 * i];
        int j_w_in = sparse_arr_hash_in[2 * i + 1];

        hash_tmp[2 * i] = (j_h_in - 1) * pool_size_recip + 1;
        hash_tmp[2 * i + 1] = (j_w_in - 1) * pool_size_recip + 1;
    }

    HashOutLoop:
    for (int i = 0; i < N_sparse; i++) {
        #pragma HLS UNROLL
        int i_h_out = hash_tmp[2 * i];
        int i_w_out = hash_tmp[2 * i + 1];

        res_T acc = 0;
        HashInLoop:
        for (int j = 0; j < N_sparse; j++) {
            #pragma HLS UNROLL
            int j_h_out = hash_tmp[2 * j];
            int j_w_out = hash_tmp[2 * j + 1];
            data_T data = sparse_arr_feat_in[j];

            if ((data != 0) && (i_h_out == j_h_out) && (i_w_out == j_w_out)) {
                acc += data;
                sparse_arr_feat_in[j] = 0;
            }
        }
        sparse_arr_feat_out[i] = acc * pool_size_recip * pool_size_recip;
        sparse_arr_hash_out[2 * i] = i_h_out;
        sparse_arr_hash_out[2 * i + 1] = i_w_out;
    }
}

template<class data_T, class hash_T, int N_h, int N_w, int N_c, int N_sparse>
void sparse_flatten(data_T sparse_arr_feat[N_sparse],
                    hash_T sparse_arr_hash[N_sparse * 2],
                    data_T flat_arr[N_h * N_w * N_c]) {
    InitFlatArr:
    for (int i = 0; i < N_h * N_w * N_c; i++) {
        #pragma HLS UNROLL
        flat_arr[i] = 0;
    }

    FillFlatArr:
    for (int i = 0; i < N_sparse; i++) {
        #pragma HLS UNROLL
        int j_h = sparse_arr_hash[2 * i];
        int j_w = sparse_arr_hash[2 * i + 1];
        int flat_idx = (j_h - 1) * N_w + (j_w - 1);

        data_T data = sparse_arr_feat[i];
        if (data != 0) {// not needed
            flat_arr[flat_idx] = data;
        }
    }
}


void model_test(
    input_t x_in[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    result_t layer11_out[N_LAYER_11]
) {

    // hls-fpga-machine-learning insert IO
    //#pragma HLS ARRAY_RESHAPE variable=x_in complete dim=0
    #pragma HLS ARRAY_PARTITION variable=x_in complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=x_in,layer11_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<weight2_t, 9>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 1>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight6_t, 9>(w6, "w6.txt");
        nnet::load_weights_from_txt<bias6_t, 1>(b6, "b6.txt");
        nnet::load_weights_from_txt<weight11_t, 20>(w11, "w11.txt");
        nnet::load_weights_from_txt<bias11_t, 1>(b11, "b11.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers


    input_t sparse_arr_feat_reduce_out[N_MAX_PIXELS];
    ap_uint<10> sparse_arr_hash_reduce_out[N_MAX_PIXELS * 2];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_reduce_out complete dim=0
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_hash_reduce_out complete dim=0
    sparse_input_reduce<input_t, ap_uint<10>, N_INPUT_1_1, N_INPUT_2_1, N_INPUT_3_1, N_MAX_PIXELS>(x_in, sparse_arr_feat_reduce_out, sparse_arr_hash_reduce_out); // sparse array creation

    result_t sparse_arr_feat_conv1_out[N_MAX_PIXELS];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_conv1_out complete dim=0
    sparse_conv<input_t, result_t, ap_uint<10>, weight2_t, N_MAX_PIXELS>(sparse_arr_feat_reduce_out, sparse_arr_feat_conv1_out, sparse_arr_hash_reduce_out, w2); // sparse conv1

    result_t sparse_arr_feat_act1_out[N_MAX_PIXELS];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_act1_out complete dim=0
    sparse_relu<result_t, result_t, N_MAX_PIXELS>(sparse_arr_feat_conv1_out, sparse_arr_feat_act1_out); // sparse relu1

    result_t sparse_arr_feat_pool1_out[N_MAX_PIXELS];
    ap_uint<10> sparse_arr_hash_pool1_out[N_MAX_PIXELS * 2];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_pool1_out complete dim=0
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_hash_pool1_out complete dim=0
    sparse_pooling_avg<result_t, result_t, ap_uint<10>, N_MAX_PIXELS, 2>(sparse_arr_feat_act1_out, sparse_arr_feat_pool1_out, sparse_arr_hash_reduce_out, sparse_arr_hash_pool1_out); // sparse pool1

    result_t sparse_arr_feat_conv2_out[N_MAX_PIXELS];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_conv2_out complete dim=0
    sparse_conv<result_t, result_t, ap_uint<10>, weight2_t, N_MAX_PIXELS>(sparse_arr_feat_pool1_out, sparse_arr_feat_conv2_out, sparse_arr_hash_pool1_out, w2); // sparse conv2

    result_t sparse_arr_feat_act2_out[N_MAX_PIXELS];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_act2_out complete dim=0
    sparse_relu<result_t, result_t, N_MAX_PIXELS>(sparse_arr_feat_conv2_out, sparse_arr_feat_act2_out); // sparse relu2

    result_t sparse_arr_feat_pool2_out[N_MAX_PIXELS];
    ap_uint<10> sparse_arr_hash_pool2_out[N_MAX_PIXELS * 2];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_feat_pool2_out complete dim=0
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_hash_pool2_out complete dim=0
    sparse_pooling_avg<result_t, result_t, ap_uint<10>, N_MAX_PIXELS, 4>(sparse_arr_feat_act2_out, sparse_arr_feat_pool2_out, sparse_arr_hash_pool1_out, sparse_arr_hash_pool2_out); // sparse pool2

    result_t sparse_arr_flatten_out[5*4*1];
    #pragma HLS ARRAY_PARTITION variable=sparse_arr_flatten_out complete dim=0
    sparse_flatten<result_t, ap_uint<10>, 5, 4, 1, N_MAX_PIXELS>(sparse_arr_feat_pool2_out, sparse_arr_hash_pool2_out, sparse_arr_flatten_out); // sparse flatten

    nnet::dense<result_t, result_t, config11>(sparse_arr_flatten_out, layer11_out, w11, b11); // dense1

    //std::cout << "====" << std::endl;
    //for (int i = 0; i < 20; i++) {
    //    std::cout << sparse_arr_flatten_out[i] << std::endl;
    //}
    //std::cout << "====" << std::endl;
}

