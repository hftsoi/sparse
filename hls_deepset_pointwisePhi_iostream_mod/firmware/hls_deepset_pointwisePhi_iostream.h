#ifndef HLS_DEEPSET_POINTWISEPHI_IOSTREAM_H_
#define HLS_DEEPSET_POINTWISEPHI_IOSTREAM_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"


// Prototype of top level function for C-synthesis
void hls_deepset_pointwisePhi_iostream(
    hls::stream<input_t> &phi_input,
    hls::stream<result_t> &layer18_out
);


#endif
