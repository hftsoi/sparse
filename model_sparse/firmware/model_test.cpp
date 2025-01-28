#include <iostream>

#include "model_test.h"
#include "parameters.h"


#define N_MAX_PIXELS 10

void input_streaming(input_t input_array[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
                     hls::stream<unsigned> &hash_stream,
                     hls::stream<input_t> &feat_stream,
                     unsigned hash_arr[N_MAX_PIXELS * 2],
                     input_t feat_arr[N_MAX_PIXELS]) {
InputStreamLoop:
    for (int i = 0; i < N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1; i++) {
        #pragma HLS UNROLL
        
        if (input_array[i] != 0) {

            int pixels_per_channel = N_INPUT_1_1 * N_INPUT_2_1;
            int i_c = i / pixels_per_channel + 1;
            int remainder = i % pixels_per_channel;
            int i_h = remainder / N_INPUT_2_1 + 1;
            int i_w = remainder % N_INPUT_2_1 + 1;

            hash_stream.write(i_h);
            hash_stream.write(i_w);
            feat_stream.write(input_array[i]);
            //std::cout << i_h << " " << i_w << " " << input_array[i] << std::endl;
        }
    }

StreamToArrayLoop:
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL

        if (!feat_stream.empty()) {
            hash_arr[2 * i] = hash_stream.read();
            hash_arr[2 * i + 1] = hash_stream.read();
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
    
    hls::stream<unsigned> hash_stream;
    hls::stream<input_t> feat_stream;

    unsigned hash_arr[N_MAX_PIXELS * 2] = {0};
    input_t feat_arr[N_MAX_PIXELS] = {0};
    #pragma HLS ARRAY_PARTITION variable=hash_arr complete dim=0
    #pragma HLS ARRAY_PARTITION variable=feat_arr complete dim=0

    input_streaming(x_in, hash_stream, feat_stream, hash_arr, feat_arr);

    result_t feat_out[N_MAX_PIXELS] = {0};
    #pragma HLS ARRAY_PARTITION variable=feat_out complete dim=0

    compute(hash_arr, feat_arr, feat_out, w2);

    /*
    unsigned rule_1[N_MAX_PIXELS * 2] = {0};
    unsigned rule_2[N_MAX_PIXELS * 2] = {0};
    unsigned rule_3[N_MAX_PIXELS * 2] = {0};
    unsigned rule_4[N_MAX_PIXELS * 2] = {0};
    unsigned rule_5[N_MAX_PIXELS * 2] = {0};
    unsigned rule_6[N_MAX_PIXELS * 2] = {0};
    unsigned rule_7[N_MAX_PIXELS * 2] = {0};
    unsigned rule_8[N_MAX_PIXELS * 2] = {0};
    unsigned rule_9[N_MAX_PIXELS * 2] = {0};
    #pragma HLS ARRAY_PARTITION variable=rule_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=rule_2 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=rule_3 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=rule_4 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=rule_5 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=rule_6 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=rule_7 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=rule_8 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=rule_9 complete dim=0
    
    int counter_rule_1 = 0;
    int counter_rule_2 = 0;
    int counter_rule_3 = 0;
    int counter_rule_4 = 0;
    int counter_rule_5 = 0;
    int counter_rule_6 = 0;
    int counter_rule_7 = 0;
    int counter_rule_8 = 0;
    int counter_rule_9 = 0;
    
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL
        for (int j = 0; j < N_MAX_PIXELS; j++) {
            #pragma HLS UNROLL

            if ((hash_in[2 * i] != 0) && (hash_out[2 * j] != 0)) {
                int offset_h = hash_out[2 * j] - hash_in[2 * i];
                int offset_w = hash_out[2 * j + 1] - hash_in[2 * i + 1];

                if ((offset_h == 0) && (offset_w == 0)) {
                    rule_5[2 * counter_rule_5] = i + 1;
                    rule_5[2 * counter_rule_5 + 1] = j + 1;
                    counter_rule_5 += 1;
                }
                else if ((offset_h == 0) && (offset_w == 1)) {
                    rule_4[2 * counter_rule_4] = i + 1;
                    rule_4[2 * counter_rule_4 + 1] = j + 1;
                    counter_rule_4 += 1;
                }
                else if ((offset_h == 0) && (offset_w == -1)) {
                    rule_6[2 * counter_rule_6] = i + 1;
                    rule_6[2 * counter_rule_6 + 1] = j + 1;
                    counter_rule_6 += 1;
                }
                else if ((offset_h == 1) && (offset_w == 0)) {
                    rule_2[2 * counter_rule_2] = i + 1;
                    rule_2[2 * counter_rule_2 + 1] = j + 1;
                    counter_rule_2 += 1;
                }
                else if ((offset_h == 1) && (offset_w == 1)) {
                    rule_1[2 * counter_rule_1] = i + 1;
                    rule_1[2 * counter_rule_1 + 1] = j + 1;
                    counter_rule_1 += 1;
                }
                else if ((offset_h == 1) && (offset_w == -1)) {
                    rule_3[2 * counter_rule_3] = i + 1;
                    rule_3[2 * counter_rule_3 + 1] = j + 1;
                    counter_rule_3 += 1;
                }
                else if ((offset_h == -1) && (offset_w == 0)) {
                    rule_8[2 * counter_rule_8] = i + 1;
                    rule_8[2 * counter_rule_8 + 1] = j + 1;
                    counter_rule_8 += 1;
                }
                else if ((offset_h == -1) && (offset_w == 1)) {
                    rule_7[2 * counter_rule_7] = i + 1;
                    rule_7[2 * counter_rule_7 + 1] = j + 1;
                    counter_rule_7 += 1;
                }
                else if ((offset_h == -1) && (offset_w == -1)) {
                    rule_9[2 * counter_rule_9] = i + 1;
                    rule_9[2 * counter_rule_9 + 1] = j + 1;
                    counter_rule_9 += 1;
                }
            }
        }
    }
    */
    /*
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_1: " << rule_1[2 * i] << " " << rule_1[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_2: " << rule_2[2 * i] << " " << rule_2[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_3: " << rule_3[2 * i] << " " << rule_3[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_4: " << rule_4[2 * i] << " " << rule_4[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_5: " << rule_5[2 * i] << " " << rule_5[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_6: " << rule_6[2 * i] << " " << rule_6[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_7: " << rule_7[2 * i] << " " << rule_7[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_8: " << rule_8[2 * i] << " " << rule_8[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        std::cout << "rule_9: " << rule_9[2 * i] << " " << rule_9[2 * i + 1] << std::endl;
    }
    std::cout << std::endl;
    */
   /*
    result_t feat_out[N_MAX_PIXELS] = {0};
    #pragma HLS ARRAY_PARTITION variable=feat_out complete dim=0
    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL
        if (rule_1[2 * i] != 0) feat_out[rule_1[2 * i + 1] - 1] += feat_in[rule_1[2 * i] - 1] * w2[0];
        if (rule_2[2 * i] != 0) feat_out[rule_2[2 * i + 1] - 1] += feat_in[rule_2[2 * i] - 1] * w2[1];
        if (rule_3[2 * i] != 0) feat_out[rule_3[2 * i + 1] - 1] += feat_in[rule_3[2 * i] - 1] * w2[2];
        if (rule_4[2 * i] != 0) feat_out[rule_4[2 * i + 1] - 1] += feat_in[rule_4[2 * i] - 1] * w2[3];
        if (rule_5[2 * i] != 0) feat_out[rule_5[2 * i + 1] - 1] += feat_in[rule_5[2 * i] - 1] * w2[4];
        if (rule_6[2 * i] != 0) feat_out[rule_6[2 * i + 1] - 1] += feat_in[rule_6[2 * i] - 1] * w2[5];
        if (rule_7[2 * i] != 0) feat_out[rule_7[2 * i + 1] - 1] += feat_in[rule_7[2 * i] - 1] * w2[6];
        if (rule_8[2 * i] != 0) feat_out[rule_8[2 * i + 1] - 1] += feat_in[rule_8[2 * i] - 1] * w2[7];
        if (rule_9[2 * i] != 0) feat_out[rule_9[2 * i + 1] - 1] += feat_in[rule_9[2 * i] - 1] * w2[8];
    }
    */

    for (int i = 0; i < N_MAX_PIXELS; i++) {
        #pragma HLS UNROLL
        layer2_out[i] = feat_out[i];
        //std::cout << "feat_out: " << feat_out[i] << std::endl;
    }
    //std::cout << std::endl;

    //nnet::conv_2d_cl<input_t, result_t, config2>(x_in, layer2_out, w2, b2); // conv1

}

