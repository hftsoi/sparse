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

#define N_LAYER_7 1

#define N_MAX_PIXELS 10

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<6,1> weight2_t;
typedef ap_fixed<6,1> bias2_t;
typedef ap_fixed<19,8> dense1_accum_t;
typedef ap_fixed<19,8> result_t;
typedef ap_fixed<6,1> weight7_t;
typedef ap_fixed<6,1> bias7_t;
typedef ap_uint<1> layer7_index;


#endif
