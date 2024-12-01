#include <iostream>

#include "hls_deepset_densePhi.h"
#include "parameters.h"


void hls_deepset_densePhi(
    input_t phi_input[N_INPUT_1_1*N_INPUT_2_1],
    result_t layer18_out[N_LAYER_16]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=phi_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer18_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=phi_input,layer18_out 
    #pragma HLS DATAFLOW

    // hls-fpga-machine-learning insert load weights
#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<phi1_weight_t, 96>(w22, "w22.txt");
        nnet::load_weights_from_txt<phi1_bias_t, 32>(b22, "b22.txt");
        nnet::load_weights_from_txt<phi2_weight_t, 1024>(w23, "w23.txt");
        nnet::load_weights_from_txt<phi2_bias_t, 32>(b23, "b23.txt");
        nnet::load_weights_from_txt<phi3_weight_t, 1024>(w24, "w24.txt");
        nnet::load_weights_from_txt<phi3_bias_t, 32>(b24, "b24.txt");
        nnet::load_weights_from_txt<weight13_t, 1024>(w13, "w13.txt");
        nnet::load_weights_from_txt<bias13_t, 32>(b13, "b13.txt");
        nnet::load_weights_from_txt<weight16_t, 160>(w16, "w16.txt");
        nnet::load_weights_from_txt<bias16_t, 5>(b16, "b16.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    phi1_result_t layer22_out[N_OUTPUTS_22*N_FILT_22];
    #pragma HLS ARRAY_PARTITION variable=layer22_out complete dim=0
    nnet::pointwise_conv_1d_cl<input_t, phi1_result_t, config22>(phi_input, layer22_out, w22, b22); // phi1

    layer4_t layer4_out[N_LAYER_1_2*N_LAYER_2_2];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::relu<phi1_result_t, layer4_t, relu_config4>(layer22_out, layer4_out); // relu1

    phi2_result_t layer23_out[N_OUTPUTS_23*N_FILT_23];
    #pragma HLS ARRAY_PARTITION variable=layer23_out complete dim=0
    nnet::pointwise_conv_1d_cl<layer4_t, phi2_result_t, config23>(layer4_out, layer23_out, w23, b23); // phi2

    layer7_t layer7_out[N_LAYER_1_5*N_LAYER_2_5];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::relu<phi2_result_t, layer7_t, relu_config7>(layer23_out, layer7_out); // relu2

    phi3_result_t layer24_out[N_OUTPUTS_24*N_FILT_24];
    #pragma HLS ARRAY_PARTITION variable=layer24_out complete dim=0
    nnet::pointwise_conv_1d_cl<layer7_t, phi3_result_t, config24>(layer7_out, layer24_out, w24, b24); // phi3

    layer10_t layer10_out[N_LAYER_1_8*N_LAYER_2_8];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0
    nnet::relu<phi3_result_t, layer10_t, relu_config10>(layer24_out, layer10_out); // relu3

    layer11_t layer11_out[N_LAYER_1_8*N_LAYER_2_8];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    nnet::linear<layer10_t, layer11_t, linear_config11>(layer10_out, layer11_out); // act_agg

    layer12_t layer12_out[N_FILT_12];
    #pragma HLS ARRAY_PARTITION variable=layer12_out complete dim=0
    nnet::global_pooling1d_cl<layer11_t, layer12_t, config12>(layer11_out, layer12_out); // agg

    rho1_result_t layer13_out[N_LAYER_13];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    nnet::dense<layer12_t, rho1_result_t, config13>(layer12_out, layer13_out, w13, b13); // rho1

    layer15_t layer15_out[N_LAYER_13];
    #pragma HLS ARRAY_PARTITION variable=layer15_out complete dim=0
    nnet::relu<rho1_result_t, layer15_t, relu_config15>(layer13_out, layer15_out); // relu4

    rho2_result_t layer16_out[N_LAYER_16];
    #pragma HLS ARRAY_PARTITION variable=layer16_out complete dim=0
    nnet::dense<layer15_t, rho2_result_t, config16>(layer15_out, layer16_out, w16, b16); // rho2

    nnet::softmax<rho2_result_t, result_t, Softmax_config18>(layer16_out, layer18_out); // softmax

}

