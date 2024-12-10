#include "pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_505_V_read506_phi_phi_fu_21511_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_505_V_read506_phi_phi_fu_21511_p4 = ap_phi_mux_data_505_V_read506_rewind_phi_fu_14834_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_505_V_read506_phi_phi_fu_21511_p4 = data_505_V_read.read();
    } else {
        ap_phi_mux_data_505_V_read506_phi_phi_fu_21511_p4 = ap_phi_reg_pp0_iter0_data_505_V_read506_phi_reg_21507.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_505_V_read506_rewind_phi_fu_14834_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_505_V_read506_rewind_phi_fu_14834_p6 = data_505_V_read506_phi_reg_21507.read();
    } else {
        ap_phi_mux_data_505_V_read506_rewind_phi_fu_14834_p6 = data_505_V_read506_rewind_reg_14830.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_506_V_read507_phi_phi_fu_21524_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_506_V_read507_phi_phi_fu_21524_p4 = ap_phi_mux_data_506_V_read507_rewind_phi_fu_14848_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_506_V_read507_phi_phi_fu_21524_p4 = data_506_V_read.read();
    } else {
        ap_phi_mux_data_506_V_read507_phi_phi_fu_21524_p4 = ap_phi_reg_pp0_iter0_data_506_V_read507_phi_reg_21520.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_506_V_read507_rewind_phi_fu_14848_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_506_V_read507_rewind_phi_fu_14848_p6 = data_506_V_read507_phi_reg_21520.read();
    } else {
        ap_phi_mux_data_506_V_read507_rewind_phi_fu_14848_p6 = data_506_V_read507_rewind_reg_14844.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_507_V_read508_phi_phi_fu_21537_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_507_V_read508_phi_phi_fu_21537_p4 = ap_phi_mux_data_507_V_read508_rewind_phi_fu_14862_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_507_V_read508_phi_phi_fu_21537_p4 = data_507_V_read.read();
    } else {
        ap_phi_mux_data_507_V_read508_phi_phi_fu_21537_p4 = ap_phi_reg_pp0_iter0_data_507_V_read508_phi_reg_21533.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_507_V_read508_rewind_phi_fu_14862_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_507_V_read508_rewind_phi_fu_14862_p6 = data_507_V_read508_phi_reg_21533.read();
    } else {
        ap_phi_mux_data_507_V_read508_rewind_phi_fu_14862_p6 = data_507_V_read508_rewind_reg_14858.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_508_V_read509_phi_phi_fu_21550_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_508_V_read509_phi_phi_fu_21550_p4 = ap_phi_mux_data_508_V_read509_rewind_phi_fu_14876_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_508_V_read509_phi_phi_fu_21550_p4 = data_508_V_read.read();
    } else {
        ap_phi_mux_data_508_V_read509_phi_phi_fu_21550_p4 = ap_phi_reg_pp0_iter0_data_508_V_read509_phi_reg_21546.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_508_V_read509_rewind_phi_fu_14876_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_508_V_read509_rewind_phi_fu_14876_p6 = data_508_V_read509_phi_reg_21546.read();
    } else {
        ap_phi_mux_data_508_V_read509_rewind_phi_fu_14876_p6 = data_508_V_read509_rewind_reg_14872.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_509_V_read510_phi_phi_fu_21563_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_509_V_read510_phi_phi_fu_21563_p4 = ap_phi_mux_data_509_V_read510_rewind_phi_fu_14890_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_509_V_read510_phi_phi_fu_21563_p4 = data_509_V_read.read();
    } else {
        ap_phi_mux_data_509_V_read510_phi_phi_fu_21563_p4 = ap_phi_reg_pp0_iter0_data_509_V_read510_phi_reg_21559.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_509_V_read510_rewind_phi_fu_14890_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_509_V_read510_rewind_phi_fu_14890_p6 = data_509_V_read510_phi_reg_21559.read();
    } else {
        ap_phi_mux_data_509_V_read510_rewind_phi_fu_14890_p6 = data_509_V_read510_rewind_reg_14886.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_50_V_read51_phi_phi_fu_15596_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_50_V_read51_phi_phi_fu_15596_p4 = ap_phi_mux_data_50_V_read51_rewind_phi_fu_8464_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_50_V_read51_phi_phi_fu_15596_p4 = data_50_V_read.read();
    } else {
        ap_phi_mux_data_50_V_read51_phi_phi_fu_15596_p4 = ap_phi_reg_pp0_iter0_data_50_V_read51_phi_reg_15592.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_50_V_read51_rewind_phi_fu_8464_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_50_V_read51_rewind_phi_fu_8464_p6 = data_50_V_read51_phi_reg_15592.read();
    } else {
        ap_phi_mux_data_50_V_read51_rewind_phi_fu_8464_p6 = data_50_V_read51_rewind_reg_8460.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_510_V_read511_phi_phi_fu_21576_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_510_V_read511_phi_phi_fu_21576_p4 = ap_phi_mux_data_510_V_read511_rewind_phi_fu_14904_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_510_V_read511_phi_phi_fu_21576_p4 = data_510_V_read.read();
    } else {
        ap_phi_mux_data_510_V_read511_phi_phi_fu_21576_p4 = ap_phi_reg_pp0_iter0_data_510_V_read511_phi_reg_21572.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_510_V_read511_rewind_phi_fu_14904_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_510_V_read511_rewind_phi_fu_14904_p6 = data_510_V_read511_phi_reg_21572.read();
    } else {
        ap_phi_mux_data_510_V_read511_rewind_phi_fu_14904_p6 = data_510_V_read511_rewind_reg_14900.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_511_V_read512_phi_phi_fu_21589_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_511_V_read512_phi_phi_fu_21589_p4 = ap_phi_mux_data_511_V_read512_rewind_phi_fu_14918_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_511_V_read512_phi_phi_fu_21589_p4 = data_511_V_read.read();
    } else {
        ap_phi_mux_data_511_V_read512_phi_phi_fu_21589_p4 = ap_phi_reg_pp0_iter0_data_511_V_read512_phi_reg_21585.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_511_V_read512_rewind_phi_fu_14918_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_511_V_read512_rewind_phi_fu_14918_p6 = data_511_V_read512_phi_reg_21585.read();
    } else {
        ap_phi_mux_data_511_V_read512_rewind_phi_fu_14918_p6 = data_511_V_read512_rewind_reg_14914.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_51_V_read52_phi_phi_fu_15609_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_51_V_read52_phi_phi_fu_15609_p4 = ap_phi_mux_data_51_V_read52_rewind_phi_fu_8478_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_51_V_read52_phi_phi_fu_15609_p4 = data_51_V_read.read();
    } else {
        ap_phi_mux_data_51_V_read52_phi_phi_fu_15609_p4 = ap_phi_reg_pp0_iter0_data_51_V_read52_phi_reg_15605.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_51_V_read52_rewind_phi_fu_8478_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_51_V_read52_rewind_phi_fu_8478_p6 = data_51_V_read52_phi_reg_15605.read();
    } else {
        ap_phi_mux_data_51_V_read52_rewind_phi_fu_8478_p6 = data_51_V_read52_rewind_reg_8474.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_52_V_read53_phi_phi_fu_15622_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_52_V_read53_phi_phi_fu_15622_p4 = ap_phi_mux_data_52_V_read53_rewind_phi_fu_8492_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_52_V_read53_phi_phi_fu_15622_p4 = data_52_V_read.read();
    } else {
        ap_phi_mux_data_52_V_read53_phi_phi_fu_15622_p4 = ap_phi_reg_pp0_iter0_data_52_V_read53_phi_reg_15618.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_52_V_read53_rewind_phi_fu_8492_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_52_V_read53_rewind_phi_fu_8492_p6 = data_52_V_read53_phi_reg_15618.read();
    } else {
        ap_phi_mux_data_52_V_read53_rewind_phi_fu_8492_p6 = data_52_V_read53_rewind_reg_8488.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_53_V_read54_phi_phi_fu_15635_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_53_V_read54_phi_phi_fu_15635_p4 = ap_phi_mux_data_53_V_read54_rewind_phi_fu_8506_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_53_V_read54_phi_phi_fu_15635_p4 = data_53_V_read.read();
    } else {
        ap_phi_mux_data_53_V_read54_phi_phi_fu_15635_p4 = ap_phi_reg_pp0_iter0_data_53_V_read54_phi_reg_15631.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_53_V_read54_rewind_phi_fu_8506_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_53_V_read54_rewind_phi_fu_8506_p6 = data_53_V_read54_phi_reg_15631.read();
    } else {
        ap_phi_mux_data_53_V_read54_rewind_phi_fu_8506_p6 = data_53_V_read54_rewind_reg_8502.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_54_V_read55_phi_phi_fu_15648_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_54_V_read55_phi_phi_fu_15648_p4 = ap_phi_mux_data_54_V_read55_rewind_phi_fu_8520_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_54_V_read55_phi_phi_fu_15648_p4 = data_54_V_read.read();
    } else {
        ap_phi_mux_data_54_V_read55_phi_phi_fu_15648_p4 = ap_phi_reg_pp0_iter0_data_54_V_read55_phi_reg_15644.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_54_V_read55_rewind_phi_fu_8520_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_54_V_read55_rewind_phi_fu_8520_p6 = data_54_V_read55_phi_reg_15644.read();
    } else {
        ap_phi_mux_data_54_V_read55_rewind_phi_fu_8520_p6 = data_54_V_read55_rewind_reg_8516.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_55_V_read56_phi_phi_fu_15661_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_55_V_read56_phi_phi_fu_15661_p4 = ap_phi_mux_data_55_V_read56_rewind_phi_fu_8534_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_55_V_read56_phi_phi_fu_15661_p4 = data_55_V_read.read();
    } else {
        ap_phi_mux_data_55_V_read56_phi_phi_fu_15661_p4 = ap_phi_reg_pp0_iter0_data_55_V_read56_phi_reg_15657.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_55_V_read56_rewind_phi_fu_8534_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_55_V_read56_rewind_phi_fu_8534_p6 = data_55_V_read56_phi_reg_15657.read();
    } else {
        ap_phi_mux_data_55_V_read56_rewind_phi_fu_8534_p6 = data_55_V_read56_rewind_reg_8530.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_56_V_read57_phi_phi_fu_15674_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_56_V_read57_phi_phi_fu_15674_p4 = ap_phi_mux_data_56_V_read57_rewind_phi_fu_8548_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_56_V_read57_phi_phi_fu_15674_p4 = data_56_V_read.read();
    } else {
        ap_phi_mux_data_56_V_read57_phi_phi_fu_15674_p4 = ap_phi_reg_pp0_iter0_data_56_V_read57_phi_reg_15670.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_56_V_read57_rewind_phi_fu_8548_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_56_V_read57_rewind_phi_fu_8548_p6 = data_56_V_read57_phi_reg_15670.read();
    } else {
        ap_phi_mux_data_56_V_read57_rewind_phi_fu_8548_p6 = data_56_V_read57_rewind_reg_8544.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_57_V_read58_phi_phi_fu_15687_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_57_V_read58_phi_phi_fu_15687_p4 = ap_phi_mux_data_57_V_read58_rewind_phi_fu_8562_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_57_V_read58_phi_phi_fu_15687_p4 = data_57_V_read.read();
    } else {
        ap_phi_mux_data_57_V_read58_phi_phi_fu_15687_p4 = ap_phi_reg_pp0_iter0_data_57_V_read58_phi_reg_15683.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_57_V_read58_rewind_phi_fu_8562_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_57_V_read58_rewind_phi_fu_8562_p6 = data_57_V_read58_phi_reg_15683.read();
    } else {
        ap_phi_mux_data_57_V_read58_rewind_phi_fu_8562_p6 = data_57_V_read58_rewind_reg_8558.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_58_V_read59_phi_phi_fu_15700_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_58_V_read59_phi_phi_fu_15700_p4 = ap_phi_mux_data_58_V_read59_rewind_phi_fu_8576_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_58_V_read59_phi_phi_fu_15700_p4 = data_58_V_read.read();
    } else {
        ap_phi_mux_data_58_V_read59_phi_phi_fu_15700_p4 = ap_phi_reg_pp0_iter0_data_58_V_read59_phi_reg_15696.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_58_V_read59_rewind_phi_fu_8576_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_58_V_read59_rewind_phi_fu_8576_p6 = data_58_V_read59_phi_reg_15696.read();
    } else {
        ap_phi_mux_data_58_V_read59_rewind_phi_fu_8576_p6 = data_58_V_read59_rewind_reg_8572.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_59_V_read60_phi_phi_fu_15713_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_59_V_read60_phi_phi_fu_15713_p4 = ap_phi_mux_data_59_V_read60_rewind_phi_fu_8590_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_59_V_read60_phi_phi_fu_15713_p4 = data_59_V_read.read();
    } else {
        ap_phi_mux_data_59_V_read60_phi_phi_fu_15713_p4 = ap_phi_reg_pp0_iter0_data_59_V_read60_phi_reg_15709.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_59_V_read60_rewind_phi_fu_8590_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_59_V_read60_rewind_phi_fu_8590_p6 = data_59_V_read60_phi_reg_15709.read();
    } else {
        ap_phi_mux_data_59_V_read60_rewind_phi_fu_8590_p6 = data_59_V_read60_rewind_reg_8586.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_5_V_read6_phi_phi_fu_15011_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_5_V_read6_phi_phi_fu_15011_p4 = ap_phi_mux_data_5_V_read6_rewind_phi_fu_7834_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_5_V_read6_phi_phi_fu_15011_p4 = data_5_V_read.read();
    } else {
        ap_phi_mux_data_5_V_read6_phi_phi_fu_15011_p4 = ap_phi_reg_pp0_iter0_data_5_V_read6_phi_reg_15007.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_5_V_read6_rewind_phi_fu_7834_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_5_V_read6_rewind_phi_fu_7834_p6 = data_5_V_read6_phi_reg_15007.read();
    } else {
        ap_phi_mux_data_5_V_read6_rewind_phi_fu_7834_p6 = data_5_V_read6_rewind_reg_7830.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_60_V_read61_phi_phi_fu_15726_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_60_V_read61_phi_phi_fu_15726_p4 = ap_phi_mux_data_60_V_read61_rewind_phi_fu_8604_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_60_V_read61_phi_phi_fu_15726_p4 = data_60_V_read.read();
    } else {
        ap_phi_mux_data_60_V_read61_phi_phi_fu_15726_p4 = ap_phi_reg_pp0_iter0_data_60_V_read61_phi_reg_15722.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_60_V_read61_rewind_phi_fu_8604_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_60_V_read61_rewind_phi_fu_8604_p6 = data_60_V_read61_phi_reg_15722.read();
    } else {
        ap_phi_mux_data_60_V_read61_rewind_phi_fu_8604_p6 = data_60_V_read61_rewind_reg_8600.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_61_V_read62_phi_phi_fu_15739_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_61_V_read62_phi_phi_fu_15739_p4 = ap_phi_mux_data_61_V_read62_rewind_phi_fu_8618_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_61_V_read62_phi_phi_fu_15739_p4 = data_61_V_read.read();
    } else {
        ap_phi_mux_data_61_V_read62_phi_phi_fu_15739_p4 = ap_phi_reg_pp0_iter0_data_61_V_read62_phi_reg_15735.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_61_V_read62_rewind_phi_fu_8618_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_61_V_read62_rewind_phi_fu_8618_p6 = data_61_V_read62_phi_reg_15735.read();
    } else {
        ap_phi_mux_data_61_V_read62_rewind_phi_fu_8618_p6 = data_61_V_read62_rewind_reg_8614.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_62_V_read63_phi_phi_fu_15752_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_62_V_read63_phi_phi_fu_15752_p4 = ap_phi_mux_data_62_V_read63_rewind_phi_fu_8632_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_62_V_read63_phi_phi_fu_15752_p4 = data_62_V_read.read();
    } else {
        ap_phi_mux_data_62_V_read63_phi_phi_fu_15752_p4 = ap_phi_reg_pp0_iter0_data_62_V_read63_phi_reg_15748.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_62_V_read63_rewind_phi_fu_8632_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_62_V_read63_rewind_phi_fu_8632_p6 = data_62_V_read63_phi_reg_15748.read();
    } else {
        ap_phi_mux_data_62_V_read63_rewind_phi_fu_8632_p6 = data_62_V_read63_rewind_reg_8628.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_63_V_read64_phi_phi_fu_15765_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_63_V_read64_phi_phi_fu_15765_p4 = ap_phi_mux_data_63_V_read64_rewind_phi_fu_8646_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_63_V_read64_phi_phi_fu_15765_p4 = data_63_V_read.read();
    } else {
        ap_phi_mux_data_63_V_read64_phi_phi_fu_15765_p4 = ap_phi_reg_pp0_iter0_data_63_V_read64_phi_reg_15761.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_63_V_read64_rewind_phi_fu_8646_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_63_V_read64_rewind_phi_fu_8646_p6 = data_63_V_read64_phi_reg_15761.read();
    } else {
        ap_phi_mux_data_63_V_read64_rewind_phi_fu_8646_p6 = data_63_V_read64_rewind_reg_8642.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_64_V_read65_phi_phi_fu_15778_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_64_V_read65_phi_phi_fu_15778_p4 = ap_phi_mux_data_64_V_read65_rewind_phi_fu_8660_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_64_V_read65_phi_phi_fu_15778_p4 = data_64_V_read.read();
    } else {
        ap_phi_mux_data_64_V_read65_phi_phi_fu_15778_p4 = ap_phi_reg_pp0_iter0_data_64_V_read65_phi_reg_15774.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_64_V_read65_rewind_phi_fu_8660_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_64_V_read65_rewind_phi_fu_8660_p6 = data_64_V_read65_phi_reg_15774.read();
    } else {
        ap_phi_mux_data_64_V_read65_rewind_phi_fu_8660_p6 = data_64_V_read65_rewind_reg_8656.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_65_V_read66_phi_phi_fu_15791_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_65_V_read66_phi_phi_fu_15791_p4 = ap_phi_mux_data_65_V_read66_rewind_phi_fu_8674_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_65_V_read66_phi_phi_fu_15791_p4 = data_65_V_read.read();
    } else {
        ap_phi_mux_data_65_V_read66_phi_phi_fu_15791_p4 = ap_phi_reg_pp0_iter0_data_65_V_read66_phi_reg_15787.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_65_V_read66_rewind_phi_fu_8674_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_65_V_read66_rewind_phi_fu_8674_p6 = data_65_V_read66_phi_reg_15787.read();
    } else {
        ap_phi_mux_data_65_V_read66_rewind_phi_fu_8674_p6 = data_65_V_read66_rewind_reg_8670.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_66_V_read67_phi_phi_fu_15804_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_66_V_read67_phi_phi_fu_15804_p4 = ap_phi_mux_data_66_V_read67_rewind_phi_fu_8688_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_66_V_read67_phi_phi_fu_15804_p4 = data_66_V_read.read();
    } else {
        ap_phi_mux_data_66_V_read67_phi_phi_fu_15804_p4 = ap_phi_reg_pp0_iter0_data_66_V_read67_phi_reg_15800.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_66_V_read67_rewind_phi_fu_8688_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_66_V_read67_rewind_phi_fu_8688_p6 = data_66_V_read67_phi_reg_15800.read();
    } else {
        ap_phi_mux_data_66_V_read67_rewind_phi_fu_8688_p6 = data_66_V_read67_rewind_reg_8684.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_67_V_read68_phi_phi_fu_15817_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_67_V_read68_phi_phi_fu_15817_p4 = ap_phi_mux_data_67_V_read68_rewind_phi_fu_8702_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_67_V_read68_phi_phi_fu_15817_p4 = data_67_V_read.read();
    } else {
        ap_phi_mux_data_67_V_read68_phi_phi_fu_15817_p4 = ap_phi_reg_pp0_iter0_data_67_V_read68_phi_reg_15813.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_67_V_read68_rewind_phi_fu_8702_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_67_V_read68_rewind_phi_fu_8702_p6 = data_67_V_read68_phi_reg_15813.read();
    } else {
        ap_phi_mux_data_67_V_read68_rewind_phi_fu_8702_p6 = data_67_V_read68_rewind_reg_8698.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_68_V_read69_phi_phi_fu_15830_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_68_V_read69_phi_phi_fu_15830_p4 = ap_phi_mux_data_68_V_read69_rewind_phi_fu_8716_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_68_V_read69_phi_phi_fu_15830_p4 = data_68_V_read.read();
    } else {
        ap_phi_mux_data_68_V_read69_phi_phi_fu_15830_p4 = ap_phi_reg_pp0_iter0_data_68_V_read69_phi_reg_15826.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_68_V_read69_rewind_phi_fu_8716_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_68_V_read69_rewind_phi_fu_8716_p6 = data_68_V_read69_phi_reg_15826.read();
    } else {
        ap_phi_mux_data_68_V_read69_rewind_phi_fu_8716_p6 = data_68_V_read69_rewind_reg_8712.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_69_V_read70_phi_phi_fu_15843_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_69_V_read70_phi_phi_fu_15843_p4 = ap_phi_mux_data_69_V_read70_rewind_phi_fu_8730_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_69_V_read70_phi_phi_fu_15843_p4 = data_69_V_read.read();
    } else {
        ap_phi_mux_data_69_V_read70_phi_phi_fu_15843_p4 = ap_phi_reg_pp0_iter0_data_69_V_read70_phi_reg_15839.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_69_V_read70_rewind_phi_fu_8730_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_69_V_read70_rewind_phi_fu_8730_p6 = data_69_V_read70_phi_reg_15839.read();
    } else {
        ap_phi_mux_data_69_V_read70_rewind_phi_fu_8730_p6 = data_69_V_read70_rewind_reg_8726.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_6_V_read7_phi_phi_fu_15024_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_6_V_read7_phi_phi_fu_15024_p4 = ap_phi_mux_data_6_V_read7_rewind_phi_fu_7848_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_6_V_read7_phi_phi_fu_15024_p4 = data_6_V_read.read();
    } else {
        ap_phi_mux_data_6_V_read7_phi_phi_fu_15024_p4 = ap_phi_reg_pp0_iter0_data_6_V_read7_phi_reg_15020.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_6_V_read7_rewind_phi_fu_7848_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_6_V_read7_rewind_phi_fu_7848_p6 = data_6_V_read7_phi_reg_15020.read();
    } else {
        ap_phi_mux_data_6_V_read7_rewind_phi_fu_7848_p6 = data_6_V_read7_rewind_reg_7844.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_70_V_read71_phi_phi_fu_15856_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_70_V_read71_phi_phi_fu_15856_p4 = ap_phi_mux_data_70_V_read71_rewind_phi_fu_8744_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_70_V_read71_phi_phi_fu_15856_p4 = data_70_V_read.read();
    } else {
        ap_phi_mux_data_70_V_read71_phi_phi_fu_15856_p4 = ap_phi_reg_pp0_iter0_data_70_V_read71_phi_reg_15852.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_70_V_read71_rewind_phi_fu_8744_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_70_V_read71_rewind_phi_fu_8744_p6 = data_70_V_read71_phi_reg_15852.read();
    } else {
        ap_phi_mux_data_70_V_read71_rewind_phi_fu_8744_p6 = data_70_V_read71_rewind_reg_8740.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_71_V_read72_phi_phi_fu_15869_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_71_V_read72_phi_phi_fu_15869_p4 = ap_phi_mux_data_71_V_read72_rewind_phi_fu_8758_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_71_V_read72_phi_phi_fu_15869_p4 = data_71_V_read.read();
    } else {
        ap_phi_mux_data_71_V_read72_phi_phi_fu_15869_p4 = ap_phi_reg_pp0_iter0_data_71_V_read72_phi_reg_15865.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_71_V_read72_rewind_phi_fu_8758_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_71_V_read72_rewind_phi_fu_8758_p6 = data_71_V_read72_phi_reg_15865.read();
    } else {
        ap_phi_mux_data_71_V_read72_rewind_phi_fu_8758_p6 = data_71_V_read72_rewind_reg_8754.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_72_V_read73_phi_phi_fu_15882_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_72_V_read73_phi_phi_fu_15882_p4 = ap_phi_mux_data_72_V_read73_rewind_phi_fu_8772_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_72_V_read73_phi_phi_fu_15882_p4 = data_72_V_read.read();
    } else {
        ap_phi_mux_data_72_V_read73_phi_phi_fu_15882_p4 = ap_phi_reg_pp0_iter0_data_72_V_read73_phi_reg_15878.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_72_V_read73_rewind_phi_fu_8772_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_72_V_read73_rewind_phi_fu_8772_p6 = data_72_V_read73_phi_reg_15878.read();
    } else {
        ap_phi_mux_data_72_V_read73_rewind_phi_fu_8772_p6 = data_72_V_read73_rewind_reg_8768.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_73_V_read74_phi_phi_fu_15895_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_73_V_read74_phi_phi_fu_15895_p4 = ap_phi_mux_data_73_V_read74_rewind_phi_fu_8786_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_73_V_read74_phi_phi_fu_15895_p4 = data_73_V_read.read();
    } else {
        ap_phi_mux_data_73_V_read74_phi_phi_fu_15895_p4 = ap_phi_reg_pp0_iter0_data_73_V_read74_phi_reg_15891.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_73_V_read74_rewind_phi_fu_8786_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_73_V_read74_rewind_phi_fu_8786_p6 = data_73_V_read74_phi_reg_15891.read();
    } else {
        ap_phi_mux_data_73_V_read74_rewind_phi_fu_8786_p6 = data_73_V_read74_rewind_reg_8782.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_74_V_read75_phi_phi_fu_15908_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_74_V_read75_phi_phi_fu_15908_p4 = ap_phi_mux_data_74_V_read75_rewind_phi_fu_8800_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_74_V_read75_phi_phi_fu_15908_p4 = data_74_V_read.read();
    } else {
        ap_phi_mux_data_74_V_read75_phi_phi_fu_15908_p4 = ap_phi_reg_pp0_iter0_data_74_V_read75_phi_reg_15904.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_74_V_read75_rewind_phi_fu_8800_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_74_V_read75_rewind_phi_fu_8800_p6 = data_74_V_read75_phi_reg_15904.read();
    } else {
        ap_phi_mux_data_74_V_read75_rewind_phi_fu_8800_p6 = data_74_V_read75_rewind_reg_8796.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_75_V_read76_phi_phi_fu_15921_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_75_V_read76_phi_phi_fu_15921_p4 = ap_phi_mux_data_75_V_read76_rewind_phi_fu_8814_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_75_V_read76_phi_phi_fu_15921_p4 = data_75_V_read.read();
    } else {
        ap_phi_mux_data_75_V_read76_phi_phi_fu_15921_p4 = ap_phi_reg_pp0_iter0_data_75_V_read76_phi_reg_15917.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_75_V_read76_rewind_phi_fu_8814_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_75_V_read76_rewind_phi_fu_8814_p6 = data_75_V_read76_phi_reg_15917.read();
    } else {
        ap_phi_mux_data_75_V_read76_rewind_phi_fu_8814_p6 = data_75_V_read76_rewind_reg_8810.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_76_V_read77_phi_phi_fu_15934_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_76_V_read77_phi_phi_fu_15934_p4 = ap_phi_mux_data_76_V_read77_rewind_phi_fu_8828_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_76_V_read77_phi_phi_fu_15934_p4 = data_76_V_read.read();
    } else {
        ap_phi_mux_data_76_V_read77_phi_phi_fu_15934_p4 = ap_phi_reg_pp0_iter0_data_76_V_read77_phi_reg_15930.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_76_V_read77_rewind_phi_fu_8828_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_76_V_read77_rewind_phi_fu_8828_p6 = data_76_V_read77_phi_reg_15930.read();
    } else {
        ap_phi_mux_data_76_V_read77_rewind_phi_fu_8828_p6 = data_76_V_read77_rewind_reg_8824.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_77_V_read78_phi_phi_fu_15947_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_77_V_read78_phi_phi_fu_15947_p4 = ap_phi_mux_data_77_V_read78_rewind_phi_fu_8842_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_77_V_read78_phi_phi_fu_15947_p4 = data_77_V_read.read();
    } else {
        ap_phi_mux_data_77_V_read78_phi_phi_fu_15947_p4 = ap_phi_reg_pp0_iter0_data_77_V_read78_phi_reg_15943.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_77_V_read78_rewind_phi_fu_8842_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_77_V_read78_rewind_phi_fu_8842_p6 = data_77_V_read78_phi_reg_15943.read();
    } else {
        ap_phi_mux_data_77_V_read78_rewind_phi_fu_8842_p6 = data_77_V_read78_rewind_reg_8838.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_78_V_read79_phi_phi_fu_15960_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_78_V_read79_phi_phi_fu_15960_p4 = ap_phi_mux_data_78_V_read79_rewind_phi_fu_8856_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_78_V_read79_phi_phi_fu_15960_p4 = data_78_V_read.read();
    } else {
        ap_phi_mux_data_78_V_read79_phi_phi_fu_15960_p4 = ap_phi_reg_pp0_iter0_data_78_V_read79_phi_reg_15956.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_78_V_read79_rewind_phi_fu_8856_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_78_V_read79_rewind_phi_fu_8856_p6 = data_78_V_read79_phi_reg_15956.read();
    } else {
        ap_phi_mux_data_78_V_read79_rewind_phi_fu_8856_p6 = data_78_V_read79_rewind_reg_8852.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_79_V_read80_phi_phi_fu_15973_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_79_V_read80_phi_phi_fu_15973_p4 = ap_phi_mux_data_79_V_read80_rewind_phi_fu_8870_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_79_V_read80_phi_phi_fu_15973_p4 = data_79_V_read.read();
    } else {
        ap_phi_mux_data_79_V_read80_phi_phi_fu_15973_p4 = ap_phi_reg_pp0_iter0_data_79_V_read80_phi_reg_15969.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_79_V_read80_rewind_phi_fu_8870_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_79_V_read80_rewind_phi_fu_8870_p6 = data_79_V_read80_phi_reg_15969.read();
    } else {
        ap_phi_mux_data_79_V_read80_rewind_phi_fu_8870_p6 = data_79_V_read80_rewind_reg_8866.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_7_V_read8_phi_phi_fu_15037_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_7_V_read8_phi_phi_fu_15037_p4 = ap_phi_mux_data_7_V_read8_rewind_phi_fu_7862_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_7_V_read8_phi_phi_fu_15037_p4 = data_7_V_read.read();
    } else {
        ap_phi_mux_data_7_V_read8_phi_phi_fu_15037_p4 = ap_phi_reg_pp0_iter0_data_7_V_read8_phi_reg_15033.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_7_V_read8_rewind_phi_fu_7862_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_7_V_read8_rewind_phi_fu_7862_p6 = data_7_V_read8_phi_reg_15033.read();
    } else {
        ap_phi_mux_data_7_V_read8_rewind_phi_fu_7862_p6 = data_7_V_read8_rewind_reg_7858.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_80_V_read81_phi_phi_fu_15986_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_80_V_read81_phi_phi_fu_15986_p4 = ap_phi_mux_data_80_V_read81_rewind_phi_fu_8884_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_80_V_read81_phi_phi_fu_15986_p4 = data_80_V_read.read();
    } else {
        ap_phi_mux_data_80_V_read81_phi_phi_fu_15986_p4 = ap_phi_reg_pp0_iter0_data_80_V_read81_phi_reg_15982.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_80_V_read81_rewind_phi_fu_8884_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_80_V_read81_rewind_phi_fu_8884_p6 = data_80_V_read81_phi_reg_15982.read();
    } else {
        ap_phi_mux_data_80_V_read81_rewind_phi_fu_8884_p6 = data_80_V_read81_rewind_reg_8880.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_81_V_read82_phi_phi_fu_15999_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_81_V_read82_phi_phi_fu_15999_p4 = ap_phi_mux_data_81_V_read82_rewind_phi_fu_8898_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_81_V_read82_phi_phi_fu_15999_p4 = data_81_V_read.read();
    } else {
        ap_phi_mux_data_81_V_read82_phi_phi_fu_15999_p4 = ap_phi_reg_pp0_iter0_data_81_V_read82_phi_reg_15995.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_81_V_read82_rewind_phi_fu_8898_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_81_V_read82_rewind_phi_fu_8898_p6 = data_81_V_read82_phi_reg_15995.read();
    } else {
        ap_phi_mux_data_81_V_read82_rewind_phi_fu_8898_p6 = data_81_V_read82_rewind_reg_8894.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_82_V_read83_phi_phi_fu_16012_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_82_V_read83_phi_phi_fu_16012_p4 = ap_phi_mux_data_82_V_read83_rewind_phi_fu_8912_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_82_V_read83_phi_phi_fu_16012_p4 = data_82_V_read.read();
    } else {
        ap_phi_mux_data_82_V_read83_phi_phi_fu_16012_p4 = ap_phi_reg_pp0_iter0_data_82_V_read83_phi_reg_16008.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_82_V_read83_rewind_phi_fu_8912_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_82_V_read83_rewind_phi_fu_8912_p6 = data_82_V_read83_phi_reg_16008.read();
    } else {
        ap_phi_mux_data_82_V_read83_rewind_phi_fu_8912_p6 = data_82_V_read83_rewind_reg_8908.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_83_V_read84_phi_phi_fu_16025_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_83_V_read84_phi_phi_fu_16025_p4 = ap_phi_mux_data_83_V_read84_rewind_phi_fu_8926_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_83_V_read84_phi_phi_fu_16025_p4 = data_83_V_read.read();
    } else {
        ap_phi_mux_data_83_V_read84_phi_phi_fu_16025_p4 = ap_phi_reg_pp0_iter0_data_83_V_read84_phi_reg_16021.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_83_V_read84_rewind_phi_fu_8926_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_83_V_read84_rewind_phi_fu_8926_p6 = data_83_V_read84_phi_reg_16021.read();
    } else {
        ap_phi_mux_data_83_V_read84_rewind_phi_fu_8926_p6 = data_83_V_read84_rewind_reg_8922.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_84_V_read85_phi_phi_fu_16038_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_84_V_read85_phi_phi_fu_16038_p4 = ap_phi_mux_data_84_V_read85_rewind_phi_fu_8940_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_84_V_read85_phi_phi_fu_16038_p4 = data_84_V_read.read();
    } else {
        ap_phi_mux_data_84_V_read85_phi_phi_fu_16038_p4 = ap_phi_reg_pp0_iter0_data_84_V_read85_phi_reg_16034.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_84_V_read85_rewind_phi_fu_8940_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_84_V_read85_rewind_phi_fu_8940_p6 = data_84_V_read85_phi_reg_16034.read();
    } else {
        ap_phi_mux_data_84_V_read85_rewind_phi_fu_8940_p6 = data_84_V_read85_rewind_reg_8936.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_85_V_read86_phi_phi_fu_16051_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_85_V_read86_phi_phi_fu_16051_p4 = ap_phi_mux_data_85_V_read86_rewind_phi_fu_8954_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_85_V_read86_phi_phi_fu_16051_p4 = data_85_V_read.read();
    } else {
        ap_phi_mux_data_85_V_read86_phi_phi_fu_16051_p4 = ap_phi_reg_pp0_iter0_data_85_V_read86_phi_reg_16047.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_85_V_read86_rewind_phi_fu_8954_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_85_V_read86_rewind_phi_fu_8954_p6 = data_85_V_read86_phi_reg_16047.read();
    } else {
        ap_phi_mux_data_85_V_read86_rewind_phi_fu_8954_p6 = data_85_V_read86_rewind_reg_8950.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_86_V_read87_phi_phi_fu_16064_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_86_V_read87_phi_phi_fu_16064_p4 = ap_phi_mux_data_86_V_read87_rewind_phi_fu_8968_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_86_V_read87_phi_phi_fu_16064_p4 = data_86_V_read.read();
    } else {
        ap_phi_mux_data_86_V_read87_phi_phi_fu_16064_p4 = ap_phi_reg_pp0_iter0_data_86_V_read87_phi_reg_16060.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_86_V_read87_rewind_phi_fu_8968_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_86_V_read87_rewind_phi_fu_8968_p6 = data_86_V_read87_phi_reg_16060.read();
    } else {
        ap_phi_mux_data_86_V_read87_rewind_phi_fu_8968_p6 = data_86_V_read87_rewind_reg_8964.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_87_V_read88_phi_phi_fu_16077_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_87_V_read88_phi_phi_fu_16077_p4 = ap_phi_mux_data_87_V_read88_rewind_phi_fu_8982_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_87_V_read88_phi_phi_fu_16077_p4 = data_87_V_read.read();
    } else {
        ap_phi_mux_data_87_V_read88_phi_phi_fu_16077_p4 = ap_phi_reg_pp0_iter0_data_87_V_read88_phi_reg_16073.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_87_V_read88_rewind_phi_fu_8982_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_87_V_read88_rewind_phi_fu_8982_p6 = data_87_V_read88_phi_reg_16073.read();
    } else {
        ap_phi_mux_data_87_V_read88_rewind_phi_fu_8982_p6 = data_87_V_read88_rewind_reg_8978.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_88_V_read89_phi_phi_fu_16090_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_88_V_read89_phi_phi_fu_16090_p4 = ap_phi_mux_data_88_V_read89_rewind_phi_fu_8996_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_88_V_read89_phi_phi_fu_16090_p4 = data_88_V_read.read();
    } else {
        ap_phi_mux_data_88_V_read89_phi_phi_fu_16090_p4 = ap_phi_reg_pp0_iter0_data_88_V_read89_phi_reg_16086.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_88_V_read89_rewind_phi_fu_8996_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_88_V_read89_rewind_phi_fu_8996_p6 = data_88_V_read89_phi_reg_16086.read();
    } else {
        ap_phi_mux_data_88_V_read89_rewind_phi_fu_8996_p6 = data_88_V_read89_rewind_reg_8992.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_89_V_read90_phi_phi_fu_16103_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_89_V_read90_phi_phi_fu_16103_p4 = ap_phi_mux_data_89_V_read90_rewind_phi_fu_9010_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_89_V_read90_phi_phi_fu_16103_p4 = data_89_V_read.read();
    } else {
        ap_phi_mux_data_89_V_read90_phi_phi_fu_16103_p4 = ap_phi_reg_pp0_iter0_data_89_V_read90_phi_reg_16099.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_89_V_read90_rewind_phi_fu_9010_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_89_V_read90_rewind_phi_fu_9010_p6 = data_89_V_read90_phi_reg_16099.read();
    } else {
        ap_phi_mux_data_89_V_read90_rewind_phi_fu_9010_p6 = data_89_V_read90_rewind_reg_9006.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_8_V_read9_phi_phi_fu_15050_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_8_V_read9_phi_phi_fu_15050_p4 = ap_phi_mux_data_8_V_read9_rewind_phi_fu_7876_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_8_V_read9_phi_phi_fu_15050_p4 = data_8_V_read.read();
    } else {
        ap_phi_mux_data_8_V_read9_phi_phi_fu_15050_p4 = ap_phi_reg_pp0_iter0_data_8_V_read9_phi_reg_15046.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_8_V_read9_rewind_phi_fu_7876_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_8_V_read9_rewind_phi_fu_7876_p6 = data_8_V_read9_phi_reg_15046.read();
    } else {
        ap_phi_mux_data_8_V_read9_rewind_phi_fu_7876_p6 = data_8_V_read9_rewind_reg_7872.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_90_V_read91_phi_phi_fu_16116_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_90_V_read91_phi_phi_fu_16116_p4 = ap_phi_mux_data_90_V_read91_rewind_phi_fu_9024_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_90_V_read91_phi_phi_fu_16116_p4 = data_90_V_read.read();
    } else {
        ap_phi_mux_data_90_V_read91_phi_phi_fu_16116_p4 = ap_phi_reg_pp0_iter0_data_90_V_read91_phi_reg_16112.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_90_V_read91_rewind_phi_fu_9024_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_90_V_read91_rewind_phi_fu_9024_p6 = data_90_V_read91_phi_reg_16112.read();
    } else {
        ap_phi_mux_data_90_V_read91_rewind_phi_fu_9024_p6 = data_90_V_read91_rewind_reg_9020.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_91_V_read92_phi_phi_fu_16129_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_91_V_read92_phi_phi_fu_16129_p4 = ap_phi_mux_data_91_V_read92_rewind_phi_fu_9038_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_91_V_read92_phi_phi_fu_16129_p4 = data_91_V_read.read();
    } else {
        ap_phi_mux_data_91_V_read92_phi_phi_fu_16129_p4 = ap_phi_reg_pp0_iter0_data_91_V_read92_phi_reg_16125.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_91_V_read92_rewind_phi_fu_9038_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_91_V_read92_rewind_phi_fu_9038_p6 = data_91_V_read92_phi_reg_16125.read();
    } else {
        ap_phi_mux_data_91_V_read92_rewind_phi_fu_9038_p6 = data_91_V_read92_rewind_reg_9034.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_92_V_read93_phi_phi_fu_16142_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_92_V_read93_phi_phi_fu_16142_p4 = ap_phi_mux_data_92_V_read93_rewind_phi_fu_9052_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_92_V_read93_phi_phi_fu_16142_p4 = data_92_V_read.read();
    } else {
        ap_phi_mux_data_92_V_read93_phi_phi_fu_16142_p4 = ap_phi_reg_pp0_iter0_data_92_V_read93_phi_reg_16138.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_92_V_read93_rewind_phi_fu_9052_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_92_V_read93_rewind_phi_fu_9052_p6 = data_92_V_read93_phi_reg_16138.read();
    } else {
        ap_phi_mux_data_92_V_read93_rewind_phi_fu_9052_p6 = data_92_V_read93_rewind_reg_9048.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_93_V_read94_phi_phi_fu_16155_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_93_V_read94_phi_phi_fu_16155_p4 = ap_phi_mux_data_93_V_read94_rewind_phi_fu_9066_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_93_V_read94_phi_phi_fu_16155_p4 = data_93_V_read.read();
    } else {
        ap_phi_mux_data_93_V_read94_phi_phi_fu_16155_p4 = ap_phi_reg_pp0_iter0_data_93_V_read94_phi_reg_16151.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_93_V_read94_rewind_phi_fu_9066_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_93_V_read94_rewind_phi_fu_9066_p6 = data_93_V_read94_phi_reg_16151.read();
    } else {
        ap_phi_mux_data_93_V_read94_rewind_phi_fu_9066_p6 = data_93_V_read94_rewind_reg_9062.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_94_V_read95_phi_phi_fu_16168_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_94_V_read95_phi_phi_fu_16168_p4 = ap_phi_mux_data_94_V_read95_rewind_phi_fu_9080_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_94_V_read95_phi_phi_fu_16168_p4 = data_94_V_read.read();
    } else {
        ap_phi_mux_data_94_V_read95_phi_phi_fu_16168_p4 = ap_phi_reg_pp0_iter0_data_94_V_read95_phi_reg_16164.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_94_V_read95_rewind_phi_fu_9080_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_94_V_read95_rewind_phi_fu_9080_p6 = data_94_V_read95_phi_reg_16164.read();
    } else {
        ap_phi_mux_data_94_V_read95_rewind_phi_fu_9080_p6 = data_94_V_read95_rewind_reg_9076.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_95_V_read96_phi_phi_fu_16181_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_95_V_read96_phi_phi_fu_16181_p4 = ap_phi_mux_data_95_V_read96_rewind_phi_fu_9094_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_95_V_read96_phi_phi_fu_16181_p4 = data_95_V_read.read();
    } else {
        ap_phi_mux_data_95_V_read96_phi_phi_fu_16181_p4 = ap_phi_reg_pp0_iter0_data_95_V_read96_phi_reg_16177.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_95_V_read96_rewind_phi_fu_9094_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_95_V_read96_rewind_phi_fu_9094_p6 = data_95_V_read96_phi_reg_16177.read();
    } else {
        ap_phi_mux_data_95_V_read96_rewind_phi_fu_9094_p6 = data_95_V_read96_rewind_reg_9090.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_96_V_read97_phi_phi_fu_16194_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_96_V_read97_phi_phi_fu_16194_p4 = ap_phi_mux_data_96_V_read97_rewind_phi_fu_9108_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_96_V_read97_phi_phi_fu_16194_p4 = data_96_V_read.read();
    } else {
        ap_phi_mux_data_96_V_read97_phi_phi_fu_16194_p4 = ap_phi_reg_pp0_iter0_data_96_V_read97_phi_reg_16190.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_96_V_read97_rewind_phi_fu_9108_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_96_V_read97_rewind_phi_fu_9108_p6 = data_96_V_read97_phi_reg_16190.read();
    } else {
        ap_phi_mux_data_96_V_read97_rewind_phi_fu_9108_p6 = data_96_V_read97_rewind_reg_9104.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_97_V_read98_phi_phi_fu_16207_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_97_V_read98_phi_phi_fu_16207_p4 = ap_phi_mux_data_97_V_read98_rewind_phi_fu_9122_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_97_V_read98_phi_phi_fu_16207_p4 = data_97_V_read.read();
    } else {
        ap_phi_mux_data_97_V_read98_phi_phi_fu_16207_p4 = ap_phi_reg_pp0_iter0_data_97_V_read98_phi_reg_16203.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_97_V_read98_rewind_phi_fu_9122_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_97_V_read98_rewind_phi_fu_9122_p6 = data_97_V_read98_phi_reg_16203.read();
    } else {
        ap_phi_mux_data_97_V_read98_rewind_phi_fu_9122_p6 = data_97_V_read98_rewind_reg_9118.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_98_V_read99_phi_phi_fu_16220_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_98_V_read99_phi_phi_fu_16220_p4 = ap_phi_mux_data_98_V_read99_rewind_phi_fu_9136_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_98_V_read99_phi_phi_fu_16220_p4 = data_98_V_read.read();
    } else {
        ap_phi_mux_data_98_V_read99_phi_phi_fu_16220_p4 = ap_phi_reg_pp0_iter0_data_98_V_read99_phi_reg_16216.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_98_V_read99_rewind_phi_fu_9136_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_98_V_read99_rewind_phi_fu_9136_p6 = data_98_V_read99_phi_reg_16216.read();
    } else {
        ap_phi_mux_data_98_V_read99_rewind_phi_fu_9136_p6 = data_98_V_read99_rewind_reg_9132.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_99_V_read100_phi_phi_fu_16233_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_99_V_read100_phi_phi_fu_16233_p4 = ap_phi_mux_data_99_V_read100_rewind_phi_fu_9150_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_99_V_read100_phi_phi_fu_16233_p4 = data_99_V_read.read();
    } else {
        ap_phi_mux_data_99_V_read100_phi_phi_fu_16233_p4 = ap_phi_reg_pp0_iter0_data_99_V_read100_phi_reg_16229.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_99_V_read100_rewind_phi_fu_9150_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_99_V_read100_rewind_phi_fu_9150_p6 = data_99_V_read100_phi_reg_16229.read();
    } else {
        ap_phi_mux_data_99_V_read100_rewind_phi_fu_9150_p6 = data_99_V_read100_rewind_reg_9146.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_9_V_read10_phi_phi_fu_15063_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7748_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_9_V_read10_phi_phi_fu_15063_p4 = ap_phi_mux_data_9_V_read10_rewind_phi_fu_7890_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7748_p6.read())) {
        ap_phi_mux_data_9_V_read10_phi_phi_fu_15063_p4 = data_9_V_read.read();
    } else {
        ap_phi_mux_data_9_V_read10_phi_phi_fu_15063_p4 = ap_phi_reg_pp0_iter0_data_9_V_read10_phi_reg_15059.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_data_9_V_read10_rewind_phi_fu_7890_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_9_V_read10_rewind_phi_fu_7890_p6 = data_9_V_read10_phi_reg_15059.read();
    } else {
        ap_phi_mux_data_9_V_read10_rewind_phi_fu_7890_p6 = data_9_V_read10_rewind_reg_7886.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_do_init_phi_fu_7748_p6() {
    if (esl_seteq<1,1,1>(ap_condition_4491.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln34_reg_2030021.read())) {
            ap_phi_mux_do_init_phi_fu_7748_p6 = ap_const_lv1_1;
        } else if (esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0)) {
            ap_phi_mux_do_init_phi_fu_7748_p6 = ap_const_lv1_0;
        } else {
            ap_phi_mux_do_init_phi_fu_7748_p6 = do_init_reg_7744.read();
        }
    } else {
        ap_phi_mux_do_init_phi_fu_7748_p6 = do_init_reg_7744.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_mux_i_part_0_i2150_phi_fu_14932_p6() {
    if (esl_seteq<1,1,1>(ap_condition_4491.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln34_reg_2030021.read())) {
            ap_phi_mux_i_part_0_i2150_phi_fu_14932_p6 = ap_const_lv4_0;
        } else if (esl_seteq<1,1,1>(icmp_ln34_reg_2030021.read(), ap_const_lv1_0)) {
            ap_phi_mux_i_part_0_i2150_phi_fu_14932_p6 = i_part_reg_2030016.read();
        } else {
            ap_phi_mux_i_part_0_i2150_phi_fu_14932_p6 = i_part_0_i2150_reg_14928.read();
        }
    } else {
        ap_phi_mux_i_part_0_i2150_phi_fu_14932_p6 = i_part_0_i2150_reg_14928.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_0_V_read1_phi_reg_14942() {
    ap_phi_reg_pp0_iter0_data_0_V_read1_phi_reg_14942 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_100_V_read101_phi_reg_16242() {
    ap_phi_reg_pp0_iter0_data_100_V_read101_phi_reg_16242 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_101_V_read102_phi_reg_16255() {
    ap_phi_reg_pp0_iter0_data_101_V_read102_phi_reg_16255 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_102_V_read103_phi_reg_16268() {
    ap_phi_reg_pp0_iter0_data_102_V_read103_phi_reg_16268 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_103_V_read104_phi_reg_16281() {
    ap_phi_reg_pp0_iter0_data_103_V_read104_phi_reg_16281 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_104_V_read105_phi_reg_16294() {
    ap_phi_reg_pp0_iter0_data_104_V_read105_phi_reg_16294 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_105_V_read106_phi_reg_16307() {
    ap_phi_reg_pp0_iter0_data_105_V_read106_phi_reg_16307 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_106_V_read107_phi_reg_16320() {
    ap_phi_reg_pp0_iter0_data_106_V_read107_phi_reg_16320 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_107_V_read108_phi_reg_16333() {
    ap_phi_reg_pp0_iter0_data_107_V_read108_phi_reg_16333 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_108_V_read109_phi_reg_16346() {
    ap_phi_reg_pp0_iter0_data_108_V_read109_phi_reg_16346 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_109_V_read110_phi_reg_16359() {
    ap_phi_reg_pp0_iter0_data_109_V_read110_phi_reg_16359 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_10_V_read11_phi_reg_15072() {
    ap_phi_reg_pp0_iter0_data_10_V_read11_phi_reg_15072 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_110_V_read111_phi_reg_16372() {
    ap_phi_reg_pp0_iter0_data_110_V_read111_phi_reg_16372 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_111_V_read112_phi_reg_16385() {
    ap_phi_reg_pp0_iter0_data_111_V_read112_phi_reg_16385 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_112_V_read113_phi_reg_16398() {
    ap_phi_reg_pp0_iter0_data_112_V_read113_phi_reg_16398 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_113_V_read114_phi_reg_16411() {
    ap_phi_reg_pp0_iter0_data_113_V_read114_phi_reg_16411 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_114_V_read115_phi_reg_16424() {
    ap_phi_reg_pp0_iter0_data_114_V_read115_phi_reg_16424 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_115_V_read116_phi_reg_16437() {
    ap_phi_reg_pp0_iter0_data_115_V_read116_phi_reg_16437 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_116_V_read117_phi_reg_16450() {
    ap_phi_reg_pp0_iter0_data_116_V_read117_phi_reg_16450 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_117_V_read118_phi_reg_16463() {
    ap_phi_reg_pp0_iter0_data_117_V_read118_phi_reg_16463 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_118_V_read119_phi_reg_16476() {
    ap_phi_reg_pp0_iter0_data_118_V_read119_phi_reg_16476 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_119_V_read120_phi_reg_16489() {
    ap_phi_reg_pp0_iter0_data_119_V_read120_phi_reg_16489 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_11_V_read12_phi_reg_15085() {
    ap_phi_reg_pp0_iter0_data_11_V_read12_phi_reg_15085 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_120_V_read121_phi_reg_16502() {
    ap_phi_reg_pp0_iter0_data_120_V_read121_phi_reg_16502 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_121_V_read122_phi_reg_16515() {
    ap_phi_reg_pp0_iter0_data_121_V_read122_phi_reg_16515 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_122_V_read123_phi_reg_16528() {
    ap_phi_reg_pp0_iter0_data_122_V_read123_phi_reg_16528 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_123_V_read124_phi_reg_16541() {
    ap_phi_reg_pp0_iter0_data_123_V_read124_phi_reg_16541 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_124_V_read125_phi_reg_16554() {
    ap_phi_reg_pp0_iter0_data_124_V_read125_phi_reg_16554 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_125_V_read126_phi_reg_16567() {
    ap_phi_reg_pp0_iter0_data_125_V_read126_phi_reg_16567 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_126_V_read127_phi_reg_16580() {
    ap_phi_reg_pp0_iter0_data_126_V_read127_phi_reg_16580 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_127_V_read128_phi_reg_16593() {
    ap_phi_reg_pp0_iter0_data_127_V_read128_phi_reg_16593 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_128_V_read129_phi_reg_16606() {
    ap_phi_reg_pp0_iter0_data_128_V_read129_phi_reg_16606 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_129_V_read130_phi_reg_16619() {
    ap_phi_reg_pp0_iter0_data_129_V_read130_phi_reg_16619 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_12_V_read13_phi_reg_15098() {
    ap_phi_reg_pp0_iter0_data_12_V_read13_phi_reg_15098 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_130_V_read131_phi_reg_16632() {
    ap_phi_reg_pp0_iter0_data_130_V_read131_phi_reg_16632 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_131_V_read132_phi_reg_16645() {
    ap_phi_reg_pp0_iter0_data_131_V_read132_phi_reg_16645 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_132_V_read133_phi_reg_16658() {
    ap_phi_reg_pp0_iter0_data_132_V_read133_phi_reg_16658 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_133_V_read134_phi_reg_16671() {
    ap_phi_reg_pp0_iter0_data_133_V_read134_phi_reg_16671 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_134_V_read135_phi_reg_16684() {
    ap_phi_reg_pp0_iter0_data_134_V_read135_phi_reg_16684 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_135_V_read136_phi_reg_16697() {
    ap_phi_reg_pp0_iter0_data_135_V_read136_phi_reg_16697 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_136_V_read137_phi_reg_16710() {
    ap_phi_reg_pp0_iter0_data_136_V_read137_phi_reg_16710 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_137_V_read138_phi_reg_16723() {
    ap_phi_reg_pp0_iter0_data_137_V_read138_phi_reg_16723 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_138_V_read139_phi_reg_16736() {
    ap_phi_reg_pp0_iter0_data_138_V_read139_phi_reg_16736 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_139_V_read140_phi_reg_16749() {
    ap_phi_reg_pp0_iter0_data_139_V_read140_phi_reg_16749 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_13_V_read14_phi_reg_15111() {
    ap_phi_reg_pp0_iter0_data_13_V_read14_phi_reg_15111 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_140_V_read141_phi_reg_16762() {
    ap_phi_reg_pp0_iter0_data_140_V_read141_phi_reg_16762 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_141_V_read142_phi_reg_16775() {
    ap_phi_reg_pp0_iter0_data_141_V_read142_phi_reg_16775 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_142_V_read143_phi_reg_16788() {
    ap_phi_reg_pp0_iter0_data_142_V_read143_phi_reg_16788 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_143_V_read144_phi_reg_16801() {
    ap_phi_reg_pp0_iter0_data_143_V_read144_phi_reg_16801 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_144_V_read145_phi_reg_16814() {
    ap_phi_reg_pp0_iter0_data_144_V_read145_phi_reg_16814 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_145_V_read146_phi_reg_16827() {
    ap_phi_reg_pp0_iter0_data_145_V_read146_phi_reg_16827 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_146_V_read147_phi_reg_16840() {
    ap_phi_reg_pp0_iter0_data_146_V_read147_phi_reg_16840 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_147_V_read148_phi_reg_16853() {
    ap_phi_reg_pp0_iter0_data_147_V_read148_phi_reg_16853 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_148_V_read149_phi_reg_16866() {
    ap_phi_reg_pp0_iter0_data_148_V_read149_phi_reg_16866 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_149_V_read150_phi_reg_16879() {
    ap_phi_reg_pp0_iter0_data_149_V_read150_phi_reg_16879 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_14_V_read15_phi_reg_15124() {
    ap_phi_reg_pp0_iter0_data_14_V_read15_phi_reg_15124 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_150_V_read151_phi_reg_16892() {
    ap_phi_reg_pp0_iter0_data_150_V_read151_phi_reg_16892 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_151_V_read152_phi_reg_16905() {
    ap_phi_reg_pp0_iter0_data_151_V_read152_phi_reg_16905 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_152_V_read153_phi_reg_16918() {
    ap_phi_reg_pp0_iter0_data_152_V_read153_phi_reg_16918 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_153_V_read154_phi_reg_16931() {
    ap_phi_reg_pp0_iter0_data_153_V_read154_phi_reg_16931 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_154_V_read155_phi_reg_16944() {
    ap_phi_reg_pp0_iter0_data_154_V_read155_phi_reg_16944 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_155_V_read156_phi_reg_16957() {
    ap_phi_reg_pp0_iter0_data_155_V_read156_phi_reg_16957 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_156_V_read157_phi_reg_16970() {
    ap_phi_reg_pp0_iter0_data_156_V_read157_phi_reg_16970 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_157_V_read158_phi_reg_16983() {
    ap_phi_reg_pp0_iter0_data_157_V_read158_phi_reg_16983 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_158_V_read159_phi_reg_16996() {
    ap_phi_reg_pp0_iter0_data_158_V_read159_phi_reg_16996 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_159_V_read160_phi_reg_17009() {
    ap_phi_reg_pp0_iter0_data_159_V_read160_phi_reg_17009 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_15_V_read16_phi_reg_15137() {
    ap_phi_reg_pp0_iter0_data_15_V_read16_phi_reg_15137 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_160_V_read161_phi_reg_17022() {
    ap_phi_reg_pp0_iter0_data_160_V_read161_phi_reg_17022 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_161_V_read162_phi_reg_17035() {
    ap_phi_reg_pp0_iter0_data_161_V_read162_phi_reg_17035 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_162_V_read163_phi_reg_17048() {
    ap_phi_reg_pp0_iter0_data_162_V_read163_phi_reg_17048 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_163_V_read164_phi_reg_17061() {
    ap_phi_reg_pp0_iter0_data_163_V_read164_phi_reg_17061 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_164_V_read165_phi_reg_17074() {
    ap_phi_reg_pp0_iter0_data_164_V_read165_phi_reg_17074 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_165_V_read166_phi_reg_17087() {
    ap_phi_reg_pp0_iter0_data_165_V_read166_phi_reg_17087 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_166_V_read167_phi_reg_17100() {
    ap_phi_reg_pp0_iter0_data_166_V_read167_phi_reg_17100 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_167_V_read168_phi_reg_17113() {
    ap_phi_reg_pp0_iter0_data_167_V_read168_phi_reg_17113 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_168_V_read169_phi_reg_17126() {
    ap_phi_reg_pp0_iter0_data_168_V_read169_phi_reg_17126 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_169_V_read170_phi_reg_17139() {
    ap_phi_reg_pp0_iter0_data_169_V_read170_phi_reg_17139 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_16_V_read17_phi_reg_15150() {
    ap_phi_reg_pp0_iter0_data_16_V_read17_phi_reg_15150 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_170_V_read171_phi_reg_17152() {
    ap_phi_reg_pp0_iter0_data_170_V_read171_phi_reg_17152 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_171_V_read172_phi_reg_17165() {
    ap_phi_reg_pp0_iter0_data_171_V_read172_phi_reg_17165 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_172_V_read173_phi_reg_17178() {
    ap_phi_reg_pp0_iter0_data_172_V_read173_phi_reg_17178 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_173_V_read174_phi_reg_17191() {
    ap_phi_reg_pp0_iter0_data_173_V_read174_phi_reg_17191 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_174_V_read175_phi_reg_17204() {
    ap_phi_reg_pp0_iter0_data_174_V_read175_phi_reg_17204 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_175_V_read176_phi_reg_17217() {
    ap_phi_reg_pp0_iter0_data_175_V_read176_phi_reg_17217 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_176_V_read177_phi_reg_17230() {
    ap_phi_reg_pp0_iter0_data_176_V_read177_phi_reg_17230 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_177_V_read178_phi_reg_17243() {
    ap_phi_reg_pp0_iter0_data_177_V_read178_phi_reg_17243 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_178_V_read179_phi_reg_17256() {
    ap_phi_reg_pp0_iter0_data_178_V_read179_phi_reg_17256 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_179_V_read180_phi_reg_17269() {
    ap_phi_reg_pp0_iter0_data_179_V_read180_phi_reg_17269 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_17_V_read18_phi_reg_15163() {
    ap_phi_reg_pp0_iter0_data_17_V_read18_phi_reg_15163 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_180_V_read181_phi_reg_17282() {
    ap_phi_reg_pp0_iter0_data_180_V_read181_phi_reg_17282 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_181_V_read182_phi_reg_17295() {
    ap_phi_reg_pp0_iter0_data_181_V_read182_phi_reg_17295 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_182_V_read183_phi_reg_17308() {
    ap_phi_reg_pp0_iter0_data_182_V_read183_phi_reg_17308 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_183_V_read184_phi_reg_17321() {
    ap_phi_reg_pp0_iter0_data_183_V_read184_phi_reg_17321 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_184_V_read185_phi_reg_17334() {
    ap_phi_reg_pp0_iter0_data_184_V_read185_phi_reg_17334 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_185_V_read186_phi_reg_17347() {
    ap_phi_reg_pp0_iter0_data_185_V_read186_phi_reg_17347 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_186_V_read187_phi_reg_17360() {
    ap_phi_reg_pp0_iter0_data_186_V_read187_phi_reg_17360 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_187_V_read188_phi_reg_17373() {
    ap_phi_reg_pp0_iter0_data_187_V_read188_phi_reg_17373 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_188_V_read189_phi_reg_17386() {
    ap_phi_reg_pp0_iter0_data_188_V_read189_phi_reg_17386 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_189_V_read190_phi_reg_17399() {
    ap_phi_reg_pp0_iter0_data_189_V_read190_phi_reg_17399 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_18_V_read19_phi_reg_15176() {
    ap_phi_reg_pp0_iter0_data_18_V_read19_phi_reg_15176 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_190_V_read191_phi_reg_17412() {
    ap_phi_reg_pp0_iter0_data_190_V_read191_phi_reg_17412 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_191_V_read192_phi_reg_17425() {
    ap_phi_reg_pp0_iter0_data_191_V_read192_phi_reg_17425 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_192_V_read193_phi_reg_17438() {
    ap_phi_reg_pp0_iter0_data_192_V_read193_phi_reg_17438 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_193_V_read194_phi_reg_17451() {
    ap_phi_reg_pp0_iter0_data_193_V_read194_phi_reg_17451 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_194_V_read195_phi_reg_17464() {
    ap_phi_reg_pp0_iter0_data_194_V_read195_phi_reg_17464 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_195_V_read196_phi_reg_17477() {
    ap_phi_reg_pp0_iter0_data_195_V_read196_phi_reg_17477 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_196_V_read197_phi_reg_17490() {
    ap_phi_reg_pp0_iter0_data_196_V_read197_phi_reg_17490 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_197_V_read198_phi_reg_17503() {
    ap_phi_reg_pp0_iter0_data_197_V_read198_phi_reg_17503 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_198_V_read199_phi_reg_17516() {
    ap_phi_reg_pp0_iter0_data_198_V_read199_phi_reg_17516 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_199_V_read200_phi_reg_17529() {
    ap_phi_reg_pp0_iter0_data_199_V_read200_phi_reg_17529 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_19_V_read20_phi_reg_15189() {
    ap_phi_reg_pp0_iter0_data_19_V_read20_phi_reg_15189 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_1_V_read2_phi_reg_14955() {
    ap_phi_reg_pp0_iter0_data_1_V_read2_phi_reg_14955 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_200_V_read201_phi_reg_17542() {
    ap_phi_reg_pp0_iter0_data_200_V_read201_phi_reg_17542 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_201_V_read202_phi_reg_17555() {
    ap_phi_reg_pp0_iter0_data_201_V_read202_phi_reg_17555 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_202_V_read203_phi_reg_17568() {
    ap_phi_reg_pp0_iter0_data_202_V_read203_phi_reg_17568 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_203_V_read204_phi_reg_17581() {
    ap_phi_reg_pp0_iter0_data_203_V_read204_phi_reg_17581 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_204_V_read205_phi_reg_17594() {
    ap_phi_reg_pp0_iter0_data_204_V_read205_phi_reg_17594 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_205_V_read206_phi_reg_17607() {
    ap_phi_reg_pp0_iter0_data_205_V_read206_phi_reg_17607 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_206_V_read207_phi_reg_17620() {
    ap_phi_reg_pp0_iter0_data_206_V_read207_phi_reg_17620 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_207_V_read208_phi_reg_17633() {
    ap_phi_reg_pp0_iter0_data_207_V_read208_phi_reg_17633 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_208_V_read209_phi_reg_17646() {
    ap_phi_reg_pp0_iter0_data_208_V_read209_phi_reg_17646 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_209_V_read210_phi_reg_17659() {
    ap_phi_reg_pp0_iter0_data_209_V_read210_phi_reg_17659 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_20_V_read21_phi_reg_15202() {
    ap_phi_reg_pp0_iter0_data_20_V_read21_phi_reg_15202 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_210_V_read211_phi_reg_17672() {
    ap_phi_reg_pp0_iter0_data_210_V_read211_phi_reg_17672 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_211_V_read212_phi_reg_17685() {
    ap_phi_reg_pp0_iter0_data_211_V_read212_phi_reg_17685 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_212_V_read213_phi_reg_17698() {
    ap_phi_reg_pp0_iter0_data_212_V_read213_phi_reg_17698 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_213_V_read214_phi_reg_17711() {
    ap_phi_reg_pp0_iter0_data_213_V_read214_phi_reg_17711 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_214_V_read215_phi_reg_17724() {
    ap_phi_reg_pp0_iter0_data_214_V_read215_phi_reg_17724 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_215_V_read216_phi_reg_17737() {
    ap_phi_reg_pp0_iter0_data_215_V_read216_phi_reg_17737 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_216_V_read217_phi_reg_17750() {
    ap_phi_reg_pp0_iter0_data_216_V_read217_phi_reg_17750 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_217_V_read218_phi_reg_17763() {
    ap_phi_reg_pp0_iter0_data_217_V_read218_phi_reg_17763 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_218_V_read219_phi_reg_17776() {
    ap_phi_reg_pp0_iter0_data_218_V_read219_phi_reg_17776 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_219_V_read220_phi_reg_17789() {
    ap_phi_reg_pp0_iter0_data_219_V_read220_phi_reg_17789 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_21_V_read22_phi_reg_15215() {
    ap_phi_reg_pp0_iter0_data_21_V_read22_phi_reg_15215 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_220_V_read221_phi_reg_17802() {
    ap_phi_reg_pp0_iter0_data_220_V_read221_phi_reg_17802 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_221_V_read222_phi_reg_17815() {
    ap_phi_reg_pp0_iter0_data_221_V_read222_phi_reg_17815 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_222_V_read223_phi_reg_17828() {
    ap_phi_reg_pp0_iter0_data_222_V_read223_phi_reg_17828 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_223_V_read224_phi_reg_17841() {
    ap_phi_reg_pp0_iter0_data_223_V_read224_phi_reg_17841 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_224_V_read225_phi_reg_17854() {
    ap_phi_reg_pp0_iter0_data_224_V_read225_phi_reg_17854 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_225_V_read226_phi_reg_17867() {
    ap_phi_reg_pp0_iter0_data_225_V_read226_phi_reg_17867 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_226_V_read227_phi_reg_17880() {
    ap_phi_reg_pp0_iter0_data_226_V_read227_phi_reg_17880 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_227_V_read228_phi_reg_17893() {
    ap_phi_reg_pp0_iter0_data_227_V_read228_phi_reg_17893 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_228_V_read229_phi_reg_17906() {
    ap_phi_reg_pp0_iter0_data_228_V_read229_phi_reg_17906 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_229_V_read230_phi_reg_17919() {
    ap_phi_reg_pp0_iter0_data_229_V_read230_phi_reg_17919 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_22_V_read23_phi_reg_15228() {
    ap_phi_reg_pp0_iter0_data_22_V_read23_phi_reg_15228 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_230_V_read231_phi_reg_17932() {
    ap_phi_reg_pp0_iter0_data_230_V_read231_phi_reg_17932 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_231_V_read232_phi_reg_17945() {
    ap_phi_reg_pp0_iter0_data_231_V_read232_phi_reg_17945 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_232_V_read233_phi_reg_17958() {
    ap_phi_reg_pp0_iter0_data_232_V_read233_phi_reg_17958 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_233_V_read234_phi_reg_17971() {
    ap_phi_reg_pp0_iter0_data_233_V_read234_phi_reg_17971 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_234_V_read235_phi_reg_17984() {
    ap_phi_reg_pp0_iter0_data_234_V_read235_phi_reg_17984 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_235_V_read236_phi_reg_17997() {
    ap_phi_reg_pp0_iter0_data_235_V_read236_phi_reg_17997 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_236_V_read237_phi_reg_18010() {
    ap_phi_reg_pp0_iter0_data_236_V_read237_phi_reg_18010 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_237_V_read238_phi_reg_18023() {
    ap_phi_reg_pp0_iter0_data_237_V_read238_phi_reg_18023 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_238_V_read239_phi_reg_18036() {
    ap_phi_reg_pp0_iter0_data_238_V_read239_phi_reg_18036 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_239_V_read240_phi_reg_18049() {
    ap_phi_reg_pp0_iter0_data_239_V_read240_phi_reg_18049 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_23_V_read24_phi_reg_15241() {
    ap_phi_reg_pp0_iter0_data_23_V_read24_phi_reg_15241 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_240_V_read241_phi_reg_18062() {
    ap_phi_reg_pp0_iter0_data_240_V_read241_phi_reg_18062 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_241_V_read242_phi_reg_18075() {
    ap_phi_reg_pp0_iter0_data_241_V_read242_phi_reg_18075 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_242_V_read243_phi_reg_18088() {
    ap_phi_reg_pp0_iter0_data_242_V_read243_phi_reg_18088 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_243_V_read244_phi_reg_18101() {
    ap_phi_reg_pp0_iter0_data_243_V_read244_phi_reg_18101 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_244_V_read245_phi_reg_18114() {
    ap_phi_reg_pp0_iter0_data_244_V_read245_phi_reg_18114 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_245_V_read246_phi_reg_18127() {
    ap_phi_reg_pp0_iter0_data_245_V_read246_phi_reg_18127 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_246_V_read247_phi_reg_18140() {
    ap_phi_reg_pp0_iter0_data_246_V_read247_phi_reg_18140 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_247_V_read248_phi_reg_18153() {
    ap_phi_reg_pp0_iter0_data_247_V_read248_phi_reg_18153 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_248_V_read249_phi_reg_18166() {
    ap_phi_reg_pp0_iter0_data_248_V_read249_phi_reg_18166 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_249_V_read250_phi_reg_18179() {
    ap_phi_reg_pp0_iter0_data_249_V_read250_phi_reg_18179 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_24_V_read25_phi_reg_15254() {
    ap_phi_reg_pp0_iter0_data_24_V_read25_phi_reg_15254 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_250_V_read251_phi_reg_18192() {
    ap_phi_reg_pp0_iter0_data_250_V_read251_phi_reg_18192 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_251_V_read252_phi_reg_18205() {
    ap_phi_reg_pp0_iter0_data_251_V_read252_phi_reg_18205 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_252_V_read253_phi_reg_18218() {
    ap_phi_reg_pp0_iter0_data_252_V_read253_phi_reg_18218 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_253_V_read254_phi_reg_18231() {
    ap_phi_reg_pp0_iter0_data_253_V_read254_phi_reg_18231 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_254_V_read255_phi_reg_18244() {
    ap_phi_reg_pp0_iter0_data_254_V_read255_phi_reg_18244 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_255_V_read256_phi_reg_18257() {
    ap_phi_reg_pp0_iter0_data_255_V_read256_phi_reg_18257 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_256_V_read257_phi_reg_18270() {
    ap_phi_reg_pp0_iter0_data_256_V_read257_phi_reg_18270 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_257_V_read258_phi_reg_18283() {
    ap_phi_reg_pp0_iter0_data_257_V_read258_phi_reg_18283 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_258_V_read259_phi_reg_18296() {
    ap_phi_reg_pp0_iter0_data_258_V_read259_phi_reg_18296 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_259_V_read260_phi_reg_18309() {
    ap_phi_reg_pp0_iter0_data_259_V_read260_phi_reg_18309 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_25_V_read26_phi_reg_15267() {
    ap_phi_reg_pp0_iter0_data_25_V_read26_phi_reg_15267 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_260_V_read261_phi_reg_18322() {
    ap_phi_reg_pp0_iter0_data_260_V_read261_phi_reg_18322 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_261_V_read262_phi_reg_18335() {
    ap_phi_reg_pp0_iter0_data_261_V_read262_phi_reg_18335 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_262_V_read263_phi_reg_18348() {
    ap_phi_reg_pp0_iter0_data_262_V_read263_phi_reg_18348 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_263_V_read264_phi_reg_18361() {
    ap_phi_reg_pp0_iter0_data_263_V_read264_phi_reg_18361 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_264_V_read265_phi_reg_18374() {
    ap_phi_reg_pp0_iter0_data_264_V_read265_phi_reg_18374 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_265_V_read266_phi_reg_18387() {
    ap_phi_reg_pp0_iter0_data_265_V_read266_phi_reg_18387 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_266_V_read267_phi_reg_18400() {
    ap_phi_reg_pp0_iter0_data_266_V_read267_phi_reg_18400 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_267_V_read268_phi_reg_18413() {
    ap_phi_reg_pp0_iter0_data_267_V_read268_phi_reg_18413 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_268_V_read269_phi_reg_18426() {
    ap_phi_reg_pp0_iter0_data_268_V_read269_phi_reg_18426 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_269_V_read270_phi_reg_18439() {
    ap_phi_reg_pp0_iter0_data_269_V_read270_phi_reg_18439 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_26_V_read27_phi_reg_15280() {
    ap_phi_reg_pp0_iter0_data_26_V_read27_phi_reg_15280 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_270_V_read271_phi_reg_18452() {
    ap_phi_reg_pp0_iter0_data_270_V_read271_phi_reg_18452 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_271_V_read272_phi_reg_18465() {
    ap_phi_reg_pp0_iter0_data_271_V_read272_phi_reg_18465 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_272_V_read273_phi_reg_18478() {
    ap_phi_reg_pp0_iter0_data_272_V_read273_phi_reg_18478 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_273_V_read274_phi_reg_18491() {
    ap_phi_reg_pp0_iter0_data_273_V_read274_phi_reg_18491 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_274_V_read275_phi_reg_18504() {
    ap_phi_reg_pp0_iter0_data_274_V_read275_phi_reg_18504 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_275_V_read276_phi_reg_18517() {
    ap_phi_reg_pp0_iter0_data_275_V_read276_phi_reg_18517 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_276_V_read277_phi_reg_18530() {
    ap_phi_reg_pp0_iter0_data_276_V_read277_phi_reg_18530 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_277_V_read278_phi_reg_18543() {
    ap_phi_reg_pp0_iter0_data_277_V_read278_phi_reg_18543 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_278_V_read279_phi_reg_18556() {
    ap_phi_reg_pp0_iter0_data_278_V_read279_phi_reg_18556 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_279_V_read280_phi_reg_18569() {
    ap_phi_reg_pp0_iter0_data_279_V_read280_phi_reg_18569 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_27_V_read28_phi_reg_15293() {
    ap_phi_reg_pp0_iter0_data_27_V_read28_phi_reg_15293 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_280_V_read281_phi_reg_18582() {
    ap_phi_reg_pp0_iter0_data_280_V_read281_phi_reg_18582 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_281_V_read282_phi_reg_18595() {
    ap_phi_reg_pp0_iter0_data_281_V_read282_phi_reg_18595 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_282_V_read283_phi_reg_18608() {
    ap_phi_reg_pp0_iter0_data_282_V_read283_phi_reg_18608 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_283_V_read284_phi_reg_18621() {
    ap_phi_reg_pp0_iter0_data_283_V_read284_phi_reg_18621 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_284_V_read285_phi_reg_18634() {
    ap_phi_reg_pp0_iter0_data_284_V_read285_phi_reg_18634 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_285_V_read286_phi_reg_18647() {
    ap_phi_reg_pp0_iter0_data_285_V_read286_phi_reg_18647 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_286_V_read287_phi_reg_18660() {
    ap_phi_reg_pp0_iter0_data_286_V_read287_phi_reg_18660 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_287_V_read288_phi_reg_18673() {
    ap_phi_reg_pp0_iter0_data_287_V_read288_phi_reg_18673 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_288_V_read289_phi_reg_18686() {
    ap_phi_reg_pp0_iter0_data_288_V_read289_phi_reg_18686 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_289_V_read290_phi_reg_18699() {
    ap_phi_reg_pp0_iter0_data_289_V_read290_phi_reg_18699 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_28_V_read29_phi_reg_15306() {
    ap_phi_reg_pp0_iter0_data_28_V_read29_phi_reg_15306 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_290_V_read291_phi_reg_18712() {
    ap_phi_reg_pp0_iter0_data_290_V_read291_phi_reg_18712 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_291_V_read292_phi_reg_18725() {
    ap_phi_reg_pp0_iter0_data_291_V_read292_phi_reg_18725 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_292_V_read293_phi_reg_18738() {
    ap_phi_reg_pp0_iter0_data_292_V_read293_phi_reg_18738 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_293_V_read294_phi_reg_18751() {
    ap_phi_reg_pp0_iter0_data_293_V_read294_phi_reg_18751 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_294_V_read295_phi_reg_18764() {
    ap_phi_reg_pp0_iter0_data_294_V_read295_phi_reg_18764 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_295_V_read296_phi_reg_18777() {
    ap_phi_reg_pp0_iter0_data_295_V_read296_phi_reg_18777 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_296_V_read297_phi_reg_18790() {
    ap_phi_reg_pp0_iter0_data_296_V_read297_phi_reg_18790 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_297_V_read298_phi_reg_18803() {
    ap_phi_reg_pp0_iter0_data_297_V_read298_phi_reg_18803 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_298_V_read299_phi_reg_18816() {
    ap_phi_reg_pp0_iter0_data_298_V_read299_phi_reg_18816 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_299_V_read300_phi_reg_18829() {
    ap_phi_reg_pp0_iter0_data_299_V_read300_phi_reg_18829 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_29_V_read30_phi_reg_15319() {
    ap_phi_reg_pp0_iter0_data_29_V_read30_phi_reg_15319 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_2_V_read3_phi_reg_14968() {
    ap_phi_reg_pp0_iter0_data_2_V_read3_phi_reg_14968 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_300_V_read301_phi_reg_18842() {
    ap_phi_reg_pp0_iter0_data_300_V_read301_phi_reg_18842 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_301_V_read302_phi_reg_18855() {
    ap_phi_reg_pp0_iter0_data_301_V_read302_phi_reg_18855 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_302_V_read303_phi_reg_18868() {
    ap_phi_reg_pp0_iter0_data_302_V_read303_phi_reg_18868 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_303_V_read304_phi_reg_18881() {
    ap_phi_reg_pp0_iter0_data_303_V_read304_phi_reg_18881 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_304_V_read305_phi_reg_18894() {
    ap_phi_reg_pp0_iter0_data_304_V_read305_phi_reg_18894 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_305_V_read306_phi_reg_18907() {
    ap_phi_reg_pp0_iter0_data_305_V_read306_phi_reg_18907 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_306_V_read307_phi_reg_18920() {
    ap_phi_reg_pp0_iter0_data_306_V_read307_phi_reg_18920 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_307_V_read308_phi_reg_18933() {
    ap_phi_reg_pp0_iter0_data_307_V_read308_phi_reg_18933 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_308_V_read309_phi_reg_18946() {
    ap_phi_reg_pp0_iter0_data_308_V_read309_phi_reg_18946 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_309_V_read310_phi_reg_18959() {
    ap_phi_reg_pp0_iter0_data_309_V_read310_phi_reg_18959 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_30_V_read31_phi_reg_15332() {
    ap_phi_reg_pp0_iter0_data_30_V_read31_phi_reg_15332 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_310_V_read311_phi_reg_18972() {
    ap_phi_reg_pp0_iter0_data_310_V_read311_phi_reg_18972 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_311_V_read312_phi_reg_18985() {
    ap_phi_reg_pp0_iter0_data_311_V_read312_phi_reg_18985 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_312_V_read313_phi_reg_18998() {
    ap_phi_reg_pp0_iter0_data_312_V_read313_phi_reg_18998 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_313_V_read314_phi_reg_19011() {
    ap_phi_reg_pp0_iter0_data_313_V_read314_phi_reg_19011 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_314_V_read315_phi_reg_19024() {
    ap_phi_reg_pp0_iter0_data_314_V_read315_phi_reg_19024 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_315_V_read316_phi_reg_19037() {
    ap_phi_reg_pp0_iter0_data_315_V_read316_phi_reg_19037 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_316_V_read317_phi_reg_19050() {
    ap_phi_reg_pp0_iter0_data_316_V_read317_phi_reg_19050 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_317_V_read318_phi_reg_19063() {
    ap_phi_reg_pp0_iter0_data_317_V_read318_phi_reg_19063 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_318_V_read319_phi_reg_19076() {
    ap_phi_reg_pp0_iter0_data_318_V_read319_phi_reg_19076 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_319_V_read320_phi_reg_19089() {
    ap_phi_reg_pp0_iter0_data_319_V_read320_phi_reg_19089 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_31_V_read32_phi_reg_15345() {
    ap_phi_reg_pp0_iter0_data_31_V_read32_phi_reg_15345 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_320_V_read321_phi_reg_19102() {
    ap_phi_reg_pp0_iter0_data_320_V_read321_phi_reg_19102 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_321_V_read322_phi_reg_19115() {
    ap_phi_reg_pp0_iter0_data_321_V_read322_phi_reg_19115 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_322_V_read323_phi_reg_19128() {
    ap_phi_reg_pp0_iter0_data_322_V_read323_phi_reg_19128 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_323_V_read324_phi_reg_19141() {
    ap_phi_reg_pp0_iter0_data_323_V_read324_phi_reg_19141 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_324_V_read325_phi_reg_19154() {
    ap_phi_reg_pp0_iter0_data_324_V_read325_phi_reg_19154 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_325_V_read326_phi_reg_19167() {
    ap_phi_reg_pp0_iter0_data_325_V_read326_phi_reg_19167 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_326_V_read327_phi_reg_19180() {
    ap_phi_reg_pp0_iter0_data_326_V_read327_phi_reg_19180 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_327_V_read328_phi_reg_19193() {
    ap_phi_reg_pp0_iter0_data_327_V_read328_phi_reg_19193 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_328_V_read329_phi_reg_19206() {
    ap_phi_reg_pp0_iter0_data_328_V_read329_phi_reg_19206 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_329_V_read330_phi_reg_19219() {
    ap_phi_reg_pp0_iter0_data_329_V_read330_phi_reg_19219 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_32_V_read33_phi_reg_15358() {
    ap_phi_reg_pp0_iter0_data_32_V_read33_phi_reg_15358 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_330_V_read331_phi_reg_19232() {
    ap_phi_reg_pp0_iter0_data_330_V_read331_phi_reg_19232 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_331_V_read332_phi_reg_19245() {
    ap_phi_reg_pp0_iter0_data_331_V_read332_phi_reg_19245 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_332_V_read333_phi_reg_19258() {
    ap_phi_reg_pp0_iter0_data_332_V_read333_phi_reg_19258 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_333_V_read334_phi_reg_19271() {
    ap_phi_reg_pp0_iter0_data_333_V_read334_phi_reg_19271 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_334_V_read335_phi_reg_19284() {
    ap_phi_reg_pp0_iter0_data_334_V_read335_phi_reg_19284 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_335_V_read336_phi_reg_19297() {
    ap_phi_reg_pp0_iter0_data_335_V_read336_phi_reg_19297 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_336_V_read337_phi_reg_19310() {
    ap_phi_reg_pp0_iter0_data_336_V_read337_phi_reg_19310 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_337_V_read338_phi_reg_19323() {
    ap_phi_reg_pp0_iter0_data_337_V_read338_phi_reg_19323 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_338_V_read339_phi_reg_19336() {
    ap_phi_reg_pp0_iter0_data_338_V_read339_phi_reg_19336 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_339_V_read340_phi_reg_19349() {
    ap_phi_reg_pp0_iter0_data_339_V_read340_phi_reg_19349 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_33_V_read34_phi_reg_15371() {
    ap_phi_reg_pp0_iter0_data_33_V_read34_phi_reg_15371 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_340_V_read341_phi_reg_19362() {
    ap_phi_reg_pp0_iter0_data_340_V_read341_phi_reg_19362 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_341_V_read342_phi_reg_19375() {
    ap_phi_reg_pp0_iter0_data_341_V_read342_phi_reg_19375 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_342_V_read343_phi_reg_19388() {
    ap_phi_reg_pp0_iter0_data_342_V_read343_phi_reg_19388 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_343_V_read344_phi_reg_19401() {
    ap_phi_reg_pp0_iter0_data_343_V_read344_phi_reg_19401 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_344_V_read345_phi_reg_19414() {
    ap_phi_reg_pp0_iter0_data_344_V_read345_phi_reg_19414 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_345_V_read346_phi_reg_19427() {
    ap_phi_reg_pp0_iter0_data_345_V_read346_phi_reg_19427 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_346_V_read347_phi_reg_19440() {
    ap_phi_reg_pp0_iter0_data_346_V_read347_phi_reg_19440 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_347_V_read348_phi_reg_19453() {
    ap_phi_reg_pp0_iter0_data_347_V_read348_phi_reg_19453 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_348_V_read349_phi_reg_19466() {
    ap_phi_reg_pp0_iter0_data_348_V_read349_phi_reg_19466 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_349_V_read350_phi_reg_19479() {
    ap_phi_reg_pp0_iter0_data_349_V_read350_phi_reg_19479 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_34_V_read35_phi_reg_15384() {
    ap_phi_reg_pp0_iter0_data_34_V_read35_phi_reg_15384 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_350_V_read351_phi_reg_19492() {
    ap_phi_reg_pp0_iter0_data_350_V_read351_phi_reg_19492 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_351_V_read352_phi_reg_19505() {
    ap_phi_reg_pp0_iter0_data_351_V_read352_phi_reg_19505 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_352_V_read353_phi_reg_19518() {
    ap_phi_reg_pp0_iter0_data_352_V_read353_phi_reg_19518 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_353_V_read354_phi_reg_19531() {
    ap_phi_reg_pp0_iter0_data_353_V_read354_phi_reg_19531 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_354_V_read355_phi_reg_19544() {
    ap_phi_reg_pp0_iter0_data_354_V_read355_phi_reg_19544 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_355_V_read356_phi_reg_19557() {
    ap_phi_reg_pp0_iter0_data_355_V_read356_phi_reg_19557 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_356_V_read357_phi_reg_19570() {
    ap_phi_reg_pp0_iter0_data_356_V_read357_phi_reg_19570 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_357_V_read358_phi_reg_19583() {
    ap_phi_reg_pp0_iter0_data_357_V_read358_phi_reg_19583 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_358_V_read359_phi_reg_19596() {
    ap_phi_reg_pp0_iter0_data_358_V_read359_phi_reg_19596 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_359_V_read360_phi_reg_19609() {
    ap_phi_reg_pp0_iter0_data_359_V_read360_phi_reg_19609 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_35_V_read36_phi_reg_15397() {
    ap_phi_reg_pp0_iter0_data_35_V_read36_phi_reg_15397 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_360_V_read361_phi_reg_19622() {
    ap_phi_reg_pp0_iter0_data_360_V_read361_phi_reg_19622 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_361_V_read362_phi_reg_19635() {
    ap_phi_reg_pp0_iter0_data_361_V_read362_phi_reg_19635 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_362_V_read363_phi_reg_19648() {
    ap_phi_reg_pp0_iter0_data_362_V_read363_phi_reg_19648 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_363_V_read364_phi_reg_19661() {
    ap_phi_reg_pp0_iter0_data_363_V_read364_phi_reg_19661 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_364_V_read365_phi_reg_19674() {
    ap_phi_reg_pp0_iter0_data_364_V_read365_phi_reg_19674 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_365_V_read366_phi_reg_19687() {
    ap_phi_reg_pp0_iter0_data_365_V_read366_phi_reg_19687 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_366_V_read367_phi_reg_19700() {
    ap_phi_reg_pp0_iter0_data_366_V_read367_phi_reg_19700 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_367_V_read368_phi_reg_19713() {
    ap_phi_reg_pp0_iter0_data_367_V_read368_phi_reg_19713 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_368_V_read369_phi_reg_19726() {
    ap_phi_reg_pp0_iter0_data_368_V_read369_phi_reg_19726 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_369_V_read370_phi_reg_19739() {
    ap_phi_reg_pp0_iter0_data_369_V_read370_phi_reg_19739 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_36_V_read37_phi_reg_15410() {
    ap_phi_reg_pp0_iter0_data_36_V_read37_phi_reg_15410 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_370_V_read371_phi_reg_19752() {
    ap_phi_reg_pp0_iter0_data_370_V_read371_phi_reg_19752 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_371_V_read372_phi_reg_19765() {
    ap_phi_reg_pp0_iter0_data_371_V_read372_phi_reg_19765 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_372_V_read373_phi_reg_19778() {
    ap_phi_reg_pp0_iter0_data_372_V_read373_phi_reg_19778 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_373_V_read374_phi_reg_19791() {
    ap_phi_reg_pp0_iter0_data_373_V_read374_phi_reg_19791 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_374_V_read375_phi_reg_19804() {
    ap_phi_reg_pp0_iter0_data_374_V_read375_phi_reg_19804 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_375_V_read376_phi_reg_19817() {
    ap_phi_reg_pp0_iter0_data_375_V_read376_phi_reg_19817 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_376_V_read377_phi_reg_19830() {
    ap_phi_reg_pp0_iter0_data_376_V_read377_phi_reg_19830 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_377_V_read378_phi_reg_19843() {
    ap_phi_reg_pp0_iter0_data_377_V_read378_phi_reg_19843 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_378_V_read379_phi_reg_19856() {
    ap_phi_reg_pp0_iter0_data_378_V_read379_phi_reg_19856 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_379_V_read380_phi_reg_19869() {
    ap_phi_reg_pp0_iter0_data_379_V_read380_phi_reg_19869 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_37_V_read38_phi_reg_15423() {
    ap_phi_reg_pp0_iter0_data_37_V_read38_phi_reg_15423 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_380_V_read381_phi_reg_19882() {
    ap_phi_reg_pp0_iter0_data_380_V_read381_phi_reg_19882 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_381_V_read382_phi_reg_19895() {
    ap_phi_reg_pp0_iter0_data_381_V_read382_phi_reg_19895 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_382_V_read383_phi_reg_19908() {
    ap_phi_reg_pp0_iter0_data_382_V_read383_phi_reg_19908 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_383_V_read384_phi_reg_19921() {
    ap_phi_reg_pp0_iter0_data_383_V_read384_phi_reg_19921 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_384_V_read385_phi_reg_19934() {
    ap_phi_reg_pp0_iter0_data_384_V_read385_phi_reg_19934 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_385_V_read386_phi_reg_19947() {
    ap_phi_reg_pp0_iter0_data_385_V_read386_phi_reg_19947 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_386_V_read387_phi_reg_19960() {
    ap_phi_reg_pp0_iter0_data_386_V_read387_phi_reg_19960 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_387_V_read388_phi_reg_19973() {
    ap_phi_reg_pp0_iter0_data_387_V_read388_phi_reg_19973 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_388_V_read389_phi_reg_19986() {
    ap_phi_reg_pp0_iter0_data_388_V_read389_phi_reg_19986 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_389_V_read390_phi_reg_19999() {
    ap_phi_reg_pp0_iter0_data_389_V_read390_phi_reg_19999 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_38_V_read39_phi_reg_15436() {
    ap_phi_reg_pp0_iter0_data_38_V_read39_phi_reg_15436 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_390_V_read391_phi_reg_20012() {
    ap_phi_reg_pp0_iter0_data_390_V_read391_phi_reg_20012 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_391_V_read392_phi_reg_20025() {
    ap_phi_reg_pp0_iter0_data_391_V_read392_phi_reg_20025 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_392_V_read393_phi_reg_20038() {
    ap_phi_reg_pp0_iter0_data_392_V_read393_phi_reg_20038 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_393_V_read394_phi_reg_20051() {
    ap_phi_reg_pp0_iter0_data_393_V_read394_phi_reg_20051 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_394_V_read395_phi_reg_20064() {
    ap_phi_reg_pp0_iter0_data_394_V_read395_phi_reg_20064 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_395_V_read396_phi_reg_20077() {
    ap_phi_reg_pp0_iter0_data_395_V_read396_phi_reg_20077 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_396_V_read397_phi_reg_20090() {
    ap_phi_reg_pp0_iter0_data_396_V_read397_phi_reg_20090 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_397_V_read398_phi_reg_20103() {
    ap_phi_reg_pp0_iter0_data_397_V_read398_phi_reg_20103 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_398_V_read399_phi_reg_20116() {
    ap_phi_reg_pp0_iter0_data_398_V_read399_phi_reg_20116 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_399_V_read400_phi_reg_20129() {
    ap_phi_reg_pp0_iter0_data_399_V_read400_phi_reg_20129 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_39_V_read40_phi_reg_15449() {
    ap_phi_reg_pp0_iter0_data_39_V_read40_phi_reg_15449 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_3_V_read4_phi_reg_14981() {
    ap_phi_reg_pp0_iter0_data_3_V_read4_phi_reg_14981 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_400_V_read401_phi_reg_20142() {
    ap_phi_reg_pp0_iter0_data_400_V_read401_phi_reg_20142 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_401_V_read402_phi_reg_20155() {
    ap_phi_reg_pp0_iter0_data_401_V_read402_phi_reg_20155 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_402_V_read403_phi_reg_20168() {
    ap_phi_reg_pp0_iter0_data_402_V_read403_phi_reg_20168 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_403_V_read404_phi_reg_20181() {
    ap_phi_reg_pp0_iter0_data_403_V_read404_phi_reg_20181 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_404_V_read405_phi_reg_20194() {
    ap_phi_reg_pp0_iter0_data_404_V_read405_phi_reg_20194 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_405_V_read406_phi_reg_20207() {
    ap_phi_reg_pp0_iter0_data_405_V_read406_phi_reg_20207 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_406_V_read407_phi_reg_20220() {
    ap_phi_reg_pp0_iter0_data_406_V_read407_phi_reg_20220 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_407_V_read408_phi_reg_20233() {
    ap_phi_reg_pp0_iter0_data_407_V_read408_phi_reg_20233 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_408_V_read409_phi_reg_20246() {
    ap_phi_reg_pp0_iter0_data_408_V_read409_phi_reg_20246 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_409_V_read410_phi_reg_20259() {
    ap_phi_reg_pp0_iter0_data_409_V_read410_phi_reg_20259 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_40_V_read41_phi_reg_15462() {
    ap_phi_reg_pp0_iter0_data_40_V_read41_phi_reg_15462 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_410_V_read411_phi_reg_20272() {
    ap_phi_reg_pp0_iter0_data_410_V_read411_phi_reg_20272 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_411_V_read412_phi_reg_20285() {
    ap_phi_reg_pp0_iter0_data_411_V_read412_phi_reg_20285 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_412_V_read413_phi_reg_20298() {
    ap_phi_reg_pp0_iter0_data_412_V_read413_phi_reg_20298 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_413_V_read414_phi_reg_20311() {
    ap_phi_reg_pp0_iter0_data_413_V_read414_phi_reg_20311 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_414_V_read415_phi_reg_20324() {
    ap_phi_reg_pp0_iter0_data_414_V_read415_phi_reg_20324 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_415_V_read416_phi_reg_20337() {
    ap_phi_reg_pp0_iter0_data_415_V_read416_phi_reg_20337 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_416_V_read417_phi_reg_20350() {
    ap_phi_reg_pp0_iter0_data_416_V_read417_phi_reg_20350 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_417_V_read418_phi_reg_20363() {
    ap_phi_reg_pp0_iter0_data_417_V_read418_phi_reg_20363 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_418_V_read419_phi_reg_20376() {
    ap_phi_reg_pp0_iter0_data_418_V_read419_phi_reg_20376 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_419_V_read420_phi_reg_20389() {
    ap_phi_reg_pp0_iter0_data_419_V_read420_phi_reg_20389 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_41_V_read42_phi_reg_15475() {
    ap_phi_reg_pp0_iter0_data_41_V_read42_phi_reg_15475 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_420_V_read421_phi_reg_20402() {
    ap_phi_reg_pp0_iter0_data_420_V_read421_phi_reg_20402 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_421_V_read422_phi_reg_20415() {
    ap_phi_reg_pp0_iter0_data_421_V_read422_phi_reg_20415 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_422_V_read423_phi_reg_20428() {
    ap_phi_reg_pp0_iter0_data_422_V_read423_phi_reg_20428 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_423_V_read424_phi_reg_20441() {
    ap_phi_reg_pp0_iter0_data_423_V_read424_phi_reg_20441 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_424_V_read425_phi_reg_20454() {
    ap_phi_reg_pp0_iter0_data_424_V_read425_phi_reg_20454 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_425_V_read426_phi_reg_20467() {
    ap_phi_reg_pp0_iter0_data_425_V_read426_phi_reg_20467 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_426_V_read427_phi_reg_20480() {
    ap_phi_reg_pp0_iter0_data_426_V_read427_phi_reg_20480 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_427_V_read428_phi_reg_20493() {
    ap_phi_reg_pp0_iter0_data_427_V_read428_phi_reg_20493 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_428_V_read429_phi_reg_20506() {
    ap_phi_reg_pp0_iter0_data_428_V_read429_phi_reg_20506 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_429_V_read430_phi_reg_20519() {
    ap_phi_reg_pp0_iter0_data_429_V_read430_phi_reg_20519 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_42_V_read43_phi_reg_15488() {
    ap_phi_reg_pp0_iter0_data_42_V_read43_phi_reg_15488 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_430_V_read431_phi_reg_20532() {
    ap_phi_reg_pp0_iter0_data_430_V_read431_phi_reg_20532 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_431_V_read432_phi_reg_20545() {
    ap_phi_reg_pp0_iter0_data_431_V_read432_phi_reg_20545 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_432_V_read433_phi_reg_20558() {
    ap_phi_reg_pp0_iter0_data_432_V_read433_phi_reg_20558 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_433_V_read434_phi_reg_20571() {
    ap_phi_reg_pp0_iter0_data_433_V_read434_phi_reg_20571 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_434_V_read435_phi_reg_20584() {
    ap_phi_reg_pp0_iter0_data_434_V_read435_phi_reg_20584 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_435_V_read436_phi_reg_20597() {
    ap_phi_reg_pp0_iter0_data_435_V_read436_phi_reg_20597 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_436_V_read437_phi_reg_20610() {
    ap_phi_reg_pp0_iter0_data_436_V_read437_phi_reg_20610 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_437_V_read438_phi_reg_20623() {
    ap_phi_reg_pp0_iter0_data_437_V_read438_phi_reg_20623 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_438_V_read439_phi_reg_20636() {
    ap_phi_reg_pp0_iter0_data_438_V_read439_phi_reg_20636 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_439_V_read440_phi_reg_20649() {
    ap_phi_reg_pp0_iter0_data_439_V_read440_phi_reg_20649 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_43_V_read44_phi_reg_15501() {
    ap_phi_reg_pp0_iter0_data_43_V_read44_phi_reg_15501 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_440_V_read441_phi_reg_20662() {
    ap_phi_reg_pp0_iter0_data_440_V_read441_phi_reg_20662 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_441_V_read442_phi_reg_20675() {
    ap_phi_reg_pp0_iter0_data_441_V_read442_phi_reg_20675 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_442_V_read443_phi_reg_20688() {
    ap_phi_reg_pp0_iter0_data_442_V_read443_phi_reg_20688 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_443_V_read444_phi_reg_20701() {
    ap_phi_reg_pp0_iter0_data_443_V_read444_phi_reg_20701 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_444_V_read445_phi_reg_20714() {
    ap_phi_reg_pp0_iter0_data_444_V_read445_phi_reg_20714 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_445_V_read446_phi_reg_20727() {
    ap_phi_reg_pp0_iter0_data_445_V_read446_phi_reg_20727 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_446_V_read447_phi_reg_20740() {
    ap_phi_reg_pp0_iter0_data_446_V_read447_phi_reg_20740 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_447_V_read448_phi_reg_20753() {
    ap_phi_reg_pp0_iter0_data_447_V_read448_phi_reg_20753 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_448_V_read449_phi_reg_20766() {
    ap_phi_reg_pp0_iter0_data_448_V_read449_phi_reg_20766 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_449_V_read450_phi_reg_20779() {
    ap_phi_reg_pp0_iter0_data_449_V_read450_phi_reg_20779 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_44_V_read45_phi_reg_15514() {
    ap_phi_reg_pp0_iter0_data_44_V_read45_phi_reg_15514 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_450_V_read451_phi_reg_20792() {
    ap_phi_reg_pp0_iter0_data_450_V_read451_phi_reg_20792 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_451_V_read452_phi_reg_20805() {
    ap_phi_reg_pp0_iter0_data_451_V_read452_phi_reg_20805 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_452_V_read453_phi_reg_20818() {
    ap_phi_reg_pp0_iter0_data_452_V_read453_phi_reg_20818 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_453_V_read454_phi_reg_20831() {
    ap_phi_reg_pp0_iter0_data_453_V_read454_phi_reg_20831 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_454_V_read455_phi_reg_20844() {
    ap_phi_reg_pp0_iter0_data_454_V_read455_phi_reg_20844 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_455_V_read456_phi_reg_20857() {
    ap_phi_reg_pp0_iter0_data_455_V_read456_phi_reg_20857 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_456_V_read457_phi_reg_20870() {
    ap_phi_reg_pp0_iter0_data_456_V_read457_phi_reg_20870 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_457_V_read458_phi_reg_20883() {
    ap_phi_reg_pp0_iter0_data_457_V_read458_phi_reg_20883 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_458_V_read459_phi_reg_20896() {
    ap_phi_reg_pp0_iter0_data_458_V_read459_phi_reg_20896 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_459_V_read460_phi_reg_20909() {
    ap_phi_reg_pp0_iter0_data_459_V_read460_phi_reg_20909 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_45_V_read46_phi_reg_15527() {
    ap_phi_reg_pp0_iter0_data_45_V_read46_phi_reg_15527 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_460_V_read461_phi_reg_20922() {
    ap_phi_reg_pp0_iter0_data_460_V_read461_phi_reg_20922 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_461_V_read462_phi_reg_20935() {
    ap_phi_reg_pp0_iter0_data_461_V_read462_phi_reg_20935 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_462_V_read463_phi_reg_20948() {
    ap_phi_reg_pp0_iter0_data_462_V_read463_phi_reg_20948 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_463_V_read464_phi_reg_20961() {
    ap_phi_reg_pp0_iter0_data_463_V_read464_phi_reg_20961 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_464_V_read465_phi_reg_20974() {
    ap_phi_reg_pp0_iter0_data_464_V_read465_phi_reg_20974 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_465_V_read466_phi_reg_20987() {
    ap_phi_reg_pp0_iter0_data_465_V_read466_phi_reg_20987 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_466_V_read467_phi_reg_21000() {
    ap_phi_reg_pp0_iter0_data_466_V_read467_phi_reg_21000 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_467_V_read468_phi_reg_21013() {
    ap_phi_reg_pp0_iter0_data_467_V_read468_phi_reg_21013 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_468_V_read469_phi_reg_21026() {
    ap_phi_reg_pp0_iter0_data_468_V_read469_phi_reg_21026 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_469_V_read470_phi_reg_21039() {
    ap_phi_reg_pp0_iter0_data_469_V_read470_phi_reg_21039 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_46_V_read47_phi_reg_15540() {
    ap_phi_reg_pp0_iter0_data_46_V_read47_phi_reg_15540 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_470_V_read471_phi_reg_21052() {
    ap_phi_reg_pp0_iter0_data_470_V_read471_phi_reg_21052 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_471_V_read472_phi_reg_21065() {
    ap_phi_reg_pp0_iter0_data_471_V_read472_phi_reg_21065 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_472_V_read473_phi_reg_21078() {
    ap_phi_reg_pp0_iter0_data_472_V_read473_phi_reg_21078 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_473_V_read474_phi_reg_21091() {
    ap_phi_reg_pp0_iter0_data_473_V_read474_phi_reg_21091 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_474_V_read475_phi_reg_21104() {
    ap_phi_reg_pp0_iter0_data_474_V_read475_phi_reg_21104 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_475_V_read476_phi_reg_21117() {
    ap_phi_reg_pp0_iter0_data_475_V_read476_phi_reg_21117 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_476_V_read477_phi_reg_21130() {
    ap_phi_reg_pp0_iter0_data_476_V_read477_phi_reg_21130 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_477_V_read478_phi_reg_21143() {
    ap_phi_reg_pp0_iter0_data_477_V_read478_phi_reg_21143 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_478_V_read479_phi_reg_21156() {
    ap_phi_reg_pp0_iter0_data_478_V_read479_phi_reg_21156 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_479_V_read480_phi_reg_21169() {
    ap_phi_reg_pp0_iter0_data_479_V_read480_phi_reg_21169 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_47_V_read48_phi_reg_15553() {
    ap_phi_reg_pp0_iter0_data_47_V_read48_phi_reg_15553 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_480_V_read481_phi_reg_21182() {
    ap_phi_reg_pp0_iter0_data_480_V_read481_phi_reg_21182 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_481_V_read482_phi_reg_21195() {
    ap_phi_reg_pp0_iter0_data_481_V_read482_phi_reg_21195 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_482_V_read483_phi_reg_21208() {
    ap_phi_reg_pp0_iter0_data_482_V_read483_phi_reg_21208 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_483_V_read484_phi_reg_21221() {
    ap_phi_reg_pp0_iter0_data_483_V_read484_phi_reg_21221 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_484_V_read485_phi_reg_21234() {
    ap_phi_reg_pp0_iter0_data_484_V_read485_phi_reg_21234 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_485_V_read486_phi_reg_21247() {
    ap_phi_reg_pp0_iter0_data_485_V_read486_phi_reg_21247 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_486_V_read487_phi_reg_21260() {
    ap_phi_reg_pp0_iter0_data_486_V_read487_phi_reg_21260 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_487_V_read488_phi_reg_21273() {
    ap_phi_reg_pp0_iter0_data_487_V_read488_phi_reg_21273 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_488_V_read489_phi_reg_21286() {
    ap_phi_reg_pp0_iter0_data_488_V_read489_phi_reg_21286 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_489_V_read490_phi_reg_21299() {
    ap_phi_reg_pp0_iter0_data_489_V_read490_phi_reg_21299 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_48_V_read49_phi_reg_15566() {
    ap_phi_reg_pp0_iter0_data_48_V_read49_phi_reg_15566 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_490_V_read491_phi_reg_21312() {
    ap_phi_reg_pp0_iter0_data_490_V_read491_phi_reg_21312 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_491_V_read492_phi_reg_21325() {
    ap_phi_reg_pp0_iter0_data_491_V_read492_phi_reg_21325 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_492_V_read493_phi_reg_21338() {
    ap_phi_reg_pp0_iter0_data_492_V_read493_phi_reg_21338 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_493_V_read494_phi_reg_21351() {
    ap_phi_reg_pp0_iter0_data_493_V_read494_phi_reg_21351 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_494_V_read495_phi_reg_21364() {
    ap_phi_reg_pp0_iter0_data_494_V_read495_phi_reg_21364 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_495_V_read496_phi_reg_21377() {
    ap_phi_reg_pp0_iter0_data_495_V_read496_phi_reg_21377 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_496_V_read497_phi_reg_21390() {
    ap_phi_reg_pp0_iter0_data_496_V_read497_phi_reg_21390 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_497_V_read498_phi_reg_21403() {
    ap_phi_reg_pp0_iter0_data_497_V_read498_phi_reg_21403 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_498_V_read499_phi_reg_21416() {
    ap_phi_reg_pp0_iter0_data_498_V_read499_phi_reg_21416 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_499_V_read500_phi_reg_21429() {
    ap_phi_reg_pp0_iter0_data_499_V_read500_phi_reg_21429 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_49_V_read50_phi_reg_15579() {
    ap_phi_reg_pp0_iter0_data_49_V_read50_phi_reg_15579 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_4_V_read5_phi_reg_14994() {
    ap_phi_reg_pp0_iter0_data_4_V_read5_phi_reg_14994 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_500_V_read501_phi_reg_21442() {
    ap_phi_reg_pp0_iter0_data_500_V_read501_phi_reg_21442 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_501_V_read502_phi_reg_21455() {
    ap_phi_reg_pp0_iter0_data_501_V_read502_phi_reg_21455 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_502_V_read503_phi_reg_21468() {
    ap_phi_reg_pp0_iter0_data_502_V_read503_phi_reg_21468 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_503_V_read504_phi_reg_21481() {
    ap_phi_reg_pp0_iter0_data_503_V_read504_phi_reg_21481 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_504_V_read505_phi_reg_21494() {
    ap_phi_reg_pp0_iter0_data_504_V_read505_phi_reg_21494 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_505_V_read506_phi_reg_21507() {
    ap_phi_reg_pp0_iter0_data_505_V_read506_phi_reg_21507 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_506_V_read507_phi_reg_21520() {
    ap_phi_reg_pp0_iter0_data_506_V_read507_phi_reg_21520 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_507_V_read508_phi_reg_21533() {
    ap_phi_reg_pp0_iter0_data_507_V_read508_phi_reg_21533 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_508_V_read509_phi_reg_21546() {
    ap_phi_reg_pp0_iter0_data_508_V_read509_phi_reg_21546 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_509_V_read510_phi_reg_21559() {
    ap_phi_reg_pp0_iter0_data_509_V_read510_phi_reg_21559 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_50_V_read51_phi_reg_15592() {
    ap_phi_reg_pp0_iter0_data_50_V_read51_phi_reg_15592 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_510_V_read511_phi_reg_21572() {
    ap_phi_reg_pp0_iter0_data_510_V_read511_phi_reg_21572 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_511_V_read512_phi_reg_21585() {
    ap_phi_reg_pp0_iter0_data_511_V_read512_phi_reg_21585 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_51_V_read52_phi_reg_15605() {
    ap_phi_reg_pp0_iter0_data_51_V_read52_phi_reg_15605 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_52_V_read53_phi_reg_15618() {
    ap_phi_reg_pp0_iter0_data_52_V_read53_phi_reg_15618 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_53_V_read54_phi_reg_15631() {
    ap_phi_reg_pp0_iter0_data_53_V_read54_phi_reg_15631 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_54_V_read55_phi_reg_15644() {
    ap_phi_reg_pp0_iter0_data_54_V_read55_phi_reg_15644 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_55_V_read56_phi_reg_15657() {
    ap_phi_reg_pp0_iter0_data_55_V_read56_phi_reg_15657 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_56_V_read57_phi_reg_15670() {
    ap_phi_reg_pp0_iter0_data_56_V_read57_phi_reg_15670 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_57_V_read58_phi_reg_15683() {
    ap_phi_reg_pp0_iter0_data_57_V_read58_phi_reg_15683 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_58_V_read59_phi_reg_15696() {
    ap_phi_reg_pp0_iter0_data_58_V_read59_phi_reg_15696 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_59_V_read60_phi_reg_15709() {
    ap_phi_reg_pp0_iter0_data_59_V_read60_phi_reg_15709 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_5_V_read6_phi_reg_15007() {
    ap_phi_reg_pp0_iter0_data_5_V_read6_phi_reg_15007 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_60_V_read61_phi_reg_15722() {
    ap_phi_reg_pp0_iter0_data_60_V_read61_phi_reg_15722 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_61_V_read62_phi_reg_15735() {
    ap_phi_reg_pp0_iter0_data_61_V_read62_phi_reg_15735 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_62_V_read63_phi_reg_15748() {
    ap_phi_reg_pp0_iter0_data_62_V_read63_phi_reg_15748 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_63_V_read64_phi_reg_15761() {
    ap_phi_reg_pp0_iter0_data_63_V_read64_phi_reg_15761 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_64_V_read65_phi_reg_15774() {
    ap_phi_reg_pp0_iter0_data_64_V_read65_phi_reg_15774 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_65_V_read66_phi_reg_15787() {
    ap_phi_reg_pp0_iter0_data_65_V_read66_phi_reg_15787 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_66_V_read67_phi_reg_15800() {
    ap_phi_reg_pp0_iter0_data_66_V_read67_phi_reg_15800 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_67_V_read68_phi_reg_15813() {
    ap_phi_reg_pp0_iter0_data_67_V_read68_phi_reg_15813 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_68_V_read69_phi_reg_15826() {
    ap_phi_reg_pp0_iter0_data_68_V_read69_phi_reg_15826 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_69_V_read70_phi_reg_15839() {
    ap_phi_reg_pp0_iter0_data_69_V_read70_phi_reg_15839 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_6_V_read7_phi_reg_15020() {
    ap_phi_reg_pp0_iter0_data_6_V_read7_phi_reg_15020 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_70_V_read71_phi_reg_15852() {
    ap_phi_reg_pp0_iter0_data_70_V_read71_phi_reg_15852 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_71_V_read72_phi_reg_15865() {
    ap_phi_reg_pp0_iter0_data_71_V_read72_phi_reg_15865 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_72_V_read73_phi_reg_15878() {
    ap_phi_reg_pp0_iter0_data_72_V_read73_phi_reg_15878 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_73_V_read74_phi_reg_15891() {
    ap_phi_reg_pp0_iter0_data_73_V_read74_phi_reg_15891 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_74_V_read75_phi_reg_15904() {
    ap_phi_reg_pp0_iter0_data_74_V_read75_phi_reg_15904 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_75_V_read76_phi_reg_15917() {
    ap_phi_reg_pp0_iter0_data_75_V_read76_phi_reg_15917 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_76_V_read77_phi_reg_15930() {
    ap_phi_reg_pp0_iter0_data_76_V_read77_phi_reg_15930 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_77_V_read78_phi_reg_15943() {
    ap_phi_reg_pp0_iter0_data_77_V_read78_phi_reg_15943 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_78_V_read79_phi_reg_15956() {
    ap_phi_reg_pp0_iter0_data_78_V_read79_phi_reg_15956 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_79_V_read80_phi_reg_15969() {
    ap_phi_reg_pp0_iter0_data_79_V_read80_phi_reg_15969 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_7_V_read8_phi_reg_15033() {
    ap_phi_reg_pp0_iter0_data_7_V_read8_phi_reg_15033 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_80_V_read81_phi_reg_15982() {
    ap_phi_reg_pp0_iter0_data_80_V_read81_phi_reg_15982 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_81_V_read82_phi_reg_15995() {
    ap_phi_reg_pp0_iter0_data_81_V_read82_phi_reg_15995 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_82_V_read83_phi_reg_16008() {
    ap_phi_reg_pp0_iter0_data_82_V_read83_phi_reg_16008 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_83_V_read84_phi_reg_16021() {
    ap_phi_reg_pp0_iter0_data_83_V_read84_phi_reg_16021 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_84_V_read85_phi_reg_16034() {
    ap_phi_reg_pp0_iter0_data_84_V_read85_phi_reg_16034 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_85_V_read86_phi_reg_16047() {
    ap_phi_reg_pp0_iter0_data_85_V_read86_phi_reg_16047 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_86_V_read87_phi_reg_16060() {
    ap_phi_reg_pp0_iter0_data_86_V_read87_phi_reg_16060 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_87_V_read88_phi_reg_16073() {
    ap_phi_reg_pp0_iter0_data_87_V_read88_phi_reg_16073 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_88_V_read89_phi_reg_16086() {
    ap_phi_reg_pp0_iter0_data_88_V_read89_phi_reg_16086 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_89_V_read90_phi_reg_16099() {
    ap_phi_reg_pp0_iter0_data_89_V_read90_phi_reg_16099 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_8_V_read9_phi_reg_15046() {
    ap_phi_reg_pp0_iter0_data_8_V_read9_phi_reg_15046 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_90_V_read91_phi_reg_16112() {
    ap_phi_reg_pp0_iter0_data_90_V_read91_phi_reg_16112 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_91_V_read92_phi_reg_16125() {
    ap_phi_reg_pp0_iter0_data_91_V_read92_phi_reg_16125 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_92_V_read93_phi_reg_16138() {
    ap_phi_reg_pp0_iter0_data_92_V_read93_phi_reg_16138 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_93_V_read94_phi_reg_16151() {
    ap_phi_reg_pp0_iter0_data_93_V_read94_phi_reg_16151 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_94_V_read95_phi_reg_16164() {
    ap_phi_reg_pp0_iter0_data_94_V_read95_phi_reg_16164 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_95_V_read96_phi_reg_16177() {
    ap_phi_reg_pp0_iter0_data_95_V_read96_phi_reg_16177 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_96_V_read97_phi_reg_16190() {
    ap_phi_reg_pp0_iter0_data_96_V_read97_phi_reg_16190 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_97_V_read98_phi_reg_16203() {
    ap_phi_reg_pp0_iter0_data_97_V_read98_phi_reg_16203 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_98_V_read99_phi_reg_16216() {
    ap_phi_reg_pp0_iter0_data_98_V_read99_phi_reg_16216 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_99_V_read100_phi_reg_16229() {
    ap_phi_reg_pp0_iter0_data_99_V_read100_phi_reg_16229 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_phi_reg_pp0_iter0_data_9_V_read10_phi_reg_15059() {
    ap_phi_reg_pp0_iter0_data_9_V_read10_phi_reg_15059 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(icmp_ln34_fu_1953243_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to2.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_0 = res_0_V_1_fu_1983714_p3.read();
    } else {
        ap_return_0 = ap_return_0_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_1 = res_1_V_1_fu_1984898_p3.read();
    } else {
        ap_return_1 = ap_return_1_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_10() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_10 = res_10_V_1_fu_1995558_p3.read();
    } else {
        ap_return_10 = ap_return_10_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_100() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_100 = res_100_V_1_fu_1988114_p3.read();
    } else {
        ap_return_100 = ap_return_100_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_101() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_101 = res_101_V_1_fu_1989298_p3.read();
    } else {
        ap_return_101 = ap_return_101_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_102() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_102 = res_102_V_1_fu_1990482_p3.read();
    } else {
        ap_return_102 = ap_return_102_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_103() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_103 = res_103_V_1_fu_1991666_p3.read();
    } else {
        ap_return_103 = ap_return_103_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_104() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_104 = res_104_V_1_fu_1992854_p3.read();
    } else {
        ap_return_104 = ap_return_104_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_105() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_105 = res_105_V_1_fu_1994038_p3.read();
    } else {
        ap_return_105 = ap_return_105_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_106() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_106 = res_106_V_1_fu_1995326_p3.read();
    } else {
        ap_return_106 = ap_return_106_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_107() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_107 = res_107_V_1_fu_1996406_p3.read();
    } else {
        ap_return_107 = ap_return_107_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_108() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_108 = res_108_V_1_fu_1997594_p3.read();
    } else {
        ap_return_108 = ap_return_108_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_109() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_109 = res_109_V_1_fu_1998778_p3.read();
    } else {
        ap_return_109 = ap_return_109_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_11() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_11 = res_11_V_1_fu_1996742_p3.read();
    } else {
        ap_return_11 = ap_return_11_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_110() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_110 = res_110_V_1_fu_1999962_p3.read();
    } else {
        ap_return_110 = ap_return_110_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_111() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_111 = res_111_V_1_fu_2001146_p3.read();
    } else {
        ap_return_111 = ap_return_111_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_112() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_112 = res_112_V_1_fu_2002329_p3.read();
    } else {
        ap_return_112 = ap_return_112_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_113() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_113 = res_113_V_1_fu_2003513_p3.read();
    } else {
        ap_return_113 = ap_return_113_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_114() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_114 = res_114_V_1_fu_2004697_p3.read();
    } else {
        ap_return_114 = ap_return_114_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_115() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_115 = res_115_V_1_fu_2005881_p3.read();
    } else {
        ap_return_115 = ap_return_115_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_116() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_116 = res_116_V_1_fu_2007065_p3.read();
    } else {
        ap_return_116 = ap_return_116_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_117() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_117 = res_117_V_1_fu_2008253_p3.read();
    } else {
        ap_return_117 = ap_return_117_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_118() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_118 = res_118_V_1_fu_2009437_p3.read();
    } else {
        ap_return_118 = ap_return_118_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_119() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_119 = res_119_V_1_fu_2010625_p3.read();
    } else {
        ap_return_119 = ap_return_119_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_12() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_12 = res_12_V_1_fu_1997930_p3.read();
    } else {
        ap_return_12 = ap_return_12_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_120() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_120 = res_120_V_1_fu_2011809_p3.read();
    } else {
        ap_return_120 = ap_return_120_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_121() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_121 = res_121_V_1_fu_2012993_p3.read();
    } else {
        ap_return_121 = ap_return_121_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_122() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_122 = res_122_V_1_fu_2014177_p3.read();
    } else {
        ap_return_122 = ap_return_122_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_123() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_123 = res_123_V_1_fu_2015361_p3.read();
    } else {
        ap_return_123 = ap_return_123_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_124() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_124 = res_124_V_1_fu_2016545_p3.read();
    } else {
        ap_return_124 = ap_return_124_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_125() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_125 = res_125_V_1_fu_2017729_p3.read();
    } else {
        ap_return_125 = ap_return_125_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_126() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_126 = res_126_V_1_fu_2018917_p3.read();
    } else {
        ap_return_126 = ap_return_126_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_127() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_127 = res_127_V_1_fu_2020101_p3.read();
    } else {
        ap_return_127 = ap_return_127_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_128() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_128 = res_128_V_1_fu_1983282_p3.read();
    } else {
        ap_return_128 = ap_return_128_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_129() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_129 = res_129_V_1_fu_1984466_p3.read();
    } else {
        ap_return_129 = ap_return_129_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_13() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_13 = res_13_V_1_fu_1999114_p3.read();
    } else {
        ap_return_13 = ap_return_13_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_130() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_130 = res_130_V_1_fu_1985650_p3.read();
    } else {
        ap_return_130 = ap_return_130_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_131() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_131 = res_131_V_1_fu_1986834_p3.read();
    } else {
        ap_return_131 = ap_return_131_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_132() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_132 = res_132_V_1_fu_1988018_p3.read();
    } else {
        ap_return_132 = ap_return_132_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_133() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_133 = res_133_V_1_fu_1989202_p3.read();
    } else {
        ap_return_133 = ap_return_133_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_134() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_134 = res_134_V_1_fu_1990386_p3.read();
    } else {
        ap_return_134 = ap_return_134_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_135() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_135 = res_135_V_1_fu_1991570_p3.read();
    } else {
        ap_return_135 = ap_return_135_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_136() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_136 = res_136_V_1_fu_1992758_p3.read();
    } else {
        ap_return_136 = ap_return_136_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_137() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_137 = res_137_V_1_fu_1993942_p3.read();
    } else {
        ap_return_137 = ap_return_137_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_138() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_138 = res_138_V_1_fu_1995126_p3.read();
    } else {
        ap_return_138 = ap_return_138_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_139() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_139 = res_139_V_1_fu_1996310_p3.read();
    } else {
        ap_return_139 = ap_return_139_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_14() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_14 = res_14_V_1_fu_2000298_p3.read();
    } else {
        ap_return_14 = ap_return_14_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_140() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_140 = res_140_V_1_fu_1997498_p3.read();
    } else {
        ap_return_140 = ap_return_140_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_141() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_141 = res_141_V_1_fu_1998602_p3.read();
    } else {
        ap_return_141 = ap_return_141_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_142() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_142 = res_142_V_1_fu_1999866_p3.read();
    } else {
        ap_return_142 = ap_return_142_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_143() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_143 = res_143_V_1_fu_2001050_p3.read();
    } else {
        ap_return_143 = ap_return_143_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_144() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_144 = res_144_V_1_fu_2002233_p3.read();
    } else {
        ap_return_144 = ap_return_144_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_145() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_145 = res_145_V_1_fu_2003417_p3.read();
    } else {
        ap_return_145 = ap_return_145_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_146() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_146 = res_146_V_1_fu_2004601_p3.read();
    } else {
        ap_return_146 = ap_return_146_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_147() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_147 = res_147_V_1_fu_2005785_p3.read();
    } else {
        ap_return_147 = ap_return_147_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_148() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_148 = res_148_V_1_fu_2006969_p3.read();
    } else {
        ap_return_148 = ap_return_148_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_149() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_149 = res_149_V_1_fu_2008157_p3.read();
    } else {
        ap_return_149 = ap_return_149_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_15() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_15 = res_15_V_1_fu_2001482_p3.read();
    } else {
        ap_return_15 = ap_return_15_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_150() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_150 = res_150_V_1_fu_2009341_p3.read();
    } else {
        ap_return_150 = ap_return_150_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_151() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_151 = res_151_V_1_fu_2010529_p3.read();
    } else {
        ap_return_151 = ap_return_151_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_152() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_152 = res_152_V_1_fu_2011713_p3.read();
    } else {
        ap_return_152 = ap_return_152_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_153() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_153 = res_153_V_1_fu_2012897_p3.read();
    } else {
        ap_return_153 = ap_return_153_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_154() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_154 = res_154_V_1_fu_2014081_p3.read();
    } else {
        ap_return_154 = ap_return_154_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_155() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_155 = res_155_V_1_fu_2015265_p3.read();
    } else {
        ap_return_155 = ap_return_155_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_156() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_156 = res_156_V_1_fu_2016449_p3.read();
    } else {
        ap_return_156 = ap_return_156_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_157() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_157 = res_157_V_1_fu_2017633_p3.read();
    } else {
        ap_return_157 = ap_return_157_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_158() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_158 = res_158_V_1_fu_2018821_p3.read();
    } else {
        ap_return_158 = ap_return_158_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_159() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_159 = res_159_V_1_fu_2020005_p3.read();
    } else {
        ap_return_159 = ap_return_159_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_16() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_16 = res_16_V_1_fu_2002665_p3.read();
    } else {
        ap_return_16 = ap_return_16_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_160() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_160 = res_160_V_1_fu_1983194_p3.read();
    } else {
        ap_return_160 = ap_return_160_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_161() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_161 = res_161_V_1_fu_1984378_p3.read();
    } else {
        ap_return_161 = ap_return_161_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_162() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_162 = res_162_V_1_fu_1985562_p3.read();
    } else {
        ap_return_162 = ap_return_162_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_163() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_163 = res_163_V_1_fu_1986746_p3.read();
    } else {
        ap_return_163 = ap_return_163_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_164() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_164 = res_164_V_1_fu_1987930_p3.read();
    } else {
        ap_return_164 = ap_return_164_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_165() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_165 = res_165_V_1_fu_1989114_p3.read();
    } else {
        ap_return_165 = ap_return_165_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_166() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_166 = res_166_V_1_fu_1990298_p3.read();
    } else {
        ap_return_166 = ap_return_166_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_167() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_167 = res_167_V_1_fu_1991482_p3.read();
    } else {
        ap_return_167 = ap_return_167_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_168() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_168 = res_168_V_1_fu_1992670_p3.read();
    } else {
        ap_return_168 = ap_return_168_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_169() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_169 = res_169_V_1_fu_1993854_p3.read();
    } else {
        ap_return_169 = ap_return_169_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_17() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_17 = res_17_V_1_fu_2003849_p3.read();
    } else {
        ap_return_17 = ap_return_17_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_170() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_170 = res_170_V_1_fu_1995038_p3.read();
    } else {
        ap_return_170 = ap_return_170_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_171() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_171 = res_171_V_1_fu_1996222_p3.read();
    } else {
        ap_return_171 = ap_return_171_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_172() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_172 = res_172_V_1_fu_1997410_p3.read();
    } else {
        ap_return_172 = ap_return_172_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_173() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_173 = res_173_V_1_fu_1998682_p3.read();
    } else {
        ap_return_173 = ap_return_173_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_174() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_174 = res_174_V_1_fu_1999778_p3.read();
    } else {
        ap_return_174 = ap_return_174_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_175() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_175 = res_175_V_1_fu_2000890_p3.read();
    } else {
        ap_return_175 = ap_return_175_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_176() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_176 = res_176_V_1_fu_2002145_p3.read();
    } else {
        ap_return_176 = ap_return_176_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_177() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_177 = res_177_V_1_fu_2003329_p3.read();
    } else {
        ap_return_177 = ap_return_177_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_178() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_178 = res_178_V_1_fu_2004513_p3.read();
    } else {
        ap_return_178 = ap_return_178_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_179() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_179 = res_179_V_1_fu_2005697_p3.read();
    } else {
        ap_return_179 = ap_return_179_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_18() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_18 = res_18_V_1_fu_2005033_p3.read();
    } else {
        ap_return_18 = ap_return_18_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_180() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_180 = res_180_V_1_fu_2006881_p3.read();
    } else {
        ap_return_180 = ap_return_180_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_181() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_181 = res_181_V_1_fu_2008069_p3.read();
    } else {
        ap_return_181 = ap_return_181_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_182() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_182 = res_182_V_1_fu_2009253_p3.read();
    } else {
        ap_return_182 = ap_return_182_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_183() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_183 = res_183_V_1_fu_2010441_p3.read();
    } else {
        ap_return_183 = ap_return_183_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_184() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_184 = res_184_V_1_fu_2011625_p3.read();
    } else {
        ap_return_184 = ap_return_184_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_185() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_185 = res_185_V_1_fu_2012809_p3.read();
    } else {
        ap_return_185 = ap_return_185_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_186() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_186 = res_186_V_1_fu_2013993_p3.read();
    } else {
        ap_return_186 = ap_return_186_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_187() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_187 = res_187_V_1_fu_2015177_p3.read();
    } else {
        ap_return_187 = ap_return_187_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_188() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_188 = res_188_V_1_fu_2016361_p3.read();
    } else {
        ap_return_188 = ap_return_188_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_189() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_189 = res_189_V_1_fu_2017545_p3.read();
    } else {
        ap_return_189 = ap_return_189_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_19() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_19 = res_19_V_1_fu_2006217_p3.read();
    } else {
        ap_return_19 = ap_return_19_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_190() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_190 = res_190_V_1_fu_2018733_p3.read();
    } else {
        ap_return_190 = ap_return_190_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_191() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_191 = res_191_V_1_fu_2019917_p3.read();
    } else {
        ap_return_191 = ap_return_191_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_192() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_192 = res_192_V_1_fu_1983114_p3.read();
    } else {
        ap_return_192 = ap_return_192_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_193() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_193 = res_193_V_1_fu_1984298_p3.read();
    } else {
        ap_return_193 = ap_return_193_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_194() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_194 = res_194_V_1_fu_1985482_p3.read();
    } else {
        ap_return_194 = ap_return_194_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_195() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_195 = res_195_V_1_fu_1986666_p3.read();
    } else {
        ap_return_195 = ap_return_195_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_196() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_196 = res_196_V_1_fu_1987850_p3.read();
    } else {
        ap_return_196 = ap_return_196_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_197() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_197 = res_197_V_1_fu_1989034_p3.read();
    } else {
        ap_return_197 = ap_return_197_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_198() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_198 = res_198_V_1_fu_1990218_p3.read();
    } else {
        ap_return_198 = ap_return_198_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_199() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_199 = res_199_V_1_fu_1991402_p3.read();
    } else {
        ap_return_199 = ap_return_199_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_2() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_2 = res_2_V_1_fu_1986082_p3.read();
    } else {
        ap_return_2 = ap_return_2_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_20() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_20 = res_20_V_1_fu_2007401_p3.read();
    } else {
        ap_return_20 = ap_return_20_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_200() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_200 = res_200_V_1_fu_1992590_p3.read();
    } else {
        ap_return_200 = ap_return_200_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_201() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_201 = res_201_V_1_fu_1993774_p3.read();
    } else {
        ap_return_201 = ap_return_201_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_202() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_202 = res_202_V_1_fu_1994958_p3.read();
    } else {
        ap_return_202 = ap_return_202_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_203() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_203 = res_203_V_1_fu_1996142_p3.read();
    } else {
        ap_return_203 = ap_return_203_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_204() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_204 = res_204_V_1_fu_1997330_p3.read();
    } else {
        ap_return_204 = ap_return_204_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_205() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_205 = res_205_V_1_fu_1998514_p3.read();
    } else {
        ap_return_205 = ap_return_205_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_206() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_206 = res_206_V_1_fu_1999698_p3.read();
    } else {
        ap_return_206 = ap_return_206_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_207() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_207 = res_207_V_1_fu_2000962_p3.read();
    } else {
        ap_return_207 = ap_return_207_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_208() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_208 = res_208_V_1_fu_2002065_p3.read();
    } else {
        ap_return_208 = ap_return_208_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_209() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_209 = res_209_V_1_fu_2003249_p3.read();
    } else {
        ap_return_209 = ap_return_209_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_21() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_21 = res_21_V_1_fu_2008589_p3.read();
    } else {
        ap_return_21 = ap_return_21_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_210() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_210 = res_210_V_1_fu_2004433_p3.read();
    } else {
        ap_return_210 = ap_return_210_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_211() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_211 = res_211_V_1_fu_2005617_p3.read();
    } else {
        ap_return_211 = ap_return_211_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_212() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_212 = res_212_V_1_fu_2006801_p3.read();
    } else {
        ap_return_212 = ap_return_212_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_213() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_213 = res_213_V_1_fu_2007989_p3.read();
    } else {
        ap_return_213 = ap_return_213_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_214() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_214 = res_214_V_1_fu_2009173_p3.read();
    } else {
        ap_return_214 = ap_return_214_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_215() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_215 = res_215_V_1_fu_2010361_p3.read();
    } else {
        ap_return_215 = ap_return_215_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_216() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_216 = res_216_V_1_fu_2011545_p3.read();
    } else {
        ap_return_216 = ap_return_216_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_217() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_217 = res_217_V_1_fu_2012729_p3.read();
    } else {
        ap_return_217 = ap_return_217_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_218() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_218 = res_218_V_1_fu_2013913_p3.read();
    } else {
        ap_return_218 = ap_return_218_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_219() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_219 = res_219_V_1_fu_2015097_p3.read();
    } else {
        ap_return_219 = ap_return_219_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_22() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_22 = res_22_V_1_fu_2009773_p3.read();
    } else {
        ap_return_22 = ap_return_22_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_220() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_220 = res_220_V_1_fu_2016281_p3.read();
    } else {
        ap_return_220 = ap_return_220_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_221() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_221 = res_221_V_1_fu_2017465_p3.read();
    } else {
        ap_return_221 = ap_return_221_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_222() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_222 = res_222_V_1_fu_2018653_p3.read();
    } else {
        ap_return_222 = ap_return_222_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_223() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_223 = res_223_V_1_fu_2019837_p3.read();
    } else {
        ap_return_223 = ap_return_223_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_224() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_224 = res_224_V_1_fu_1983042_p3.read();
    } else {
        ap_return_224 = ap_return_224_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_225() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_225 = res_225_V_1_fu_1984226_p3.read();
    } else {
        ap_return_225 = ap_return_225_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_226() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_226 = res_226_V_1_fu_1985410_p3.read();
    } else {
        ap_return_226 = ap_return_226_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_227() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_227 = res_227_V_1_fu_1986594_p3.read();
    } else {
        ap_return_227 = ap_return_227_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_228() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_228 = res_228_V_1_fu_1987778_p3.read();
    } else {
        ap_return_228 = ap_return_228_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_229() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_229 = res_229_V_1_fu_1988962_p3.read();
    } else {
        ap_return_229 = ap_return_229_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_23() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_23 = res_23_V_1_fu_2010961_p3.read();
    } else {
        ap_return_23 = ap_return_23_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_230() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_230 = res_230_V_1_fu_1990146_p3.read();
    } else {
        ap_return_230 = ap_return_230_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_231() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_231 = res_231_V_1_fu_1991330_p3.read();
    } else {
        ap_return_231 = ap_return_231_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_232() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_232 = res_232_V_1_fu_1992518_p3.read();
    } else {
        ap_return_232 = ap_return_232_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_233() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_233 = res_233_V_1_fu_1993702_p3.read();
    } else {
        ap_return_233 = ap_return_233_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_234() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_234 = res_234_V_1_fu_1994886_p3.read();
    } else {
        ap_return_234 = ap_return_234_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_235() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_235 = res_235_V_1_fu_1996070_p3.read();
    } else {
        ap_return_235 = ap_return_235_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_236() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_236 = res_236_V_1_fu_1997258_p3.read();
    } else {
        ap_return_236 = ap_return_236_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_237() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_237 = res_237_V_1_fu_1998442_p3.read();
    } else {
        ap_return_237 = ap_return_237_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_238() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_238 = res_238_V_1_fu_1999626_p3.read();
    } else {
        ap_return_238 = ap_return_238_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_239() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_239 = res_239_V_1_fu_2000810_p3.read();
    } else {
        ap_return_239 = ap_return_239_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_24() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_24 = res_24_V_1_fu_2012145_p3.read();
    } else {
        ap_return_24 = ap_return_24_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_240() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_240 = res_240_V_1_fu_2001993_p3.read();
    } else {
        ap_return_240 = ap_return_240_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_241() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_241 = res_241_V_1_fu_2003177_p3.read();
    } else {
        ap_return_241 = ap_return_241_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_242() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_242 = res_242_V_1_fu_2004305_p3.read();
    } else {
        ap_return_242 = ap_return_242_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_243() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_243 = res_243_V_1_fu_2005545_p3.read();
    } else {
        ap_return_243 = ap_return_243_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_244() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_244 = res_244_V_1_fu_2006729_p3.read();
    } else {
        ap_return_244 = ap_return_244_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_245() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_245 = res_245_V_1_fu_2007917_p3.read();
    } else {
        ap_return_245 = ap_return_245_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_246() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_246 = res_246_V_1_fu_2009101_p3.read();
    } else {
        ap_return_246 = ap_return_246_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_247() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_247 = res_247_V_1_fu_2010289_p3.read();
    } else {
        ap_return_247 = ap_return_247_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_248() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_248 = res_248_V_1_fu_2011473_p3.read();
    } else {
        ap_return_248 = ap_return_248_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_249() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_249 = res_249_V_1_fu_2012657_p3.read();
    } else {
        ap_return_249 = ap_return_249_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_25() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_25 = res_25_V_1_fu_2013329_p3.read();
    } else {
        ap_return_25 = ap_return_25_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_250() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_250 = res_250_V_1_fu_2013841_p3.read();
    } else {
        ap_return_250 = ap_return_250_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_251() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_251 = res_251_V_1_fu_2015025_p3.read();
    } else {
        ap_return_251 = ap_return_251_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_252() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_252 = res_252_V_1_fu_2016209_p3.read();
    } else {
        ap_return_252 = ap_return_252_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_253() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_253 = res_253_V_1_fu_2017393_p3.read();
    } else {
        ap_return_253 = ap_return_253_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_254() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_254 = res_254_V_1_fu_2018581_p3.read();
    } else {
        ap_return_254 = ap_return_254_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_255() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_255 = res_255_V_1_fu_2019765_p3.read();
    } else {
        ap_return_255 = ap_return_255_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_256() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_256 = res_256_V_1_fu_1982978_p3.read();
    } else {
        ap_return_256 = ap_return_256_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_257() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_257 = res_257_V_1_fu_1984162_p3.read();
    } else {
        ap_return_257 = ap_return_257_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_258() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_258 = res_258_V_1_fu_1985346_p3.read();
    } else {
        ap_return_258 = ap_return_258_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_259() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_259 = res_259_V_1_fu_1986530_p3.read();
    } else {
        ap_return_259 = ap_return_259_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_26() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_26 = res_26_V_1_fu_2014513_p3.read();
    } else {
        ap_return_26 = ap_return_26_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_260() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_260 = res_260_V_1_fu_1987714_p3.read();
    } else {
        ap_return_260 = ap_return_260_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_261() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_261 = res_261_V_1_fu_1988898_p3.read();
    } else {
        ap_return_261 = ap_return_261_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_262() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_262 = res_262_V_1_fu_1990082_p3.read();
    } else {
        ap_return_262 = ap_return_262_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_263() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_263 = res_263_V_1_fu_1991266_p3.read();
    } else {
        ap_return_263 = ap_return_263_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_264() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_264 = res_264_V_1_fu_1992454_p3.read();
    } else {
        ap_return_264 = ap_return_264_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_265() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_265 = res_265_V_1_fu_1993638_p3.read();
    } else {
        ap_return_265 = ap_return_265_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_266() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_266 = res_266_V_1_fu_1994822_p3.read();
    } else {
        ap_return_266 = ap_return_266_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_267() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_267 = res_267_V_1_fu_1996006_p3.read();
    } else {
        ap_return_267 = ap_return_267_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_268() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_268 = res_268_V_1_fu_1997194_p3.read();
    } else {
        ap_return_268 = ap_return_268_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_269() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_269 = res_269_V_1_fu_1998378_p3.read();
    } else {
        ap_return_269 = ap_return_269_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_27() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_27 = res_27_V_1_fu_2015697_p3.read();
    } else {
        ap_return_27 = ap_return_27_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_270() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_270 = res_270_V_1_fu_1999562_p3.read();
    } else {
        ap_return_270 = ap_return_270_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_271() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_271 = res_271_V_1_fu_2000746_p3.read();
    } else {
        ap_return_271 = ap_return_271_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_272() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_272 = res_272_V_1_fu_2001929_p3.read();
    } else {
        ap_return_272 = ap_return_272_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_273() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_273 = res_273_V_1_fu_2003113_p3.read();
    } else {
        ap_return_273 = ap_return_273_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_274() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_274 = res_274_V_1_fu_2004361_p3.read();
    } else {
        ap_return_274 = ap_return_274_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_275() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_275 = res_275_V_1_fu_2005481_p3.read();
    } else {
        ap_return_275 = ap_return_275_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_276() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_276 = res_276_V_1_fu_2006617_p3.read();
    } else {
        ap_return_276 = ap_return_276_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_277() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_277 = res_277_V_1_fu_2007853_p3.read();
    } else {
        ap_return_277 = ap_return_277_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_278() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_278 = res_278_V_1_fu_2009037_p3.read();
    } else {
        ap_return_278 = ap_return_278_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_279() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_279 = res_279_V_1_fu_2010225_p3.read();
    } else {
        ap_return_279 = ap_return_279_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_28() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_28 = res_28_V_1_fu_2016881_p3.read();
    } else {
        ap_return_28 = ap_return_28_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_280() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_280 = res_280_V_1_fu_2011409_p3.read();
    } else {
        ap_return_280 = ap_return_280_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_281() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_281 = res_281_V_1_fu_2012593_p3.read();
    } else {
        ap_return_281 = ap_return_281_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_282() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_282 = res_282_V_1_fu_2013777_p3.read();
    } else {
        ap_return_282 = ap_return_282_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_283() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_283 = res_283_V_1_fu_2014961_p3.read();
    } else {
        ap_return_283 = ap_return_283_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_284() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_284 = res_284_V_1_fu_2016145_p3.read();
    } else {
        ap_return_284 = ap_return_284_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_285() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_285 = res_285_V_1_fu_2017329_p3.read();
    } else {
        ap_return_285 = ap_return_285_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_286() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_286 = res_286_V_1_fu_2018517_p3.read();
    } else {
        ap_return_286 = ap_return_286_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_287() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_287 = res_287_V_1_fu_2019701_p3.read();
    } else {
        ap_return_287 = ap_return_287_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_288() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_288 = res_288_V_1_fu_1982922_p3.read();
    } else {
        ap_return_288 = ap_return_288_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_289() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_289 = res_289_V_1_fu_1984106_p3.read();
    } else {
        ap_return_289 = ap_return_289_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_29() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_29 = res_29_V_1_fu_2018065_p3.read();
    } else {
        ap_return_29 = ap_return_29_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_290() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_290 = res_290_V_1_fu_1985290_p3.read();
    } else {
        ap_return_290 = ap_return_290_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_291() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_291 = res_291_V_1_fu_1986474_p3.read();
    } else {
        ap_return_291 = ap_return_291_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_292() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_292 = res_292_V_1_fu_1987658_p3.read();
    } else {
        ap_return_292 = ap_return_292_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_293() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_293 = res_293_V_1_fu_1988842_p3.read();
    } else {
        ap_return_293 = ap_return_293_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_294() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_294 = res_294_V_1_fu_1990026_p3.read();
    } else {
        ap_return_294 = ap_return_294_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_295() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_295 = res_295_V_1_fu_1991210_p3.read();
    } else {
        ap_return_295 = ap_return_295_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_296() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_296 = res_296_V_1_fu_1992398_p3.read();
    } else {
        ap_return_296 = ap_return_296_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_297() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_297 = res_297_V_1_fu_1993582_p3.read();
    } else {
        ap_return_297 = ap_return_297_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_298() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_298 = res_298_V_1_fu_1994766_p3.read();
    } else {
        ap_return_298 = ap_return_298_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_299() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_299 = res_299_V_1_fu_1995950_p3.read();
    } else {
        ap_return_299 = ap_return_299_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_3() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_3 = res_3_V_1_fu_1987266_p3.read();
    } else {
        ap_return_3 = ap_return_3_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_30() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_30 = res_30_V_1_fu_2019253_p3.read();
    } else {
        ap_return_30 = ap_return_30_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_300() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_300 = res_300_V_1_fu_1997138_p3.read();
    } else {
        ap_return_300 = ap_return_300_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_301() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_301 = res_301_V_1_fu_1998322_p3.read();
    } else {
        ap_return_301 = ap_return_301_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_302() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_302 = res_302_V_1_fu_1999506_p3.read();
    } else {
        ap_return_302 = ap_return_302_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_303() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_303 = res_303_V_1_fu_2000690_p3.read();
    } else {
        ap_return_303 = ap_return_303_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_304() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_304 = res_304_V_1_fu_2001873_p3.read();
    } else {
        ap_return_304 = ap_return_304_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_305() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_305 = res_305_V_1_fu_2003057_p3.read();
    } else {
        ap_return_305 = ap_return_305_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_306() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_306 = res_306_V_1_fu_2004241_p3.read();
    } else {
        ap_return_306 = ap_return_306_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_307() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_307 = res_307_V_1_fu_2005425_p3.read();
    } else {
        ap_return_307 = ap_return_307_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_308() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_308 = res_308_V_1_fu_2006665_p3.read();
    } else {
        ap_return_308 = ap_return_308_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_309() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_309 = res_309_V_1_fu_2007797_p3.read();
    } else {
        ap_return_309 = ap_return_309_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_31() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_31 = res_31_V_1_fu_2020437_p3.read();
    } else {
        ap_return_31 = ap_return_31_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_310() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_310 = res_310_V_1_fu_2008981_p3.read();
    } else {
        ap_return_310 = ap_return_310_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_311() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_311 = res_311_V_1_fu_2010169_p3.read();
    } else {
        ap_return_311 = ap_return_311_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_312() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_312 = res_312_V_1_fu_2011353_p3.read();
    } else {
        ap_return_312 = ap_return_312_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_313() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_313 = res_313_V_1_fu_2012537_p3.read();
    } else {
        ap_return_313 = ap_return_313_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_314() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_314 = res_314_V_1_fu_2013721_p3.read();
    } else {
        ap_return_314 = ap_return_314_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_315() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_315 = res_315_V_1_fu_2014905_p3.read();
    } else {
        ap_return_315 = ap_return_315_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_316() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_316 = res_316_V_1_fu_2016089_p3.read();
    } else {
        ap_return_316 = ap_return_316_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_317() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_317 = res_317_V_1_fu_2017273_p3.read();
    } else {
        ap_return_317 = ap_return_317_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_318() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_318 = res_318_V_1_fu_2018461_p3.read();
    } else {
        ap_return_318 = ap_return_318_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_319() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_319 = res_319_V_1_fu_2019645_p3.read();
    } else {
        ap_return_319 = ap_return_319_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_32() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_32 = res_32_V_1_fu_1983594_p3.read();
    } else {
        ap_return_32 = ap_return_32_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_320() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_320 = res_320_V_1_fu_1982874_p3.read();
    } else {
        ap_return_320 = ap_return_320_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_321() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_321 = res_321_V_1_fu_1984058_p3.read();
    } else {
        ap_return_321 = ap_return_321_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_322() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_322 = res_322_V_1_fu_1985242_p3.read();
    } else {
        ap_return_322 = ap_return_322_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_323() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_323 = res_323_V_1_fu_1986426_p3.read();
    } else {
        ap_return_323 = ap_return_323_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_324() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_324 = res_324_V_1_fu_1987610_p3.read();
    } else {
        ap_return_324 = ap_return_324_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_325() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_325 = res_325_V_1_fu_1988794_p3.read();
    } else {
        ap_return_325 = ap_return_325_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_326() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_326 = res_326_V_1_fu_1989978_p3.read();
    } else {
        ap_return_326 = ap_return_326_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_327() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_327 = res_327_V_1_fu_1991162_p3.read();
    } else {
        ap_return_327 = ap_return_327_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_328() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_328 = res_328_V_1_fu_1992350_p3.read();
    } else {
        ap_return_328 = ap_return_328_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_329() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_329 = res_329_V_1_fu_1993534_p3.read();
    } else {
        ap_return_329 = ap_return_329_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_33() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_33 = res_33_V_1_fu_1984778_p3.read();
    } else {
        ap_return_33 = ap_return_33_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_330() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_330 = res_330_V_1_fu_1994718_p3.read();
    } else {
        ap_return_330 = ap_return_330_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_331() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_331 = res_331_V_1_fu_1995902_p3.read();
    } else {
        ap_return_331 = ap_return_331_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_332() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_332 = res_332_V_1_fu_1997090_p3.read();
    } else {
        ap_return_332 = ap_return_332_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_333() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_333 = res_333_V_1_fu_1998274_p3.read();
    } else {
        ap_return_333 = ap_return_333_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_334() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_334 = res_334_V_1_fu_1999458_p3.read();
    } else {
        ap_return_334 = ap_return_334_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_335() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_335 = res_335_V_1_fu_2000642_p3.read();
    } else {
        ap_return_335 = ap_return_335_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_336() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_336 = res_336_V_1_fu_2001825_p3.read();
    } else {
        ap_return_336 = ap_return_336_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_337() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_337 = res_337_V_1_fu_2003009_p3.read();
    } else {
        ap_return_337 = ap_return_337_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_338() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_338 = res_338_V_1_fu_2004193_p3.read();
    } else {
        ap_return_338 = ap_return_338_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_339() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_339 = res_339_V_1_fu_2005377_p3.read();
    } else {
        ap_return_339 = ap_return_339_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_34() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_34 = res_34_V_1_fu_1985962_p3.read();
    } else {
        ap_return_34 = ap_return_34_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_340() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_340 = res_340_V_1_fu_2006561_p3.read();
    } else {
        ap_return_340 = ap_return_340_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_341() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_341 = res_341_V_1_fu_2007749_p3.read();
    } else {
        ap_return_341 = ap_return_341_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_342() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_342 = res_342_V_1_fu_2008933_p3.read();
    } else {
        ap_return_342 = ap_return_342_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_343() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_343 = res_343_V_1_fu_2010089_p3.read();
    } else {
        ap_return_343 = ap_return_343_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_344() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_344 = res_344_V_1_fu_2011305_p3.read();
    } else {
        ap_return_344 = ap_return_344_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_345() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_345 = res_345_V_1_fu_2012489_p3.read();
    } else {
        ap_return_345 = ap_return_345_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_346() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_346 = res_346_V_1_fu_2013673_p3.read();
    } else {
        ap_return_346 = ap_return_346_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_347() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_347 = res_347_V_1_fu_2014857_p3.read();
    } else {
        ap_return_347 = ap_return_347_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_348() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_348 = res_348_V_1_fu_2016041_p3.read();
    } else {
        ap_return_348 = ap_return_348_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_349() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_349 = res_349_V_1_fu_2017225_p3.read();
    } else {
        ap_return_349 = ap_return_349_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_35() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_35 = res_35_V_1_fu_1987146_p3.read();
    } else {
        ap_return_35 = ap_return_35_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_350() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_350 = res_350_V_1_fu_2018413_p3.read();
    } else {
        ap_return_350 = ap_return_350_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_351() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_351 = res_351_V_1_fu_2019597_p3.read();
    } else {
        ap_return_351 = ap_return_351_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_352() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_352 = res_352_V_1_fu_1982834_p3.read();
    } else {
        ap_return_352 = ap_return_352_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_353() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_353 = res_353_V_1_fu_1984018_p3.read();
    } else {
        ap_return_353 = ap_return_353_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_354() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_354 = res_354_V_1_fu_1985202_p3.read();
    } else {
        ap_return_354 = ap_return_354_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_355() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_355 = res_355_V_1_fu_1986386_p3.read();
    } else {
        ap_return_355 = ap_return_355_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_356() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_356 = res_356_V_1_fu_1987570_p3.read();
    } else {
        ap_return_356 = ap_return_356_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_357() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_357 = res_357_V_1_fu_1988754_p3.read();
    } else {
        ap_return_357 = ap_return_357_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_358() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_358 = res_358_V_1_fu_1989938_p3.read();
    } else {
        ap_return_358 = ap_return_358_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_359() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_359 = res_359_V_1_fu_1991122_p3.read();
    } else {
        ap_return_359 = ap_return_359_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_36() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_36 = res_36_V_1_fu_1988330_p3.read();
    } else {
        ap_return_36 = ap_return_36_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_360() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_360 = res_360_V_1_fu_1992310_p3.read();
    } else {
        ap_return_360 = ap_return_360_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_361() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_361 = res_361_V_1_fu_1993494_p3.read();
    } else {
        ap_return_361 = ap_return_361_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_362() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_362 = res_362_V_1_fu_1994678_p3.read();
    } else {
        ap_return_362 = ap_return_362_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_363() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_363 = res_363_V_1_fu_1995862_p3.read();
    } else {
        ap_return_363 = ap_return_363_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_364() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_364 = res_364_V_1_fu_1997050_p3.read();
    } else {
        ap_return_364 = ap_return_364_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_365() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_365 = res_365_V_1_fu_1998234_p3.read();
    } else {
        ap_return_365 = ap_return_365_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_366() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_366 = res_366_V_1_fu_1999418_p3.read();
    } else {
        ap_return_366 = ap_return_366_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_367() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_367 = res_367_V_1_fu_2000602_p3.read();
    } else {
        ap_return_367 = ap_return_367_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_368() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_368 = res_368_V_1_fu_2001785_p3.read();
    } else {
        ap_return_368 = ap_return_368_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_369() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_369 = res_369_V_1_fu_2002969_p3.read();
    } else {
        ap_return_369 = ap_return_369_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_37() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_37 = res_37_V_1_fu_1989514_p3.read();
    } else {
        ap_return_37 = ap_return_37_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_370() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_370 = res_370_V_1_fu_2004153_p3.read();
    } else {
        ap_return_370 = ap_return_370_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_371() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_371 = res_371_V_1_fu_2005337_p3.read();
    } else {
        ap_return_371 = ap_return_371_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_372() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_372 = res_372_V_1_fu_2006521_p3.read();
    } else {
        ap_return_372 = ap_return_372_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_373() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_373 = res_373_V_1_fu_2007709_p3.read();
    } else {
        ap_return_373 = ap_return_373_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_374() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_374 = res_374_V_1_fu_2008893_p3.read();
    } else {
        ap_return_374 = ap_return_374_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_375() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_375 = res_375_V_1_fu_2010121_p3.read();
    } else {
        ap_return_375 = ap_return_375_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_376() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_376 = res_376_V_1_fu_2011265_p3.read();
    } else {
        ap_return_376 = ap_return_376_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_377() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_377 = res_377_V_1_fu_2012425_p3.read();
    } else {
        ap_return_377 = ap_return_377_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_378() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_378 = res_378_V_1_fu_2013633_p3.read();
    } else {
        ap_return_378 = ap_return_378_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_379() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_379 = res_379_V_1_fu_2014817_p3.read();
    } else {
        ap_return_379 = ap_return_379_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_38() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_38 = res_38_V_1_fu_1990698_p3.read();
    } else {
        ap_return_38 = ap_return_38_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_380() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_380 = res_380_V_1_fu_2016001_p3.read();
    } else {
        ap_return_380 = ap_return_380_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_381() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_381 = res_381_V_1_fu_2017185_p3.read();
    } else {
        ap_return_381 = ap_return_381_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_382() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_382 = res_382_V_1_fu_2018373_p3.read();
    } else {
        ap_return_382 = ap_return_382_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_383() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_383 = res_383_V_1_fu_2019557_p3.read();
    } else {
        ap_return_383 = ap_return_383_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_384() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_384 = res_384_V_1_fu_1982802_p3.read();
    } else {
        ap_return_384 = ap_return_384_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_385() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_385 = res_385_V_1_fu_1983986_p3.read();
    } else {
        ap_return_385 = ap_return_385_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_386() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_386 = res_386_V_1_fu_1985170_p3.read();
    } else {
        ap_return_386 = ap_return_386_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_387() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_387 = res_387_V_1_fu_1986354_p3.read();
    } else {
        ap_return_387 = ap_return_387_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_388() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_388 = res_388_V_1_fu_1987538_p3.read();
    } else {
        ap_return_388 = ap_return_388_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_389() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_389 = res_389_V_1_fu_1988722_p3.read();
    } else {
        ap_return_389 = ap_return_389_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_39() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_39 = res_39_V_1_fu_1991882_p3.read();
    } else {
        ap_return_39 = ap_return_39_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_390() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_390 = res_390_V_1_fu_1989906_p3.read();
    } else {
        ap_return_390 = ap_return_390_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_391() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_391 = res_391_V_1_fu_1991090_p3.read();
    } else {
        ap_return_391 = ap_return_391_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_392() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_392 = res_392_V_1_fu_1992278_p3.read();
    } else {
        ap_return_392 = ap_return_392_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_393() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_393 = res_393_V_1_fu_1993462_p3.read();
    } else {
        ap_return_393 = ap_return_393_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_394() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_394 = res_394_V_1_fu_1994646_p3.read();
    } else {
        ap_return_394 = ap_return_394_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_395() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_395 = res_395_V_1_fu_1995830_p3.read();
    } else {
        ap_return_395 = ap_return_395_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_396() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_396 = res_396_V_1_fu_1997018_p3.read();
    } else {
        ap_return_396 = ap_return_396_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_397() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_397 = res_397_V_1_fu_1998202_p3.read();
    } else {
        ap_return_397 = ap_return_397_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_398() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_398 = res_398_V_1_fu_1999386_p3.read();
    } else {
        ap_return_398 = ap_return_398_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_399() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_399 = res_399_V_1_fu_2000570_p3.read();
    } else {
        ap_return_399 = ap_return_399_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_4() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_4 = res_4_V_1_fu_1988450_p3.read();
    } else {
        ap_return_4 = ap_return_4_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_40() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_40 = res_40_V_1_fu_1992966_p3.read();
    } else {
        ap_return_40 = ap_return_40_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_400() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_400 = res_400_V_1_fu_2001753_p3.read();
    } else {
        ap_return_400 = ap_return_400_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_401() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_401 = res_401_V_1_fu_2002937_p3.read();
    } else {
        ap_return_401 = ap_return_401_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_402() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_402 = res_402_V_1_fu_2004121_p3.read();
    } else {
        ap_return_402 = ap_return_402_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_403() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_403 = res_403_V_1_fu_2005305_p3.read();
    } else {
        ap_return_403 = ap_return_403_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_404() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_404 = res_404_V_1_fu_2006489_p3.read();
    } else {
        ap_return_404 = ap_return_404_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_405() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_405 = res_405_V_1_fu_2007677_p3.read();
    } else {
        ap_return_405 = ap_return_405_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_406() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_406 = res_406_V_1_fu_2008861_p3.read();
    } else {
        ap_return_406 = ap_return_406_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_407() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_407 = res_407_V_1_fu_2010049_p3.read();
    } else {
        ap_return_407 = ap_return_407_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_408() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_408 = res_408_V_1_fu_2011233_p3.read();
    } else {
        ap_return_408 = ap_return_408_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_409() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_409 = res_409_V_1_fu_2012449_p3.read();
    } else {
        ap_return_409 = ap_return_409_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_41() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_41 = res_41_V_1_fu_1994254_p3.read();
    } else {
        ap_return_41 = ap_return_41_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_410() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_410 = res_410_V_1_fu_2013601_p3.read();
    } else {
        ap_return_410 = ap_return_410_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_411() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_411 = res_411_V_1_fu_2014785_p3.read();
    } else {
        ap_return_411 = ap_return_411_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_412() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_412 = res_412_V_1_fu_2015969_p3.read();
    } else {
        ap_return_412 = ap_return_412_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_413() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_413 = res_413_V_1_fu_2017153_p3.read();
    } else {
        ap_return_413 = ap_return_413_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_414() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_414 = res_414_V_1_fu_2018341_p3.read();
    } else {
        ap_return_414 = ap_return_414_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_415() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_415 = res_415_V_1_fu_2019525_p3.read();
    } else {
        ap_return_415 = ap_return_415_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_416() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_416 = res_416_V_1_fu_1982778_p3.read();
    } else {
        ap_return_416 = ap_return_416_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_417() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_417 = res_417_V_1_fu_1983962_p3.read();
    } else {
        ap_return_417 = ap_return_417_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_418() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_418 = res_418_V_1_fu_1985146_p3.read();
    } else {
        ap_return_418 = ap_return_418_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_419() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_419 = res_419_V_1_fu_1986330_p3.read();
    } else {
        ap_return_419 = ap_return_419_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_42() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_42 = res_42_V_1_fu_1995438_p3.read();
    } else {
        ap_return_42 = ap_return_42_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_420() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_420 = res_420_V_1_fu_1987514_p3.read();
    } else {
        ap_return_420 = ap_return_420_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config21_s::thread_ap_return_421() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2030021_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_421 = res_421_V_1_fu_1988698_p3.read();
    } else {
        ap_return_421 = ap_return_421_preg.read();
    }
}

}

