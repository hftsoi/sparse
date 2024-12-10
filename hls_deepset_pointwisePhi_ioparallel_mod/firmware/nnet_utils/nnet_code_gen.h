#ifndef NNET_INSTR_GEN_H_
#define NNET_INSTR_GEN_H_

#include "nnet_helpers.h"

#include "hls_stream.h"
#include "nnet_common.h"
#include "nnet_function_stubs.h"
#include "nnet_mult.h"

namespace nnet {

// hls4ml insert code
template<class data_T, typename CONFIG_T>
class fill_buffer_19 : public FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2];

        }
        if (partition ==   1) {
            buffer[0][0] =    data[3]; buffer[0][1] =    data[4]; buffer[0][2] =    data[5];

        }
        if (partition ==   2) {
            buffer[0][0] =    data[6]; buffer[0][1] =    data[7]; buffer[0][2] =    data[8];

        }
        if (partition ==   3) {
            buffer[0][0] =    data[9]; buffer[0][1] =   data[10]; buffer[0][2] =   data[11];

        }
        if (partition ==   4) {
            buffer[0][0] =   data[12]; buffer[0][1] =   data[13]; buffer[0][2] =   data[14];

        }
        if (partition ==   5) {
            buffer[0][0] =   data[15]; buffer[0][1] =   data[16]; buffer[0][2] =   data[17];

        }
        if (partition ==   6) {
            buffer[0][0] =   data[18]; buffer[0][1] =   data[19]; buffer[0][2] =   data[20];

        }
        if (partition ==   7) {
            buffer[0][0] =   data[21]; buffer[0][1] =   data[22]; buffer[0][2] =   data[23];

        }
    }
};
template<class data_T, typename CONFIG_T>
class fill_buffer_20 : public FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9]; buffer[0][10] =   data[10]; buffer[0][11] =   data[11]; buffer[0][12] =   data[12]; buffer[0][13] =   data[13]; buffer[0][14] =   data[14]; buffer[0][15] =   data[15];

        }
        if (partition ==   1) {
            buffer[0][0] =   data[16]; buffer[0][1] =   data[17]; buffer[0][2] =   data[18]; buffer[0][3] =   data[19]; buffer[0][4] =   data[20]; buffer[0][5] =   data[21]; buffer[0][6] =   data[22]; buffer[0][7] =   data[23]; buffer[0][8] =   data[24]; buffer[0][9] =   data[25]; buffer[0][10] =   data[26]; buffer[0][11] =   data[27]; buffer[0][12] =   data[28]; buffer[0][13] =   data[29]; buffer[0][14] =   data[30]; buffer[0][15] =   data[31];

        }
        if (partition ==   2) {
            buffer[0][0] =   data[32]; buffer[0][1] =   data[33]; buffer[0][2] =   data[34]; buffer[0][3] =   data[35]; buffer[0][4] =   data[36]; buffer[0][5] =   data[37]; buffer[0][6] =   data[38]; buffer[0][7] =   data[39]; buffer[0][8] =   data[40]; buffer[0][9] =   data[41]; buffer[0][10] =   data[42]; buffer[0][11] =   data[43]; buffer[0][12] =   data[44]; buffer[0][13] =   data[45]; buffer[0][14] =   data[46]; buffer[0][15] =   data[47];

        }
        if (partition ==   3) {
            buffer[0][0] =   data[48]; buffer[0][1] =   data[49]; buffer[0][2] =   data[50]; buffer[0][3] =   data[51]; buffer[0][4] =   data[52]; buffer[0][5] =   data[53]; buffer[0][6] =   data[54]; buffer[0][7] =   data[55]; buffer[0][8] =   data[56]; buffer[0][9] =   data[57]; buffer[0][10] =   data[58]; buffer[0][11] =   data[59]; buffer[0][12] =   data[60]; buffer[0][13] =   data[61]; buffer[0][14] =   data[62]; buffer[0][15] =   data[63];

        }
        if (partition ==   4) {
            buffer[0][0] =   data[64]; buffer[0][1] =   data[65]; buffer[0][2] =   data[66]; buffer[0][3] =   data[67]; buffer[0][4] =   data[68]; buffer[0][5] =   data[69]; buffer[0][6] =   data[70]; buffer[0][7] =   data[71]; buffer[0][8] =   data[72]; buffer[0][9] =   data[73]; buffer[0][10] =   data[74]; buffer[0][11] =   data[75]; buffer[0][12] =   data[76]; buffer[0][13] =   data[77]; buffer[0][14] =   data[78]; buffer[0][15] =   data[79];

        }
        if (partition ==   5) {
            buffer[0][0] =   data[80]; buffer[0][1] =   data[81]; buffer[0][2] =   data[82]; buffer[0][3] =   data[83]; buffer[0][4] =   data[84]; buffer[0][5] =   data[85]; buffer[0][6] =   data[86]; buffer[0][7] =   data[87]; buffer[0][8] =   data[88]; buffer[0][9] =   data[89]; buffer[0][10] =   data[90]; buffer[0][11] =   data[91]; buffer[0][12] =   data[92]; buffer[0][13] =   data[93]; buffer[0][14] =   data[94]; buffer[0][15] =   data[95];

        }
        if (partition ==   6) {
            buffer[0][0] =   data[96]; buffer[0][1] =   data[97]; buffer[0][2] =   data[98]; buffer[0][3] =   data[99]; buffer[0][4] =  data[100]; buffer[0][5] =  data[101]; buffer[0][6] =  data[102]; buffer[0][7] =  data[103]; buffer[0][8] =  data[104]; buffer[0][9] =  data[105]; buffer[0][10] =  data[106]; buffer[0][11] =  data[107]; buffer[0][12] =  data[108]; buffer[0][13] =  data[109]; buffer[0][14] =  data[110]; buffer[0][15] =  data[111];

        }
        if (partition ==   7) {
            buffer[0][0] =  data[112]; buffer[0][1] =  data[113]; buffer[0][2] =  data[114]; buffer[0][3] =  data[115]; buffer[0][4] =  data[116]; buffer[0][5] =  data[117]; buffer[0][6] =  data[118]; buffer[0][7] =  data[119]; buffer[0][8] =  data[120]; buffer[0][9] =  data[121]; buffer[0][10] =  data[122]; buffer[0][11] =  data[123]; buffer[0][12] =  data[124]; buffer[0][13] =  data[125]; buffer[0][14] =  data[126]; buffer[0][15] =  data[127];

        }
    }
};
template<class data_T, typename CONFIG_T>
class fill_buffer_21 : public FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9]; buffer[0][10] =   data[10]; buffer[0][11] =   data[11]; buffer[0][12] =   data[12]; buffer[0][13] =   data[13]; buffer[0][14] =   data[14]; buffer[0][15] =   data[15];

        }
        if (partition ==   1) {
            buffer[0][0] =   data[16]; buffer[0][1] =   data[17]; buffer[0][2] =   data[18]; buffer[0][3] =   data[19]; buffer[0][4] =   data[20]; buffer[0][5] =   data[21]; buffer[0][6] =   data[22]; buffer[0][7] =   data[23]; buffer[0][8] =   data[24]; buffer[0][9] =   data[25]; buffer[0][10] =   data[26]; buffer[0][11] =   data[27]; buffer[0][12] =   data[28]; buffer[0][13] =   data[29]; buffer[0][14] =   data[30]; buffer[0][15] =   data[31];

        }
        if (partition ==   2) {
            buffer[0][0] =   data[32]; buffer[0][1] =   data[33]; buffer[0][2] =   data[34]; buffer[0][3] =   data[35]; buffer[0][4] =   data[36]; buffer[0][5] =   data[37]; buffer[0][6] =   data[38]; buffer[0][7] =   data[39]; buffer[0][8] =   data[40]; buffer[0][9] =   data[41]; buffer[0][10] =   data[42]; buffer[0][11] =   data[43]; buffer[0][12] =   data[44]; buffer[0][13] =   data[45]; buffer[0][14] =   data[46]; buffer[0][15] =   data[47];

        }
        if (partition ==   3) {
            buffer[0][0] =   data[48]; buffer[0][1] =   data[49]; buffer[0][2] =   data[50]; buffer[0][3] =   data[51]; buffer[0][4] =   data[52]; buffer[0][5] =   data[53]; buffer[0][6] =   data[54]; buffer[0][7] =   data[55]; buffer[0][8] =   data[56]; buffer[0][9] =   data[57]; buffer[0][10] =   data[58]; buffer[0][11] =   data[59]; buffer[0][12] =   data[60]; buffer[0][13] =   data[61]; buffer[0][14] =   data[62]; buffer[0][15] =   data[63];

        }
        if (partition ==   4) {
            buffer[0][0] =   data[64]; buffer[0][1] =   data[65]; buffer[0][2] =   data[66]; buffer[0][3] =   data[67]; buffer[0][4] =   data[68]; buffer[0][5] =   data[69]; buffer[0][6] =   data[70]; buffer[0][7] =   data[71]; buffer[0][8] =   data[72]; buffer[0][9] =   data[73]; buffer[0][10] =   data[74]; buffer[0][11] =   data[75]; buffer[0][12] =   data[76]; buffer[0][13] =   data[77]; buffer[0][14] =   data[78]; buffer[0][15] =   data[79];

        }
        if (partition ==   5) {
            buffer[0][0] =   data[80]; buffer[0][1] =   data[81]; buffer[0][2] =   data[82]; buffer[0][3] =   data[83]; buffer[0][4] =   data[84]; buffer[0][5] =   data[85]; buffer[0][6] =   data[86]; buffer[0][7] =   data[87]; buffer[0][8] =   data[88]; buffer[0][9] =   data[89]; buffer[0][10] =   data[90]; buffer[0][11] =   data[91]; buffer[0][12] =   data[92]; buffer[0][13] =   data[93]; buffer[0][14] =   data[94]; buffer[0][15] =   data[95];

        }
        if (partition ==   6) {
            buffer[0][0] =   data[96]; buffer[0][1] =   data[97]; buffer[0][2] =   data[98]; buffer[0][3] =   data[99]; buffer[0][4] =  data[100]; buffer[0][5] =  data[101]; buffer[0][6] =  data[102]; buffer[0][7] =  data[103]; buffer[0][8] =  data[104]; buffer[0][9] =  data[105]; buffer[0][10] =  data[106]; buffer[0][11] =  data[107]; buffer[0][12] =  data[108]; buffer[0][13] =  data[109]; buffer[0][14] =  data[110]; buffer[0][15] =  data[111];

        }
        if (partition ==   7) {
            buffer[0][0] =  data[112]; buffer[0][1] =  data[113]; buffer[0][2] =  data[114]; buffer[0][3] =  data[115]; buffer[0][4] =  data[116]; buffer[0][5] =  data[117]; buffer[0][6] =  data[118]; buffer[0][7] =  data[119]; buffer[0][8] =  data[120]; buffer[0][9] =  data[121]; buffer[0][10] =  data[122]; buffer[0][11] =  data[123]; buffer[0][12] =  data[124]; buffer[0][13] =  data[125]; buffer[0][14] =  data[126]; buffer[0][15] =  data[127];

        }
    }
};

} // namespace nnet

#endif
