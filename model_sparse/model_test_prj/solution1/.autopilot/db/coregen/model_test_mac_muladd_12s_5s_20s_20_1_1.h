// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2023.1 (64-bit)
// Tool Version Limit: 2023.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef __model_test_mac_muladd_12s_5s_20s_20_1_1__HH__
#define __model_test_mac_muladd_12s_5s_20s_20_1_1__HH__
#include "model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3.h"

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int dout_WIDTH>
SC_MODULE(model_test_mac_muladd_12s_5s_20s_20_1_1) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3 model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3_U;

    SC_CTOR(model_test_mac_muladd_12s_5s_20s_20_1_1):  model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3_U ("model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3_U") {
        model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3_U.in0(din0);
        model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3_U.in1(din1);
        model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3_U.in2(din2);
        model_test_mac_muladd_12s_5s_20s_20_1_1_DSP48_3_U.dout(dout);

    }

};

#endif //
