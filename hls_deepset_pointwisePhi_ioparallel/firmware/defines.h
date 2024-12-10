#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 16
#define N_INPUT_2_1 3
#define N_OUTPUTS_19 16
#define N_FILT_19 32
#define N_OUTPUTS_2 16
#define N_FILT_2 32
#define N_OUTPUTS_20 16
#define N_FILT_20 32
#define N_OUTPUTS_5 16
#define N_FILT_5 32
#define N_OUTPUTS_21 16
#define N_FILT_21 32
#define N_OUTPUTS_8 16
#define N_FILT_8 32
#define N_OUTPUTS_8 16
#define N_FILT_8 32
#define N_FILT_12 32
#define N_LAYER_13 32
#define N_LAYER_13 32
#define N_LAYER_16 5
#define N_LAYER_16 5


// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<12,4,AP_RND,AP_SAT,0> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<23,8> phi1_result_t;
typedef ap_fixed<8,1> weight19_t;
typedef ap_fixed<8,1> bias19_t;
typedef ap_ufixed<8,0,AP_RND_CONV,AP_SAT,0> layer4_t;
typedef ap_fixed<18,8> relu1_table_t;
typedef ap_fixed<22,7> phi2_result_t;
typedef ap_fixed<8,1> weight20_t;
typedef ap_fixed<8,1> bias20_t;
typedef ap_ufixed<8,0,AP_RND_CONV,AP_SAT,0> layer7_t;
typedef ap_fixed<18,8> relu2_table_t;
typedef ap_fixed<22,7> phi3_result_t;
typedef ap_fixed<8,1> weight21_t;
typedef ap_fixed<8,1> bias21_t;
typedef ap_ufixed<8,0,AP_RND_CONV,AP_SAT,0> layer10_t;
typedef ap_fixed<18,8> relu3_table_t;
typedef ap_fixed<20,11,AP_RND_CONV,AP_SAT,0> layer11_t;
typedef ap_fixed<18,8> act_agg_table_t;
typedef ap_fixed<16,6> layer12_t;
typedef ap_fixed<30,13> rho1_result_t;
typedef ap_fixed<8,1> weight13_t;
typedef ap_fixed<8,1> bias13_t;
typedef ap_uint<1> layer13_index;
typedef ap_ufixed<8,0,AP_RND_CONV,AP_SAT,0> layer15_t;
typedef ap_fixed<18,8> relu4_table_t;
typedef ap_fixed<22,7> rho2_result_t;
typedef ap_fixed<8,1> weight16_t;
typedef ap_fixed<8,1> bias16_t;
typedef ap_uint<1> layer16_index;
typedef ap_fixed<16,6> result_t;
typedef ap_fixed<18,8> softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> softmax_inv_table_t;


#endif
