#ifndef HLS_TEST_H_
#define HLS_TEST_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"


// Prototype of top level function for C-synthesis
void hls_test(
    input_t fc1_input[N_INPUT_1_1],
    result_t layer13_out[N_LAYER_11]
);


#endif
