#include <iostream>

#include "model_test.h"
#include "parameters.h"


void model_test(
    input_t x_in[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    result_t layer4_out[OUT_HEIGHT_4*OUT_WIDTH_4*N_FILT_4]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=x_in complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=x_in,layer4_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<weight2_t, 9>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 1>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight4_t, 9>(w4, "w4.txt");
        nnet::load_weights_from_txt<bias4_t, 1>(b4, "b4.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    conv1_result_t layer2_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::conv_2d_cl<input_t, conv1_result_t, config2>(x_in, layer2_out, w2, b2); // conv1

    nnet::conv_2d_cl<conv1_result_t, result_t, config4>(layer2_out, layer4_out, w4, b4); // conv2

}

