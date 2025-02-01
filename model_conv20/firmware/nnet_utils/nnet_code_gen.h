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
            buffer[1][0] =          0; buffer[1][1] =          0; buffer[1][2] =          0; buffer[1][3] =    data[0]; buffer[1][4] =    data[1]; buffer[1][5] =    data[2]; buffer[1][6] =   data[10]; buffer[1][7] =   data[11]; buffer[1][8] =   data[12];
            buffer[2][0] =          0; buffer[2][1] =          0; buffer[2][2] =          0; buffer[2][3] =    data[1]; buffer[2][4] =    data[2]; buffer[2][5] =    data[3]; buffer[2][6] =   data[11]; buffer[2][7] =   data[12]; buffer[2][8] =   data[13];
            buffer[3][0] =          0; buffer[3][1] =          0; buffer[3][2] =          0; buffer[3][3] =    data[2]; buffer[3][4] =    data[3]; buffer[3][5] =    data[4]; buffer[3][6] =   data[12]; buffer[3][7] =   data[13]; buffer[3][8] =   data[14];
            buffer[4][0] =          0; buffer[4][1] =          0; buffer[4][2] =          0; buffer[4][3] =    data[3]; buffer[4][4] =    data[4]; buffer[4][5] =    data[5]; buffer[4][6] =   data[13]; buffer[4][7] =   data[14]; buffer[4][8] =   data[15];
            buffer[5][0] =          0; buffer[5][1] =          0; buffer[5][2] =          0; buffer[5][3] =    data[4]; buffer[5][4] =    data[5]; buffer[5][5] =    data[6]; buffer[5][6] =   data[14]; buffer[5][7] =   data[15]; buffer[5][8] =   data[16];
            buffer[6][0] =          0; buffer[6][1] =          0; buffer[6][2] =          0; buffer[6][3] =    data[5]; buffer[6][4] =    data[6]; buffer[6][5] =    data[7]; buffer[6][6] =   data[15]; buffer[6][7] =   data[16]; buffer[6][8] =   data[17];
            buffer[7][0] =          0; buffer[7][1] =          0; buffer[7][2] =          0; buffer[7][3] =    data[6]; buffer[7][4] =    data[7]; buffer[7][5] =    data[8]; buffer[7][6] =   data[16]; buffer[7][7] =   data[17]; buffer[7][8] =   data[18];
            buffer[8][0] =          0; buffer[8][1] =          0; buffer[8][2] =          0; buffer[8][3] =    data[7]; buffer[8][4] =    data[8]; buffer[8][5] =    data[9]; buffer[8][6] =   data[17]; buffer[8][7] =   data[18]; buffer[8][8] =   data[19];
            buffer[9][0] =          0; buffer[9][1] =          0; buffer[9][2] =          0; buffer[9][3] =    data[8]; buffer[9][4] =    data[9]; buffer[9][5] =          0; buffer[9][6] =   data[18]; buffer[9][7] =   data[19]; buffer[9][8] =          0;
            buffer[10][0] =          0; buffer[10][1] =    data[0]; buffer[10][2] =    data[1]; buffer[10][3] =          0; buffer[10][4] =   data[10]; buffer[10][5] =   data[11]; buffer[10][6] =          0; buffer[10][7] =   data[20]; buffer[10][8] =   data[21];
            buffer[11][0] =    data[0]; buffer[11][1] =    data[1]; buffer[11][2] =    data[2]; buffer[11][3] =   data[10]; buffer[11][4] =   data[11]; buffer[11][5] =   data[12]; buffer[11][6] =   data[20]; buffer[11][7] =   data[21]; buffer[11][8] =   data[22];
            buffer[12][0] =    data[1]; buffer[12][1] =    data[2]; buffer[12][2] =    data[3]; buffer[12][3] =   data[11]; buffer[12][4] =   data[12]; buffer[12][5] =   data[13]; buffer[12][6] =   data[21]; buffer[12][7] =   data[22]; buffer[12][8] =   data[23];
            buffer[13][0] =    data[2]; buffer[13][1] =    data[3]; buffer[13][2] =    data[4]; buffer[13][3] =   data[12]; buffer[13][4] =   data[13]; buffer[13][5] =   data[14]; buffer[13][6] =   data[22]; buffer[13][7] =   data[23]; buffer[13][8] =   data[24];
            buffer[14][0] =    data[3]; buffer[14][1] =    data[4]; buffer[14][2] =    data[5]; buffer[14][3] =   data[13]; buffer[14][4] =   data[14]; buffer[14][5] =   data[15]; buffer[14][6] =   data[23]; buffer[14][7] =   data[24]; buffer[14][8] =   data[25];
            buffer[15][0] =    data[4]; buffer[15][1] =    data[5]; buffer[15][2] =    data[6]; buffer[15][3] =   data[14]; buffer[15][4] =   data[15]; buffer[15][5] =   data[16]; buffer[15][6] =   data[24]; buffer[15][7] =   data[25]; buffer[15][8] =   data[26];
            buffer[16][0] =    data[5]; buffer[16][1] =    data[6]; buffer[16][2] =    data[7]; buffer[16][3] =   data[15]; buffer[16][4] =   data[16]; buffer[16][5] =   data[17]; buffer[16][6] =   data[25]; buffer[16][7] =   data[26]; buffer[16][8] =   data[27];
            buffer[17][0] =    data[6]; buffer[17][1] =    data[7]; buffer[17][2] =    data[8]; buffer[17][3] =   data[16]; buffer[17][4] =   data[17]; buffer[17][5] =   data[18]; buffer[17][6] =   data[26]; buffer[17][7] =   data[27]; buffer[17][8] =   data[28];
            buffer[18][0] =    data[7]; buffer[18][1] =    data[8]; buffer[18][2] =    data[9]; buffer[18][3] =   data[17]; buffer[18][4] =   data[18]; buffer[18][5] =   data[19]; buffer[18][6] =   data[27]; buffer[18][7] =   data[28]; buffer[18][8] =   data[29];
            buffer[19][0] =    data[8]; buffer[19][1] =    data[9]; buffer[19][2] =          0; buffer[19][3] =   data[18]; buffer[19][4] =   data[19]; buffer[19][5] =          0; buffer[19][6] =   data[28]; buffer[19][7] =   data[29]; buffer[19][8] =          0;

        }
        if (partition ==   1) {
            buffer[0][0] =          0; buffer[0][1] =   data[10]; buffer[0][2] =   data[11]; buffer[0][3] =          0; buffer[0][4] =   data[20]; buffer[0][5] =   data[21]; buffer[0][6] =          0; buffer[0][7] =   data[30]; buffer[0][8] =   data[31];
            buffer[1][0] =   data[10]; buffer[1][1] =   data[11]; buffer[1][2] =   data[12]; buffer[1][3] =   data[20]; buffer[1][4] =   data[21]; buffer[1][5] =   data[22]; buffer[1][6] =   data[30]; buffer[1][7] =   data[31]; buffer[1][8] =   data[32];
            buffer[2][0] =   data[11]; buffer[2][1] =   data[12]; buffer[2][2] =   data[13]; buffer[2][3] =   data[21]; buffer[2][4] =   data[22]; buffer[2][5] =   data[23]; buffer[2][6] =   data[31]; buffer[2][7] =   data[32]; buffer[2][8] =   data[33];
            buffer[3][0] =   data[12]; buffer[3][1] =   data[13]; buffer[3][2] =   data[14]; buffer[3][3] =   data[22]; buffer[3][4] =   data[23]; buffer[3][5] =   data[24]; buffer[3][6] =   data[32]; buffer[3][7] =   data[33]; buffer[3][8] =   data[34];
            buffer[4][0] =   data[13]; buffer[4][1] =   data[14]; buffer[4][2] =   data[15]; buffer[4][3] =   data[23]; buffer[4][4] =   data[24]; buffer[4][5] =   data[25]; buffer[4][6] =   data[33]; buffer[4][7] =   data[34]; buffer[4][8] =   data[35];
            buffer[5][0] =   data[14]; buffer[5][1] =   data[15]; buffer[5][2] =   data[16]; buffer[5][3] =   data[24]; buffer[5][4] =   data[25]; buffer[5][5] =   data[26]; buffer[5][6] =   data[34]; buffer[5][7] =   data[35]; buffer[5][8] =   data[36];
            buffer[6][0] =   data[15]; buffer[6][1] =   data[16]; buffer[6][2] =   data[17]; buffer[6][3] =   data[25]; buffer[6][4] =   data[26]; buffer[6][5] =   data[27]; buffer[6][6] =   data[35]; buffer[6][7] =   data[36]; buffer[6][8] =   data[37];
            buffer[7][0] =   data[16]; buffer[7][1] =   data[17]; buffer[7][2] =   data[18]; buffer[7][3] =   data[26]; buffer[7][4] =   data[27]; buffer[7][5] =   data[28]; buffer[7][6] =   data[36]; buffer[7][7] =   data[37]; buffer[7][8] =   data[38];
            buffer[8][0] =   data[17]; buffer[8][1] =   data[18]; buffer[8][2] =   data[19]; buffer[8][3] =   data[27]; buffer[8][4] =   data[28]; buffer[8][5] =   data[29]; buffer[8][6] =   data[37]; buffer[8][7] =   data[38]; buffer[8][8] =   data[39];
            buffer[9][0] =   data[18]; buffer[9][1] =   data[19]; buffer[9][2] =          0; buffer[9][3] =   data[28]; buffer[9][4] =   data[29]; buffer[9][5] =          0; buffer[9][6] =   data[38]; buffer[9][7] =   data[39]; buffer[9][8] =          0;
            buffer[10][0] =          0; buffer[10][1] =   data[20]; buffer[10][2] =   data[21]; buffer[10][3] =          0; buffer[10][4] =   data[30]; buffer[10][5] =   data[31]; buffer[10][6] =          0; buffer[10][7] =   data[40]; buffer[10][8] =   data[41];
            buffer[11][0] =   data[20]; buffer[11][1] =   data[21]; buffer[11][2] =   data[22]; buffer[11][3] =   data[30]; buffer[11][4] =   data[31]; buffer[11][5] =   data[32]; buffer[11][6] =   data[40]; buffer[11][7] =   data[41]; buffer[11][8] =   data[42];
            buffer[12][0] =   data[21]; buffer[12][1] =   data[22]; buffer[12][2] =   data[23]; buffer[12][3] =   data[31]; buffer[12][4] =   data[32]; buffer[12][5] =   data[33]; buffer[12][6] =   data[41]; buffer[12][7] =   data[42]; buffer[12][8] =   data[43];
            buffer[13][0] =   data[22]; buffer[13][1] =   data[23]; buffer[13][2] =   data[24]; buffer[13][3] =   data[32]; buffer[13][4] =   data[33]; buffer[13][5] =   data[34]; buffer[13][6] =   data[42]; buffer[13][7] =   data[43]; buffer[13][8] =   data[44];
            buffer[14][0] =   data[23]; buffer[14][1] =   data[24]; buffer[14][2] =   data[25]; buffer[14][3] =   data[33]; buffer[14][4] =   data[34]; buffer[14][5] =   data[35]; buffer[14][6] =   data[43]; buffer[14][7] =   data[44]; buffer[14][8] =   data[45];
            buffer[15][0] =   data[24]; buffer[15][1] =   data[25]; buffer[15][2] =   data[26]; buffer[15][3] =   data[34]; buffer[15][4] =   data[35]; buffer[15][5] =   data[36]; buffer[15][6] =   data[44]; buffer[15][7] =   data[45]; buffer[15][8] =   data[46];
            buffer[16][0] =   data[25]; buffer[16][1] =   data[26]; buffer[16][2] =   data[27]; buffer[16][3] =   data[35]; buffer[16][4] =   data[36]; buffer[16][5] =   data[37]; buffer[16][6] =   data[45]; buffer[16][7] =   data[46]; buffer[16][8] =   data[47];
            buffer[17][0] =   data[26]; buffer[17][1] =   data[27]; buffer[17][2] =   data[28]; buffer[17][3] =   data[36]; buffer[17][4] =   data[37]; buffer[17][5] =   data[38]; buffer[17][6] =   data[46]; buffer[17][7] =   data[47]; buffer[17][8] =   data[48];
            buffer[18][0] =   data[27]; buffer[18][1] =   data[28]; buffer[18][2] =   data[29]; buffer[18][3] =   data[37]; buffer[18][4] =   data[38]; buffer[18][5] =   data[39]; buffer[18][6] =   data[47]; buffer[18][7] =   data[48]; buffer[18][8] =   data[49];
            buffer[19][0] =   data[28]; buffer[19][1] =   data[29]; buffer[19][2] =          0; buffer[19][3] =   data[38]; buffer[19][4] =   data[39]; buffer[19][5] =          0; buffer[19][6] =   data[48]; buffer[19][7] =   data[49]; buffer[19][8] =          0;

        }
        if (partition ==   2) {
            buffer[0][0] =          0; buffer[0][1] =   data[30]; buffer[0][2] =   data[31]; buffer[0][3] =          0; buffer[0][4] =   data[40]; buffer[0][5] =   data[41]; buffer[0][6] =          0; buffer[0][7] =   data[50]; buffer[0][8] =   data[51];
            buffer[1][0] =   data[30]; buffer[1][1] =   data[31]; buffer[1][2] =   data[32]; buffer[1][3] =   data[40]; buffer[1][4] =   data[41]; buffer[1][5] =   data[42]; buffer[1][6] =   data[50]; buffer[1][7] =   data[51]; buffer[1][8] =   data[52];
            buffer[2][0] =   data[31]; buffer[2][1] =   data[32]; buffer[2][2] =   data[33]; buffer[2][3] =   data[41]; buffer[2][4] =   data[42]; buffer[2][5] =   data[43]; buffer[2][6] =   data[51]; buffer[2][7] =   data[52]; buffer[2][8] =   data[53];
            buffer[3][0] =   data[32]; buffer[3][1] =   data[33]; buffer[3][2] =   data[34]; buffer[3][3] =   data[42]; buffer[3][4] =   data[43]; buffer[3][5] =   data[44]; buffer[3][6] =   data[52]; buffer[3][7] =   data[53]; buffer[3][8] =   data[54];
            buffer[4][0] =   data[33]; buffer[4][1] =   data[34]; buffer[4][2] =   data[35]; buffer[4][3] =   data[43]; buffer[4][4] =   data[44]; buffer[4][5] =   data[45]; buffer[4][6] =   data[53]; buffer[4][7] =   data[54]; buffer[4][8] =   data[55];
            buffer[5][0] =   data[34]; buffer[5][1] =   data[35]; buffer[5][2] =   data[36]; buffer[5][3] =   data[44]; buffer[5][4] =   data[45]; buffer[5][5] =   data[46]; buffer[5][6] =   data[54]; buffer[5][7] =   data[55]; buffer[5][8] =   data[56];
            buffer[6][0] =   data[35]; buffer[6][1] =   data[36]; buffer[6][2] =   data[37]; buffer[6][3] =   data[45]; buffer[6][4] =   data[46]; buffer[6][5] =   data[47]; buffer[6][6] =   data[55]; buffer[6][7] =   data[56]; buffer[6][8] =   data[57];
            buffer[7][0] =   data[36]; buffer[7][1] =   data[37]; buffer[7][2] =   data[38]; buffer[7][3] =   data[46]; buffer[7][4] =   data[47]; buffer[7][5] =   data[48]; buffer[7][6] =   data[56]; buffer[7][7] =   data[57]; buffer[7][8] =   data[58];
            buffer[8][0] =   data[37]; buffer[8][1] =   data[38]; buffer[8][2] =   data[39]; buffer[8][3] =   data[47]; buffer[8][4] =   data[48]; buffer[8][5] =   data[49]; buffer[8][6] =   data[57]; buffer[8][7] =   data[58]; buffer[8][8] =   data[59];
            buffer[9][0] =   data[38]; buffer[9][1] =   data[39]; buffer[9][2] =          0; buffer[9][3] =   data[48]; buffer[9][4] =   data[49]; buffer[9][5] =          0; buffer[9][6] =   data[58]; buffer[9][7] =   data[59]; buffer[9][8] =          0;
            buffer[10][0] =          0; buffer[10][1] =   data[40]; buffer[10][2] =   data[41]; buffer[10][3] =          0; buffer[10][4] =   data[50]; buffer[10][5] =   data[51]; buffer[10][6] =          0; buffer[10][7] =   data[60]; buffer[10][8] =   data[61];
            buffer[11][0] =   data[40]; buffer[11][1] =   data[41]; buffer[11][2] =   data[42]; buffer[11][3] =   data[50]; buffer[11][4] =   data[51]; buffer[11][5] =   data[52]; buffer[11][6] =   data[60]; buffer[11][7] =   data[61]; buffer[11][8] =   data[62];
            buffer[12][0] =   data[41]; buffer[12][1] =   data[42]; buffer[12][2] =   data[43]; buffer[12][3] =   data[51]; buffer[12][4] =   data[52]; buffer[12][5] =   data[53]; buffer[12][6] =   data[61]; buffer[12][7] =   data[62]; buffer[12][8] =   data[63];
            buffer[13][0] =   data[42]; buffer[13][1] =   data[43]; buffer[13][2] =   data[44]; buffer[13][3] =   data[52]; buffer[13][4] =   data[53]; buffer[13][5] =   data[54]; buffer[13][6] =   data[62]; buffer[13][7] =   data[63]; buffer[13][8] =   data[64];
            buffer[14][0] =   data[43]; buffer[14][1] =   data[44]; buffer[14][2] =   data[45]; buffer[14][3] =   data[53]; buffer[14][4] =   data[54]; buffer[14][5] =   data[55]; buffer[14][6] =   data[63]; buffer[14][7] =   data[64]; buffer[14][8] =   data[65];
            buffer[15][0] =   data[44]; buffer[15][1] =   data[45]; buffer[15][2] =   data[46]; buffer[15][3] =   data[54]; buffer[15][4] =   data[55]; buffer[15][5] =   data[56]; buffer[15][6] =   data[64]; buffer[15][7] =   data[65]; buffer[15][8] =   data[66];
            buffer[16][0] =   data[45]; buffer[16][1] =   data[46]; buffer[16][2] =   data[47]; buffer[16][3] =   data[55]; buffer[16][4] =   data[56]; buffer[16][5] =   data[57]; buffer[16][6] =   data[65]; buffer[16][7] =   data[66]; buffer[16][8] =   data[67];
            buffer[17][0] =   data[46]; buffer[17][1] =   data[47]; buffer[17][2] =   data[48]; buffer[17][3] =   data[56]; buffer[17][4] =   data[57]; buffer[17][5] =   data[58]; buffer[17][6] =   data[66]; buffer[17][7] =   data[67]; buffer[17][8] =   data[68];
            buffer[18][0] =   data[47]; buffer[18][1] =   data[48]; buffer[18][2] =   data[49]; buffer[18][3] =   data[57]; buffer[18][4] =   data[58]; buffer[18][5] =   data[59]; buffer[18][6] =   data[67]; buffer[18][7] =   data[68]; buffer[18][8] =   data[69];
            buffer[19][0] =   data[48]; buffer[19][1] =   data[49]; buffer[19][2] =          0; buffer[19][3] =   data[58]; buffer[19][4] =   data[59]; buffer[19][5] =          0; buffer[19][6] =   data[68]; buffer[19][7] =   data[69]; buffer[19][8] =          0;

        }
        if (partition ==   3) {
            buffer[0][0] =          0; buffer[0][1] =   data[50]; buffer[0][2] =   data[51]; buffer[0][3] =          0; buffer[0][4] =   data[60]; buffer[0][5] =   data[61]; buffer[0][6] =          0; buffer[0][7] =   data[70]; buffer[0][8] =   data[71];
            buffer[1][0] =   data[50]; buffer[1][1] =   data[51]; buffer[1][2] =   data[52]; buffer[1][3] =   data[60]; buffer[1][4] =   data[61]; buffer[1][5] =   data[62]; buffer[1][6] =   data[70]; buffer[1][7] =   data[71]; buffer[1][8] =   data[72];
            buffer[2][0] =   data[51]; buffer[2][1] =   data[52]; buffer[2][2] =   data[53]; buffer[2][3] =   data[61]; buffer[2][4] =   data[62]; buffer[2][5] =   data[63]; buffer[2][6] =   data[71]; buffer[2][7] =   data[72]; buffer[2][8] =   data[73];
            buffer[3][0] =   data[52]; buffer[3][1] =   data[53]; buffer[3][2] =   data[54]; buffer[3][3] =   data[62]; buffer[3][4] =   data[63]; buffer[3][5] =   data[64]; buffer[3][6] =   data[72]; buffer[3][7] =   data[73]; buffer[3][8] =   data[74];
            buffer[4][0] =   data[53]; buffer[4][1] =   data[54]; buffer[4][2] =   data[55]; buffer[4][3] =   data[63]; buffer[4][4] =   data[64]; buffer[4][5] =   data[65]; buffer[4][6] =   data[73]; buffer[4][7] =   data[74]; buffer[4][8] =   data[75];
            buffer[5][0] =   data[54]; buffer[5][1] =   data[55]; buffer[5][2] =   data[56]; buffer[5][3] =   data[64]; buffer[5][4] =   data[65]; buffer[5][5] =   data[66]; buffer[5][6] =   data[74]; buffer[5][7] =   data[75]; buffer[5][8] =   data[76];
            buffer[6][0] =   data[55]; buffer[6][1] =   data[56]; buffer[6][2] =   data[57]; buffer[6][3] =   data[65]; buffer[6][4] =   data[66]; buffer[6][5] =   data[67]; buffer[6][6] =   data[75]; buffer[6][7] =   data[76]; buffer[6][8] =   data[77];
            buffer[7][0] =   data[56]; buffer[7][1] =   data[57]; buffer[7][2] =   data[58]; buffer[7][3] =   data[66]; buffer[7][4] =   data[67]; buffer[7][5] =   data[68]; buffer[7][6] =   data[76]; buffer[7][7] =   data[77]; buffer[7][8] =   data[78];
            buffer[8][0] =   data[57]; buffer[8][1] =   data[58]; buffer[8][2] =   data[59]; buffer[8][3] =   data[67]; buffer[8][4] =   data[68]; buffer[8][5] =   data[69]; buffer[8][6] =   data[77]; buffer[8][7] =   data[78]; buffer[8][8] =   data[79];
            buffer[9][0] =   data[58]; buffer[9][1] =   data[59]; buffer[9][2] =          0; buffer[9][3] =   data[68]; buffer[9][4] =   data[69]; buffer[9][5] =          0; buffer[9][6] =   data[78]; buffer[9][7] =   data[79]; buffer[9][8] =          0;
            buffer[10][0] =          0; buffer[10][1] =   data[60]; buffer[10][2] =   data[61]; buffer[10][3] =          0; buffer[10][4] =   data[70]; buffer[10][5] =   data[71]; buffer[10][6] =          0; buffer[10][7] =   data[80]; buffer[10][8] =   data[81];
            buffer[11][0] =   data[60]; buffer[11][1] =   data[61]; buffer[11][2] =   data[62]; buffer[11][3] =   data[70]; buffer[11][4] =   data[71]; buffer[11][5] =   data[72]; buffer[11][6] =   data[80]; buffer[11][7] =   data[81]; buffer[11][8] =   data[82];
            buffer[12][0] =   data[61]; buffer[12][1] =   data[62]; buffer[12][2] =   data[63]; buffer[12][3] =   data[71]; buffer[12][4] =   data[72]; buffer[12][5] =   data[73]; buffer[12][6] =   data[81]; buffer[12][7] =   data[82]; buffer[12][8] =   data[83];
            buffer[13][0] =   data[62]; buffer[13][1] =   data[63]; buffer[13][2] =   data[64]; buffer[13][3] =   data[72]; buffer[13][4] =   data[73]; buffer[13][5] =   data[74]; buffer[13][6] =   data[82]; buffer[13][7] =   data[83]; buffer[13][8] =   data[84];
            buffer[14][0] =   data[63]; buffer[14][1] =   data[64]; buffer[14][2] =   data[65]; buffer[14][3] =   data[73]; buffer[14][4] =   data[74]; buffer[14][5] =   data[75]; buffer[14][6] =   data[83]; buffer[14][7] =   data[84]; buffer[14][8] =   data[85];
            buffer[15][0] =   data[64]; buffer[15][1] =   data[65]; buffer[15][2] =   data[66]; buffer[15][3] =   data[74]; buffer[15][4] =   data[75]; buffer[15][5] =   data[76]; buffer[15][6] =   data[84]; buffer[15][7] =   data[85]; buffer[15][8] =   data[86];
            buffer[16][0] =   data[65]; buffer[16][1] =   data[66]; buffer[16][2] =   data[67]; buffer[16][3] =   data[75]; buffer[16][4] =   data[76]; buffer[16][5] =   data[77]; buffer[16][6] =   data[85]; buffer[16][7] =   data[86]; buffer[16][8] =   data[87];
            buffer[17][0] =   data[66]; buffer[17][1] =   data[67]; buffer[17][2] =   data[68]; buffer[17][3] =   data[76]; buffer[17][4] =   data[77]; buffer[17][5] =   data[78]; buffer[17][6] =   data[86]; buffer[17][7] =   data[87]; buffer[17][8] =   data[88];
            buffer[18][0] =   data[67]; buffer[18][1] =   data[68]; buffer[18][2] =   data[69]; buffer[18][3] =   data[77]; buffer[18][4] =   data[78]; buffer[18][5] =   data[79]; buffer[18][6] =   data[87]; buffer[18][7] =   data[88]; buffer[18][8] =   data[89];
            buffer[19][0] =   data[68]; buffer[19][1] =   data[69]; buffer[19][2] =          0; buffer[19][3] =   data[78]; buffer[19][4] =   data[79]; buffer[19][5] =          0; buffer[19][6] =   data[88]; buffer[19][7] =   data[89]; buffer[19][8] =          0;

        }
        if (partition ==   4) {
            buffer[0][0] =          0; buffer[0][1] =   data[70]; buffer[0][2] =   data[71]; buffer[0][3] =          0; buffer[0][4] =   data[80]; buffer[0][5] =   data[81]; buffer[0][6] =          0; buffer[0][7] =   data[90]; buffer[0][8] =   data[91];
            buffer[1][0] =   data[70]; buffer[1][1] =   data[71]; buffer[1][2] =   data[72]; buffer[1][3] =   data[80]; buffer[1][4] =   data[81]; buffer[1][5] =   data[82]; buffer[1][6] =   data[90]; buffer[1][7] =   data[91]; buffer[1][8] =   data[92];
            buffer[2][0] =   data[71]; buffer[2][1] =   data[72]; buffer[2][2] =   data[73]; buffer[2][3] =   data[81]; buffer[2][4] =   data[82]; buffer[2][5] =   data[83]; buffer[2][6] =   data[91]; buffer[2][7] =   data[92]; buffer[2][8] =   data[93];
            buffer[3][0] =   data[72]; buffer[3][1] =   data[73]; buffer[3][2] =   data[74]; buffer[3][3] =   data[82]; buffer[3][4] =   data[83]; buffer[3][5] =   data[84]; buffer[3][6] =   data[92]; buffer[3][7] =   data[93]; buffer[3][8] =   data[94];
            buffer[4][0] =   data[73]; buffer[4][1] =   data[74]; buffer[4][2] =   data[75]; buffer[4][3] =   data[83]; buffer[4][4] =   data[84]; buffer[4][5] =   data[85]; buffer[4][6] =   data[93]; buffer[4][7] =   data[94]; buffer[4][8] =   data[95];
            buffer[5][0] =   data[74]; buffer[5][1] =   data[75]; buffer[5][2] =   data[76]; buffer[5][3] =   data[84]; buffer[5][4] =   data[85]; buffer[5][5] =   data[86]; buffer[5][6] =   data[94]; buffer[5][7] =   data[95]; buffer[5][8] =   data[96];
            buffer[6][0] =   data[75]; buffer[6][1] =   data[76]; buffer[6][2] =   data[77]; buffer[6][3] =   data[85]; buffer[6][4] =   data[86]; buffer[6][5] =   data[87]; buffer[6][6] =   data[95]; buffer[6][7] =   data[96]; buffer[6][8] =   data[97];
            buffer[7][0] =   data[76]; buffer[7][1] =   data[77]; buffer[7][2] =   data[78]; buffer[7][3] =   data[86]; buffer[7][4] =   data[87]; buffer[7][5] =   data[88]; buffer[7][6] =   data[96]; buffer[7][7] =   data[97]; buffer[7][8] =   data[98];
            buffer[8][0] =   data[77]; buffer[8][1] =   data[78]; buffer[8][2] =   data[79]; buffer[8][3] =   data[87]; buffer[8][4] =   data[88]; buffer[8][5] =   data[89]; buffer[8][6] =   data[97]; buffer[8][7] =   data[98]; buffer[8][8] =   data[99];
            buffer[9][0] =   data[78]; buffer[9][1] =   data[79]; buffer[9][2] =          0; buffer[9][3] =   data[88]; buffer[9][4] =   data[89]; buffer[9][5] =          0; buffer[9][6] =   data[98]; buffer[9][7] =   data[99]; buffer[9][8] =          0;
            buffer[10][0] =          0; buffer[10][1] =   data[80]; buffer[10][2] =   data[81]; buffer[10][3] =          0; buffer[10][4] =   data[90]; buffer[10][5] =   data[91]; buffer[10][6] =          0; buffer[10][7] =          0; buffer[10][8] =          0;
            buffer[11][0] =   data[80]; buffer[11][1] =   data[81]; buffer[11][2] =   data[82]; buffer[11][3] =   data[90]; buffer[11][4] =   data[91]; buffer[11][5] =   data[92]; buffer[11][6] =          0; buffer[11][7] =          0; buffer[11][8] =          0;
            buffer[12][0] =   data[81]; buffer[12][1] =   data[82]; buffer[12][2] =   data[83]; buffer[12][3] =   data[91]; buffer[12][4] =   data[92]; buffer[12][5] =   data[93]; buffer[12][6] =          0; buffer[12][7] =          0; buffer[12][8] =          0;
            buffer[13][0] =   data[82]; buffer[13][1] =   data[83]; buffer[13][2] =   data[84]; buffer[13][3] =   data[92]; buffer[13][4] =   data[93]; buffer[13][5] =   data[94]; buffer[13][6] =          0; buffer[13][7] =          0; buffer[13][8] =          0;
            buffer[14][0] =   data[83]; buffer[14][1] =   data[84]; buffer[14][2] =   data[85]; buffer[14][3] =   data[93]; buffer[14][4] =   data[94]; buffer[14][5] =   data[95]; buffer[14][6] =          0; buffer[14][7] =          0; buffer[14][8] =          0;
            buffer[15][0] =   data[84]; buffer[15][1] =   data[85]; buffer[15][2] =   data[86]; buffer[15][3] =   data[94]; buffer[15][4] =   data[95]; buffer[15][5] =   data[96]; buffer[15][6] =          0; buffer[15][7] =          0; buffer[15][8] =          0;
            buffer[16][0] =   data[85]; buffer[16][1] =   data[86]; buffer[16][2] =   data[87]; buffer[16][3] =   data[95]; buffer[16][4] =   data[96]; buffer[16][5] =   data[97]; buffer[16][6] =          0; buffer[16][7] =          0; buffer[16][8] =          0;
            buffer[17][0] =   data[86]; buffer[17][1] =   data[87]; buffer[17][2] =   data[88]; buffer[17][3] =   data[96]; buffer[17][4] =   data[97]; buffer[17][5] =   data[98]; buffer[17][6] =          0; buffer[17][7] =          0; buffer[17][8] =          0;
            buffer[18][0] =   data[87]; buffer[18][1] =   data[88]; buffer[18][2] =   data[89]; buffer[18][3] =   data[97]; buffer[18][4] =   data[98]; buffer[18][5] =   data[99]; buffer[18][6] =          0; buffer[18][7] =          0; buffer[18][8] =          0;
            buffer[19][0] =   data[88]; buffer[19][1] =   data[89]; buffer[19][2] =          0; buffer[19][3] =   data[98]; buffer[19][4] =   data[99]; buffer[19][5] =          0; buffer[19][6] =          0; buffer[19][7] =          0; buffer[19][8] =          0;

        }
    }
};

} // namespace nnet

#endif
