// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pool_op_ap_fixed_20_11_4_0_0_16_1_ap_fixed_16_6_5_3_0_s_HH_
#define _pool_op_ap_fixed_20_11_4_0_0_16_1_ap_fixed_16_6_5_3_0_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct pool_op_ap_fixed_20_11_4_0_0_16_1_ap_fixed_16_6_5_3_0_s : public sc_module {
    // Port declarations 18
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<9> > x_0_V_read;
    sc_in< sc_lv<9> > x_1_V_read;
    sc_in< sc_lv<9> > x_2_V_read;
    sc_in< sc_lv<9> > x_3_V_read;
    sc_in< sc_lv<9> > x_4_V_read;
    sc_in< sc_lv<9> > x_5_V_read;
    sc_in< sc_lv<9> > x_6_V_read;
    sc_in< sc_lv<9> > x_7_V_read;
    sc_in< sc_lv<9> > x_8_V_read;
    sc_in< sc_lv<9> > x_9_V_read;
    sc_in< sc_lv<9> > x_10_V_read;
    sc_in< sc_lv<9> > x_11_V_read;
    sc_in< sc_lv<9> > x_12_V_read;
    sc_in< sc_lv<9> > x_13_V_read;
    sc_in< sc_lv<9> > x_14_V_read;
    sc_in< sc_lv<9> > x_15_V_read;
    sc_out< sc_lv<10> > ap_return;


    // Module declarations
    pool_op_ap_fixed_20_11_4_0_0_16_1_ap_fixed_16_6_5_3_0_s(sc_module_name name);
    SC_HAS_PROCESS(pool_op_ap_fixed_20_11_4_0_0_16_1_ap_fixed_16_6_5_3_0_s);

    ~pool_op_ap_fixed_20_11_4_0_0_16_1_ap_fixed_16_6_5_3_0_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<10> > shl_ln_fu_140_p3;
    sc_signal< sc_lv<10> > shl_ln703_1_fu_152_p3;
    sc_signal< sc_lv<10> > shl_ln703_2_fu_164_p3;
    sc_signal< sc_lv<10> > shl_ln703_3_fu_176_p3;
    sc_signal< sc_lv<10> > shl_ln703_4_fu_188_p3;
    sc_signal< sc_lv<10> > shl_ln703_5_fu_200_p3;
    sc_signal< sc_lv<10> > shl_ln703_6_fu_212_p3;
    sc_signal< sc_lv<10> > shl_ln703_7_fu_224_p3;
    sc_signal< sc_lv<10> > shl_ln703_8_fu_236_p3;
    sc_signal< sc_lv<10> > shl_ln703_9_fu_248_p3;
    sc_signal< sc_lv<10> > shl_ln703_s_fu_260_p3;
    sc_signal< sc_lv<10> > shl_ln703_10_fu_272_p3;
    sc_signal< sc_lv<10> > shl_ln703_11_fu_284_p3;
    sc_signal< sc_lv<10> > shl_ln703_12_fu_296_p3;
    sc_signal< sc_lv<10> > shl_ln703_13_fu_308_p3;
    sc_signal< sc_lv<10> > shl_ln703_14_fu_320_p3;
    sc_signal< sc_lv<11> > zext_ln703_1_fu_160_p1;
    sc_signal< sc_lv<11> > zext_ln703_fu_148_p1;
    sc_signal< sc_lv<11> > add_ln703_fu_332_p2;
    sc_signal< sc_lv<11> > zext_ln703_3_fu_184_p1;
    sc_signal< sc_lv<11> > zext_ln703_2_fu_172_p1;
    sc_signal< sc_lv<11> > add_ln703_1_fu_342_p2;
    sc_signal< sc_lv<12> > zext_ln703_16_fu_338_p1;
    sc_signal< sc_lv<12> > zext_ln703_17_fu_348_p1;
    sc_signal< sc_lv<12> > add_ln703_2_fu_352_p2;
    sc_signal< sc_lv<11> > zext_ln703_5_fu_208_p1;
    sc_signal< sc_lv<11> > zext_ln703_4_fu_196_p1;
    sc_signal< sc_lv<11> > add_ln703_3_fu_362_p2;
    sc_signal< sc_lv<11> > zext_ln703_7_fu_232_p1;
    sc_signal< sc_lv<11> > zext_ln703_6_fu_220_p1;
    sc_signal< sc_lv<11> > add_ln703_4_fu_372_p2;
    sc_signal< sc_lv<12> > zext_ln703_19_fu_368_p1;
    sc_signal< sc_lv<12> > zext_ln703_20_fu_378_p1;
    sc_signal< sc_lv<12> > add_ln703_5_fu_382_p2;
    sc_signal< sc_lv<13> > zext_ln703_18_fu_358_p1;
    sc_signal< sc_lv<13> > zext_ln703_21_fu_388_p1;
    sc_signal< sc_lv<13> > add_ln703_6_fu_392_p2;
    sc_signal< sc_lv<11> > zext_ln703_9_fu_256_p1;
    sc_signal< sc_lv<11> > zext_ln703_8_fu_244_p1;
    sc_signal< sc_lv<11> > add_ln703_7_fu_402_p2;
    sc_signal< sc_lv<11> > zext_ln703_11_fu_280_p1;
    sc_signal< sc_lv<11> > zext_ln703_10_fu_268_p1;
    sc_signal< sc_lv<11> > add_ln703_8_fu_412_p2;
    sc_signal< sc_lv<12> > zext_ln703_23_fu_408_p1;
    sc_signal< sc_lv<12> > zext_ln703_24_fu_418_p1;
    sc_signal< sc_lv<12> > add_ln703_9_fu_422_p2;
    sc_signal< sc_lv<11> > zext_ln703_13_fu_304_p1;
    sc_signal< sc_lv<11> > zext_ln703_12_fu_292_p1;
    sc_signal< sc_lv<11> > add_ln703_10_fu_432_p2;
    sc_signal< sc_lv<11> > zext_ln703_15_fu_328_p1;
    sc_signal< sc_lv<11> > zext_ln703_14_fu_316_p1;
    sc_signal< sc_lv<11> > add_ln703_11_fu_442_p2;
    sc_signal< sc_lv<12> > zext_ln703_26_fu_438_p1;
    sc_signal< sc_lv<12> > zext_ln703_27_fu_448_p1;
    sc_signal< sc_lv<12> > add_ln703_12_fu_452_p2;
    sc_signal< sc_lv<13> > zext_ln703_25_fu_428_p1;
    sc_signal< sc_lv<13> > zext_ln703_28_fu_458_p1;
    sc_signal< sc_lv<13> > add_ln703_13_fu_462_p2;
    sc_signal< sc_lv<14> > zext_ln703_22_fu_398_p1;
    sc_signal< sc_lv<14> > zext_ln703_29_fu_468_p1;
    sc_signal< sc_lv<14> > add_ln703_14_fu_472_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_add_ln703_10_fu_432_p2();
    void thread_add_ln703_11_fu_442_p2();
    void thread_add_ln703_12_fu_452_p2();
    void thread_add_ln703_13_fu_462_p2();
    void thread_add_ln703_14_fu_472_p2();
    void thread_add_ln703_1_fu_342_p2();
    void thread_add_ln703_2_fu_352_p2();
    void thread_add_ln703_3_fu_362_p2();
    void thread_add_ln703_4_fu_372_p2();
    void thread_add_ln703_5_fu_382_p2();
    void thread_add_ln703_6_fu_392_p2();
    void thread_add_ln703_7_fu_402_p2();
    void thread_add_ln703_8_fu_412_p2();
    void thread_add_ln703_9_fu_422_p2();
    void thread_add_ln703_fu_332_p2();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_shl_ln703_10_fu_272_p3();
    void thread_shl_ln703_11_fu_284_p3();
    void thread_shl_ln703_12_fu_296_p3();
    void thread_shl_ln703_13_fu_308_p3();
    void thread_shl_ln703_14_fu_320_p3();
    void thread_shl_ln703_1_fu_152_p3();
    void thread_shl_ln703_2_fu_164_p3();
    void thread_shl_ln703_3_fu_176_p3();
    void thread_shl_ln703_4_fu_188_p3();
    void thread_shl_ln703_5_fu_200_p3();
    void thread_shl_ln703_6_fu_212_p3();
    void thread_shl_ln703_7_fu_224_p3();
    void thread_shl_ln703_8_fu_236_p3();
    void thread_shl_ln703_9_fu_248_p3();
    void thread_shl_ln703_s_fu_260_p3();
    void thread_shl_ln_fu_140_p3();
    void thread_zext_ln703_10_fu_268_p1();
    void thread_zext_ln703_11_fu_280_p1();
    void thread_zext_ln703_12_fu_292_p1();
    void thread_zext_ln703_13_fu_304_p1();
    void thread_zext_ln703_14_fu_316_p1();
    void thread_zext_ln703_15_fu_328_p1();
    void thread_zext_ln703_16_fu_338_p1();
    void thread_zext_ln703_17_fu_348_p1();
    void thread_zext_ln703_18_fu_358_p1();
    void thread_zext_ln703_19_fu_368_p1();
    void thread_zext_ln703_1_fu_160_p1();
    void thread_zext_ln703_20_fu_378_p1();
    void thread_zext_ln703_21_fu_388_p1();
    void thread_zext_ln703_22_fu_398_p1();
    void thread_zext_ln703_23_fu_408_p1();
    void thread_zext_ln703_24_fu_418_p1();
    void thread_zext_ln703_25_fu_428_p1();
    void thread_zext_ln703_26_fu_438_p1();
    void thread_zext_ln703_27_fu_448_p1();
    void thread_zext_ln703_28_fu_458_p1();
    void thread_zext_ln703_29_fu_468_p1();
    void thread_zext_ln703_2_fu_172_p1();
    void thread_zext_ln703_3_fu_184_p1();
    void thread_zext_ln703_4_fu_196_p1();
    void thread_zext_ln703_5_fu_208_p1();
    void thread_zext_ln703_6_fu_220_p1();
    void thread_zext_ln703_7_fu_232_p1();
    void thread_zext_ln703_8_fu_244_p1();
    void thread_zext_ln703_9_fu_256_p1();
    void thread_zext_ln703_fu_148_p1();
};

}

using namespace ap_rtl;

#endif
