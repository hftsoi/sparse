#ifndef MODEL_TEST_H_
#define MODEL_TEST_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"


// Prototype of top level function for C-synthesis
void model_test(
    input_t x_in[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    result_t layer10_out[OUT_HEIGHT_8*OUT_WIDTH_8*N_FILT_8]
);


#endif
