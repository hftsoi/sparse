#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 28
#define N_INPUT_2_1 28
#define N_INPUT_3_1 1
#define OUT_HEIGHT_2 28
#define OUT_WIDTH_2 28
#define N_FILT_2 1
#define OUT_HEIGHT_2 28
#define OUT_WIDTH_2 28
#define N_FILT_2 1
#define OUT_HEIGHT_5 28
#define OUT_WIDTH_5 28
#define N_FILT_5 1
#define OUT_HEIGHT_5 28
#define OUT_WIDTH_5 28
#define N_FILT_5 1
#define OUT_HEIGHT_8 28
#define OUT_WIDTH_8 28
#define N_FILT_8 1
#define OUT_HEIGHT_8 28
#define OUT_WIDTH_8 28
#define N_FILT_8 1


// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<12,4,AP_RND,AP_SAT,0> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<25,10> conv1_result_t;
typedef ap_fixed<8,1> weight2_t;
typedef ap_fixed<8,1> bias2_t;
typedef ap_ufixed<8,0,AP_RND_CONV,AP_SAT,0> layer4_t;
typedef ap_fixed<18,8> relu1_table_t;
typedef ap_fixed<21,6> conv2_result_t;
typedef ap_fixed<8,1> weight5_t;
typedef ap_fixed<8,1> bias5_t;
typedef ap_ufixed<8,0,AP_RND_CONV,AP_SAT,0> layer7_t;
typedef ap_fixed<18,8> relu2_table_t;
typedef ap_fixed<21,6> conv3_result_t;
typedef ap_fixed<8,1> weight8_t;
typedef ap_fixed<8,1> bias8_t;
typedef ap_ufixed<8,0,AP_RND_CONV,AP_SAT,0> result_t;
typedef ap_fixed<18,8> relu3_table_t;


#endif
