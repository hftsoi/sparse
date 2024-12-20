#ifndef NNET_MASK_H_
#define NNET_MASK_H_

#include "ap_fixed.h"
#include "ap_int.h"

namespace nnet {

template<typename data_t>
void compute_mask(
    data_t input_data[],
    ap_uint<1> mask[],
    int n_seq,
    int n_feat) {
    #pragma HLS INLINE

    // Loop over sequences
    for (int i_seq = 0; i_seq < n_seq; i_seq++) {
	#pragma HLS UNROLL

	bool is_zero_padded = true;

	// Loop over features per sequence to check if it is zero-padded
	for (int i_feat = 0; i_feat < n_feat; i_feat++) {
	    #pragma HLS UNROLL
	    data_t feat_val = input_data[i_seq * n_feat + i_feat];
	    if (feat_val != (data_t)0) {
		is_zero_padded = false;
		break;
	    }
	}

	// Assign mask value 0 to zero-padded sequences and 1 to valid sequences
	mask[i_seq] = is_zero_padded ? (ap_uint<1>)0 : (ap_uint<1>)1;
    }
}

} // namespace nnet

#endif
