#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 50
#define N_INPUT_2_1 40
#define N_INPUT_3_1 1
#define OUT_HEIGHT_2 50
#define OUT_WIDTH_2 40
#define N_FILT_2 1
#define OUT_HEIGHT_2 50
#define OUT_WIDTH_2 40
#define N_FILT_2 1
#define OUT_HEIGHT_5 25
#define OUT_WIDTH_5 20
#define N_FILT_5 1
#define OUT_HEIGHT_6 25
#define OUT_WIDTH_6 20
#define N_FILT_6 1
#define OUT_HEIGHT_6 25
#define OUT_WIDTH_6 20
#define N_FILT_6 1
#define OUT_HEIGHT_9 5
#define OUT_WIDTH_9 4
#define N_FILT_9 1
#define N_SIZE_0_10 20
#define N_LAYER_11 1

#define N_MAX_PIXELS 20

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<2,0> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<33,16> conv1_result_t;
typedef ap_fixed<16,7> weight2_t;
typedef ap_uint<1> bias2_t;
typedef ap_ufixed<16,6,AP_RND_CONV,AP_SAT,0> layer4_t;
typedef ap_fixed<18,8> relu1_table_t;
typedef ap_ufixed<16,6,AP_RND_CONV,AP_SAT,0> layer5_t;
typedef ap_fixed<37,18> conv2_result_t;
typedef ap_fixed<16,7> weight6_t;
typedef ap_uint<1> bias6_t;
typedef ap_ufixed<16,6,AP_RND_CONV,AP_SAT,0> layer8_t;
typedef ap_fixed<18,8> relu2_table_t;
typedef ap_ufixed<16,6,AP_RND_CONV,AP_SAT,0> layer9_t;
typedef ap_fixed<38,19> result_t;
typedef ap_fixed<16,7> weight11_t;
typedef ap_fixed<16,7> bias11_t;
typedef ap_uint<1> layer11_index;


#endif
