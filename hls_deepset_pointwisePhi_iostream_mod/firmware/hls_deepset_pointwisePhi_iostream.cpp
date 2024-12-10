#include <iostream>

#include "hls_deepset_pointwisePhi_iostream.h"
#include "parameters.h"


void hls_deepset_pointwisePhi_iostream(
    hls::stream<input_t> &phi_input,
    hls::stream<result_t> &layer18_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=phi_input,layer18_out 
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

    hls::stream<phi1_result_t> layer19_out("layer19_out");
    #pragma HLS STREAM variable=layer19_out depth=16
    nnet::pointwise_conv_1d_cl<input_t, phi1_result_t, config19>(phi_input, layer19_out, w19, b19); // phi1

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=16
    nnet::relu<phi1_result_t, layer4_t, relu_config4>(layer19_out, layer4_out); // relu1

    hls::stream<phi2_result_t> layer20_out("layer20_out");
    #pragma HLS STREAM variable=layer20_out depth=16
    nnet::pointwise_conv_1d_cl<layer4_t, phi2_result_t, config20>(layer4_out, layer20_out, w20, b20); // phi2

    hls::stream<layer7_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=16
    nnet::relu<phi2_result_t, layer7_t, relu_config7>(layer20_out, layer7_out); // relu2

    hls::stream<phi3_result_t> layer21_out("layer21_out");
    #pragma HLS STREAM variable=layer21_out depth=16
    nnet::pointwise_conv_1d_cl<layer7_t, phi3_result_t, config21>(layer7_out, layer21_out, w21, b21); // phi3

    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=16
    nnet::relu<phi3_result_t, layer10_t, relu_config10>(layer21_out, layer10_out); // relu3

    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=16
    nnet::linear<layer10_t, layer11_t, linear_config11>(layer10_out, layer11_out); // act_agg

    hls::stream<layer12_t> layer12_out("layer12_out");
    #pragma HLS STREAM variable=layer12_out depth=1
    nnet::global_pooling1d_cl<layer11_t, layer12_t, config12>(layer11_out, layer12_out); // agg

    hls::stream<rho1_result_t> layer13_out("layer13_out");
    #pragma HLS STREAM variable=layer13_out depth=1
    nnet::dense<layer12_t, rho1_result_t, config13>(layer12_out, layer13_out, w13, b13); // rho1

    hls::stream<layer15_t> layer15_out("layer15_out");
    #pragma HLS STREAM variable=layer15_out depth=1
    nnet::relu<rho1_result_t, layer15_t, relu_config15>(layer13_out, layer15_out); // relu4

    hls::stream<rho2_result_t> layer16_out("layer16_out");
    #pragma HLS STREAM variable=layer16_out depth=1
    nnet::dense<layer15_t, rho2_result_t, config16>(layer15_out, layer16_out, w16, b16); // rho2

    nnet::softmax<rho2_result_t, result_t, Softmax_config18>(layer16_out, layer18_out); // softmax

}

