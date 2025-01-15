#include <iostream>

#include "model_test.h"
#include "parameters.h"


void model_test(
    input_t x_in[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    result_t layer10_out[OUT_HEIGHT_8*OUT_WIDTH_8*N_FILT_8]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=x_in complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=x_in,layer10_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<weight2_t, 9>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 1>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight5_t, 9>(w5, "w5.txt");
        nnet::load_weights_from_txt<bias5_t, 1>(b5, "b5.txt");
        nnet::load_weights_from_txt<weight8_t, 9>(w8, "w8.txt");
        nnet::load_weights_from_txt<bias8_t, 1>(b8, "b8.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    conv1_result_t layer2_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::conv_2d_cl<input_t, conv1_result_t, config2>(x_in, layer2_out, w2, b2); // conv1

    layer4_t layer4_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::relu<conv1_result_t, layer4_t, relu_config4>(layer2_out, layer4_out); // relu1

    conv2_result_t layer5_out[OUT_HEIGHT_5*OUT_WIDTH_5*N_FILT_5];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    nnet::conv_2d_cl<layer4_t, conv2_result_t, config5>(layer4_out, layer5_out, w5, b5); // conv2

    layer7_t layer7_out[OUT_HEIGHT_5*OUT_WIDTH_5*N_FILT_5];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::relu<conv2_result_t, layer7_t, relu_config7>(layer5_out, layer7_out); // relu2

    conv3_result_t layer8_out[OUT_HEIGHT_8*OUT_WIDTH_8*N_FILT_8];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    nnet::conv_2d_cl<layer7_t, conv3_result_t, config8>(layer7_out, layer8_out, w8, b8); // conv3

    nnet::relu<conv3_result_t, result_t, relu_config10>(layer8_out, layer10_out); // relu3

}

