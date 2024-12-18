// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_HH_
#define _softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3.h"
#include "softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_invert_tbkb.h"

namespace ap_rtl {

struct softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s : public sc_module {
    // Port declarations 46
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<22> > data_V_data_0_V_dout;
    sc_in< sc_logic > data_V_data_0_V_empty_n;
    sc_out< sc_logic > data_V_data_0_V_read;
    sc_in< sc_lv<22> > data_V_data_1_V_dout;
    sc_in< sc_logic > data_V_data_1_V_empty_n;
    sc_out< sc_logic > data_V_data_1_V_read;
    sc_in< sc_lv<22> > data_V_data_2_V_dout;
    sc_in< sc_logic > data_V_data_2_V_empty_n;
    sc_out< sc_logic > data_V_data_2_V_read;
    sc_in< sc_lv<22> > data_V_data_3_V_dout;
    sc_in< sc_logic > data_V_data_3_V_empty_n;
    sc_out< sc_logic > data_V_data_3_V_read;
    sc_in< sc_lv<22> > data_V_data_4_V_dout;
    sc_in< sc_logic > data_V_data_4_V_empty_n;
    sc_out< sc_logic > data_V_data_4_V_read;
    sc_in< sc_logic > res_V_data_0_V_TREADY;
    sc_out< sc_lv<16> > res_V_data_0_V_TDATA;
    sc_out< sc_logic > res_V_data_0_V_TVALID;
    sc_out< sc_lv<16> > res_V_data_1_V_TDATA;
    sc_out< sc_logic > res_V_data_1_V_TVALID;
    sc_in< sc_logic > res_V_data_1_V_TREADY;
    sc_out< sc_lv<16> > res_V_data_2_V_TDATA;
    sc_out< sc_logic > res_V_data_2_V_TVALID;
    sc_in< sc_logic > res_V_data_2_V_TREADY;
    sc_out< sc_lv<16> > res_V_data_3_V_TDATA;
    sc_out< sc_logic > res_V_data_3_V_TVALID;
    sc_in< sc_logic > res_V_data_3_V_TREADY;
    sc_out< sc_lv<16> > res_V_data_4_V_TDATA;
    sc_out< sc_logic > res_V_data_4_V_TVALID;
    sc_in< sc_logic > res_V_data_4_V_TREADY;
    sc_out< sc_logic > data_V_data_0_V_blk_n;
    sc_out< sc_logic > data_V_data_1_V_blk_n;
    sc_out< sc_logic > data_V_data_2_V_blk_n;
    sc_out< sc_logic > data_V_data_3_V_blk_n;
    sc_out< sc_logic > data_V_data_4_V_blk_n;
    sc_out< sc_logic > res_V_data_0_V_TDATA_blk_n;
    sc_out< sc_logic > res_V_data_1_V_TDATA_blk_n;
    sc_out< sc_logic > res_V_data_2_V_TDATA_blk_n;
    sc_out< sc_logic > res_V_data_3_V_TDATA_blk_n;
    sc_out< sc_logic > res_V_data_4_V_TDATA_blk_n;


    // Module declarations
    softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s(sc_module_name name);
    SC_HAS_PROCESS(softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s);

    ~softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s();

    sc_trace_file* mVcdFile;

    softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_exp_table3* exp_table3_U;
    softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_invert_tbkb* invert_table4_U;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > io_acc_block_signal_op6;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > exp_table3_address0;
    sc_signal< sc_logic > exp_table3_ce0;
    sc_signal< sc_lv<17> > exp_table3_q0;
    sc_signal< sc_lv<10> > exp_table3_address1;
    sc_signal< sc_logic > exp_table3_ce1;
    sc_signal< sc_lv<17> > exp_table3_q1;
    sc_signal< sc_lv<10> > exp_table3_address2;
    sc_signal< sc_logic > exp_table3_ce2;
    sc_signal< sc_lv<17> > exp_table3_q2;
    sc_signal< sc_lv<10> > exp_table3_address3;
    sc_signal< sc_logic > exp_table3_ce3;
    sc_signal< sc_lv<17> > exp_table3_q3;
    sc_signal< sc_lv<10> > exp_table3_address4;
    sc_signal< sc_logic > exp_table3_ce4;
    sc_signal< sc_lv<17> > exp_table3_q4;
    sc_signal< sc_lv<10> > invert_table4_address0;
    sc_signal< sc_logic > invert_table4_ce0;
    sc_signal< sc_lv<18> > invert_table4_q0;
    sc_signal< sc_lv<22> > data_array_0_V_reg_1268;
    sc_signal< sc_lv<22> > data_array_1_V_reg_1273;
    sc_signal< sc_lv<22> > data_array_2_V_reg_1278;
    sc_signal< sc_lv<22> > data_array_3_V_reg_1283;
    sc_signal< sc_lv<22> > data_array_4_V_reg_1288;
    sc_signal< sc_lv<22> > select_ln65_2_fu_436_p3;
    sc_signal< sc_lv<22> > select_ln65_2_reg_1295;
    sc_signal< sc_lv<10> > y_V_4_fu_915_p3;
    sc_signal< sc_lv<10> > y_V_4_reg_1321;
    sc_signal< sc_lv<17> > exp_res_0_V_reg_1326;
    sc_signal< sc_lv<17> > exp_res_0_V_reg_1326_pp0_iter3_reg;
    sc_signal< sc_lv<17> > exp_res_1_V_reg_1331;
    sc_signal< sc_lv<17> > exp_res_1_V_reg_1331_pp0_iter3_reg;
    sc_signal< sc_lv<17> > exp_res_2_V_reg_1336;
    sc_signal< sc_lv<17> > exp_res_2_V_reg_1336_pp0_iter3_reg;
    sc_signal< sc_lv<17> > exp_res_3_V_reg_1341;
    sc_signal< sc_lv<17> > exp_res_3_V_reg_1341_pp0_iter3_reg;
    sc_signal< sc_lv<18> > p_Val2_16_fu_1069_p3;
    sc_signal< sc_lv<18> > p_Val2_16_reg_1351;
    sc_signal< sc_lv<17> > exp_res_4_V_reg_1357;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<64> > zext_ln225_fu_767_p1;
    sc_signal< sc_lv<64> > zext_ln225_1_fu_806_p1;
    sc_signal< sc_lv<64> > zext_ln225_2_fu_845_p1;
    sc_signal< sc_lv<64> > zext_ln225_3_fu_884_p1;
    sc_signal< sc_lv<64> > zext_ln225_4_fu_923_p1;
    sc_signal< sc_lv<64> > zext_ln235_fu_1179_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<18> > mul_ln1118_4_fu_271_p0;
    sc_signal< sc_lv<26> > sext_ln241_fu_1184_p1;
    sc_signal< sc_lv<17> > mul_ln1118_4_fu_271_p1;
    sc_signal< sc_lv<18> > mul_ln1118_fu_272_p0;
    sc_signal< sc_lv<17> > mul_ln1118_fu_272_p1;
    sc_signal< sc_lv<18> > mul_ln1118_3_fu_273_p0;
    sc_signal< sc_lv<17> > mul_ln1118_3_fu_273_p1;
    sc_signal< sc_lv<18> > mul_ln1118_2_fu_274_p0;
    sc_signal< sc_lv<17> > mul_ln1118_2_fu_274_p1;
    sc_signal< sc_lv<18> > mul_ln1118_1_fu_275_p0;
    sc_signal< sc_lv<17> > mul_ln1118_1_fu_275_p1;
    sc_signal< sc_lv<22> > icmp_ln1496_fu_402_p0;
    sc_signal< sc_lv<22> > icmp_ln1496_fu_402_p1;
    sc_signal< sc_lv<1> > icmp_ln1496_fu_402_p2;
    sc_signal< sc_lv<22> > select_ln65_fu_408_p1;
    sc_signal< sc_lv<22> > select_ln65_fu_408_p2;
    sc_signal< sc_lv<22> > icmp_ln1496_1_fu_416_p0;
    sc_signal< sc_lv<22> > icmp_ln1496_1_fu_416_p1;
    sc_signal< sc_lv<1> > icmp_ln1496_1_fu_416_p2;
    sc_signal< sc_lv<22> > select_ln65_1_fu_422_p1;
    sc_signal< sc_lv<22> > select_ln65_1_fu_422_p2;
    sc_signal< sc_lv<22> > select_ln65_fu_408_p3;
    sc_signal< sc_lv<22> > select_ln65_1_fu_422_p3;
    sc_signal< sc_lv<1> > icmp_ln1496_2_fu_430_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_3_fu_444_p2;
    sc_signal< sc_lv<22> > x_max_V_fu_448_p3;
    sc_signal< sc_lv<23> > sext_ln703_fu_454_p1;
    sc_signal< sc_lv<23> > sext_ln703_1_fu_457_p1;
    sc_signal< sc_lv<23> > sub_ln1193_fu_461_p2;
    sc_signal< sc_lv<1> > tmp_12_fu_475_p3;
    sc_signal< sc_lv<1> > tmp_11_fu_467_p3;
    sc_signal< sc_lv<1> > xor_ln786_fu_483_p2;
    sc_signal< sc_lv<1> > xor_ln340_fu_501_p2;
    sc_signal< sc_lv<23> > sext_ln703_2_fu_513_p1;
    sc_signal< sc_lv<23> > sub_ln1193_1_fu_516_p2;
    sc_signal< sc_lv<1> > tmp_14_fu_530_p3;
    sc_signal< sc_lv<1> > tmp_13_fu_522_p3;
    sc_signal< sc_lv<1> > xor_ln786_1_fu_538_p2;
    sc_signal< sc_lv<1> > xor_ln340_1_fu_556_p2;
    sc_signal< sc_lv<23> > sext_ln703_3_fu_568_p1;
    sc_signal< sc_lv<23> > sub_ln1193_2_fu_571_p2;
    sc_signal< sc_lv<1> > tmp_16_fu_585_p3;
    sc_signal< sc_lv<1> > tmp_15_fu_577_p3;
    sc_signal< sc_lv<1> > xor_ln786_2_fu_593_p2;
    sc_signal< sc_lv<1> > xor_ln340_2_fu_611_p2;
    sc_signal< sc_lv<23> > sext_ln703_4_fu_623_p1;
    sc_signal< sc_lv<23> > sub_ln1193_3_fu_626_p2;
    sc_signal< sc_lv<1> > tmp_18_fu_640_p3;
    sc_signal< sc_lv<1> > tmp_17_fu_632_p3;
    sc_signal< sc_lv<1> > xor_ln786_3_fu_648_p2;
    sc_signal< sc_lv<1> > xor_ln340_3_fu_666_p2;
    sc_signal< sc_lv<23> > sext_ln703_5_fu_678_p1;
    sc_signal< sc_lv<23> > sub_ln1193_4_fu_681_p2;
    sc_signal< sc_lv<1> > tmp_20_fu_695_p3;
    sc_signal< sc_lv<1> > tmp_19_fu_687_p3;
    sc_signal< sc_lv<1> > xor_ln786_4_fu_703_p2;
    sc_signal< sc_lv<1> > xor_ln340_4_fu_721_p2;
    sc_signal< sc_lv<1> > xor_ln340_5_fu_495_p2;
    sc_signal< sc_lv<10> > tmp_fu_733_p4;
    sc_signal< sc_lv<1> > and_ln786_fu_489_p2;
    sc_signal< sc_lv<1> > or_ln340_fu_507_p2;
    sc_signal< sc_lv<10> > select_ln340_fu_743_p3;
    sc_signal< sc_lv<10> > select_ln388_fu_751_p3;
    sc_signal< sc_lv<10> > y_V_fu_759_p3;
    sc_signal< sc_lv<1> > xor_ln340_6_fu_550_p2;
    sc_signal< sc_lv<10> > tmp_8_fu_772_p4;
    sc_signal< sc_lv<1> > and_ln786_1_fu_544_p2;
    sc_signal< sc_lv<1> > or_ln340_1_fu_562_p2;
    sc_signal< sc_lv<10> > select_ln340_2_fu_782_p3;
    sc_signal< sc_lv<10> > select_ln388_1_fu_790_p3;
    sc_signal< sc_lv<10> > y_V_1_fu_798_p3;
    sc_signal< sc_lv<1> > xor_ln340_7_fu_605_p2;
    sc_signal< sc_lv<10> > tmp_s_fu_811_p4;
    sc_signal< sc_lv<1> > and_ln786_2_fu_599_p2;
    sc_signal< sc_lv<1> > or_ln340_2_fu_617_p2;
    sc_signal< sc_lv<10> > select_ln340_4_fu_821_p3;
    sc_signal< sc_lv<10> > select_ln388_2_fu_829_p3;
    sc_signal< sc_lv<10> > y_V_2_fu_837_p3;
    sc_signal< sc_lv<1> > xor_ln340_8_fu_660_p2;
    sc_signal< sc_lv<10> > tmp_7_fu_850_p4;
    sc_signal< sc_lv<1> > and_ln786_3_fu_654_p2;
    sc_signal< sc_lv<1> > or_ln340_3_fu_672_p2;
    sc_signal< sc_lv<10> > select_ln340_6_fu_860_p3;
    sc_signal< sc_lv<10> > select_ln388_3_fu_868_p3;
    sc_signal< sc_lv<10> > y_V_3_fu_876_p3;
    sc_signal< sc_lv<1> > xor_ln340_9_fu_715_p2;
    sc_signal< sc_lv<10> > tmp_9_fu_889_p4;
    sc_signal< sc_lv<1> > and_ln786_4_fu_709_p2;
    sc_signal< sc_lv<1> > or_ln340_4_fu_727_p2;
    sc_signal< sc_lv<10> > select_ln340_8_fu_899_p3;
    sc_signal< sc_lv<10> > select_ln388_4_fu_907_p3;
    sc_signal< sc_lv<18> > p_Val2_6_fu_927_p1;
    sc_signal< sc_lv<18> > p_Val2_7_fu_931_p1;
    sc_signal< sc_lv<18> > p_Val2_8_fu_935_p2;
    sc_signal< sc_lv<1> > p_Result_s_fu_941_p3;
    sc_signal< sc_lv<18> > p_Val2_9_fu_957_p1;
    sc_signal< sc_lv<18> > p_Val2_10_fu_961_p1;
    sc_signal< sc_lv<18> > p_Val2_11_fu_965_p2;
    sc_signal< sc_lv<1> > p_Result_14_fu_971_p3;
    sc_signal< sc_lv<18> > p_Val2_12_fu_949_p3;
    sc_signal< sc_lv<18> > p_Val2_13_fu_979_p3;
    sc_signal< sc_lv<19> > rhs_V_fu_991_p1;
    sc_signal< sc_lv<19> > lhs_V_fu_987_p1;
    sc_signal< sc_lv<19> > ret_V_fu_995_p2;
    sc_signal< sc_lv<18> > p_Val2_15_fu_1009_p2;
    sc_signal< sc_lv<1> > p_Result_16_fu_1015_p3;
    sc_signal< sc_lv<1> > p_Result_15_fu_1001_p3;
    sc_signal< sc_lv<1> > xor_ln786_5_fu_1023_p2;
    sc_signal< sc_lv<1> > xor_ln340_11_fu_1041_p2;
    sc_signal< sc_lv<1> > xor_ln340_10_fu_1035_p2;
    sc_signal< sc_lv<1> > underflow_fu_1029_p2;
    sc_signal< sc_lv<1> > or_ln340_5_fu_1047_p2;
    sc_signal< sc_lv<18> > select_ln340_12_fu_1053_p3;
    sc_signal< sc_lv<18> > select_ln388_5_fu_1061_p3;
    sc_signal< sc_lv<19> > lhs_V_1_fu_1081_p1;
    sc_signal< sc_lv<19> > rhs_V_1_fu_1084_p1;
    sc_signal< sc_lv<19> > ret_V_1_fu_1088_p2;
    sc_signal< sc_lv<18> > p_Val2_17_fu_1077_p1;
    sc_signal< sc_lv<18> > p_Val2_19_fu_1102_p2;
    sc_signal< sc_lv<1> > p_Result_18_fu_1107_p3;
    sc_signal< sc_lv<1> > p_Result_17_fu_1094_p3;
    sc_signal< sc_lv<1> > xor_ln786_6_fu_1115_p2;
    sc_signal< sc_lv<1> > xor_ln340_13_fu_1133_p2;
    sc_signal< sc_lv<1> > xor_ln340_12_fu_1127_p2;
    sc_signal< sc_lv<10> > tmp_10_fu_1145_p4;
    sc_signal< sc_lv<1> > underflow_1_fu_1121_p2;
    sc_signal< sc_lv<1> > or_ln340_6_fu_1139_p2;
    sc_signal< sc_lv<10> > select_ln340_14_fu_1155_p3;
    sc_signal< sc_lv<10> > select_ln388_6_fu_1163_p3;
    sc_signal< sc_lv<10> > y_V_5_fu_1171_p3;
    sc_signal< sc_lv<26> > mul_ln1118_fu_272_p2;
    sc_signal< sc_lv<26> > mul_ln1118_1_fu_275_p2;
    sc_signal< sc_lv<26> > mul_ln1118_2_fu_274_p2;
    sc_signal< sc_lv<26> > mul_ln1118_3_fu_273_p2;
    sc_signal< sc_lv<26> > mul_ln1118_4_fu_271_p2;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to3;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<26> > mul_ln1118_1_fu_275_p10;
    sc_signal< sc_lv<26> > mul_ln1118_2_fu_274_p10;
    sc_signal< sc_lv<26> > mul_ln1118_3_fu_273_p10;
    sc_signal< sc_lv<26> > mul_ln1118_4_fu_271_p10;
    sc_signal< sc_lv<26> > mul_ln1118_fu_272_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<10> ap_const_lv10_1FF;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<18> ap_const_lv18_1FFFF;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<18> ap_const_lv18_20000;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_and_ln786_1_fu_544_p2();
    void thread_and_ln786_2_fu_599_p2();
    void thread_and_ln786_3_fu_654_p2();
    void thread_and_ln786_4_fu_709_p2();
    void thread_and_ln786_fu_489_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage0_iter4();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to3();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_data_V_data_0_V_blk_n();
    void thread_data_V_data_0_V_read();
    void thread_data_V_data_1_V_blk_n();
    void thread_data_V_data_1_V_read();
    void thread_data_V_data_2_V_blk_n();
    void thread_data_V_data_2_V_read();
    void thread_data_V_data_3_V_blk_n();
    void thread_data_V_data_3_V_read();
    void thread_data_V_data_4_V_blk_n();
    void thread_data_V_data_4_V_read();
    void thread_exp_table3_address0();
    void thread_exp_table3_address1();
    void thread_exp_table3_address2();
    void thread_exp_table3_address3();
    void thread_exp_table3_address4();
    void thread_exp_table3_ce0();
    void thread_exp_table3_ce1();
    void thread_exp_table3_ce2();
    void thread_exp_table3_ce3();
    void thread_exp_table3_ce4();
    void thread_icmp_ln1496_1_fu_416_p0();
    void thread_icmp_ln1496_1_fu_416_p1();
    void thread_icmp_ln1496_1_fu_416_p2();
    void thread_icmp_ln1496_2_fu_430_p2();
    void thread_icmp_ln1496_3_fu_444_p2();
    void thread_icmp_ln1496_fu_402_p0();
    void thread_icmp_ln1496_fu_402_p1();
    void thread_icmp_ln1496_fu_402_p2();
    void thread_invert_table4_address0();
    void thread_invert_table4_ce0();
    void thread_io_acc_block_signal_op6();
    void thread_lhs_V_1_fu_1081_p1();
    void thread_lhs_V_fu_987_p1();
    void thread_mul_ln1118_1_fu_275_p0();
    void thread_mul_ln1118_1_fu_275_p1();
    void thread_mul_ln1118_1_fu_275_p10();
    void thread_mul_ln1118_1_fu_275_p2();
    void thread_mul_ln1118_2_fu_274_p0();
    void thread_mul_ln1118_2_fu_274_p1();
    void thread_mul_ln1118_2_fu_274_p10();
    void thread_mul_ln1118_2_fu_274_p2();
    void thread_mul_ln1118_3_fu_273_p0();
    void thread_mul_ln1118_3_fu_273_p1();
    void thread_mul_ln1118_3_fu_273_p10();
    void thread_mul_ln1118_3_fu_273_p2();
    void thread_mul_ln1118_4_fu_271_p0();
    void thread_mul_ln1118_4_fu_271_p1();
    void thread_mul_ln1118_4_fu_271_p10();
    void thread_mul_ln1118_4_fu_271_p2();
    void thread_mul_ln1118_fu_272_p0();
    void thread_mul_ln1118_fu_272_p1();
    void thread_mul_ln1118_fu_272_p10();
    void thread_mul_ln1118_fu_272_p2();
    void thread_or_ln340_1_fu_562_p2();
    void thread_or_ln340_2_fu_617_p2();
    void thread_or_ln340_3_fu_672_p2();
    void thread_or_ln340_4_fu_727_p2();
    void thread_or_ln340_5_fu_1047_p2();
    void thread_or_ln340_6_fu_1139_p2();
    void thread_or_ln340_fu_507_p2();
    void thread_p_Result_14_fu_971_p3();
    void thread_p_Result_15_fu_1001_p3();
    void thread_p_Result_16_fu_1015_p3();
    void thread_p_Result_17_fu_1094_p3();
    void thread_p_Result_18_fu_1107_p3();
    void thread_p_Result_s_fu_941_p3();
    void thread_p_Val2_10_fu_961_p1();
    void thread_p_Val2_11_fu_965_p2();
    void thread_p_Val2_12_fu_949_p3();
    void thread_p_Val2_13_fu_979_p3();
    void thread_p_Val2_15_fu_1009_p2();
    void thread_p_Val2_16_fu_1069_p3();
    void thread_p_Val2_17_fu_1077_p1();
    void thread_p_Val2_19_fu_1102_p2();
    void thread_p_Val2_6_fu_927_p1();
    void thread_p_Val2_7_fu_931_p1();
    void thread_p_Val2_8_fu_935_p2();
    void thread_p_Val2_9_fu_957_p1();
    void thread_res_V_data_0_V_TDATA();
    void thread_res_V_data_0_V_TDATA_blk_n();
    void thread_res_V_data_0_V_TVALID();
    void thread_res_V_data_1_V_TDATA();
    void thread_res_V_data_1_V_TDATA_blk_n();
    void thread_res_V_data_1_V_TVALID();
    void thread_res_V_data_2_V_TDATA();
    void thread_res_V_data_2_V_TDATA_blk_n();
    void thread_res_V_data_2_V_TVALID();
    void thread_res_V_data_3_V_TDATA();
    void thread_res_V_data_3_V_TDATA_blk_n();
    void thread_res_V_data_3_V_TVALID();
    void thread_res_V_data_4_V_TDATA();
    void thread_res_V_data_4_V_TDATA_blk_n();
    void thread_res_V_data_4_V_TVALID();
    void thread_ret_V_1_fu_1088_p2();
    void thread_ret_V_fu_995_p2();
    void thread_rhs_V_1_fu_1084_p1();
    void thread_rhs_V_fu_991_p1();
    void thread_select_ln340_12_fu_1053_p3();
    void thread_select_ln340_14_fu_1155_p3();
    void thread_select_ln340_2_fu_782_p3();
    void thread_select_ln340_4_fu_821_p3();
    void thread_select_ln340_6_fu_860_p3();
    void thread_select_ln340_8_fu_899_p3();
    void thread_select_ln340_fu_743_p3();
    void thread_select_ln388_1_fu_790_p3();
    void thread_select_ln388_2_fu_829_p3();
    void thread_select_ln388_3_fu_868_p3();
    void thread_select_ln388_4_fu_907_p3();
    void thread_select_ln388_5_fu_1061_p3();
    void thread_select_ln388_6_fu_1163_p3();
    void thread_select_ln388_fu_751_p3();
    void thread_select_ln65_1_fu_422_p1();
    void thread_select_ln65_1_fu_422_p2();
    void thread_select_ln65_1_fu_422_p3();
    void thread_select_ln65_2_fu_436_p3();
    void thread_select_ln65_fu_408_p1();
    void thread_select_ln65_fu_408_p2();
    void thread_select_ln65_fu_408_p3();
    void thread_sext_ln241_fu_1184_p1();
    void thread_sext_ln703_1_fu_457_p1();
    void thread_sext_ln703_2_fu_513_p1();
    void thread_sext_ln703_3_fu_568_p1();
    void thread_sext_ln703_4_fu_623_p1();
    void thread_sext_ln703_5_fu_678_p1();
    void thread_sext_ln703_fu_454_p1();
    void thread_sub_ln1193_1_fu_516_p2();
    void thread_sub_ln1193_2_fu_571_p2();
    void thread_sub_ln1193_3_fu_626_p2();
    void thread_sub_ln1193_4_fu_681_p2();
    void thread_sub_ln1193_fu_461_p2();
    void thread_tmp_10_fu_1145_p4();
    void thread_tmp_11_fu_467_p3();
    void thread_tmp_12_fu_475_p3();
    void thread_tmp_13_fu_522_p3();
    void thread_tmp_14_fu_530_p3();
    void thread_tmp_15_fu_577_p3();
    void thread_tmp_16_fu_585_p3();
    void thread_tmp_17_fu_632_p3();
    void thread_tmp_18_fu_640_p3();
    void thread_tmp_19_fu_687_p3();
    void thread_tmp_20_fu_695_p3();
    void thread_tmp_7_fu_850_p4();
    void thread_tmp_8_fu_772_p4();
    void thread_tmp_9_fu_889_p4();
    void thread_tmp_fu_733_p4();
    void thread_tmp_s_fu_811_p4();
    void thread_underflow_1_fu_1121_p2();
    void thread_underflow_fu_1029_p2();
    void thread_x_max_V_fu_448_p3();
    void thread_xor_ln340_10_fu_1035_p2();
    void thread_xor_ln340_11_fu_1041_p2();
    void thread_xor_ln340_12_fu_1127_p2();
    void thread_xor_ln340_13_fu_1133_p2();
    void thread_xor_ln340_1_fu_556_p2();
    void thread_xor_ln340_2_fu_611_p2();
    void thread_xor_ln340_3_fu_666_p2();
    void thread_xor_ln340_4_fu_721_p2();
    void thread_xor_ln340_5_fu_495_p2();
    void thread_xor_ln340_6_fu_550_p2();
    void thread_xor_ln340_7_fu_605_p2();
    void thread_xor_ln340_8_fu_660_p2();
    void thread_xor_ln340_9_fu_715_p2();
    void thread_xor_ln340_fu_501_p2();
    void thread_xor_ln786_1_fu_538_p2();
    void thread_xor_ln786_2_fu_593_p2();
    void thread_xor_ln786_3_fu_648_p2();
    void thread_xor_ln786_4_fu_703_p2();
    void thread_xor_ln786_5_fu_1023_p2();
    void thread_xor_ln786_6_fu_1115_p2();
    void thread_xor_ln786_fu_483_p2();
    void thread_y_V_1_fu_798_p3();
    void thread_y_V_2_fu_837_p3();
    void thread_y_V_3_fu_876_p3();
    void thread_y_V_4_fu_915_p3();
    void thread_y_V_5_fu_1171_p3();
    void thread_y_V_fu_759_p3();
    void thread_zext_ln225_1_fu_806_p1();
    void thread_zext_ln225_2_fu_845_p1();
    void thread_zext_ln225_3_fu_884_p1();
    void thread_zext_ln225_4_fu_923_p1();
    void thread_zext_ln225_fu_767_p1();
    void thread_zext_ln235_fu_1179_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
