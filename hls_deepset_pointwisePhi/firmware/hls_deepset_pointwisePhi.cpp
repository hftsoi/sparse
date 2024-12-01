#include <iostream>

#include "hls_deepset_pointwisePhi.h"
#include "parameters.h"


void hls_deepset_pointwisePhi(
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
        nnet::load_weights_from_txt<weight19_t, 96>(w19, "w19.txt");
        nnet::load_weights_from_txt<bias19_t, 32>(b19, "b19.txt");
        nnet::load_weights_from_txt<weight20_t, 1024>(w20, "w20.txt");
        nnet::load_weights_from_txt<bias20_t, 32>(b20, "b20.txt");
        nnet::load_weights_from_txt<weight21_t, 1024>(w21, "w21.txt");
        nnet::load_weights_from_txt<bias21_t, 32>(b21, "b21.txt");
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

    phi1_result_t layer19_out[N_OUTPUTS_19*N_FILT_19];
    #pragma HLS ARRAY_PARTITION variable=layer19_out complete dim=0
    nnet::pointwise_conv_1d_cl<input_t, phi1_result_t, config19>(phi_input, layer19_out, w19, b19); // phi1

    layer4_t layer4_out[N_OUTPUTS_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::relu<phi1_result_t, layer4_t, relu_config4>(layer19_out, layer4_out); // relu1

    phi2_result_t layer20_out[N_OUTPUTS_20*N_FILT_20];
    #pragma HLS ARRAY_PARTITION variable=layer20_out complete dim=0
    nnet::pointwise_conv_1d_cl<layer4_t, phi2_result_t, config20>(layer4_out, layer20_out, w20, b20); // phi2

    layer7_t layer7_out[N_OUTPUTS_5*N_FILT_5];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::relu<phi2_result_t, layer7_t, relu_config7>(layer20_out, layer7_out); // relu2

    phi3_result_t layer21_out[N_OUTPUTS_21*N_FILT_21];
    #pragma HLS ARRAY_PARTITION variable=layer21_out complete dim=0
    nnet::pointwise_conv_1d_cl<layer7_t, phi3_result_t, config21>(layer7_out, layer21_out, w21, b21); // phi3

    layer10_t layer10_out[N_OUTPUTS_8*N_FILT_8];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0
    nnet::relu<phi3_result_t, layer10_t, relu_config10>(layer21_out, layer10_out); // relu3

    layer11_t layer11_out[N_OUTPUTS_8*N_FILT_8];
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

