#include <iostream>

#include "model_test.h"
#include "parameters.h"


/*
void input_streaming(input_t input_array[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
                     unsigned hash_arr[N_MAX_PIXELS * 2],
                     input_t feat_arr[N_MAX_PIXELS]) {

    hls::stream<unsigned> hash_h_stream;
    hls::stream<unsigned> hash_w_stream;
    hls::stream<input_t> feat_stream;
    #pragma HLS STREAM variable=hash_h_stream depth=N_MAX_PIXELS*2
    #pragma HLS STREAM variable=hash_w_stream depth=N_MAX_PIXELS*2
    #pragma HLS STREAM variable=feat_stream depth=N_MAX_PIXELS*2
InputStreamLoop:
    for (int i = 0; i < N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1; i++) {
        #pragma HLS UNROLL
        
        if (input_array[i] != 0) {
            int pixels_per_channel = N_INPUT_1_1 * N_INPUT_2_1;
            int i_c = i / pixels_per_channel + 1;
            int remainder = i % pixels_per_channel;
            int i_h = remainder / N_INPUT_2_1 + 1;
            int i_w = remainder % N_INPUT_2_1 + 1;

            hash_h_stream.write_nb(i_h);
            hash_w_stream.write_nb(i_w);
            feat_stream.write_nb(input_array[i]);
        }
    }

StreamToArrayLoop:
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL

        if (!feat_stream.empty()) {
            hash_h_stream.read_nb(hash_arr[2 * i]);
            hash_w_stream.read_nb(hash_arr[2 * i + 1]);
            feat_stream.read_nb(feat_arr[i]);
        }
    }
}
*/

void sparse_input(input_t input_array[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
                  ap_uint<10> hash_arr[N_MAX_PIXELS * 2],
                  input_t feat_arr[N_MAX_PIXELS]) {

    ap_uint<1> active_bit[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1];
    #pragma HLS ARRAY_PARTITION variable=active_bit complete dim=0

ActiveBitLoop:
    for (int i = 0; i < N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1; i++) {
        #pragma HLS UNROLL

        if (input_array[i] != 0) {
            active_bit[i] = 1;
        }
        else {
            active_bit[i] = 0;
        }
    }

SparseFillLoop1:
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL
        ap_uint<2> check_bit = 1;

    SparseFillLoop2:
        for (int j = 0; j < N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1; j++) {
            #pragma HLS UNROLL
            
            ap_uint<10> pixels_per_channel = N_INPUT_1_1 * N_INPUT_2_1;
            ap_uint<10> j_c = j / pixels_per_channel + 1;
            ap_uint<10> remainder = j % pixels_per_channel;
            ap_uint<10> j_h = remainder / N_INPUT_2_1 + 1;
            ap_uint<10> j_w = remainder % N_INPUT_2_1 + 1;
            
            if (active_bit[j] == check_bit) {
                hash_arr[2 * i] = j_h;
                hash_arr[2 * i + 1] = j_w;
                feat_arr[i] = input_array[j];

                active_bit[j] = 0;
                check_bit = 2;
            }
        }
        if (check_bit == 1) {
            hash_arr[2 * i] = 0;
            hash_arr[2 * i + 1] = 0;
            feat_arr[i] = 0;
        }
    }
}


void sparse_compute(ap_uint<10> hash_arr[N_MAX_PIXELS * 2],
                    input_t feat_in[N_MAX_PIXELS],
                    result_t feat_out[N_MAX_PIXELS],
                    weight2_t w2[9]) {
MultAddLoop1:
    for (int i_out = 0; i_out < N_MAX_PIXELS; i_out++) {
        #pragma HLS UNROLL

        feat_out[i_out] = 0;
        feat_out[i_out] += feat_in[i_out] * w2[4];

    MultAddLoop2:
        for (int i_in = 0; i_in < N_MAX_PIXELS; i_in++) {
            #pragma HLS UNROLL

            if (feat_in[i_out] != 0){
                ap_int<10> offset_h = hash_arr[2 * i_out] - hash_arr[2 * i_in];
                ap_int<10> offset_w = hash_arr[2 * i_out + 1] - hash_arr[2 * i_in + 1];

                if ((offset_h == 0) && (offset_w == 1)) {
                    feat_out[i_out] += feat_in[i_in] * w2[3];
                }
                else if ((offset_h == 0) && (offset_w == -1)) {
                    feat_out[i_out] += feat_in[i_in] * w2[5];
                }
                else if ((offset_h == 1) && (offset_w == 0)) {
                    feat_out[i_out] += feat_in[i_in] * w2[1];
                }
                else if ((offset_h == 1) && (offset_w == 1)) {
                    feat_out[i_out] += feat_in[i_in] * w2[0];
                }
                else if ((offset_h == 1) && (offset_w == -1)) {
                    feat_out[i_out] += feat_in[i_in] * w2[2];
                }
                else if ((offset_h == -1) && (offset_w == 0)) {
                    feat_out[i_out] += feat_in[i_in] * w2[7];
                }
                else if ((offset_h == -1) && (offset_w == 1)) {
                    feat_out[i_out] += feat_in[i_in] * w2[6];
                }
                else if ((offset_h == -1) && (offset_w == -1)) {
                    feat_out[i_out] += feat_in[i_in] * w2[8];
                }
            }
        }
    }
}


void model_test(
    input_t x_in[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    //result_t layer2_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2]
    result_t layer2_out[N_MAX_PIXELS]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=x_in complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=x_in,layer2_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<weight2_t, 9>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 1>(b2, "b2.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers
    

    ap_uint<10> hash_arr[N_MAX_PIXELS * 2];
    input_t feat_arr[N_MAX_PIXELS];
    #pragma HLS ARRAY_PARTITION variable=hash_arr complete dim=0
    #pragma HLS ARRAY_PARTITION variable=feat_arr complete dim=0
    sparse_input(x_in, hash_arr, feat_arr);

    sparse_compute(hash_arr, feat_arr, layer2_out, w2);


}