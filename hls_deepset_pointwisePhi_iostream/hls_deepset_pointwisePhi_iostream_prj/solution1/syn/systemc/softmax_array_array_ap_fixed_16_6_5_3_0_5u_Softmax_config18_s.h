// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_HH_
#define _softmax_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s.h"

namespace ap_rtl {

struct softmax_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s : public sc_module {
    // Port declarations 37
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
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
    sc_out< sc_lv<16> > res_V_data_0_V_TDATA;
    sc_out< sc_logic > res_V_data_0_V_TVALID;
    sc_in< sc_logic > res_V_data_0_V_TREADY;
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


    // Module declarations
    softmax_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s(sc_module_name name);
    SC_HAS_PROCESS(softmax_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s);

    ~softmax_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s();

    sc_trace_file* mVcdFile;

    softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s* grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104;
    regslice_both<16>* regslice_both_res_V_data_0_V_U;
    regslice_both<16>* regslice_both_res_V_data_1_V_U;
    regslice_both<16>* regslice_both_res_V_data_2_V_U;
    regslice_both<16>* regslice_both_res_V_data_3_V_U;
    regslice_both<16>* regslice_both_res_V_data_4_V_U;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_0_V_blk_n;
    sc_signal< sc_logic > data_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_1_V_blk_n;
    sc_signal< sc_logic > data_V_data_1_V_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_2_V_blk_n;
    sc_signal< sc_logic > data_V_data_2_V_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_3_V_blk_n;
    sc_signal< sc_logic > data_V_data_3_V_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_4_V_blk_n;
    sc_signal< sc_logic > data_V_data_4_V_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_0_V_TDATA_blk_n;
    sc_signal< sc_logic > res_V_data_0_V_TDATA_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_1_V_TDATA_blk_n;
    sc_signal< sc_logic > res_V_data_1_V_TDATA_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_2_V_TDATA_blk_n;
    sc_signal< sc_logic > res_V_data_2_V_TDATA_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_3_V_TDATA_blk_n;
    sc_signal< sc_logic > res_V_data_3_V_TDATA_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_4_V_TDATA_blk_n;
    sc_signal< sc_logic > res_V_data_4_V_TDATA_blk_n;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_ap_start;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_ap_done;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_ap_idle;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_ap_ready;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_0_V_read;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_1_V_read;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_2_V_read;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_3_V_read;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_data_V_data_4_V_read;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_0_V_TREADY;
    sc_signal< sc_lv<16> > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_0_V_TDATA;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_0_V_TVALID;
    sc_signal< sc_lv<16> > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_1_V_TDATA;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_1_V_TVALID;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_1_V_TREADY;
    sc_signal< sc_lv<16> > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_2_V_TDATA;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_2_V_TVALID;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_2_V_TREADY;
    sc_signal< sc_lv<16> > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_3_V_TDATA;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_3_V_TVALID;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_3_V_TREADY;
    sc_signal< sc_lv<16> > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_4_V_TDATA;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_4_V_TVALID;
    sc_signal< sc_logic > grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_4_V_TREADY;
    sc_signal< bool > ap_block_state1_ignore_call10;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > regslice_both_res_V_data_0_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_res_V_data_1_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_res_V_data_2_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_res_V_data_3_V_U_apdone_blk;
    sc_signal< sc_logic > regslice_both_res_V_data_4_V_U_apdone_blk;
    sc_signal< bool > ap_block_state6;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_state5;
    sc_signal< sc_logic > res_V_data_0_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_res_V_data_0_V_U_vld_out;
    sc_signal< sc_logic > res_V_data_1_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_res_V_data_1_V_U_vld_out;
    sc_signal< sc_logic > res_V_data_2_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_res_V_data_2_V_U_vld_out;
    sc_signal< sc_logic > res_V_data_3_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_res_V_data_3_V_U_vld_out;
    sc_signal< sc_logic > res_V_data_4_V_TREADY_int;
    sc_signal< sc_logic > regslice_both_res_V_data_4_V_U_vld_out;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_state1();
    void thread_ap_block_state1_ignore_call10();
    void thread_ap_block_state5();
    void thread_ap_block_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
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
    void thread_grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_ap_start();
    void thread_grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_0_V_TREADY();
    void thread_grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_1_V_TREADY();
    void thread_grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_2_V_TREADY();
    void thread_grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_3_V_TREADY();
    void thread_grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_5u_Softmax_config18_s_fu_104_res_V_data_4_V_TREADY();
    void thread_res_V_data_0_V_TDATA_blk_n();
    void thread_res_V_data_0_V_TVALID();
    void thread_res_V_data_1_V_TDATA_blk_n();
    void thread_res_V_data_1_V_TVALID();
    void thread_res_V_data_2_V_TDATA_blk_n();
    void thread_res_V_data_2_V_TVALID();
    void thread_res_V_data_3_V_TDATA_blk_n();
    void thread_res_V_data_3_V_TVALID();
    void thread_res_V_data_4_V_TDATA_blk_n();
    void thread_res_V_data_4_V_TVALID();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
