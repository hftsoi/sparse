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
class fill_buffer_2 : public FillConv2DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_height * CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =          0; buffer[0][4] =    data[0]; buffer[0][5] =    data[1]; buffer[0][6] =          0; buffer[0][7] =   data[10]; buffer[0][8] =   data[11];

        }
        if (partition ==   1) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[0]; buffer[0][4] =    data[1]; buffer[0][5] =    data[2]; buffer[0][6] =   data[10]; buffer[0][7] =   data[11]; buffer[0][8] =   data[12];

        }
        if (partition ==   2) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[1]; buffer[0][4] =    data[2]; buffer[0][5] =    data[3]; buffer[0][6] =   data[11]; buffer[0][7] =   data[12]; buffer[0][8] =   data[13];

        }
        if (partition ==   3) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[2]; buffer[0][4] =    data[3]; buffer[0][5] =    data[4]; buffer[0][6] =   data[12]; buffer[0][7] =   data[13]; buffer[0][8] =   data[14];

        }
        if (partition ==   4) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =   data[13]; buffer[0][7] =   data[14]; buffer[0][8] =   data[15];

        }
        if (partition ==   5) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[4]; buffer[0][4] =    data[5]; buffer[0][5] =    data[6]; buffer[0][6] =   data[14]; buffer[0][7] =   data[15]; buffer[0][8] =   data[16];

        }
        if (partition ==   6) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[5]; buffer[0][4] =    data[6]; buffer[0][5] =    data[7]; buffer[0][6] =   data[15]; buffer[0][7] =   data[16]; buffer[0][8] =   data[17];

        }
        if (partition ==   7) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[6]; buffer[0][4] =    data[7]; buffer[0][5] =    data[8]; buffer[0][6] =   data[16]; buffer[0][7] =   data[17]; buffer[0][8] =   data[18];

        }
        if (partition ==   8) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[7]; buffer[0][4] =    data[8]; buffer[0][5] =    data[9]; buffer[0][6] =   data[17]; buffer[0][7] =   data[18]; buffer[0][8] =   data[19];

        }
        if (partition ==   9) {
            buffer[0][0] =          0; buffer[0][1] =          0; buffer[0][2] =          0; buffer[0][3] =    data[8]; buffer[0][4] =    data[9]; buffer[0][5] =          0; buffer[0][6] =   data[18]; buffer[0][7] =   data[19]; buffer[0][8] =          0;

        }
        if (partition ==  10) {
            buffer[0][0] =          0; buffer[0][1] =    data[0]; buffer[0][2] =    data[1]; buffer[0][3] =          0; buffer[0][4] =   data[10]; buffer[0][5] =   data[11]; buffer[0][6] =          0; buffer[0][7] =   data[20]; buffer[0][8] =   data[21];

        }
        if (partition ==  11) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =   data[10]; buffer[0][4] =   data[11]; buffer[0][5] =   data[12]; buffer[0][6] =   data[20]; buffer[0][7] =   data[21]; buffer[0][8] =   data[22];

        }
        if (partition ==  12) {
            buffer[0][0] =    data[1]; buffer[0][1] =    data[2]; buffer[0][2] =    data[3]; buffer[0][3] =   data[11]; buffer[0][4] =   data[12]; buffer[0][5] =   data[13]; buffer[0][6] =   data[21]; buffer[0][7] =   data[22]; buffer[0][8] =   data[23];

        }
        if (partition ==  13) {
            buffer[0][0] =    data[2]; buffer[0][1] =    data[3]; buffer[0][2] =    data[4]; buffer[0][3] =   data[12]; buffer[0][4] =   data[13]; buffer[0][5] =   data[14]; buffer[0][6] =   data[22]; buffer[0][7] =   data[23]; buffer[0][8] =   data[24];

        }
        if (partition ==  14) {
            buffer[0][0] =    data[3]; buffer[0][1] =    data[4]; buffer[0][2] =    data[5]; buffer[0][3] =   data[13]; buffer[0][4] =   data[14]; buffer[0][5] =   data[15]; buffer[0][6] =   data[23]; buffer[0][7] =   data[24]; buffer[0][8] =   data[25];

        }
        if (partition ==  15) {
            buffer[0][0] =    data[4]; buffer[0][1] =    data[5]; buffer[0][2] =    data[6]; buffer[0][3] =   data[14]; buffer[0][4] =   data[15]; buffer[0][5] =   data[16]; buffer[0][6] =   data[24]; buffer[0][7] =   data[25]; buffer[0][8] =   data[26];

        }
        if (partition ==  16) {
            buffer[0][0] =    data[5]; buffer[0][1] =    data[6]; buffer[0][2] =    data[7]; buffer[0][3] =   data[15]; buffer[0][4] =   data[16]; buffer[0][5] =   data[17]; buffer[0][6] =   data[25]; buffer[0][7] =   data[26]; buffer[0][8] =   data[27];

        }
        if (partition ==  17) {
            buffer[0][0] =    data[6]; buffer[0][1] =    data[7]; buffer[0][2] =    data[8]; buffer[0][3] =   data[16]; buffer[0][4] =   data[17]; buffer[0][5] =   data[18]; buffer[0][6] =   data[26]; buffer[0][7] =   data[27]; buffer[0][8] =   data[28];

        }
        if (partition ==  18) {
            buffer[0][0] =    data[7]; buffer[0][1] =    data[8]; buffer[0][2] =    data[9]; buffer[0][3] =   data[17]; buffer[0][4] =   data[18]; buffer[0][5] =   data[19]; buffer[0][6] =   data[27]; buffer[0][7] =   data[28]; buffer[0][8] =   data[29];

        }
        if (partition ==  19) {
            buffer[0][0] =    data[8]; buffer[0][1] =    data[9]; buffer[0][2] =          0; buffer[0][3] =   data[18]; buffer[0][4] =   data[19]; buffer[0][5] =          0; buffer[0][6] =   data[28]; buffer[0][7] =   data[29]; buffer[0][8] =          0;

        }
        if (partition ==  20) {
            buffer[0][0] =          0; buffer[0][1] =   data[10]; buffer[0][2] =   data[11]; buffer[0][3] =          0; buffer[0][4] =   data[20]; buffer[0][5] =   data[21]; buffer[0][6] =          0; buffer[0][7] =   data[30]; buffer[0][8] =   data[31];

        }
        if (partition ==  21) {
            buffer[0][0] =   data[10]; buffer[0][1] =   data[11]; buffer[0][2] =   data[12]; buffer[0][3] =   data[20]; buffer[0][4] =   data[21]; buffer[0][5] =   data[22]; buffer[0][6] =   data[30]; buffer[0][7] =   data[31]; buffer[0][8] =   data[32];

        }
        if (partition ==  22) {
            buffer[0][0] =   data[11]; buffer[0][1] =   data[12]; buffer[0][2] =   data[13]; buffer[0][3] =   data[21]; buffer[0][4] =   data[22]; buffer[0][5] =   data[23]; buffer[0][6] =   data[31]; buffer[0][7] =   data[32]; buffer[0][8] =   data[33];

        }
        if (partition ==  23) {
            buffer[0][0] =   data[12]; buffer[0][1] =   data[13]; buffer[0][2] =   data[14]; buffer[0][3] =   data[22]; buffer[0][4] =   data[23]; buffer[0][5] =   data[24]; buffer[0][6] =   data[32]; buffer[0][7] =   data[33]; buffer[0][8] =   data[34];

        }
        if (partition ==  24) {
            buffer[0][0] =   data[13]; buffer[0][1] =   data[14]; buffer[0][2] =   data[15]; buffer[0][3] =   data[23]; buffer[0][4] =   data[24]; buffer[0][5] =   data[25]; buffer[0][6] =   data[33]; buffer[0][7] =   data[34]; buffer[0][8] =   data[35];

        }
        if (partition ==  25) {
            buffer[0][0] =   data[14]; buffer[0][1] =   data[15]; buffer[0][2] =   data[16]; buffer[0][3] =   data[24]; buffer[0][4] =   data[25]; buffer[0][5] =   data[26]; buffer[0][6] =   data[34]; buffer[0][7] =   data[35]; buffer[0][8] =   data[36];

        }
        if (partition ==  26) {
            buffer[0][0] =   data[15]; buffer[0][1] =   data[16]; buffer[0][2] =   data[17]; buffer[0][3] =   data[25]; buffer[0][4] =   data[26]; buffer[0][5] =   data[27]; buffer[0][6] =   data[35]; buffer[0][7] =   data[36]; buffer[0][8] =   data[37];

        }
        if (partition ==  27) {
            buffer[0][0] =   data[16]; buffer[0][1] =   data[17]; buffer[0][2] =   data[18]; buffer[0][3] =   data[26]; buffer[0][4] =   data[27]; buffer[0][5] =   data[28]; buffer[0][6] =   data[36]; buffer[0][7] =   data[37]; buffer[0][8] =   data[38];

        }
        if (partition ==  28) {
            buffer[0][0] =   data[17]; buffer[0][1] =   data[18]; buffer[0][2] =   data[19]; buffer[0][3] =   data[27]; buffer[0][4] =   data[28]; buffer[0][5] =   data[29]; buffer[0][6] =   data[37]; buffer[0][7] =   data[38]; buffer[0][8] =   data[39];

        }
        if (partition ==  29) {
            buffer[0][0] =   data[18]; buffer[0][1] =   data[19]; buffer[0][2] =          0; buffer[0][3] =   data[28]; buffer[0][4] =   data[29]; buffer[0][5] =          0; buffer[0][6] =   data[38]; buffer[0][7] =   data[39]; buffer[0][8] =          0;

        }
        if (partition ==  30) {
            buffer[0][0] =          0; buffer[0][1] =   data[20]; buffer[0][2] =   data[21]; buffer[0][3] =          0; buffer[0][4] =   data[30]; buffer[0][5] =   data[31]; buffer[0][6] =          0; buffer[0][7] =   data[40]; buffer[0][8] =   data[41];

        }
        if (partition ==  31) {
            buffer[0][0] =   data[20]; buffer[0][1] =   data[21]; buffer[0][2] =   data[22]; buffer[0][3] =   data[30]; buffer[0][4] =   data[31]; buffer[0][5] =   data[32]; buffer[0][6] =   data[40]; buffer[0][7] =   data[41]; buffer[0][8] =   data[42];

        }
        if (partition ==  32) {
            buffer[0][0] =   data[21]; buffer[0][1] =   data[22]; buffer[0][2] =   data[23]; buffer[0][3] =   data[31]; buffer[0][4] =   data[32]; buffer[0][5] =   data[33]; buffer[0][6] =   data[41]; buffer[0][7] =   data[42]; buffer[0][8] =   data[43];

        }
        if (partition ==  33) {
            buffer[0][0] =   data[22]; buffer[0][1] =   data[23]; buffer[0][2] =   data[24]; buffer[0][3] =   data[32]; buffer[0][4] =   data[33]; buffer[0][5] =   data[34]; buffer[0][6] =   data[42]; buffer[0][7] =   data[43]; buffer[0][8] =   data[44];

        }
        if (partition ==  34) {
            buffer[0][0] =   data[23]; buffer[0][1] =   data[24]; buffer[0][2] =   data[25]; buffer[0][3] =   data[33]; buffer[0][4] =   data[34]; buffer[0][5] =   data[35]; buffer[0][6] =   data[43]; buffer[0][7] =   data[44]; buffer[0][8] =   data[45];

        }
        if (partition ==  35) {
            buffer[0][0] =   data[24]; buffer[0][1] =   data[25]; buffer[0][2] =   data[26]; buffer[0][3] =   data[34]; buffer[0][4] =   data[35]; buffer[0][5] =   data[36]; buffer[0][6] =   data[44]; buffer[0][7] =   data[45]; buffer[0][8] =   data[46];

        }
        if (partition ==  36) {
            buffer[0][0] =   data[25]; buffer[0][1] =   data[26]; buffer[0][2] =   data[27]; buffer[0][3] =   data[35]; buffer[0][4] =   data[36]; buffer[0][5] =   data[37]; buffer[0][6] =   data[45]; buffer[0][7] =   data[46]; buffer[0][8] =   data[47];

        }
        if (partition ==  37) {
            buffer[0][0] =   data[26]; buffer[0][1] =   data[27]; buffer[0][2] =   data[28]; buffer[0][3] =   data[36]; buffer[0][4] =   data[37]; buffer[0][5] =   data[38]; buffer[0][6] =   data[46]; buffer[0][7] =   data[47]; buffer[0][8] =   data[48];

        }
        if (partition ==  38) {
            buffer[0][0] =   data[27]; buffer[0][1] =   data[28]; buffer[0][2] =   data[29]; buffer[0][3] =   data[37]; buffer[0][4] =   data[38]; buffer[0][5] =   data[39]; buffer[0][6] =   data[47]; buffer[0][7] =   data[48]; buffer[0][8] =   data[49];

        }
        if (partition ==  39) {
            buffer[0][0] =   data[28]; buffer[0][1] =   data[29]; buffer[0][2] =          0; buffer[0][3] =   data[38]; buffer[0][4] =   data[39]; buffer[0][5] =          0; buffer[0][6] =   data[48]; buffer[0][7] =   data[49]; buffer[0][8] =          0;

        }
        if (partition ==  40) {
            buffer[0][0] =          0; buffer[0][1] =   data[30]; buffer[0][2] =   data[31]; buffer[0][3] =          0; buffer[0][4] =   data[40]; buffer[0][5] =   data[41]; buffer[0][6] =          0; buffer[0][7] =   data[50]; buffer[0][8] =   data[51];

        }
        if (partition ==  41) {
            buffer[0][0] =   data[30]; buffer[0][1] =   data[31]; buffer[0][2] =   data[32]; buffer[0][3] =   data[40]; buffer[0][4] =   data[41]; buffer[0][5] =   data[42]; buffer[0][6] =   data[50]; buffer[0][7] =   data[51]; buffer[0][8] =   data[52];

        }
        if (partition ==  42) {
            buffer[0][0] =   data[31]; buffer[0][1] =   data[32]; buffer[0][2] =   data[33]; buffer[0][3] =   data[41]; buffer[0][4] =   data[42]; buffer[0][5] =   data[43]; buffer[0][6] =   data[51]; buffer[0][7] =   data[52]; buffer[0][8] =   data[53];

        }
        if (partition ==  43) {
            buffer[0][0] =   data[32]; buffer[0][1] =   data[33]; buffer[0][2] =   data[34]; buffer[0][3] =   data[42]; buffer[0][4] =   data[43]; buffer[0][5] =   data[44]; buffer[0][6] =   data[52]; buffer[0][7] =   data[53]; buffer[0][8] =   data[54];

        }
        if (partition ==  44) {
            buffer[0][0] =   data[33]; buffer[0][1] =   data[34]; buffer[0][2] =   data[35]; buffer[0][3] =   data[43]; buffer[0][4] =   data[44]; buffer[0][5] =   data[45]; buffer[0][6] =   data[53]; buffer[0][7] =   data[54]; buffer[0][8] =   data[55];

        }
        if (partition ==  45) {
            buffer[0][0] =   data[34]; buffer[0][1] =   data[35]; buffer[0][2] =   data[36]; buffer[0][3] =   data[44]; buffer[0][4] =   data[45]; buffer[0][5] =   data[46]; buffer[0][6] =   data[54]; buffer[0][7] =   data[55]; buffer[0][8] =   data[56];

        }
        if (partition ==  46) {
            buffer[0][0] =   data[35]; buffer[0][1] =   data[36]; buffer[0][2] =   data[37]; buffer[0][3] =   data[45]; buffer[0][4] =   data[46]; buffer[0][5] =   data[47]; buffer[0][6] =   data[55]; buffer[0][7] =   data[56]; buffer[0][8] =   data[57];

        }
        if (partition ==  47) {
            buffer[0][0] =   data[36]; buffer[0][1] =   data[37]; buffer[0][2] =   data[38]; buffer[0][3] =   data[46]; buffer[0][4] =   data[47]; buffer[0][5] =   data[48]; buffer[0][6] =   data[56]; buffer[0][7] =   data[57]; buffer[0][8] =   data[58];

        }
        if (partition ==  48) {
            buffer[0][0] =   data[37]; buffer[0][1] =   data[38]; buffer[0][2] =   data[39]; buffer[0][3] =   data[47]; buffer[0][4] =   data[48]; buffer[0][5] =   data[49]; buffer[0][6] =   data[57]; buffer[0][7] =   data[58]; buffer[0][8] =   data[59];

        }
        if (partition ==  49) {
            buffer[0][0] =   data[38]; buffer[0][1] =   data[39]; buffer[0][2] =          0; buffer[0][3] =   data[48]; buffer[0][4] =   data[49]; buffer[0][5] =          0; buffer[0][6] =   data[58]; buffer[0][7] =   data[59]; buffer[0][8] =          0;

        }
        if (partition ==  50) {
            buffer[0][0] =          0; buffer[0][1] =   data[40]; buffer[0][2] =   data[41]; buffer[0][3] =          0; buffer[0][4] =   data[50]; buffer[0][5] =   data[51]; buffer[0][6] =          0; buffer[0][7] =   data[60]; buffer[0][8] =   data[61];

        }
        if (partition ==  51) {
            buffer[0][0] =   data[40]; buffer[0][1] =   data[41]; buffer[0][2] =   data[42]; buffer[0][3] =   data[50]; buffer[0][4] =   data[51]; buffer[0][5] =   data[52]; buffer[0][6] =   data[60]; buffer[0][7] =   data[61]; buffer[0][8] =   data[62];

        }
        if (partition ==  52) {
            buffer[0][0] =   data[41]; buffer[0][1] =   data[42]; buffer[0][2] =   data[43]; buffer[0][3] =   data[51]; buffer[0][4] =   data[52]; buffer[0][5] =   data[53]; buffer[0][6] =   data[61]; buffer[0][7] =   data[62]; buffer[0][8] =   data[63];

        }
        if (partition ==  53) {
            buffer[0][0] =   data[42]; buffer[0][1] =   data[43]; buffer[0][2] =   data[44]; buffer[0][3] =   data[52]; buffer[0][4] =   data[53]; buffer[0][5] =   data[54]; buffer[0][6] =   data[62]; buffer[0][7] =   data[63]; buffer[0][8] =   data[64];

        }
        if (partition ==  54) {
            buffer[0][0] =   data[43]; buffer[0][1] =   data[44]; buffer[0][2] =   data[45]; buffer[0][3] =   data[53]; buffer[0][4] =   data[54]; buffer[0][5] =   data[55]; buffer[0][6] =   data[63]; buffer[0][7] =   data[64]; buffer[0][8] =   data[65];

        }
        if (partition ==  55) {
            buffer[0][0] =   data[44]; buffer[0][1] =   data[45]; buffer[0][2] =   data[46]; buffer[0][3] =   data[54]; buffer[0][4] =   data[55]; buffer[0][5] =   data[56]; buffer[0][6] =   data[64]; buffer[0][7] =   data[65]; buffer[0][8] =   data[66];

        }
        if (partition ==  56) {
            buffer[0][0] =   data[45]; buffer[0][1] =   data[46]; buffer[0][2] =   data[47]; buffer[0][3] =   data[55]; buffer[0][4] =   data[56]; buffer[0][5] =   data[57]; buffer[0][6] =   data[65]; buffer[0][7] =   data[66]; buffer[0][8] =   data[67];

        }
        if (partition ==  57) {
            buffer[0][0] =   data[46]; buffer[0][1] =   data[47]; buffer[0][2] =   data[48]; buffer[0][3] =   data[56]; buffer[0][4] =   data[57]; buffer[0][5] =   data[58]; buffer[0][6] =   data[66]; buffer[0][7] =   data[67]; buffer[0][8] =   data[68];

        }
        if (partition ==  58) {
            buffer[0][0] =   data[47]; buffer[0][1] =   data[48]; buffer[0][2] =   data[49]; buffer[0][3] =   data[57]; buffer[0][4] =   data[58]; buffer[0][5] =   data[59]; buffer[0][6] =   data[67]; buffer[0][7] =   data[68]; buffer[0][8] =   data[69];

        }
        if (partition ==  59) {
            buffer[0][0] =   data[48]; buffer[0][1] =   data[49]; buffer[0][2] =          0; buffer[0][3] =   data[58]; buffer[0][4] =   data[59]; buffer[0][5] =          0; buffer[0][6] =   data[68]; buffer[0][7] =   data[69]; buffer[0][8] =          0;

        }
        if (partition ==  60) {
            buffer[0][0] =          0; buffer[0][1] =   data[50]; buffer[0][2] =   data[51]; buffer[0][3] =          0; buffer[0][4] =   data[60]; buffer[0][5] =   data[61]; buffer[0][6] =          0; buffer[0][7] =   data[70]; buffer[0][8] =   data[71];

        }
        if (partition ==  61) {
            buffer[0][0] =   data[50]; buffer[0][1] =   data[51]; buffer[0][2] =   data[52]; buffer[0][3] =   data[60]; buffer[0][4] =   data[61]; buffer[0][5] =   data[62]; buffer[0][6] =   data[70]; buffer[0][7] =   data[71]; buffer[0][8] =   data[72];

        }
        if (partition ==  62) {
            buffer[0][0] =   data[51]; buffer[0][1] =   data[52]; buffer[0][2] =   data[53]; buffer[0][3] =   data[61]; buffer[0][4] =   data[62]; buffer[0][5] =   data[63]; buffer[0][6] =   data[71]; buffer[0][7] =   data[72]; buffer[0][8] =   data[73];

        }
        if (partition ==  63) {
            buffer[0][0] =   data[52]; buffer[0][1] =   data[53]; buffer[0][2] =   data[54]; buffer[0][3] =   data[62]; buffer[0][4] =   data[63]; buffer[0][5] =   data[64]; buffer[0][6] =   data[72]; buffer[0][7] =   data[73]; buffer[0][8] =   data[74];

        }
        if (partition ==  64) {
            buffer[0][0] =   data[53]; buffer[0][1] =   data[54]; buffer[0][2] =   data[55]; buffer[0][3] =   data[63]; buffer[0][4] =   data[64]; buffer[0][5] =   data[65]; buffer[0][6] =   data[73]; buffer[0][7] =   data[74]; buffer[0][8] =   data[75];

        }
        if (partition ==  65) {
            buffer[0][0] =   data[54]; buffer[0][1] =   data[55]; buffer[0][2] =   data[56]; buffer[0][3] =   data[64]; buffer[0][4] =   data[65]; buffer[0][5] =   data[66]; buffer[0][6] =   data[74]; buffer[0][7] =   data[75]; buffer[0][8] =   data[76];

        }
        if (partition ==  66) {
            buffer[0][0] =   data[55]; buffer[0][1] =   data[56]; buffer[0][2] =   data[57]; buffer[0][3] =   data[65]; buffer[0][4] =   data[66]; buffer[0][5] =   data[67]; buffer[0][6] =   data[75]; buffer[0][7] =   data[76]; buffer[0][8] =   data[77];

        }
        if (partition ==  67) {
            buffer[0][0] =   data[56]; buffer[0][1] =   data[57]; buffer[0][2] =   data[58]; buffer[0][3] =   data[66]; buffer[0][4] =   data[67]; buffer[0][5] =   data[68]; buffer[0][6] =   data[76]; buffer[0][7] =   data[77]; buffer[0][8] =   data[78];

        }
        if (partition ==  68) {
            buffer[0][0] =   data[57]; buffer[0][1] =   data[58]; buffer[0][2] =   data[59]; buffer[0][3] =   data[67]; buffer[0][4] =   data[68]; buffer[0][5] =   data[69]; buffer[0][6] =   data[77]; buffer[0][7] =   data[78]; buffer[0][8] =   data[79];

        }
        if (partition ==  69) {
            buffer[0][0] =   data[58]; buffer[0][1] =   data[59]; buffer[0][2] =          0; buffer[0][3] =   data[68]; buffer[0][4] =   data[69]; buffer[0][5] =          0; buffer[0][6] =   data[78]; buffer[0][7] =   data[79]; buffer[0][8] =          0;

        }
        if (partition ==  70) {
            buffer[0][0] =          0; buffer[0][1] =   data[60]; buffer[0][2] =   data[61]; buffer[0][3] =          0; buffer[0][4] =   data[70]; buffer[0][5] =   data[71]; buffer[0][6] =          0; buffer[0][7] =   data[80]; buffer[0][8] =   data[81];

        }
        if (partition ==  71) {
            buffer[0][0] =   data[60]; buffer[0][1] =   data[61]; buffer[0][2] =   data[62]; buffer[0][3] =   data[70]; buffer[0][4] =   data[71]; buffer[0][5] =   data[72]; buffer[0][6] =   data[80]; buffer[0][7] =   data[81]; buffer[0][8] =   data[82];

        }
        if (partition ==  72) {
            buffer[0][0] =   data[61]; buffer[0][1] =   data[62]; buffer[0][2] =   data[63]; buffer[0][3] =   data[71]; buffer[0][4] =   data[72]; buffer[0][5] =   data[73]; buffer[0][6] =   data[81]; buffer[0][7] =   data[82]; buffer[0][8] =   data[83];

        }
        if (partition ==  73) {
            buffer[0][0] =   data[62]; buffer[0][1] =   data[63]; buffer[0][2] =   data[64]; buffer[0][3] =   data[72]; buffer[0][4] =   data[73]; buffer[0][5] =   data[74]; buffer[0][6] =   data[82]; buffer[0][7] =   data[83]; buffer[0][8] =   data[84];

        }
        if (partition ==  74) {
            buffer[0][0] =   data[63]; buffer[0][1] =   data[64]; buffer[0][2] =   data[65]; buffer[0][3] =   data[73]; buffer[0][4] =   data[74]; buffer[0][5] =   data[75]; buffer[0][6] =   data[83]; buffer[0][7] =   data[84]; buffer[0][8] =   data[85];

        }
        if (partition ==  75) {
            buffer[0][0] =   data[64]; buffer[0][1] =   data[65]; buffer[0][2] =   data[66]; buffer[0][3] =   data[74]; buffer[0][4] =   data[75]; buffer[0][5] =   data[76]; buffer[0][6] =   data[84]; buffer[0][7] =   data[85]; buffer[0][8] =   data[86];

        }
        if (partition ==  76) {
            buffer[0][0] =   data[65]; buffer[0][1] =   data[66]; buffer[0][2] =   data[67]; buffer[0][3] =   data[75]; buffer[0][4] =   data[76]; buffer[0][5] =   data[77]; buffer[0][6] =   data[85]; buffer[0][7] =   data[86]; buffer[0][8] =   data[87];

        }
        if (partition ==  77) {
            buffer[0][0] =   data[66]; buffer[0][1] =   data[67]; buffer[0][2] =   data[68]; buffer[0][3] =   data[76]; buffer[0][4] =   data[77]; buffer[0][5] =   data[78]; buffer[0][6] =   data[86]; buffer[0][7] =   data[87]; buffer[0][8] =   data[88];

        }
        if (partition ==  78) {
            buffer[0][0] =   data[67]; buffer[0][1] =   data[68]; buffer[0][2] =   data[69]; buffer[0][3] =   data[77]; buffer[0][4] =   data[78]; buffer[0][5] =   data[79]; buffer[0][6] =   data[87]; buffer[0][7] =   data[88]; buffer[0][8] =   data[89];

        }
        if (partition ==  79) {
            buffer[0][0] =   data[68]; buffer[0][1] =   data[69]; buffer[0][2] =          0; buffer[0][3] =   data[78]; buffer[0][4] =   data[79]; buffer[0][5] =          0; buffer[0][6] =   data[88]; buffer[0][7] =   data[89]; buffer[0][8] =          0;

        }
        if (partition ==  80) {
            buffer[0][0] =          0; buffer[0][1] =   data[70]; buffer[0][2] =   data[71]; buffer[0][3] =          0; buffer[0][4] =   data[80]; buffer[0][5] =   data[81]; buffer[0][6] =          0; buffer[0][7] =   data[90]; buffer[0][8] =   data[91];

        }
        if (partition ==  81) {
            buffer[0][0] =   data[70]; buffer[0][1] =   data[71]; buffer[0][2] =   data[72]; buffer[0][3] =   data[80]; buffer[0][4] =   data[81]; buffer[0][5] =   data[82]; buffer[0][6] =   data[90]; buffer[0][7] =   data[91]; buffer[0][8] =   data[92];

        }
        if (partition ==  82) {
            buffer[0][0] =   data[71]; buffer[0][1] =   data[72]; buffer[0][2] =   data[73]; buffer[0][3] =   data[81]; buffer[0][4] =   data[82]; buffer[0][5] =   data[83]; buffer[0][6] =   data[91]; buffer[0][7] =   data[92]; buffer[0][8] =   data[93];

        }
        if (partition ==  83) {
            buffer[0][0] =   data[72]; buffer[0][1] =   data[73]; buffer[0][2] =   data[74]; buffer[0][3] =   data[82]; buffer[0][4] =   data[83]; buffer[0][5] =   data[84]; buffer[0][6] =   data[92]; buffer[0][7] =   data[93]; buffer[0][8] =   data[94];

        }
        if (partition ==  84) {
            buffer[0][0] =   data[73]; buffer[0][1] =   data[74]; buffer[0][2] =   data[75]; buffer[0][3] =   data[83]; buffer[0][4] =   data[84]; buffer[0][5] =   data[85]; buffer[0][6] =   data[93]; buffer[0][7] =   data[94]; buffer[0][8] =   data[95];

        }
        if (partition ==  85) {
            buffer[0][0] =   data[74]; buffer[0][1] =   data[75]; buffer[0][2] =   data[76]; buffer[0][3] =   data[84]; buffer[0][4] =   data[85]; buffer[0][5] =   data[86]; buffer[0][6] =   data[94]; buffer[0][7] =   data[95]; buffer[0][8] =   data[96];

        }
        if (partition ==  86) {
            buffer[0][0] =   data[75]; buffer[0][1] =   data[76]; buffer[0][2] =   data[77]; buffer[0][3] =   data[85]; buffer[0][4] =   data[86]; buffer[0][5] =   data[87]; buffer[0][6] =   data[95]; buffer[0][7] =   data[96]; buffer[0][8] =   data[97];

        }
        if (partition ==  87) {
            buffer[0][0] =   data[76]; buffer[0][1] =   data[77]; buffer[0][2] =   data[78]; buffer[0][3] =   data[86]; buffer[0][4] =   data[87]; buffer[0][5] =   data[88]; buffer[0][6] =   data[96]; buffer[0][7] =   data[97]; buffer[0][8] =   data[98];

        }
        if (partition ==  88) {
            buffer[0][0] =   data[77]; buffer[0][1] =   data[78]; buffer[0][2] =   data[79]; buffer[0][3] =   data[87]; buffer[0][4] =   data[88]; buffer[0][5] =   data[89]; buffer[0][6] =   data[97]; buffer[0][7] =   data[98]; buffer[0][8] =   data[99];

        }
        if (partition ==  89) {
            buffer[0][0] =   data[78]; buffer[0][1] =   data[79]; buffer[0][2] =          0; buffer[0][3] =   data[88]; buffer[0][4] =   data[89]; buffer[0][5] =          0; buffer[0][6] =   data[98]; buffer[0][7] =   data[99]; buffer[0][8] =          0;

        }
        if (partition ==  90) {
            buffer[0][0] =          0; buffer[0][1] =   data[80]; buffer[0][2] =   data[81]; buffer[0][3] =          0; buffer[0][4] =   data[90]; buffer[0][5] =   data[91]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  91) {
            buffer[0][0] =   data[80]; buffer[0][1] =   data[81]; buffer[0][2] =   data[82]; buffer[0][3] =   data[90]; buffer[0][4] =   data[91]; buffer[0][5] =   data[92]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  92) {
            buffer[0][0] =   data[81]; buffer[0][1] =   data[82]; buffer[0][2] =   data[83]; buffer[0][3] =   data[91]; buffer[0][4] =   data[92]; buffer[0][5] =   data[93]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  93) {
            buffer[0][0] =   data[82]; buffer[0][1] =   data[83]; buffer[0][2] =   data[84]; buffer[0][3] =   data[92]; buffer[0][4] =   data[93]; buffer[0][5] =   data[94]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  94) {
            buffer[0][0] =   data[83]; buffer[0][1] =   data[84]; buffer[0][2] =   data[85]; buffer[0][3] =   data[93]; buffer[0][4] =   data[94]; buffer[0][5] =   data[95]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  95) {
            buffer[0][0] =   data[84]; buffer[0][1] =   data[85]; buffer[0][2] =   data[86]; buffer[0][3] =   data[94]; buffer[0][4] =   data[95]; buffer[0][5] =   data[96]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  96) {
            buffer[0][0] =   data[85]; buffer[0][1] =   data[86]; buffer[0][2] =   data[87]; buffer[0][3] =   data[95]; buffer[0][4] =   data[96]; buffer[0][5] =   data[97]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  97) {
            buffer[0][0] =   data[86]; buffer[0][1] =   data[87]; buffer[0][2] =   data[88]; buffer[0][3] =   data[96]; buffer[0][4] =   data[97]; buffer[0][5] =   data[98]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  98) {
            buffer[0][0] =   data[87]; buffer[0][1] =   data[88]; buffer[0][2] =   data[89]; buffer[0][3] =   data[97]; buffer[0][4] =   data[98]; buffer[0][5] =   data[99]; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
        if (partition ==  99) {
            buffer[0][0] =   data[88]; buffer[0][1] =   data[89]; buffer[0][2] =          0; buffer[0][3] =   data[98]; buffer[0][4] =   data[99]; buffer[0][5] =          0; buffer[0][6] =          0; buffer[0][7] =          0; buffer[0][8] =          0;

        }
    }
};

} // namespace nnet

#endif
