#ifndef MODEL_TEST_H_
#define MODEL_TEST_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"


// Prototype of top level function for C-synthesis
void model_test(
    hls::stream<input_t> &x_in,
    hls::stream<result_t> &layer7_out
);


#endif
