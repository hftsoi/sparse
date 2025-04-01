#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 20
#define N_INPUT_2_1 20
#define N_INPUT_3_1 3
#define OUT_HEIGHT_9 22
#define OUT_WIDTH_9 22
#define N_CHAN_9 3
#define OUT_HEIGHT_2 20
#define OUT_WIDTH_2 20
#define N_FILT_2 2
#define OUT_HEIGHT_2 20
#define OUT_WIDTH_2 20
#define N_FILT_2 2
#define OUT_HEIGHT_5 5
#define OUT_WIDTH_5 5
#define N_FILT_5 2
#define N_SIZE_0_6 50
#define N_LAYER_7 1


// hls-fpga-machine-learning insert layer-precision
typedef nnet::array<ap_fixed<16,6>, 3*1> input_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> layer9_t;
typedef ap_fixed<28,13> conv1_accum_t;
typedef nnet::array<ap_fixed<28,13>, 2*1> conv1_result_t;
typedef ap_fixed<6,1> weight2_t;
typedef ap_fixed<6,1> bias2_t;
typedef nnet::array<ap_ufixed<6,0,AP_RND_CONV,AP_SAT,0>, 2*1> layer4_t;
typedef ap_fixed<18,8> relu1_table_t;
typedef ap_ufixed<14,4> pool1_accum_t;
typedef nnet::array<ap_ufixed<6,0,AP_RND_CONV,AP_SAT,0>, 2*1> layer5_t;
typedef ap_fixed<19,8> dense1_accum_t;
typedef nnet::array<ap_fixed<19,8>, 1*1> result_t;
typedef ap_fixed<6,1> weight7_t;
typedef ap_fixed<6,1> bias7_t;
typedef ap_uint<1> layer7_index;


#endif
