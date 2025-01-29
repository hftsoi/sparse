#include <iostream>

#include "model_test.h"
#include "parameters.h"


#define N_MAX_PIXELS 10

void input_streaming(input_t input_array[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
                     unsigned hash_arr[N_MAX_PIXELS * 2],
                     input_t feat_arr[N_MAX_PIXELS]) {

    hls::stream<unsigned> hash_h_stream;
    hls::stream<unsigned> hash_w_stream;
    hls::stream<input_t> feat_stream;
    #pragma HLS STREAM variable=hash_h_stream depth=N_MAX_PIXELS
    #pragma HLS STREAM variable=hash_w_stream depth=N_MAX_PIXELS
    #pragma HLS STREAM variable=feat_stream depth=N_MAX_PIXELS
InputStreamLoop:
    for (int i = 0; i < N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1; i++) {
        #pragma HLS UNROLL
        
        if (input_array[i] != 0) {
            int pixels_per_channel = N_INPUT_1_1 * N_INPUT_2_1;
            int i_c = i / pixels_per_channel + 1;
            int remainder = i % pixels_per_channel;
            int i_h = remainder / N_INPUT_2_1 + 1;
            int i_w = remainder % N_INPUT_2_1 + 1;

            // if double writes on the same stream, cc -> min 100 and max 200
            // if single write on each stream, cc -> min 100 and max 100
            hash_h_stream.write(i_h);
            hash_w_stream.write(i_w);
            feat_stream.write(input_array[i]);
        }
    }

StreamToArrayLoop:
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL

        if (!feat_stream.empty()) {
            hash_arr[2 * i] = hash_h_stream.read();
            hash_arr[2 * i + 1] = hash_w_stream.read();
            feat_arr[i] = feat_stream.read();
        }
    }
}


void compute(unsigned hash_arr[N_MAX_PIXELS * 2],
             input_t feat_in[N_MAX_PIXELS],
             result_t feat_out[N_MAX_PIXELS],
             weight2_t w2[9]) {
MultAddLoop1:
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL

        if (feat_in[i] != 0) {
            feat_out[i] += feat_in[i] * w2[4];
        }

    MultAddLoop2:
        for (int j = 0; j < N_MAX_PIXELS; j++) {
            #pragma HLS UNROLL

            if ((feat_in[i] != 0) && (feat_in[j] != 0)){
                int offset_h = hash_arr[2 * j] - hash_arr[2 * i];
                int offset_w = hash_arr[2 * j + 1] - hash_arr[2 * i + 1];

                if ((offset_h == 0) && (offset_w == 1)) {
                    feat_out[j] += feat_in[i] * w2[3];
                }
                else if ((offset_h == 0) && (offset_w == -1)) {
                    feat_out[j] += feat_in[i] * w2[5];
                }
                else if ((offset_h == 1) && (offset_w == 0)) {
                    feat_out[j] += feat_in[i] * w2[1];
                }
                else if ((offset_h == 1) && (offset_w == 1)) {
                    feat_out[j] += feat_in[i] * w2[0];
                }
                else if ((offset_h == 1) && (offset_w == -1)) {
                    feat_out[j] += feat_in[i] * w2[2];
                }
                else if ((offset_h == -1) && (offset_w == 0)) {
                    feat_out[j] += feat_in[i] * w2[7];
                }
                else if ((offset_h == -1) && (offset_w == 1)) {
                    feat_out[j] += feat_in[i] * w2[6];
                }
                else if ((offset_h == -1) && (offset_w == -1)) {
                    feat_out[j] += feat_in[i] * w2[8];
                }
            }
        }
    }
}



void model_test(
    input_t x_in[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    //result_t layer2_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2]
    result_t layer2_out[10]
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
    

    unsigned hash_arr[N_MAX_PIXELS * 2] = {0};
    input_t feat_arr[N_MAX_PIXELS] = {0};
    #pragma HLS ARRAY_PARTITION variable=hash_arr complete dim=0
    #pragma HLS ARRAY_PARTITION variable=feat_arr complete dim=0
    input_streaming(x_in, hash_arr, feat_arr);

    result_t feat_out[N_MAX_PIXELS] = {0};
    #pragma HLS ARRAY_PARTITION variable=feat_out complete dim=0
    compute(hash_arr, feat_arr, feat_out, w2);


    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL
        layer2_out[i] = feat_out[i];
    }

}

