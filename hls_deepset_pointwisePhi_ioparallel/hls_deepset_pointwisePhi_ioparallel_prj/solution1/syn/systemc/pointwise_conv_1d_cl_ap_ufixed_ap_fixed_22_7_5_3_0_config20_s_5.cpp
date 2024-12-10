#include "pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_510_V_read511_rewind_phi_fu_14908_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_510_V_read511_rewind_phi_fu_14908_p6 = data_510_V_read511_phi_reg_21576.read();
    } else {
        ap_phi_mux_data_510_V_read511_rewind_phi_fu_14908_p6 = data_510_V_read511_rewind_reg_14904.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_511_V_read512_phi_phi_fu_21593_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_511_V_read512_phi_phi_fu_21593_p4 = ap_phi_mux_data_511_V_read512_rewind_phi_fu_14922_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_511_V_read512_phi_phi_fu_21593_p4 = data_511_V_read.read();
    } else {
        ap_phi_mux_data_511_V_read512_phi_phi_fu_21593_p4 = ap_phi_reg_pp0_iter0_data_511_V_read512_phi_reg_21589.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_511_V_read512_rewind_phi_fu_14922_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_511_V_read512_rewind_phi_fu_14922_p6 = data_511_V_read512_phi_reg_21589.read();
    } else {
        ap_phi_mux_data_511_V_read512_rewind_phi_fu_14922_p6 = data_511_V_read512_rewind_reg_14918.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_51_V_read52_phi_phi_fu_15613_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_51_V_read52_phi_phi_fu_15613_p4 = ap_phi_mux_data_51_V_read52_rewind_phi_fu_8482_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_51_V_read52_phi_phi_fu_15613_p4 = data_51_V_read.read();
    } else {
        ap_phi_mux_data_51_V_read52_phi_phi_fu_15613_p4 = ap_phi_reg_pp0_iter0_data_51_V_read52_phi_reg_15609.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_51_V_read52_rewind_phi_fu_8482_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_51_V_read52_rewind_phi_fu_8482_p6 = data_51_V_read52_phi_reg_15609.read();
    } else {
        ap_phi_mux_data_51_V_read52_rewind_phi_fu_8482_p6 = data_51_V_read52_rewind_reg_8478.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_52_V_read53_phi_phi_fu_15626_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_52_V_read53_phi_phi_fu_15626_p4 = ap_phi_mux_data_52_V_read53_rewind_phi_fu_8496_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_52_V_read53_phi_phi_fu_15626_p4 = data_52_V_read.read();
    } else {
        ap_phi_mux_data_52_V_read53_phi_phi_fu_15626_p4 = ap_phi_reg_pp0_iter0_data_52_V_read53_phi_reg_15622.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_52_V_read53_rewind_phi_fu_8496_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_52_V_read53_rewind_phi_fu_8496_p6 = data_52_V_read53_phi_reg_15622.read();
    } else {
        ap_phi_mux_data_52_V_read53_rewind_phi_fu_8496_p6 = data_52_V_read53_rewind_reg_8492.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_53_V_read54_phi_phi_fu_15639_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_53_V_read54_phi_phi_fu_15639_p4 = ap_phi_mux_data_53_V_read54_rewind_phi_fu_8510_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_53_V_read54_phi_phi_fu_15639_p4 = data_53_V_read.read();
    } else {
        ap_phi_mux_data_53_V_read54_phi_phi_fu_15639_p4 = ap_phi_reg_pp0_iter0_data_53_V_read54_phi_reg_15635.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_53_V_read54_rewind_phi_fu_8510_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_53_V_read54_rewind_phi_fu_8510_p6 = data_53_V_read54_phi_reg_15635.read();
    } else {
        ap_phi_mux_data_53_V_read54_rewind_phi_fu_8510_p6 = data_53_V_read54_rewind_reg_8506.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_54_V_read55_phi_phi_fu_15652_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_54_V_read55_phi_phi_fu_15652_p4 = ap_phi_mux_data_54_V_read55_rewind_phi_fu_8524_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_54_V_read55_phi_phi_fu_15652_p4 = data_54_V_read.read();
    } else {
        ap_phi_mux_data_54_V_read55_phi_phi_fu_15652_p4 = ap_phi_reg_pp0_iter0_data_54_V_read55_phi_reg_15648.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_54_V_read55_rewind_phi_fu_8524_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_54_V_read55_rewind_phi_fu_8524_p6 = data_54_V_read55_phi_reg_15648.read();
    } else {
        ap_phi_mux_data_54_V_read55_rewind_phi_fu_8524_p6 = data_54_V_read55_rewind_reg_8520.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_55_V_read56_phi_phi_fu_15665_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_55_V_read56_phi_phi_fu_15665_p4 = ap_phi_mux_data_55_V_read56_rewind_phi_fu_8538_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_55_V_read56_phi_phi_fu_15665_p4 = data_55_V_read.read();
    } else {
        ap_phi_mux_data_55_V_read56_phi_phi_fu_15665_p4 = ap_phi_reg_pp0_iter0_data_55_V_read56_phi_reg_15661.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_55_V_read56_rewind_phi_fu_8538_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_55_V_read56_rewind_phi_fu_8538_p6 = data_55_V_read56_phi_reg_15661.read();
    } else {
        ap_phi_mux_data_55_V_read56_rewind_phi_fu_8538_p6 = data_55_V_read56_rewind_reg_8534.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_56_V_read57_phi_phi_fu_15678_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_56_V_read57_phi_phi_fu_15678_p4 = ap_phi_mux_data_56_V_read57_rewind_phi_fu_8552_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_56_V_read57_phi_phi_fu_15678_p4 = data_56_V_read.read();
    } else {
        ap_phi_mux_data_56_V_read57_phi_phi_fu_15678_p4 = ap_phi_reg_pp0_iter0_data_56_V_read57_phi_reg_15674.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_56_V_read57_rewind_phi_fu_8552_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_56_V_read57_rewind_phi_fu_8552_p6 = data_56_V_read57_phi_reg_15674.read();
    } else {
        ap_phi_mux_data_56_V_read57_rewind_phi_fu_8552_p6 = data_56_V_read57_rewind_reg_8548.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_57_V_read58_phi_phi_fu_15691_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_57_V_read58_phi_phi_fu_15691_p4 = ap_phi_mux_data_57_V_read58_rewind_phi_fu_8566_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_57_V_read58_phi_phi_fu_15691_p4 = data_57_V_read.read();
    } else {
        ap_phi_mux_data_57_V_read58_phi_phi_fu_15691_p4 = ap_phi_reg_pp0_iter0_data_57_V_read58_phi_reg_15687.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_57_V_read58_rewind_phi_fu_8566_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_57_V_read58_rewind_phi_fu_8566_p6 = data_57_V_read58_phi_reg_15687.read();
    } else {
        ap_phi_mux_data_57_V_read58_rewind_phi_fu_8566_p6 = data_57_V_read58_rewind_reg_8562.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_58_V_read59_phi_phi_fu_15704_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_58_V_read59_phi_phi_fu_15704_p4 = ap_phi_mux_data_58_V_read59_rewind_phi_fu_8580_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_58_V_read59_phi_phi_fu_15704_p4 = data_58_V_read.read();
    } else {
        ap_phi_mux_data_58_V_read59_phi_phi_fu_15704_p4 = ap_phi_reg_pp0_iter0_data_58_V_read59_phi_reg_15700.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_58_V_read59_rewind_phi_fu_8580_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_58_V_read59_rewind_phi_fu_8580_p6 = data_58_V_read59_phi_reg_15700.read();
    } else {
        ap_phi_mux_data_58_V_read59_rewind_phi_fu_8580_p6 = data_58_V_read59_rewind_reg_8576.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_59_V_read60_phi_phi_fu_15717_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_59_V_read60_phi_phi_fu_15717_p4 = ap_phi_mux_data_59_V_read60_rewind_phi_fu_8594_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_59_V_read60_phi_phi_fu_15717_p4 = data_59_V_read.read();
    } else {
        ap_phi_mux_data_59_V_read60_phi_phi_fu_15717_p4 = ap_phi_reg_pp0_iter0_data_59_V_read60_phi_reg_15713.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_59_V_read60_rewind_phi_fu_8594_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_59_V_read60_rewind_phi_fu_8594_p6 = data_59_V_read60_phi_reg_15713.read();
    } else {
        ap_phi_mux_data_59_V_read60_rewind_phi_fu_8594_p6 = data_59_V_read60_rewind_reg_8590.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_5_V_read6_phi_phi_fu_15015_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_5_V_read6_phi_phi_fu_15015_p4 = ap_phi_mux_data_5_V_read6_rewind_phi_fu_7838_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_5_V_read6_phi_phi_fu_15015_p4 = data_5_V_read.read();
    } else {
        ap_phi_mux_data_5_V_read6_phi_phi_fu_15015_p4 = ap_phi_reg_pp0_iter0_data_5_V_read6_phi_reg_15011.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_5_V_read6_rewind_phi_fu_7838_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_5_V_read6_rewind_phi_fu_7838_p6 = data_5_V_read6_phi_reg_15011.read();
    } else {
        ap_phi_mux_data_5_V_read6_rewind_phi_fu_7838_p6 = data_5_V_read6_rewind_reg_7834.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_60_V_read61_phi_phi_fu_15730_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_60_V_read61_phi_phi_fu_15730_p4 = ap_phi_mux_data_60_V_read61_rewind_phi_fu_8608_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_60_V_read61_phi_phi_fu_15730_p4 = data_60_V_read.read();
    } else {
        ap_phi_mux_data_60_V_read61_phi_phi_fu_15730_p4 = ap_phi_reg_pp0_iter0_data_60_V_read61_phi_reg_15726.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_60_V_read61_rewind_phi_fu_8608_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_60_V_read61_rewind_phi_fu_8608_p6 = data_60_V_read61_phi_reg_15726.read();
    } else {
        ap_phi_mux_data_60_V_read61_rewind_phi_fu_8608_p6 = data_60_V_read61_rewind_reg_8604.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_61_V_read62_phi_phi_fu_15743_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_61_V_read62_phi_phi_fu_15743_p4 = ap_phi_mux_data_61_V_read62_rewind_phi_fu_8622_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_61_V_read62_phi_phi_fu_15743_p4 = data_61_V_read.read();
    } else {
        ap_phi_mux_data_61_V_read62_phi_phi_fu_15743_p4 = ap_phi_reg_pp0_iter0_data_61_V_read62_phi_reg_15739.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_61_V_read62_rewind_phi_fu_8622_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_61_V_read62_rewind_phi_fu_8622_p6 = data_61_V_read62_phi_reg_15739.read();
    } else {
        ap_phi_mux_data_61_V_read62_rewind_phi_fu_8622_p6 = data_61_V_read62_rewind_reg_8618.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_62_V_read63_phi_phi_fu_15756_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_62_V_read63_phi_phi_fu_15756_p4 = ap_phi_mux_data_62_V_read63_rewind_phi_fu_8636_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_62_V_read63_phi_phi_fu_15756_p4 = data_62_V_read.read();
    } else {
        ap_phi_mux_data_62_V_read63_phi_phi_fu_15756_p4 = ap_phi_reg_pp0_iter0_data_62_V_read63_phi_reg_15752.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_62_V_read63_rewind_phi_fu_8636_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_62_V_read63_rewind_phi_fu_8636_p6 = data_62_V_read63_phi_reg_15752.read();
    } else {
        ap_phi_mux_data_62_V_read63_rewind_phi_fu_8636_p6 = data_62_V_read63_rewind_reg_8632.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_63_V_read64_phi_phi_fu_15769_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_63_V_read64_phi_phi_fu_15769_p4 = ap_phi_mux_data_63_V_read64_rewind_phi_fu_8650_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_63_V_read64_phi_phi_fu_15769_p4 = data_63_V_read.read();
    } else {
        ap_phi_mux_data_63_V_read64_phi_phi_fu_15769_p4 = ap_phi_reg_pp0_iter0_data_63_V_read64_phi_reg_15765.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_63_V_read64_rewind_phi_fu_8650_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_63_V_read64_rewind_phi_fu_8650_p6 = data_63_V_read64_phi_reg_15765.read();
    } else {
        ap_phi_mux_data_63_V_read64_rewind_phi_fu_8650_p6 = data_63_V_read64_rewind_reg_8646.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_64_V_read65_phi_phi_fu_15782_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_64_V_read65_phi_phi_fu_15782_p4 = ap_phi_mux_data_64_V_read65_rewind_phi_fu_8664_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_64_V_read65_phi_phi_fu_15782_p4 = data_64_V_read.read();
    } else {
        ap_phi_mux_data_64_V_read65_phi_phi_fu_15782_p4 = ap_phi_reg_pp0_iter0_data_64_V_read65_phi_reg_15778.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_64_V_read65_rewind_phi_fu_8664_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_64_V_read65_rewind_phi_fu_8664_p6 = data_64_V_read65_phi_reg_15778.read();
    } else {
        ap_phi_mux_data_64_V_read65_rewind_phi_fu_8664_p6 = data_64_V_read65_rewind_reg_8660.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_65_V_read66_phi_phi_fu_15795_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_65_V_read66_phi_phi_fu_15795_p4 = ap_phi_mux_data_65_V_read66_rewind_phi_fu_8678_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_65_V_read66_phi_phi_fu_15795_p4 = data_65_V_read.read();
    } else {
        ap_phi_mux_data_65_V_read66_phi_phi_fu_15795_p4 = ap_phi_reg_pp0_iter0_data_65_V_read66_phi_reg_15791.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_65_V_read66_rewind_phi_fu_8678_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_65_V_read66_rewind_phi_fu_8678_p6 = data_65_V_read66_phi_reg_15791.read();
    } else {
        ap_phi_mux_data_65_V_read66_rewind_phi_fu_8678_p6 = data_65_V_read66_rewind_reg_8674.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_66_V_read67_phi_phi_fu_15808_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_66_V_read67_phi_phi_fu_15808_p4 = ap_phi_mux_data_66_V_read67_rewind_phi_fu_8692_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_66_V_read67_phi_phi_fu_15808_p4 = data_66_V_read.read();
    } else {
        ap_phi_mux_data_66_V_read67_phi_phi_fu_15808_p4 = ap_phi_reg_pp0_iter0_data_66_V_read67_phi_reg_15804.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_66_V_read67_rewind_phi_fu_8692_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_66_V_read67_rewind_phi_fu_8692_p6 = data_66_V_read67_phi_reg_15804.read();
    } else {
        ap_phi_mux_data_66_V_read67_rewind_phi_fu_8692_p6 = data_66_V_read67_rewind_reg_8688.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_67_V_read68_phi_phi_fu_15821_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_67_V_read68_phi_phi_fu_15821_p4 = ap_phi_mux_data_67_V_read68_rewind_phi_fu_8706_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_67_V_read68_phi_phi_fu_15821_p4 = data_67_V_read.read();
    } else {
        ap_phi_mux_data_67_V_read68_phi_phi_fu_15821_p4 = ap_phi_reg_pp0_iter0_data_67_V_read68_phi_reg_15817.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_67_V_read68_rewind_phi_fu_8706_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_67_V_read68_rewind_phi_fu_8706_p6 = data_67_V_read68_phi_reg_15817.read();
    } else {
        ap_phi_mux_data_67_V_read68_rewind_phi_fu_8706_p6 = data_67_V_read68_rewind_reg_8702.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_68_V_read69_phi_phi_fu_15834_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_68_V_read69_phi_phi_fu_15834_p4 = ap_phi_mux_data_68_V_read69_rewind_phi_fu_8720_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_68_V_read69_phi_phi_fu_15834_p4 = data_68_V_read.read();
    } else {
        ap_phi_mux_data_68_V_read69_phi_phi_fu_15834_p4 = ap_phi_reg_pp0_iter0_data_68_V_read69_phi_reg_15830.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_68_V_read69_rewind_phi_fu_8720_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_68_V_read69_rewind_phi_fu_8720_p6 = data_68_V_read69_phi_reg_15830.read();
    } else {
        ap_phi_mux_data_68_V_read69_rewind_phi_fu_8720_p6 = data_68_V_read69_rewind_reg_8716.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_69_V_read70_phi_phi_fu_15847_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_69_V_read70_phi_phi_fu_15847_p4 = ap_phi_mux_data_69_V_read70_rewind_phi_fu_8734_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_69_V_read70_phi_phi_fu_15847_p4 = data_69_V_read.read();
    } else {
        ap_phi_mux_data_69_V_read70_phi_phi_fu_15847_p4 = ap_phi_reg_pp0_iter0_data_69_V_read70_phi_reg_15843.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_69_V_read70_rewind_phi_fu_8734_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_69_V_read70_rewind_phi_fu_8734_p6 = data_69_V_read70_phi_reg_15843.read();
    } else {
        ap_phi_mux_data_69_V_read70_rewind_phi_fu_8734_p6 = data_69_V_read70_rewind_reg_8730.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_6_V_read7_phi_phi_fu_15028_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_6_V_read7_phi_phi_fu_15028_p4 = ap_phi_mux_data_6_V_read7_rewind_phi_fu_7852_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_6_V_read7_phi_phi_fu_15028_p4 = data_6_V_read.read();
    } else {
        ap_phi_mux_data_6_V_read7_phi_phi_fu_15028_p4 = ap_phi_reg_pp0_iter0_data_6_V_read7_phi_reg_15024.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_6_V_read7_rewind_phi_fu_7852_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_6_V_read7_rewind_phi_fu_7852_p6 = data_6_V_read7_phi_reg_15024.read();
    } else {
        ap_phi_mux_data_6_V_read7_rewind_phi_fu_7852_p6 = data_6_V_read7_rewind_reg_7848.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_70_V_read71_phi_phi_fu_15860_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_70_V_read71_phi_phi_fu_15860_p4 = ap_phi_mux_data_70_V_read71_rewind_phi_fu_8748_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_70_V_read71_phi_phi_fu_15860_p4 = data_70_V_read.read();
    } else {
        ap_phi_mux_data_70_V_read71_phi_phi_fu_15860_p4 = ap_phi_reg_pp0_iter0_data_70_V_read71_phi_reg_15856.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_70_V_read71_rewind_phi_fu_8748_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_70_V_read71_rewind_phi_fu_8748_p6 = data_70_V_read71_phi_reg_15856.read();
    } else {
        ap_phi_mux_data_70_V_read71_rewind_phi_fu_8748_p6 = data_70_V_read71_rewind_reg_8744.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_71_V_read72_phi_phi_fu_15873_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_71_V_read72_phi_phi_fu_15873_p4 = ap_phi_mux_data_71_V_read72_rewind_phi_fu_8762_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_71_V_read72_phi_phi_fu_15873_p4 = data_71_V_read.read();
    } else {
        ap_phi_mux_data_71_V_read72_phi_phi_fu_15873_p4 = ap_phi_reg_pp0_iter0_data_71_V_read72_phi_reg_15869.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_71_V_read72_rewind_phi_fu_8762_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_71_V_read72_rewind_phi_fu_8762_p6 = data_71_V_read72_phi_reg_15869.read();
    } else {
        ap_phi_mux_data_71_V_read72_rewind_phi_fu_8762_p6 = data_71_V_read72_rewind_reg_8758.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_72_V_read73_phi_phi_fu_15886_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_72_V_read73_phi_phi_fu_15886_p4 = ap_phi_mux_data_72_V_read73_rewind_phi_fu_8776_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_72_V_read73_phi_phi_fu_15886_p4 = data_72_V_read.read();
    } else {
        ap_phi_mux_data_72_V_read73_phi_phi_fu_15886_p4 = ap_phi_reg_pp0_iter0_data_72_V_read73_phi_reg_15882.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_72_V_read73_rewind_phi_fu_8776_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_72_V_read73_rewind_phi_fu_8776_p6 = data_72_V_read73_phi_reg_15882.read();
    } else {
        ap_phi_mux_data_72_V_read73_rewind_phi_fu_8776_p6 = data_72_V_read73_rewind_reg_8772.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_73_V_read74_phi_phi_fu_15899_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_73_V_read74_phi_phi_fu_15899_p4 = ap_phi_mux_data_73_V_read74_rewind_phi_fu_8790_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_73_V_read74_phi_phi_fu_15899_p4 = data_73_V_read.read();
    } else {
        ap_phi_mux_data_73_V_read74_phi_phi_fu_15899_p4 = ap_phi_reg_pp0_iter0_data_73_V_read74_phi_reg_15895.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_73_V_read74_rewind_phi_fu_8790_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_73_V_read74_rewind_phi_fu_8790_p6 = data_73_V_read74_phi_reg_15895.read();
    } else {
        ap_phi_mux_data_73_V_read74_rewind_phi_fu_8790_p6 = data_73_V_read74_rewind_reg_8786.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_74_V_read75_phi_phi_fu_15912_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_74_V_read75_phi_phi_fu_15912_p4 = ap_phi_mux_data_74_V_read75_rewind_phi_fu_8804_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_74_V_read75_phi_phi_fu_15912_p4 = data_74_V_read.read();
    } else {
        ap_phi_mux_data_74_V_read75_phi_phi_fu_15912_p4 = ap_phi_reg_pp0_iter0_data_74_V_read75_phi_reg_15908.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_74_V_read75_rewind_phi_fu_8804_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_74_V_read75_rewind_phi_fu_8804_p6 = data_74_V_read75_phi_reg_15908.read();
    } else {
        ap_phi_mux_data_74_V_read75_rewind_phi_fu_8804_p6 = data_74_V_read75_rewind_reg_8800.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_75_V_read76_phi_phi_fu_15925_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_75_V_read76_phi_phi_fu_15925_p4 = ap_phi_mux_data_75_V_read76_rewind_phi_fu_8818_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_75_V_read76_phi_phi_fu_15925_p4 = data_75_V_read.read();
    } else {
        ap_phi_mux_data_75_V_read76_phi_phi_fu_15925_p4 = ap_phi_reg_pp0_iter0_data_75_V_read76_phi_reg_15921.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_75_V_read76_rewind_phi_fu_8818_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_75_V_read76_rewind_phi_fu_8818_p6 = data_75_V_read76_phi_reg_15921.read();
    } else {
        ap_phi_mux_data_75_V_read76_rewind_phi_fu_8818_p6 = data_75_V_read76_rewind_reg_8814.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_76_V_read77_phi_phi_fu_15938_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_76_V_read77_phi_phi_fu_15938_p4 = ap_phi_mux_data_76_V_read77_rewind_phi_fu_8832_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_76_V_read77_phi_phi_fu_15938_p4 = data_76_V_read.read();
    } else {
        ap_phi_mux_data_76_V_read77_phi_phi_fu_15938_p4 = ap_phi_reg_pp0_iter0_data_76_V_read77_phi_reg_15934.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_76_V_read77_rewind_phi_fu_8832_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_76_V_read77_rewind_phi_fu_8832_p6 = data_76_V_read77_phi_reg_15934.read();
    } else {
        ap_phi_mux_data_76_V_read77_rewind_phi_fu_8832_p6 = data_76_V_read77_rewind_reg_8828.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_77_V_read78_phi_phi_fu_15951_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_77_V_read78_phi_phi_fu_15951_p4 = ap_phi_mux_data_77_V_read78_rewind_phi_fu_8846_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_77_V_read78_phi_phi_fu_15951_p4 = data_77_V_read.read();
    } else {
        ap_phi_mux_data_77_V_read78_phi_phi_fu_15951_p4 = ap_phi_reg_pp0_iter0_data_77_V_read78_phi_reg_15947.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_77_V_read78_rewind_phi_fu_8846_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_77_V_read78_rewind_phi_fu_8846_p6 = data_77_V_read78_phi_reg_15947.read();
    } else {
        ap_phi_mux_data_77_V_read78_rewind_phi_fu_8846_p6 = data_77_V_read78_rewind_reg_8842.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_78_V_read79_phi_phi_fu_15964_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_78_V_read79_phi_phi_fu_15964_p4 = ap_phi_mux_data_78_V_read79_rewind_phi_fu_8860_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_78_V_read79_phi_phi_fu_15964_p4 = data_78_V_read.read();
    } else {
        ap_phi_mux_data_78_V_read79_phi_phi_fu_15964_p4 = ap_phi_reg_pp0_iter0_data_78_V_read79_phi_reg_15960.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_78_V_read79_rewind_phi_fu_8860_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_78_V_read79_rewind_phi_fu_8860_p6 = data_78_V_read79_phi_reg_15960.read();
    } else {
        ap_phi_mux_data_78_V_read79_rewind_phi_fu_8860_p6 = data_78_V_read79_rewind_reg_8856.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_79_V_read80_phi_phi_fu_15977_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_79_V_read80_phi_phi_fu_15977_p4 = ap_phi_mux_data_79_V_read80_rewind_phi_fu_8874_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_79_V_read80_phi_phi_fu_15977_p4 = data_79_V_read.read();
    } else {
        ap_phi_mux_data_79_V_read80_phi_phi_fu_15977_p4 = ap_phi_reg_pp0_iter0_data_79_V_read80_phi_reg_15973.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_79_V_read80_rewind_phi_fu_8874_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_79_V_read80_rewind_phi_fu_8874_p6 = data_79_V_read80_phi_reg_15973.read();
    } else {
        ap_phi_mux_data_79_V_read80_rewind_phi_fu_8874_p6 = data_79_V_read80_rewind_reg_8870.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_7_V_read8_phi_phi_fu_15041_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_7_V_read8_phi_phi_fu_15041_p4 = ap_phi_mux_data_7_V_read8_rewind_phi_fu_7866_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_7_V_read8_phi_phi_fu_15041_p4 = data_7_V_read.read();
    } else {
        ap_phi_mux_data_7_V_read8_phi_phi_fu_15041_p4 = ap_phi_reg_pp0_iter0_data_7_V_read8_phi_reg_15037.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_7_V_read8_rewind_phi_fu_7866_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_7_V_read8_rewind_phi_fu_7866_p6 = data_7_V_read8_phi_reg_15037.read();
    } else {
        ap_phi_mux_data_7_V_read8_rewind_phi_fu_7866_p6 = data_7_V_read8_rewind_reg_7862.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_80_V_read81_phi_phi_fu_15990_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_80_V_read81_phi_phi_fu_15990_p4 = ap_phi_mux_data_80_V_read81_rewind_phi_fu_8888_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_80_V_read81_phi_phi_fu_15990_p4 = data_80_V_read.read();
    } else {
        ap_phi_mux_data_80_V_read81_phi_phi_fu_15990_p4 = ap_phi_reg_pp0_iter0_data_80_V_read81_phi_reg_15986.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_80_V_read81_rewind_phi_fu_8888_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_80_V_read81_rewind_phi_fu_8888_p6 = data_80_V_read81_phi_reg_15986.read();
    } else {
        ap_phi_mux_data_80_V_read81_rewind_phi_fu_8888_p6 = data_80_V_read81_rewind_reg_8884.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_81_V_read82_phi_phi_fu_16003_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_81_V_read82_phi_phi_fu_16003_p4 = ap_phi_mux_data_81_V_read82_rewind_phi_fu_8902_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_81_V_read82_phi_phi_fu_16003_p4 = data_81_V_read.read();
    } else {
        ap_phi_mux_data_81_V_read82_phi_phi_fu_16003_p4 = ap_phi_reg_pp0_iter0_data_81_V_read82_phi_reg_15999.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_81_V_read82_rewind_phi_fu_8902_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_81_V_read82_rewind_phi_fu_8902_p6 = data_81_V_read82_phi_reg_15999.read();
    } else {
        ap_phi_mux_data_81_V_read82_rewind_phi_fu_8902_p6 = data_81_V_read82_rewind_reg_8898.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_82_V_read83_phi_phi_fu_16016_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_82_V_read83_phi_phi_fu_16016_p4 = ap_phi_mux_data_82_V_read83_rewind_phi_fu_8916_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_82_V_read83_phi_phi_fu_16016_p4 = data_82_V_read.read();
    } else {
        ap_phi_mux_data_82_V_read83_phi_phi_fu_16016_p4 = ap_phi_reg_pp0_iter0_data_82_V_read83_phi_reg_16012.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_82_V_read83_rewind_phi_fu_8916_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_82_V_read83_rewind_phi_fu_8916_p6 = data_82_V_read83_phi_reg_16012.read();
    } else {
        ap_phi_mux_data_82_V_read83_rewind_phi_fu_8916_p6 = data_82_V_read83_rewind_reg_8912.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_83_V_read84_phi_phi_fu_16029_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_83_V_read84_phi_phi_fu_16029_p4 = ap_phi_mux_data_83_V_read84_rewind_phi_fu_8930_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_83_V_read84_phi_phi_fu_16029_p4 = data_83_V_read.read();
    } else {
        ap_phi_mux_data_83_V_read84_phi_phi_fu_16029_p4 = ap_phi_reg_pp0_iter0_data_83_V_read84_phi_reg_16025.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_83_V_read84_rewind_phi_fu_8930_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_83_V_read84_rewind_phi_fu_8930_p6 = data_83_V_read84_phi_reg_16025.read();
    } else {
        ap_phi_mux_data_83_V_read84_rewind_phi_fu_8930_p6 = data_83_V_read84_rewind_reg_8926.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_84_V_read85_phi_phi_fu_16042_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_84_V_read85_phi_phi_fu_16042_p4 = ap_phi_mux_data_84_V_read85_rewind_phi_fu_8944_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_84_V_read85_phi_phi_fu_16042_p4 = data_84_V_read.read();
    } else {
        ap_phi_mux_data_84_V_read85_phi_phi_fu_16042_p4 = ap_phi_reg_pp0_iter0_data_84_V_read85_phi_reg_16038.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_84_V_read85_rewind_phi_fu_8944_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_84_V_read85_rewind_phi_fu_8944_p6 = data_84_V_read85_phi_reg_16038.read();
    } else {
        ap_phi_mux_data_84_V_read85_rewind_phi_fu_8944_p6 = data_84_V_read85_rewind_reg_8940.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_85_V_read86_phi_phi_fu_16055_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_85_V_read86_phi_phi_fu_16055_p4 = ap_phi_mux_data_85_V_read86_rewind_phi_fu_8958_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_85_V_read86_phi_phi_fu_16055_p4 = data_85_V_read.read();
    } else {
        ap_phi_mux_data_85_V_read86_phi_phi_fu_16055_p4 = ap_phi_reg_pp0_iter0_data_85_V_read86_phi_reg_16051.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_85_V_read86_rewind_phi_fu_8958_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_85_V_read86_rewind_phi_fu_8958_p6 = data_85_V_read86_phi_reg_16051.read();
    } else {
        ap_phi_mux_data_85_V_read86_rewind_phi_fu_8958_p6 = data_85_V_read86_rewind_reg_8954.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_86_V_read87_phi_phi_fu_16068_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_86_V_read87_phi_phi_fu_16068_p4 = ap_phi_mux_data_86_V_read87_rewind_phi_fu_8972_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_86_V_read87_phi_phi_fu_16068_p4 = data_86_V_read.read();
    } else {
        ap_phi_mux_data_86_V_read87_phi_phi_fu_16068_p4 = ap_phi_reg_pp0_iter0_data_86_V_read87_phi_reg_16064.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_86_V_read87_rewind_phi_fu_8972_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_86_V_read87_rewind_phi_fu_8972_p6 = data_86_V_read87_phi_reg_16064.read();
    } else {
        ap_phi_mux_data_86_V_read87_rewind_phi_fu_8972_p6 = data_86_V_read87_rewind_reg_8968.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_87_V_read88_phi_phi_fu_16081_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_87_V_read88_phi_phi_fu_16081_p4 = ap_phi_mux_data_87_V_read88_rewind_phi_fu_8986_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_87_V_read88_phi_phi_fu_16081_p4 = data_87_V_read.read();
    } else {
        ap_phi_mux_data_87_V_read88_phi_phi_fu_16081_p4 = ap_phi_reg_pp0_iter0_data_87_V_read88_phi_reg_16077.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_87_V_read88_rewind_phi_fu_8986_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_87_V_read88_rewind_phi_fu_8986_p6 = data_87_V_read88_phi_reg_16077.read();
    } else {
        ap_phi_mux_data_87_V_read88_rewind_phi_fu_8986_p6 = data_87_V_read88_rewind_reg_8982.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_88_V_read89_phi_phi_fu_16094_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_88_V_read89_phi_phi_fu_16094_p4 = ap_phi_mux_data_88_V_read89_rewind_phi_fu_9000_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_88_V_read89_phi_phi_fu_16094_p4 = data_88_V_read.read();
    } else {
        ap_phi_mux_data_88_V_read89_phi_phi_fu_16094_p4 = ap_phi_reg_pp0_iter0_data_88_V_read89_phi_reg_16090.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_88_V_read89_rewind_phi_fu_9000_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_88_V_read89_rewind_phi_fu_9000_p6 = data_88_V_read89_phi_reg_16090.read();
    } else {
        ap_phi_mux_data_88_V_read89_rewind_phi_fu_9000_p6 = data_88_V_read89_rewind_reg_8996.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_89_V_read90_phi_phi_fu_16107_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_89_V_read90_phi_phi_fu_16107_p4 = ap_phi_mux_data_89_V_read90_rewind_phi_fu_9014_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_89_V_read90_phi_phi_fu_16107_p4 = data_89_V_read.read();
    } else {
        ap_phi_mux_data_89_V_read90_phi_phi_fu_16107_p4 = ap_phi_reg_pp0_iter0_data_89_V_read90_phi_reg_16103.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_89_V_read90_rewind_phi_fu_9014_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_89_V_read90_rewind_phi_fu_9014_p6 = data_89_V_read90_phi_reg_16103.read();
    } else {
        ap_phi_mux_data_89_V_read90_rewind_phi_fu_9014_p6 = data_89_V_read90_rewind_reg_9010.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_8_V_read9_phi_phi_fu_15054_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_8_V_read9_phi_phi_fu_15054_p4 = ap_phi_mux_data_8_V_read9_rewind_phi_fu_7880_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_8_V_read9_phi_phi_fu_15054_p4 = data_8_V_read.read();
    } else {
        ap_phi_mux_data_8_V_read9_phi_phi_fu_15054_p4 = ap_phi_reg_pp0_iter0_data_8_V_read9_phi_reg_15050.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_8_V_read9_rewind_phi_fu_7880_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_8_V_read9_rewind_phi_fu_7880_p6 = data_8_V_read9_phi_reg_15050.read();
    } else {
        ap_phi_mux_data_8_V_read9_rewind_phi_fu_7880_p6 = data_8_V_read9_rewind_reg_7876.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_90_V_read91_phi_phi_fu_16120_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_90_V_read91_phi_phi_fu_16120_p4 = ap_phi_mux_data_90_V_read91_rewind_phi_fu_9028_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_90_V_read91_phi_phi_fu_16120_p4 = data_90_V_read.read();
    } else {
        ap_phi_mux_data_90_V_read91_phi_phi_fu_16120_p4 = ap_phi_reg_pp0_iter0_data_90_V_read91_phi_reg_16116.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_90_V_read91_rewind_phi_fu_9028_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_90_V_read91_rewind_phi_fu_9028_p6 = data_90_V_read91_phi_reg_16116.read();
    } else {
        ap_phi_mux_data_90_V_read91_rewind_phi_fu_9028_p6 = data_90_V_read91_rewind_reg_9024.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_91_V_read92_phi_phi_fu_16133_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_91_V_read92_phi_phi_fu_16133_p4 = ap_phi_mux_data_91_V_read92_rewind_phi_fu_9042_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_91_V_read92_phi_phi_fu_16133_p4 = data_91_V_read.read();
    } else {
        ap_phi_mux_data_91_V_read92_phi_phi_fu_16133_p4 = ap_phi_reg_pp0_iter0_data_91_V_read92_phi_reg_16129.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_91_V_read92_rewind_phi_fu_9042_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_91_V_read92_rewind_phi_fu_9042_p6 = data_91_V_read92_phi_reg_16129.read();
    } else {
        ap_phi_mux_data_91_V_read92_rewind_phi_fu_9042_p6 = data_91_V_read92_rewind_reg_9038.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_92_V_read93_phi_phi_fu_16146_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_92_V_read93_phi_phi_fu_16146_p4 = ap_phi_mux_data_92_V_read93_rewind_phi_fu_9056_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_92_V_read93_phi_phi_fu_16146_p4 = data_92_V_read.read();
    } else {
        ap_phi_mux_data_92_V_read93_phi_phi_fu_16146_p4 = ap_phi_reg_pp0_iter0_data_92_V_read93_phi_reg_16142.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_92_V_read93_rewind_phi_fu_9056_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_92_V_read93_rewind_phi_fu_9056_p6 = data_92_V_read93_phi_reg_16142.read();
    } else {
        ap_phi_mux_data_92_V_read93_rewind_phi_fu_9056_p6 = data_92_V_read93_rewind_reg_9052.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_93_V_read94_phi_phi_fu_16159_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_93_V_read94_phi_phi_fu_16159_p4 = ap_phi_mux_data_93_V_read94_rewind_phi_fu_9070_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_93_V_read94_phi_phi_fu_16159_p4 = data_93_V_read.read();
    } else {
        ap_phi_mux_data_93_V_read94_phi_phi_fu_16159_p4 = ap_phi_reg_pp0_iter0_data_93_V_read94_phi_reg_16155.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_93_V_read94_rewind_phi_fu_9070_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_93_V_read94_rewind_phi_fu_9070_p6 = data_93_V_read94_phi_reg_16155.read();
    } else {
        ap_phi_mux_data_93_V_read94_rewind_phi_fu_9070_p6 = data_93_V_read94_rewind_reg_9066.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_94_V_read95_phi_phi_fu_16172_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_94_V_read95_phi_phi_fu_16172_p4 = ap_phi_mux_data_94_V_read95_rewind_phi_fu_9084_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_94_V_read95_phi_phi_fu_16172_p4 = data_94_V_read.read();
    } else {
        ap_phi_mux_data_94_V_read95_phi_phi_fu_16172_p4 = ap_phi_reg_pp0_iter0_data_94_V_read95_phi_reg_16168.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_94_V_read95_rewind_phi_fu_9084_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_94_V_read95_rewind_phi_fu_9084_p6 = data_94_V_read95_phi_reg_16168.read();
    } else {
        ap_phi_mux_data_94_V_read95_rewind_phi_fu_9084_p6 = data_94_V_read95_rewind_reg_9080.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_95_V_read96_phi_phi_fu_16185_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_95_V_read96_phi_phi_fu_16185_p4 = ap_phi_mux_data_95_V_read96_rewind_phi_fu_9098_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_95_V_read96_phi_phi_fu_16185_p4 = data_95_V_read.read();
    } else {
        ap_phi_mux_data_95_V_read96_phi_phi_fu_16185_p4 = ap_phi_reg_pp0_iter0_data_95_V_read96_phi_reg_16181.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_95_V_read96_rewind_phi_fu_9098_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_95_V_read96_rewind_phi_fu_9098_p6 = data_95_V_read96_phi_reg_16181.read();
    } else {
        ap_phi_mux_data_95_V_read96_rewind_phi_fu_9098_p6 = data_95_V_read96_rewind_reg_9094.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_96_V_read97_phi_phi_fu_16198_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_96_V_read97_phi_phi_fu_16198_p4 = ap_phi_mux_data_96_V_read97_rewind_phi_fu_9112_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_96_V_read97_phi_phi_fu_16198_p4 = data_96_V_read.read();
    } else {
        ap_phi_mux_data_96_V_read97_phi_phi_fu_16198_p4 = ap_phi_reg_pp0_iter0_data_96_V_read97_phi_reg_16194.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_96_V_read97_rewind_phi_fu_9112_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_96_V_read97_rewind_phi_fu_9112_p6 = data_96_V_read97_phi_reg_16194.read();
    } else {
        ap_phi_mux_data_96_V_read97_rewind_phi_fu_9112_p6 = data_96_V_read97_rewind_reg_9108.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_97_V_read98_phi_phi_fu_16211_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_97_V_read98_phi_phi_fu_16211_p4 = ap_phi_mux_data_97_V_read98_rewind_phi_fu_9126_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_97_V_read98_phi_phi_fu_16211_p4 = data_97_V_read.read();
    } else {
        ap_phi_mux_data_97_V_read98_phi_phi_fu_16211_p4 = ap_phi_reg_pp0_iter0_data_97_V_read98_phi_reg_16207.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_97_V_read98_rewind_phi_fu_9126_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_97_V_read98_rewind_phi_fu_9126_p6 = data_97_V_read98_phi_reg_16207.read();
    } else {
        ap_phi_mux_data_97_V_read98_rewind_phi_fu_9126_p6 = data_97_V_read98_rewind_reg_9122.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_98_V_read99_phi_phi_fu_16224_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_98_V_read99_phi_phi_fu_16224_p4 = ap_phi_mux_data_98_V_read99_rewind_phi_fu_9140_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_98_V_read99_phi_phi_fu_16224_p4 = data_98_V_read.read();
    } else {
        ap_phi_mux_data_98_V_read99_phi_phi_fu_16224_p4 = ap_phi_reg_pp0_iter0_data_98_V_read99_phi_reg_16220.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_98_V_read99_rewind_phi_fu_9140_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_98_V_read99_rewind_phi_fu_9140_p6 = data_98_V_read99_phi_reg_16220.read();
    } else {
        ap_phi_mux_data_98_V_read99_rewind_phi_fu_9140_p6 = data_98_V_read99_rewind_reg_9136.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_99_V_read100_phi_phi_fu_16237_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_99_V_read100_phi_phi_fu_16237_p4 = ap_phi_mux_data_99_V_read100_rewind_phi_fu_9154_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_99_V_read100_phi_phi_fu_16237_p4 = data_99_V_read.read();
    } else {
        ap_phi_mux_data_99_V_read100_phi_phi_fu_16237_p4 = ap_phi_reg_pp0_iter0_data_99_V_read100_phi_reg_16233.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_99_V_read100_rewind_phi_fu_9154_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_99_V_read100_rewind_phi_fu_9154_p6 = data_99_V_read100_phi_reg_16233.read();
    } else {
        ap_phi_mux_data_99_V_read100_rewind_phi_fu_9154_p6 = data_99_V_read100_rewind_reg_9150.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_9_V_read10_phi_phi_fu_15067_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_7752_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_9_V_read10_phi_phi_fu_15067_p4 = ap_phi_mux_data_9_V_read10_rewind_phi_fu_7894_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7752_p6.read())) {
        ap_phi_mux_data_9_V_read10_phi_phi_fu_15067_p4 = data_9_V_read.read();
    } else {
        ap_phi_mux_data_9_V_read10_phi_phi_fu_15067_p4 = ap_phi_reg_pp0_iter0_data_9_V_read10_phi_reg_15063.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_data_9_V_read10_rewind_phi_fu_7894_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_9_V_read10_rewind_phi_fu_7894_p6 = data_9_V_read10_phi_reg_15063.read();
    } else {
        ap_phi_mux_data_9_V_read10_rewind_phi_fu_7894_p6 = data_9_V_read10_rewind_reg_7890.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_do_init_phi_fu_7752_p6() {
    if (esl_seteq<1,1,1>(ap_condition_4455.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln34_reg_2106324.read())) {
            ap_phi_mux_do_init_phi_fu_7752_p6 = ap_const_lv1_1;
        } else if (esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0)) {
            ap_phi_mux_do_init_phi_fu_7752_p6 = ap_const_lv1_0;
        } else {
            ap_phi_mux_do_init_phi_fu_7752_p6 = do_init_reg_7748.read();
        }
    } else {
        ap_phi_mux_do_init_phi_fu_7752_p6 = do_init_reg_7748.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_mux_i_part_0_i2158_phi_fu_14936_p6() {
    if (esl_seteq<1,1,1>(ap_condition_4455.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln34_reg_2106324.read())) {
            ap_phi_mux_i_part_0_i2158_phi_fu_14936_p6 = ap_const_lv4_0;
        } else if (esl_seteq<1,1,1>(icmp_ln34_reg_2106324.read(), ap_const_lv1_0)) {
            ap_phi_mux_i_part_0_i2158_phi_fu_14936_p6 = i_part_reg_2106319.read();
        } else {
            ap_phi_mux_i_part_0_i2158_phi_fu_14936_p6 = i_part_0_i2158_reg_14932.read();
        }
    } else {
        ap_phi_mux_i_part_0_i2158_phi_fu_14936_p6 = i_part_0_i2158_reg_14932.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_0_V_read1_phi_reg_14946() {
    ap_phi_reg_pp0_iter0_data_0_V_read1_phi_reg_14946 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_100_V_read101_phi_reg_16246() {
    ap_phi_reg_pp0_iter0_data_100_V_read101_phi_reg_16246 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_101_V_read102_phi_reg_16259() {
    ap_phi_reg_pp0_iter0_data_101_V_read102_phi_reg_16259 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_102_V_read103_phi_reg_16272() {
    ap_phi_reg_pp0_iter0_data_102_V_read103_phi_reg_16272 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_103_V_read104_phi_reg_16285() {
    ap_phi_reg_pp0_iter0_data_103_V_read104_phi_reg_16285 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_104_V_read105_phi_reg_16298() {
    ap_phi_reg_pp0_iter0_data_104_V_read105_phi_reg_16298 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_105_V_read106_phi_reg_16311() {
    ap_phi_reg_pp0_iter0_data_105_V_read106_phi_reg_16311 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_106_V_read107_phi_reg_16324() {
    ap_phi_reg_pp0_iter0_data_106_V_read107_phi_reg_16324 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_107_V_read108_phi_reg_16337() {
    ap_phi_reg_pp0_iter0_data_107_V_read108_phi_reg_16337 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_108_V_read109_phi_reg_16350() {
    ap_phi_reg_pp0_iter0_data_108_V_read109_phi_reg_16350 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_109_V_read110_phi_reg_16363() {
    ap_phi_reg_pp0_iter0_data_109_V_read110_phi_reg_16363 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_10_V_read11_phi_reg_15076() {
    ap_phi_reg_pp0_iter0_data_10_V_read11_phi_reg_15076 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_110_V_read111_phi_reg_16376() {
    ap_phi_reg_pp0_iter0_data_110_V_read111_phi_reg_16376 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_111_V_read112_phi_reg_16389() {
    ap_phi_reg_pp0_iter0_data_111_V_read112_phi_reg_16389 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_112_V_read113_phi_reg_16402() {
    ap_phi_reg_pp0_iter0_data_112_V_read113_phi_reg_16402 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_113_V_read114_phi_reg_16415() {
    ap_phi_reg_pp0_iter0_data_113_V_read114_phi_reg_16415 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_114_V_read115_phi_reg_16428() {
    ap_phi_reg_pp0_iter0_data_114_V_read115_phi_reg_16428 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_115_V_read116_phi_reg_16441() {
    ap_phi_reg_pp0_iter0_data_115_V_read116_phi_reg_16441 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_116_V_read117_phi_reg_16454() {
    ap_phi_reg_pp0_iter0_data_116_V_read117_phi_reg_16454 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_117_V_read118_phi_reg_16467() {
    ap_phi_reg_pp0_iter0_data_117_V_read118_phi_reg_16467 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_118_V_read119_phi_reg_16480() {
    ap_phi_reg_pp0_iter0_data_118_V_read119_phi_reg_16480 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_119_V_read120_phi_reg_16493() {
    ap_phi_reg_pp0_iter0_data_119_V_read120_phi_reg_16493 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_11_V_read12_phi_reg_15089() {
    ap_phi_reg_pp0_iter0_data_11_V_read12_phi_reg_15089 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_120_V_read121_phi_reg_16506() {
    ap_phi_reg_pp0_iter0_data_120_V_read121_phi_reg_16506 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_121_V_read122_phi_reg_16519() {
    ap_phi_reg_pp0_iter0_data_121_V_read122_phi_reg_16519 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_122_V_read123_phi_reg_16532() {
    ap_phi_reg_pp0_iter0_data_122_V_read123_phi_reg_16532 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_123_V_read124_phi_reg_16545() {
    ap_phi_reg_pp0_iter0_data_123_V_read124_phi_reg_16545 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_124_V_read125_phi_reg_16558() {
    ap_phi_reg_pp0_iter0_data_124_V_read125_phi_reg_16558 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_125_V_read126_phi_reg_16571() {
    ap_phi_reg_pp0_iter0_data_125_V_read126_phi_reg_16571 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_126_V_read127_phi_reg_16584() {
    ap_phi_reg_pp0_iter0_data_126_V_read127_phi_reg_16584 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_127_V_read128_phi_reg_16597() {
    ap_phi_reg_pp0_iter0_data_127_V_read128_phi_reg_16597 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_128_V_read129_phi_reg_16610() {
    ap_phi_reg_pp0_iter0_data_128_V_read129_phi_reg_16610 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_129_V_read130_phi_reg_16623() {
    ap_phi_reg_pp0_iter0_data_129_V_read130_phi_reg_16623 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_12_V_read13_phi_reg_15102() {
    ap_phi_reg_pp0_iter0_data_12_V_read13_phi_reg_15102 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_130_V_read131_phi_reg_16636() {
    ap_phi_reg_pp0_iter0_data_130_V_read131_phi_reg_16636 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_131_V_read132_phi_reg_16649() {
    ap_phi_reg_pp0_iter0_data_131_V_read132_phi_reg_16649 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_132_V_read133_phi_reg_16662() {
    ap_phi_reg_pp0_iter0_data_132_V_read133_phi_reg_16662 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_133_V_read134_phi_reg_16675() {
    ap_phi_reg_pp0_iter0_data_133_V_read134_phi_reg_16675 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_134_V_read135_phi_reg_16688() {
    ap_phi_reg_pp0_iter0_data_134_V_read135_phi_reg_16688 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_135_V_read136_phi_reg_16701() {
    ap_phi_reg_pp0_iter0_data_135_V_read136_phi_reg_16701 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_136_V_read137_phi_reg_16714() {
    ap_phi_reg_pp0_iter0_data_136_V_read137_phi_reg_16714 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_137_V_read138_phi_reg_16727() {
    ap_phi_reg_pp0_iter0_data_137_V_read138_phi_reg_16727 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_138_V_read139_phi_reg_16740() {
    ap_phi_reg_pp0_iter0_data_138_V_read139_phi_reg_16740 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_139_V_read140_phi_reg_16753() {
    ap_phi_reg_pp0_iter0_data_139_V_read140_phi_reg_16753 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_13_V_read14_phi_reg_15115() {
    ap_phi_reg_pp0_iter0_data_13_V_read14_phi_reg_15115 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_140_V_read141_phi_reg_16766() {
    ap_phi_reg_pp0_iter0_data_140_V_read141_phi_reg_16766 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_141_V_read142_phi_reg_16779() {
    ap_phi_reg_pp0_iter0_data_141_V_read142_phi_reg_16779 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_142_V_read143_phi_reg_16792() {
    ap_phi_reg_pp0_iter0_data_142_V_read143_phi_reg_16792 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_143_V_read144_phi_reg_16805() {
    ap_phi_reg_pp0_iter0_data_143_V_read144_phi_reg_16805 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_144_V_read145_phi_reg_16818() {
    ap_phi_reg_pp0_iter0_data_144_V_read145_phi_reg_16818 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_145_V_read146_phi_reg_16831() {
    ap_phi_reg_pp0_iter0_data_145_V_read146_phi_reg_16831 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_146_V_read147_phi_reg_16844() {
    ap_phi_reg_pp0_iter0_data_146_V_read147_phi_reg_16844 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_147_V_read148_phi_reg_16857() {
    ap_phi_reg_pp0_iter0_data_147_V_read148_phi_reg_16857 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_148_V_read149_phi_reg_16870() {
    ap_phi_reg_pp0_iter0_data_148_V_read149_phi_reg_16870 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_149_V_read150_phi_reg_16883() {
    ap_phi_reg_pp0_iter0_data_149_V_read150_phi_reg_16883 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_14_V_read15_phi_reg_15128() {
    ap_phi_reg_pp0_iter0_data_14_V_read15_phi_reg_15128 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_150_V_read151_phi_reg_16896() {
    ap_phi_reg_pp0_iter0_data_150_V_read151_phi_reg_16896 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_151_V_read152_phi_reg_16909() {
    ap_phi_reg_pp0_iter0_data_151_V_read152_phi_reg_16909 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_152_V_read153_phi_reg_16922() {
    ap_phi_reg_pp0_iter0_data_152_V_read153_phi_reg_16922 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_153_V_read154_phi_reg_16935() {
    ap_phi_reg_pp0_iter0_data_153_V_read154_phi_reg_16935 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_154_V_read155_phi_reg_16948() {
    ap_phi_reg_pp0_iter0_data_154_V_read155_phi_reg_16948 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_155_V_read156_phi_reg_16961() {
    ap_phi_reg_pp0_iter0_data_155_V_read156_phi_reg_16961 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_156_V_read157_phi_reg_16974() {
    ap_phi_reg_pp0_iter0_data_156_V_read157_phi_reg_16974 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_157_V_read158_phi_reg_16987() {
    ap_phi_reg_pp0_iter0_data_157_V_read158_phi_reg_16987 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_158_V_read159_phi_reg_17000() {
    ap_phi_reg_pp0_iter0_data_158_V_read159_phi_reg_17000 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_159_V_read160_phi_reg_17013() {
    ap_phi_reg_pp0_iter0_data_159_V_read160_phi_reg_17013 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_15_V_read16_phi_reg_15141() {
    ap_phi_reg_pp0_iter0_data_15_V_read16_phi_reg_15141 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_160_V_read161_phi_reg_17026() {
    ap_phi_reg_pp0_iter0_data_160_V_read161_phi_reg_17026 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_161_V_read162_phi_reg_17039() {
    ap_phi_reg_pp0_iter0_data_161_V_read162_phi_reg_17039 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_162_V_read163_phi_reg_17052() {
    ap_phi_reg_pp0_iter0_data_162_V_read163_phi_reg_17052 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_163_V_read164_phi_reg_17065() {
    ap_phi_reg_pp0_iter0_data_163_V_read164_phi_reg_17065 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_164_V_read165_phi_reg_17078() {
    ap_phi_reg_pp0_iter0_data_164_V_read165_phi_reg_17078 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_165_V_read166_phi_reg_17091() {
    ap_phi_reg_pp0_iter0_data_165_V_read166_phi_reg_17091 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_166_V_read167_phi_reg_17104() {
    ap_phi_reg_pp0_iter0_data_166_V_read167_phi_reg_17104 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_167_V_read168_phi_reg_17117() {
    ap_phi_reg_pp0_iter0_data_167_V_read168_phi_reg_17117 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_168_V_read169_phi_reg_17130() {
    ap_phi_reg_pp0_iter0_data_168_V_read169_phi_reg_17130 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_169_V_read170_phi_reg_17143() {
    ap_phi_reg_pp0_iter0_data_169_V_read170_phi_reg_17143 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_16_V_read17_phi_reg_15154() {
    ap_phi_reg_pp0_iter0_data_16_V_read17_phi_reg_15154 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_170_V_read171_phi_reg_17156() {
    ap_phi_reg_pp0_iter0_data_170_V_read171_phi_reg_17156 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_171_V_read172_phi_reg_17169() {
    ap_phi_reg_pp0_iter0_data_171_V_read172_phi_reg_17169 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_172_V_read173_phi_reg_17182() {
    ap_phi_reg_pp0_iter0_data_172_V_read173_phi_reg_17182 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_173_V_read174_phi_reg_17195() {
    ap_phi_reg_pp0_iter0_data_173_V_read174_phi_reg_17195 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_174_V_read175_phi_reg_17208() {
    ap_phi_reg_pp0_iter0_data_174_V_read175_phi_reg_17208 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_175_V_read176_phi_reg_17221() {
    ap_phi_reg_pp0_iter0_data_175_V_read176_phi_reg_17221 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_176_V_read177_phi_reg_17234() {
    ap_phi_reg_pp0_iter0_data_176_V_read177_phi_reg_17234 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_177_V_read178_phi_reg_17247() {
    ap_phi_reg_pp0_iter0_data_177_V_read178_phi_reg_17247 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_178_V_read179_phi_reg_17260() {
    ap_phi_reg_pp0_iter0_data_178_V_read179_phi_reg_17260 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_179_V_read180_phi_reg_17273() {
    ap_phi_reg_pp0_iter0_data_179_V_read180_phi_reg_17273 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_17_V_read18_phi_reg_15167() {
    ap_phi_reg_pp0_iter0_data_17_V_read18_phi_reg_15167 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_180_V_read181_phi_reg_17286() {
    ap_phi_reg_pp0_iter0_data_180_V_read181_phi_reg_17286 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_181_V_read182_phi_reg_17299() {
    ap_phi_reg_pp0_iter0_data_181_V_read182_phi_reg_17299 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_182_V_read183_phi_reg_17312() {
    ap_phi_reg_pp0_iter0_data_182_V_read183_phi_reg_17312 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_183_V_read184_phi_reg_17325() {
    ap_phi_reg_pp0_iter0_data_183_V_read184_phi_reg_17325 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_184_V_read185_phi_reg_17338() {
    ap_phi_reg_pp0_iter0_data_184_V_read185_phi_reg_17338 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_185_V_read186_phi_reg_17351() {
    ap_phi_reg_pp0_iter0_data_185_V_read186_phi_reg_17351 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_186_V_read187_phi_reg_17364() {
    ap_phi_reg_pp0_iter0_data_186_V_read187_phi_reg_17364 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_187_V_read188_phi_reg_17377() {
    ap_phi_reg_pp0_iter0_data_187_V_read188_phi_reg_17377 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_188_V_read189_phi_reg_17390() {
    ap_phi_reg_pp0_iter0_data_188_V_read189_phi_reg_17390 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_189_V_read190_phi_reg_17403() {
    ap_phi_reg_pp0_iter0_data_189_V_read190_phi_reg_17403 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_18_V_read19_phi_reg_15180() {
    ap_phi_reg_pp0_iter0_data_18_V_read19_phi_reg_15180 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_190_V_read191_phi_reg_17416() {
    ap_phi_reg_pp0_iter0_data_190_V_read191_phi_reg_17416 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_191_V_read192_phi_reg_17429() {
    ap_phi_reg_pp0_iter0_data_191_V_read192_phi_reg_17429 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_192_V_read193_phi_reg_17442() {
    ap_phi_reg_pp0_iter0_data_192_V_read193_phi_reg_17442 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_193_V_read194_phi_reg_17455() {
    ap_phi_reg_pp0_iter0_data_193_V_read194_phi_reg_17455 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_194_V_read195_phi_reg_17468() {
    ap_phi_reg_pp0_iter0_data_194_V_read195_phi_reg_17468 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_195_V_read196_phi_reg_17481() {
    ap_phi_reg_pp0_iter0_data_195_V_read196_phi_reg_17481 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_196_V_read197_phi_reg_17494() {
    ap_phi_reg_pp0_iter0_data_196_V_read197_phi_reg_17494 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_197_V_read198_phi_reg_17507() {
    ap_phi_reg_pp0_iter0_data_197_V_read198_phi_reg_17507 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_198_V_read199_phi_reg_17520() {
    ap_phi_reg_pp0_iter0_data_198_V_read199_phi_reg_17520 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_199_V_read200_phi_reg_17533() {
    ap_phi_reg_pp0_iter0_data_199_V_read200_phi_reg_17533 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_19_V_read20_phi_reg_15193() {
    ap_phi_reg_pp0_iter0_data_19_V_read20_phi_reg_15193 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_1_V_read2_phi_reg_14959() {
    ap_phi_reg_pp0_iter0_data_1_V_read2_phi_reg_14959 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_200_V_read201_phi_reg_17546() {
    ap_phi_reg_pp0_iter0_data_200_V_read201_phi_reg_17546 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_201_V_read202_phi_reg_17559() {
    ap_phi_reg_pp0_iter0_data_201_V_read202_phi_reg_17559 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_202_V_read203_phi_reg_17572() {
    ap_phi_reg_pp0_iter0_data_202_V_read203_phi_reg_17572 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_203_V_read204_phi_reg_17585() {
    ap_phi_reg_pp0_iter0_data_203_V_read204_phi_reg_17585 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_204_V_read205_phi_reg_17598() {
    ap_phi_reg_pp0_iter0_data_204_V_read205_phi_reg_17598 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_205_V_read206_phi_reg_17611() {
    ap_phi_reg_pp0_iter0_data_205_V_read206_phi_reg_17611 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_206_V_read207_phi_reg_17624() {
    ap_phi_reg_pp0_iter0_data_206_V_read207_phi_reg_17624 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_207_V_read208_phi_reg_17637() {
    ap_phi_reg_pp0_iter0_data_207_V_read208_phi_reg_17637 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_208_V_read209_phi_reg_17650() {
    ap_phi_reg_pp0_iter0_data_208_V_read209_phi_reg_17650 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_209_V_read210_phi_reg_17663() {
    ap_phi_reg_pp0_iter0_data_209_V_read210_phi_reg_17663 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_20_V_read21_phi_reg_15206() {
    ap_phi_reg_pp0_iter0_data_20_V_read21_phi_reg_15206 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_210_V_read211_phi_reg_17676() {
    ap_phi_reg_pp0_iter0_data_210_V_read211_phi_reg_17676 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_211_V_read212_phi_reg_17689() {
    ap_phi_reg_pp0_iter0_data_211_V_read212_phi_reg_17689 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_212_V_read213_phi_reg_17702() {
    ap_phi_reg_pp0_iter0_data_212_V_read213_phi_reg_17702 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_213_V_read214_phi_reg_17715() {
    ap_phi_reg_pp0_iter0_data_213_V_read214_phi_reg_17715 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_214_V_read215_phi_reg_17728() {
    ap_phi_reg_pp0_iter0_data_214_V_read215_phi_reg_17728 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_215_V_read216_phi_reg_17741() {
    ap_phi_reg_pp0_iter0_data_215_V_read216_phi_reg_17741 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_216_V_read217_phi_reg_17754() {
    ap_phi_reg_pp0_iter0_data_216_V_read217_phi_reg_17754 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_217_V_read218_phi_reg_17767() {
    ap_phi_reg_pp0_iter0_data_217_V_read218_phi_reg_17767 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_218_V_read219_phi_reg_17780() {
    ap_phi_reg_pp0_iter0_data_218_V_read219_phi_reg_17780 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_219_V_read220_phi_reg_17793() {
    ap_phi_reg_pp0_iter0_data_219_V_read220_phi_reg_17793 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_21_V_read22_phi_reg_15219() {
    ap_phi_reg_pp0_iter0_data_21_V_read22_phi_reg_15219 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_220_V_read221_phi_reg_17806() {
    ap_phi_reg_pp0_iter0_data_220_V_read221_phi_reg_17806 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_221_V_read222_phi_reg_17819() {
    ap_phi_reg_pp0_iter0_data_221_V_read222_phi_reg_17819 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_222_V_read223_phi_reg_17832() {
    ap_phi_reg_pp0_iter0_data_222_V_read223_phi_reg_17832 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_223_V_read224_phi_reg_17845() {
    ap_phi_reg_pp0_iter0_data_223_V_read224_phi_reg_17845 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_224_V_read225_phi_reg_17858() {
    ap_phi_reg_pp0_iter0_data_224_V_read225_phi_reg_17858 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_225_V_read226_phi_reg_17871() {
    ap_phi_reg_pp0_iter0_data_225_V_read226_phi_reg_17871 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_226_V_read227_phi_reg_17884() {
    ap_phi_reg_pp0_iter0_data_226_V_read227_phi_reg_17884 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_227_V_read228_phi_reg_17897() {
    ap_phi_reg_pp0_iter0_data_227_V_read228_phi_reg_17897 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_228_V_read229_phi_reg_17910() {
    ap_phi_reg_pp0_iter0_data_228_V_read229_phi_reg_17910 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_229_V_read230_phi_reg_17923() {
    ap_phi_reg_pp0_iter0_data_229_V_read230_phi_reg_17923 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_22_V_read23_phi_reg_15232() {
    ap_phi_reg_pp0_iter0_data_22_V_read23_phi_reg_15232 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_230_V_read231_phi_reg_17936() {
    ap_phi_reg_pp0_iter0_data_230_V_read231_phi_reg_17936 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_231_V_read232_phi_reg_17949() {
    ap_phi_reg_pp0_iter0_data_231_V_read232_phi_reg_17949 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_232_V_read233_phi_reg_17962() {
    ap_phi_reg_pp0_iter0_data_232_V_read233_phi_reg_17962 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_233_V_read234_phi_reg_17975() {
    ap_phi_reg_pp0_iter0_data_233_V_read234_phi_reg_17975 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_234_V_read235_phi_reg_17988() {
    ap_phi_reg_pp0_iter0_data_234_V_read235_phi_reg_17988 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_235_V_read236_phi_reg_18001() {
    ap_phi_reg_pp0_iter0_data_235_V_read236_phi_reg_18001 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_236_V_read237_phi_reg_18014() {
    ap_phi_reg_pp0_iter0_data_236_V_read237_phi_reg_18014 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_237_V_read238_phi_reg_18027() {
    ap_phi_reg_pp0_iter0_data_237_V_read238_phi_reg_18027 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_238_V_read239_phi_reg_18040() {
    ap_phi_reg_pp0_iter0_data_238_V_read239_phi_reg_18040 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_239_V_read240_phi_reg_18053() {
    ap_phi_reg_pp0_iter0_data_239_V_read240_phi_reg_18053 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_23_V_read24_phi_reg_15245() {
    ap_phi_reg_pp0_iter0_data_23_V_read24_phi_reg_15245 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_240_V_read241_phi_reg_18066() {
    ap_phi_reg_pp0_iter0_data_240_V_read241_phi_reg_18066 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_241_V_read242_phi_reg_18079() {
    ap_phi_reg_pp0_iter0_data_241_V_read242_phi_reg_18079 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_242_V_read243_phi_reg_18092() {
    ap_phi_reg_pp0_iter0_data_242_V_read243_phi_reg_18092 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_243_V_read244_phi_reg_18105() {
    ap_phi_reg_pp0_iter0_data_243_V_read244_phi_reg_18105 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_244_V_read245_phi_reg_18118() {
    ap_phi_reg_pp0_iter0_data_244_V_read245_phi_reg_18118 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_245_V_read246_phi_reg_18131() {
    ap_phi_reg_pp0_iter0_data_245_V_read246_phi_reg_18131 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_246_V_read247_phi_reg_18144() {
    ap_phi_reg_pp0_iter0_data_246_V_read247_phi_reg_18144 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_247_V_read248_phi_reg_18157() {
    ap_phi_reg_pp0_iter0_data_247_V_read248_phi_reg_18157 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_248_V_read249_phi_reg_18170() {
    ap_phi_reg_pp0_iter0_data_248_V_read249_phi_reg_18170 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_249_V_read250_phi_reg_18183() {
    ap_phi_reg_pp0_iter0_data_249_V_read250_phi_reg_18183 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_24_V_read25_phi_reg_15258() {
    ap_phi_reg_pp0_iter0_data_24_V_read25_phi_reg_15258 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_250_V_read251_phi_reg_18196() {
    ap_phi_reg_pp0_iter0_data_250_V_read251_phi_reg_18196 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_251_V_read252_phi_reg_18209() {
    ap_phi_reg_pp0_iter0_data_251_V_read252_phi_reg_18209 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_252_V_read253_phi_reg_18222() {
    ap_phi_reg_pp0_iter0_data_252_V_read253_phi_reg_18222 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_253_V_read254_phi_reg_18235() {
    ap_phi_reg_pp0_iter0_data_253_V_read254_phi_reg_18235 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_254_V_read255_phi_reg_18248() {
    ap_phi_reg_pp0_iter0_data_254_V_read255_phi_reg_18248 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_255_V_read256_phi_reg_18261() {
    ap_phi_reg_pp0_iter0_data_255_V_read256_phi_reg_18261 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_256_V_read257_phi_reg_18274() {
    ap_phi_reg_pp0_iter0_data_256_V_read257_phi_reg_18274 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_257_V_read258_phi_reg_18287() {
    ap_phi_reg_pp0_iter0_data_257_V_read258_phi_reg_18287 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_258_V_read259_phi_reg_18300() {
    ap_phi_reg_pp0_iter0_data_258_V_read259_phi_reg_18300 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_259_V_read260_phi_reg_18313() {
    ap_phi_reg_pp0_iter0_data_259_V_read260_phi_reg_18313 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_25_V_read26_phi_reg_15271() {
    ap_phi_reg_pp0_iter0_data_25_V_read26_phi_reg_15271 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_260_V_read261_phi_reg_18326() {
    ap_phi_reg_pp0_iter0_data_260_V_read261_phi_reg_18326 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_261_V_read262_phi_reg_18339() {
    ap_phi_reg_pp0_iter0_data_261_V_read262_phi_reg_18339 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_262_V_read263_phi_reg_18352() {
    ap_phi_reg_pp0_iter0_data_262_V_read263_phi_reg_18352 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_263_V_read264_phi_reg_18365() {
    ap_phi_reg_pp0_iter0_data_263_V_read264_phi_reg_18365 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_264_V_read265_phi_reg_18378() {
    ap_phi_reg_pp0_iter0_data_264_V_read265_phi_reg_18378 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_265_V_read266_phi_reg_18391() {
    ap_phi_reg_pp0_iter0_data_265_V_read266_phi_reg_18391 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_266_V_read267_phi_reg_18404() {
    ap_phi_reg_pp0_iter0_data_266_V_read267_phi_reg_18404 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_267_V_read268_phi_reg_18417() {
    ap_phi_reg_pp0_iter0_data_267_V_read268_phi_reg_18417 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_268_V_read269_phi_reg_18430() {
    ap_phi_reg_pp0_iter0_data_268_V_read269_phi_reg_18430 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_269_V_read270_phi_reg_18443() {
    ap_phi_reg_pp0_iter0_data_269_V_read270_phi_reg_18443 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_26_V_read27_phi_reg_15284() {
    ap_phi_reg_pp0_iter0_data_26_V_read27_phi_reg_15284 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_270_V_read271_phi_reg_18456() {
    ap_phi_reg_pp0_iter0_data_270_V_read271_phi_reg_18456 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_271_V_read272_phi_reg_18469() {
    ap_phi_reg_pp0_iter0_data_271_V_read272_phi_reg_18469 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_272_V_read273_phi_reg_18482() {
    ap_phi_reg_pp0_iter0_data_272_V_read273_phi_reg_18482 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_273_V_read274_phi_reg_18495() {
    ap_phi_reg_pp0_iter0_data_273_V_read274_phi_reg_18495 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_274_V_read275_phi_reg_18508() {
    ap_phi_reg_pp0_iter0_data_274_V_read275_phi_reg_18508 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_275_V_read276_phi_reg_18521() {
    ap_phi_reg_pp0_iter0_data_275_V_read276_phi_reg_18521 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_276_V_read277_phi_reg_18534() {
    ap_phi_reg_pp0_iter0_data_276_V_read277_phi_reg_18534 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_277_V_read278_phi_reg_18547() {
    ap_phi_reg_pp0_iter0_data_277_V_read278_phi_reg_18547 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_278_V_read279_phi_reg_18560() {
    ap_phi_reg_pp0_iter0_data_278_V_read279_phi_reg_18560 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_279_V_read280_phi_reg_18573() {
    ap_phi_reg_pp0_iter0_data_279_V_read280_phi_reg_18573 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_27_V_read28_phi_reg_15297() {
    ap_phi_reg_pp0_iter0_data_27_V_read28_phi_reg_15297 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_280_V_read281_phi_reg_18586() {
    ap_phi_reg_pp0_iter0_data_280_V_read281_phi_reg_18586 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_281_V_read282_phi_reg_18599() {
    ap_phi_reg_pp0_iter0_data_281_V_read282_phi_reg_18599 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_282_V_read283_phi_reg_18612() {
    ap_phi_reg_pp0_iter0_data_282_V_read283_phi_reg_18612 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_283_V_read284_phi_reg_18625() {
    ap_phi_reg_pp0_iter0_data_283_V_read284_phi_reg_18625 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_284_V_read285_phi_reg_18638() {
    ap_phi_reg_pp0_iter0_data_284_V_read285_phi_reg_18638 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_285_V_read286_phi_reg_18651() {
    ap_phi_reg_pp0_iter0_data_285_V_read286_phi_reg_18651 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_286_V_read287_phi_reg_18664() {
    ap_phi_reg_pp0_iter0_data_286_V_read287_phi_reg_18664 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_287_V_read288_phi_reg_18677() {
    ap_phi_reg_pp0_iter0_data_287_V_read288_phi_reg_18677 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_288_V_read289_phi_reg_18690() {
    ap_phi_reg_pp0_iter0_data_288_V_read289_phi_reg_18690 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_289_V_read290_phi_reg_18703() {
    ap_phi_reg_pp0_iter0_data_289_V_read290_phi_reg_18703 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_28_V_read29_phi_reg_15310() {
    ap_phi_reg_pp0_iter0_data_28_V_read29_phi_reg_15310 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_290_V_read291_phi_reg_18716() {
    ap_phi_reg_pp0_iter0_data_290_V_read291_phi_reg_18716 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_291_V_read292_phi_reg_18729() {
    ap_phi_reg_pp0_iter0_data_291_V_read292_phi_reg_18729 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_292_V_read293_phi_reg_18742() {
    ap_phi_reg_pp0_iter0_data_292_V_read293_phi_reg_18742 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_293_V_read294_phi_reg_18755() {
    ap_phi_reg_pp0_iter0_data_293_V_read294_phi_reg_18755 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_294_V_read295_phi_reg_18768() {
    ap_phi_reg_pp0_iter0_data_294_V_read295_phi_reg_18768 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_295_V_read296_phi_reg_18781() {
    ap_phi_reg_pp0_iter0_data_295_V_read296_phi_reg_18781 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_296_V_read297_phi_reg_18794() {
    ap_phi_reg_pp0_iter0_data_296_V_read297_phi_reg_18794 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_297_V_read298_phi_reg_18807() {
    ap_phi_reg_pp0_iter0_data_297_V_read298_phi_reg_18807 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_298_V_read299_phi_reg_18820() {
    ap_phi_reg_pp0_iter0_data_298_V_read299_phi_reg_18820 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_299_V_read300_phi_reg_18833() {
    ap_phi_reg_pp0_iter0_data_299_V_read300_phi_reg_18833 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_29_V_read30_phi_reg_15323() {
    ap_phi_reg_pp0_iter0_data_29_V_read30_phi_reg_15323 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_2_V_read3_phi_reg_14972() {
    ap_phi_reg_pp0_iter0_data_2_V_read3_phi_reg_14972 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_300_V_read301_phi_reg_18846() {
    ap_phi_reg_pp0_iter0_data_300_V_read301_phi_reg_18846 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_301_V_read302_phi_reg_18859() {
    ap_phi_reg_pp0_iter0_data_301_V_read302_phi_reg_18859 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_302_V_read303_phi_reg_18872() {
    ap_phi_reg_pp0_iter0_data_302_V_read303_phi_reg_18872 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_303_V_read304_phi_reg_18885() {
    ap_phi_reg_pp0_iter0_data_303_V_read304_phi_reg_18885 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_304_V_read305_phi_reg_18898() {
    ap_phi_reg_pp0_iter0_data_304_V_read305_phi_reg_18898 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_305_V_read306_phi_reg_18911() {
    ap_phi_reg_pp0_iter0_data_305_V_read306_phi_reg_18911 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_306_V_read307_phi_reg_18924() {
    ap_phi_reg_pp0_iter0_data_306_V_read307_phi_reg_18924 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_307_V_read308_phi_reg_18937() {
    ap_phi_reg_pp0_iter0_data_307_V_read308_phi_reg_18937 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_308_V_read309_phi_reg_18950() {
    ap_phi_reg_pp0_iter0_data_308_V_read309_phi_reg_18950 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_309_V_read310_phi_reg_18963() {
    ap_phi_reg_pp0_iter0_data_309_V_read310_phi_reg_18963 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_30_V_read31_phi_reg_15336() {
    ap_phi_reg_pp0_iter0_data_30_V_read31_phi_reg_15336 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_310_V_read311_phi_reg_18976() {
    ap_phi_reg_pp0_iter0_data_310_V_read311_phi_reg_18976 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_311_V_read312_phi_reg_18989() {
    ap_phi_reg_pp0_iter0_data_311_V_read312_phi_reg_18989 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_312_V_read313_phi_reg_19002() {
    ap_phi_reg_pp0_iter0_data_312_V_read313_phi_reg_19002 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_313_V_read314_phi_reg_19015() {
    ap_phi_reg_pp0_iter0_data_313_V_read314_phi_reg_19015 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_314_V_read315_phi_reg_19028() {
    ap_phi_reg_pp0_iter0_data_314_V_read315_phi_reg_19028 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_315_V_read316_phi_reg_19041() {
    ap_phi_reg_pp0_iter0_data_315_V_read316_phi_reg_19041 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_316_V_read317_phi_reg_19054() {
    ap_phi_reg_pp0_iter0_data_316_V_read317_phi_reg_19054 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_317_V_read318_phi_reg_19067() {
    ap_phi_reg_pp0_iter0_data_317_V_read318_phi_reg_19067 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_318_V_read319_phi_reg_19080() {
    ap_phi_reg_pp0_iter0_data_318_V_read319_phi_reg_19080 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_319_V_read320_phi_reg_19093() {
    ap_phi_reg_pp0_iter0_data_319_V_read320_phi_reg_19093 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_31_V_read32_phi_reg_15349() {
    ap_phi_reg_pp0_iter0_data_31_V_read32_phi_reg_15349 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_320_V_read321_phi_reg_19106() {
    ap_phi_reg_pp0_iter0_data_320_V_read321_phi_reg_19106 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_321_V_read322_phi_reg_19119() {
    ap_phi_reg_pp0_iter0_data_321_V_read322_phi_reg_19119 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_322_V_read323_phi_reg_19132() {
    ap_phi_reg_pp0_iter0_data_322_V_read323_phi_reg_19132 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_323_V_read324_phi_reg_19145() {
    ap_phi_reg_pp0_iter0_data_323_V_read324_phi_reg_19145 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_324_V_read325_phi_reg_19158() {
    ap_phi_reg_pp0_iter0_data_324_V_read325_phi_reg_19158 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_325_V_read326_phi_reg_19171() {
    ap_phi_reg_pp0_iter0_data_325_V_read326_phi_reg_19171 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_326_V_read327_phi_reg_19184() {
    ap_phi_reg_pp0_iter0_data_326_V_read327_phi_reg_19184 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_327_V_read328_phi_reg_19197() {
    ap_phi_reg_pp0_iter0_data_327_V_read328_phi_reg_19197 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_328_V_read329_phi_reg_19210() {
    ap_phi_reg_pp0_iter0_data_328_V_read329_phi_reg_19210 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_329_V_read330_phi_reg_19223() {
    ap_phi_reg_pp0_iter0_data_329_V_read330_phi_reg_19223 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_32_V_read33_phi_reg_15362() {
    ap_phi_reg_pp0_iter0_data_32_V_read33_phi_reg_15362 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_330_V_read331_phi_reg_19236() {
    ap_phi_reg_pp0_iter0_data_330_V_read331_phi_reg_19236 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_331_V_read332_phi_reg_19249() {
    ap_phi_reg_pp0_iter0_data_331_V_read332_phi_reg_19249 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_332_V_read333_phi_reg_19262() {
    ap_phi_reg_pp0_iter0_data_332_V_read333_phi_reg_19262 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_333_V_read334_phi_reg_19275() {
    ap_phi_reg_pp0_iter0_data_333_V_read334_phi_reg_19275 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_334_V_read335_phi_reg_19288() {
    ap_phi_reg_pp0_iter0_data_334_V_read335_phi_reg_19288 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_335_V_read336_phi_reg_19301() {
    ap_phi_reg_pp0_iter0_data_335_V_read336_phi_reg_19301 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_336_V_read337_phi_reg_19314() {
    ap_phi_reg_pp0_iter0_data_336_V_read337_phi_reg_19314 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_337_V_read338_phi_reg_19327() {
    ap_phi_reg_pp0_iter0_data_337_V_read338_phi_reg_19327 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_338_V_read339_phi_reg_19340() {
    ap_phi_reg_pp0_iter0_data_338_V_read339_phi_reg_19340 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_339_V_read340_phi_reg_19353() {
    ap_phi_reg_pp0_iter0_data_339_V_read340_phi_reg_19353 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_33_V_read34_phi_reg_15375() {
    ap_phi_reg_pp0_iter0_data_33_V_read34_phi_reg_15375 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_340_V_read341_phi_reg_19366() {
    ap_phi_reg_pp0_iter0_data_340_V_read341_phi_reg_19366 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_341_V_read342_phi_reg_19379() {
    ap_phi_reg_pp0_iter0_data_341_V_read342_phi_reg_19379 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_342_V_read343_phi_reg_19392() {
    ap_phi_reg_pp0_iter0_data_342_V_read343_phi_reg_19392 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_343_V_read344_phi_reg_19405() {
    ap_phi_reg_pp0_iter0_data_343_V_read344_phi_reg_19405 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_344_V_read345_phi_reg_19418() {
    ap_phi_reg_pp0_iter0_data_344_V_read345_phi_reg_19418 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_345_V_read346_phi_reg_19431() {
    ap_phi_reg_pp0_iter0_data_345_V_read346_phi_reg_19431 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_346_V_read347_phi_reg_19444() {
    ap_phi_reg_pp0_iter0_data_346_V_read347_phi_reg_19444 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_347_V_read348_phi_reg_19457() {
    ap_phi_reg_pp0_iter0_data_347_V_read348_phi_reg_19457 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_348_V_read349_phi_reg_19470() {
    ap_phi_reg_pp0_iter0_data_348_V_read349_phi_reg_19470 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_349_V_read350_phi_reg_19483() {
    ap_phi_reg_pp0_iter0_data_349_V_read350_phi_reg_19483 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_34_V_read35_phi_reg_15388() {
    ap_phi_reg_pp0_iter0_data_34_V_read35_phi_reg_15388 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_350_V_read351_phi_reg_19496() {
    ap_phi_reg_pp0_iter0_data_350_V_read351_phi_reg_19496 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_351_V_read352_phi_reg_19509() {
    ap_phi_reg_pp0_iter0_data_351_V_read352_phi_reg_19509 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_352_V_read353_phi_reg_19522() {
    ap_phi_reg_pp0_iter0_data_352_V_read353_phi_reg_19522 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_353_V_read354_phi_reg_19535() {
    ap_phi_reg_pp0_iter0_data_353_V_read354_phi_reg_19535 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_354_V_read355_phi_reg_19548() {
    ap_phi_reg_pp0_iter0_data_354_V_read355_phi_reg_19548 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_355_V_read356_phi_reg_19561() {
    ap_phi_reg_pp0_iter0_data_355_V_read356_phi_reg_19561 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_356_V_read357_phi_reg_19574() {
    ap_phi_reg_pp0_iter0_data_356_V_read357_phi_reg_19574 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_357_V_read358_phi_reg_19587() {
    ap_phi_reg_pp0_iter0_data_357_V_read358_phi_reg_19587 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_358_V_read359_phi_reg_19600() {
    ap_phi_reg_pp0_iter0_data_358_V_read359_phi_reg_19600 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_359_V_read360_phi_reg_19613() {
    ap_phi_reg_pp0_iter0_data_359_V_read360_phi_reg_19613 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_35_V_read36_phi_reg_15401() {
    ap_phi_reg_pp0_iter0_data_35_V_read36_phi_reg_15401 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_360_V_read361_phi_reg_19626() {
    ap_phi_reg_pp0_iter0_data_360_V_read361_phi_reg_19626 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_361_V_read362_phi_reg_19639() {
    ap_phi_reg_pp0_iter0_data_361_V_read362_phi_reg_19639 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_362_V_read363_phi_reg_19652() {
    ap_phi_reg_pp0_iter0_data_362_V_read363_phi_reg_19652 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_363_V_read364_phi_reg_19665() {
    ap_phi_reg_pp0_iter0_data_363_V_read364_phi_reg_19665 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_364_V_read365_phi_reg_19678() {
    ap_phi_reg_pp0_iter0_data_364_V_read365_phi_reg_19678 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_365_V_read366_phi_reg_19691() {
    ap_phi_reg_pp0_iter0_data_365_V_read366_phi_reg_19691 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_366_V_read367_phi_reg_19704() {
    ap_phi_reg_pp0_iter0_data_366_V_read367_phi_reg_19704 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_367_V_read368_phi_reg_19717() {
    ap_phi_reg_pp0_iter0_data_367_V_read368_phi_reg_19717 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_368_V_read369_phi_reg_19730() {
    ap_phi_reg_pp0_iter0_data_368_V_read369_phi_reg_19730 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_369_V_read370_phi_reg_19743() {
    ap_phi_reg_pp0_iter0_data_369_V_read370_phi_reg_19743 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_36_V_read37_phi_reg_15414() {
    ap_phi_reg_pp0_iter0_data_36_V_read37_phi_reg_15414 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_370_V_read371_phi_reg_19756() {
    ap_phi_reg_pp0_iter0_data_370_V_read371_phi_reg_19756 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_371_V_read372_phi_reg_19769() {
    ap_phi_reg_pp0_iter0_data_371_V_read372_phi_reg_19769 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_372_V_read373_phi_reg_19782() {
    ap_phi_reg_pp0_iter0_data_372_V_read373_phi_reg_19782 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_373_V_read374_phi_reg_19795() {
    ap_phi_reg_pp0_iter0_data_373_V_read374_phi_reg_19795 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_374_V_read375_phi_reg_19808() {
    ap_phi_reg_pp0_iter0_data_374_V_read375_phi_reg_19808 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_375_V_read376_phi_reg_19821() {
    ap_phi_reg_pp0_iter0_data_375_V_read376_phi_reg_19821 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_376_V_read377_phi_reg_19834() {
    ap_phi_reg_pp0_iter0_data_376_V_read377_phi_reg_19834 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_377_V_read378_phi_reg_19847() {
    ap_phi_reg_pp0_iter0_data_377_V_read378_phi_reg_19847 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_378_V_read379_phi_reg_19860() {
    ap_phi_reg_pp0_iter0_data_378_V_read379_phi_reg_19860 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_379_V_read380_phi_reg_19873() {
    ap_phi_reg_pp0_iter0_data_379_V_read380_phi_reg_19873 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_37_V_read38_phi_reg_15427() {
    ap_phi_reg_pp0_iter0_data_37_V_read38_phi_reg_15427 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_380_V_read381_phi_reg_19886() {
    ap_phi_reg_pp0_iter0_data_380_V_read381_phi_reg_19886 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_381_V_read382_phi_reg_19899() {
    ap_phi_reg_pp0_iter0_data_381_V_read382_phi_reg_19899 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_382_V_read383_phi_reg_19912() {
    ap_phi_reg_pp0_iter0_data_382_V_read383_phi_reg_19912 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_383_V_read384_phi_reg_19925() {
    ap_phi_reg_pp0_iter0_data_383_V_read384_phi_reg_19925 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_384_V_read385_phi_reg_19938() {
    ap_phi_reg_pp0_iter0_data_384_V_read385_phi_reg_19938 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_385_V_read386_phi_reg_19951() {
    ap_phi_reg_pp0_iter0_data_385_V_read386_phi_reg_19951 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_386_V_read387_phi_reg_19964() {
    ap_phi_reg_pp0_iter0_data_386_V_read387_phi_reg_19964 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_387_V_read388_phi_reg_19977() {
    ap_phi_reg_pp0_iter0_data_387_V_read388_phi_reg_19977 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_388_V_read389_phi_reg_19990() {
    ap_phi_reg_pp0_iter0_data_388_V_read389_phi_reg_19990 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_389_V_read390_phi_reg_20003() {
    ap_phi_reg_pp0_iter0_data_389_V_read390_phi_reg_20003 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_38_V_read39_phi_reg_15440() {
    ap_phi_reg_pp0_iter0_data_38_V_read39_phi_reg_15440 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_390_V_read391_phi_reg_20016() {
    ap_phi_reg_pp0_iter0_data_390_V_read391_phi_reg_20016 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_391_V_read392_phi_reg_20029() {
    ap_phi_reg_pp0_iter0_data_391_V_read392_phi_reg_20029 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_392_V_read393_phi_reg_20042() {
    ap_phi_reg_pp0_iter0_data_392_V_read393_phi_reg_20042 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_393_V_read394_phi_reg_20055() {
    ap_phi_reg_pp0_iter0_data_393_V_read394_phi_reg_20055 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_394_V_read395_phi_reg_20068() {
    ap_phi_reg_pp0_iter0_data_394_V_read395_phi_reg_20068 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_395_V_read396_phi_reg_20081() {
    ap_phi_reg_pp0_iter0_data_395_V_read396_phi_reg_20081 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_396_V_read397_phi_reg_20094() {
    ap_phi_reg_pp0_iter0_data_396_V_read397_phi_reg_20094 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_397_V_read398_phi_reg_20107() {
    ap_phi_reg_pp0_iter0_data_397_V_read398_phi_reg_20107 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_398_V_read399_phi_reg_20120() {
    ap_phi_reg_pp0_iter0_data_398_V_read399_phi_reg_20120 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_399_V_read400_phi_reg_20133() {
    ap_phi_reg_pp0_iter0_data_399_V_read400_phi_reg_20133 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_39_V_read40_phi_reg_15453() {
    ap_phi_reg_pp0_iter0_data_39_V_read40_phi_reg_15453 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_3_V_read4_phi_reg_14985() {
    ap_phi_reg_pp0_iter0_data_3_V_read4_phi_reg_14985 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_400_V_read401_phi_reg_20146() {
    ap_phi_reg_pp0_iter0_data_400_V_read401_phi_reg_20146 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_401_V_read402_phi_reg_20159() {
    ap_phi_reg_pp0_iter0_data_401_V_read402_phi_reg_20159 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_402_V_read403_phi_reg_20172() {
    ap_phi_reg_pp0_iter0_data_402_V_read403_phi_reg_20172 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_403_V_read404_phi_reg_20185() {
    ap_phi_reg_pp0_iter0_data_403_V_read404_phi_reg_20185 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_404_V_read405_phi_reg_20198() {
    ap_phi_reg_pp0_iter0_data_404_V_read405_phi_reg_20198 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_405_V_read406_phi_reg_20211() {
    ap_phi_reg_pp0_iter0_data_405_V_read406_phi_reg_20211 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_406_V_read407_phi_reg_20224() {
    ap_phi_reg_pp0_iter0_data_406_V_read407_phi_reg_20224 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_407_V_read408_phi_reg_20237() {
    ap_phi_reg_pp0_iter0_data_407_V_read408_phi_reg_20237 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_408_V_read409_phi_reg_20250() {
    ap_phi_reg_pp0_iter0_data_408_V_read409_phi_reg_20250 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_409_V_read410_phi_reg_20263() {
    ap_phi_reg_pp0_iter0_data_409_V_read410_phi_reg_20263 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_40_V_read41_phi_reg_15466() {
    ap_phi_reg_pp0_iter0_data_40_V_read41_phi_reg_15466 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_410_V_read411_phi_reg_20276() {
    ap_phi_reg_pp0_iter0_data_410_V_read411_phi_reg_20276 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_411_V_read412_phi_reg_20289() {
    ap_phi_reg_pp0_iter0_data_411_V_read412_phi_reg_20289 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_412_V_read413_phi_reg_20302() {
    ap_phi_reg_pp0_iter0_data_412_V_read413_phi_reg_20302 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_413_V_read414_phi_reg_20315() {
    ap_phi_reg_pp0_iter0_data_413_V_read414_phi_reg_20315 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_414_V_read415_phi_reg_20328() {
    ap_phi_reg_pp0_iter0_data_414_V_read415_phi_reg_20328 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_415_V_read416_phi_reg_20341() {
    ap_phi_reg_pp0_iter0_data_415_V_read416_phi_reg_20341 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_416_V_read417_phi_reg_20354() {
    ap_phi_reg_pp0_iter0_data_416_V_read417_phi_reg_20354 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_417_V_read418_phi_reg_20367() {
    ap_phi_reg_pp0_iter0_data_417_V_read418_phi_reg_20367 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_418_V_read419_phi_reg_20380() {
    ap_phi_reg_pp0_iter0_data_418_V_read419_phi_reg_20380 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_419_V_read420_phi_reg_20393() {
    ap_phi_reg_pp0_iter0_data_419_V_read420_phi_reg_20393 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_41_V_read42_phi_reg_15479() {
    ap_phi_reg_pp0_iter0_data_41_V_read42_phi_reg_15479 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_420_V_read421_phi_reg_20406() {
    ap_phi_reg_pp0_iter0_data_420_V_read421_phi_reg_20406 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_421_V_read422_phi_reg_20419() {
    ap_phi_reg_pp0_iter0_data_421_V_read422_phi_reg_20419 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_422_V_read423_phi_reg_20432() {
    ap_phi_reg_pp0_iter0_data_422_V_read423_phi_reg_20432 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_423_V_read424_phi_reg_20445() {
    ap_phi_reg_pp0_iter0_data_423_V_read424_phi_reg_20445 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_424_V_read425_phi_reg_20458() {
    ap_phi_reg_pp0_iter0_data_424_V_read425_phi_reg_20458 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_425_V_read426_phi_reg_20471() {
    ap_phi_reg_pp0_iter0_data_425_V_read426_phi_reg_20471 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_426_V_read427_phi_reg_20484() {
    ap_phi_reg_pp0_iter0_data_426_V_read427_phi_reg_20484 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_427_V_read428_phi_reg_20497() {
    ap_phi_reg_pp0_iter0_data_427_V_read428_phi_reg_20497 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_428_V_read429_phi_reg_20510() {
    ap_phi_reg_pp0_iter0_data_428_V_read429_phi_reg_20510 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_429_V_read430_phi_reg_20523() {
    ap_phi_reg_pp0_iter0_data_429_V_read430_phi_reg_20523 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_42_V_read43_phi_reg_15492() {
    ap_phi_reg_pp0_iter0_data_42_V_read43_phi_reg_15492 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_430_V_read431_phi_reg_20536() {
    ap_phi_reg_pp0_iter0_data_430_V_read431_phi_reg_20536 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_431_V_read432_phi_reg_20549() {
    ap_phi_reg_pp0_iter0_data_431_V_read432_phi_reg_20549 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_432_V_read433_phi_reg_20562() {
    ap_phi_reg_pp0_iter0_data_432_V_read433_phi_reg_20562 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_433_V_read434_phi_reg_20575() {
    ap_phi_reg_pp0_iter0_data_433_V_read434_phi_reg_20575 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_434_V_read435_phi_reg_20588() {
    ap_phi_reg_pp0_iter0_data_434_V_read435_phi_reg_20588 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_435_V_read436_phi_reg_20601() {
    ap_phi_reg_pp0_iter0_data_435_V_read436_phi_reg_20601 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_436_V_read437_phi_reg_20614() {
    ap_phi_reg_pp0_iter0_data_436_V_read437_phi_reg_20614 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_437_V_read438_phi_reg_20627() {
    ap_phi_reg_pp0_iter0_data_437_V_read438_phi_reg_20627 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_438_V_read439_phi_reg_20640() {
    ap_phi_reg_pp0_iter0_data_438_V_read439_phi_reg_20640 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_439_V_read440_phi_reg_20653() {
    ap_phi_reg_pp0_iter0_data_439_V_read440_phi_reg_20653 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_43_V_read44_phi_reg_15505() {
    ap_phi_reg_pp0_iter0_data_43_V_read44_phi_reg_15505 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_440_V_read441_phi_reg_20666() {
    ap_phi_reg_pp0_iter0_data_440_V_read441_phi_reg_20666 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_441_V_read442_phi_reg_20679() {
    ap_phi_reg_pp0_iter0_data_441_V_read442_phi_reg_20679 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_442_V_read443_phi_reg_20692() {
    ap_phi_reg_pp0_iter0_data_442_V_read443_phi_reg_20692 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_443_V_read444_phi_reg_20705() {
    ap_phi_reg_pp0_iter0_data_443_V_read444_phi_reg_20705 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_444_V_read445_phi_reg_20718() {
    ap_phi_reg_pp0_iter0_data_444_V_read445_phi_reg_20718 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_445_V_read446_phi_reg_20731() {
    ap_phi_reg_pp0_iter0_data_445_V_read446_phi_reg_20731 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_446_V_read447_phi_reg_20744() {
    ap_phi_reg_pp0_iter0_data_446_V_read447_phi_reg_20744 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_447_V_read448_phi_reg_20757() {
    ap_phi_reg_pp0_iter0_data_447_V_read448_phi_reg_20757 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_448_V_read449_phi_reg_20770() {
    ap_phi_reg_pp0_iter0_data_448_V_read449_phi_reg_20770 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_449_V_read450_phi_reg_20783() {
    ap_phi_reg_pp0_iter0_data_449_V_read450_phi_reg_20783 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_44_V_read45_phi_reg_15518() {
    ap_phi_reg_pp0_iter0_data_44_V_read45_phi_reg_15518 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_450_V_read451_phi_reg_20796() {
    ap_phi_reg_pp0_iter0_data_450_V_read451_phi_reg_20796 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_451_V_read452_phi_reg_20809() {
    ap_phi_reg_pp0_iter0_data_451_V_read452_phi_reg_20809 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_452_V_read453_phi_reg_20822() {
    ap_phi_reg_pp0_iter0_data_452_V_read453_phi_reg_20822 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_453_V_read454_phi_reg_20835() {
    ap_phi_reg_pp0_iter0_data_453_V_read454_phi_reg_20835 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_454_V_read455_phi_reg_20848() {
    ap_phi_reg_pp0_iter0_data_454_V_read455_phi_reg_20848 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_455_V_read456_phi_reg_20861() {
    ap_phi_reg_pp0_iter0_data_455_V_read456_phi_reg_20861 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_456_V_read457_phi_reg_20874() {
    ap_phi_reg_pp0_iter0_data_456_V_read457_phi_reg_20874 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_457_V_read458_phi_reg_20887() {
    ap_phi_reg_pp0_iter0_data_457_V_read458_phi_reg_20887 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_458_V_read459_phi_reg_20900() {
    ap_phi_reg_pp0_iter0_data_458_V_read459_phi_reg_20900 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_459_V_read460_phi_reg_20913() {
    ap_phi_reg_pp0_iter0_data_459_V_read460_phi_reg_20913 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_45_V_read46_phi_reg_15531() {
    ap_phi_reg_pp0_iter0_data_45_V_read46_phi_reg_15531 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_460_V_read461_phi_reg_20926() {
    ap_phi_reg_pp0_iter0_data_460_V_read461_phi_reg_20926 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_461_V_read462_phi_reg_20939() {
    ap_phi_reg_pp0_iter0_data_461_V_read462_phi_reg_20939 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_462_V_read463_phi_reg_20952() {
    ap_phi_reg_pp0_iter0_data_462_V_read463_phi_reg_20952 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_463_V_read464_phi_reg_20965() {
    ap_phi_reg_pp0_iter0_data_463_V_read464_phi_reg_20965 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_464_V_read465_phi_reg_20978() {
    ap_phi_reg_pp0_iter0_data_464_V_read465_phi_reg_20978 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_465_V_read466_phi_reg_20991() {
    ap_phi_reg_pp0_iter0_data_465_V_read466_phi_reg_20991 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_466_V_read467_phi_reg_21004() {
    ap_phi_reg_pp0_iter0_data_466_V_read467_phi_reg_21004 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_467_V_read468_phi_reg_21017() {
    ap_phi_reg_pp0_iter0_data_467_V_read468_phi_reg_21017 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_468_V_read469_phi_reg_21030() {
    ap_phi_reg_pp0_iter0_data_468_V_read469_phi_reg_21030 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_469_V_read470_phi_reg_21043() {
    ap_phi_reg_pp0_iter0_data_469_V_read470_phi_reg_21043 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_46_V_read47_phi_reg_15544() {
    ap_phi_reg_pp0_iter0_data_46_V_read47_phi_reg_15544 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_470_V_read471_phi_reg_21056() {
    ap_phi_reg_pp0_iter0_data_470_V_read471_phi_reg_21056 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_471_V_read472_phi_reg_21069() {
    ap_phi_reg_pp0_iter0_data_471_V_read472_phi_reg_21069 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_472_V_read473_phi_reg_21082() {
    ap_phi_reg_pp0_iter0_data_472_V_read473_phi_reg_21082 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_473_V_read474_phi_reg_21095() {
    ap_phi_reg_pp0_iter0_data_473_V_read474_phi_reg_21095 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_474_V_read475_phi_reg_21108() {
    ap_phi_reg_pp0_iter0_data_474_V_read475_phi_reg_21108 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_475_V_read476_phi_reg_21121() {
    ap_phi_reg_pp0_iter0_data_475_V_read476_phi_reg_21121 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_476_V_read477_phi_reg_21134() {
    ap_phi_reg_pp0_iter0_data_476_V_read477_phi_reg_21134 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_477_V_read478_phi_reg_21147() {
    ap_phi_reg_pp0_iter0_data_477_V_read478_phi_reg_21147 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_478_V_read479_phi_reg_21160() {
    ap_phi_reg_pp0_iter0_data_478_V_read479_phi_reg_21160 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_479_V_read480_phi_reg_21173() {
    ap_phi_reg_pp0_iter0_data_479_V_read480_phi_reg_21173 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_47_V_read48_phi_reg_15557() {
    ap_phi_reg_pp0_iter0_data_47_V_read48_phi_reg_15557 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_480_V_read481_phi_reg_21186() {
    ap_phi_reg_pp0_iter0_data_480_V_read481_phi_reg_21186 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_481_V_read482_phi_reg_21199() {
    ap_phi_reg_pp0_iter0_data_481_V_read482_phi_reg_21199 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_482_V_read483_phi_reg_21212() {
    ap_phi_reg_pp0_iter0_data_482_V_read483_phi_reg_21212 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_483_V_read484_phi_reg_21225() {
    ap_phi_reg_pp0_iter0_data_483_V_read484_phi_reg_21225 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_484_V_read485_phi_reg_21238() {
    ap_phi_reg_pp0_iter0_data_484_V_read485_phi_reg_21238 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_485_V_read486_phi_reg_21251() {
    ap_phi_reg_pp0_iter0_data_485_V_read486_phi_reg_21251 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_486_V_read487_phi_reg_21264() {
    ap_phi_reg_pp0_iter0_data_486_V_read487_phi_reg_21264 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_487_V_read488_phi_reg_21277() {
    ap_phi_reg_pp0_iter0_data_487_V_read488_phi_reg_21277 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_488_V_read489_phi_reg_21290() {
    ap_phi_reg_pp0_iter0_data_488_V_read489_phi_reg_21290 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_489_V_read490_phi_reg_21303() {
    ap_phi_reg_pp0_iter0_data_489_V_read490_phi_reg_21303 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_48_V_read49_phi_reg_15570() {
    ap_phi_reg_pp0_iter0_data_48_V_read49_phi_reg_15570 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_490_V_read491_phi_reg_21316() {
    ap_phi_reg_pp0_iter0_data_490_V_read491_phi_reg_21316 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_491_V_read492_phi_reg_21329() {
    ap_phi_reg_pp0_iter0_data_491_V_read492_phi_reg_21329 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_492_V_read493_phi_reg_21342() {
    ap_phi_reg_pp0_iter0_data_492_V_read493_phi_reg_21342 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_493_V_read494_phi_reg_21355() {
    ap_phi_reg_pp0_iter0_data_493_V_read494_phi_reg_21355 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_494_V_read495_phi_reg_21368() {
    ap_phi_reg_pp0_iter0_data_494_V_read495_phi_reg_21368 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_495_V_read496_phi_reg_21381() {
    ap_phi_reg_pp0_iter0_data_495_V_read496_phi_reg_21381 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_496_V_read497_phi_reg_21394() {
    ap_phi_reg_pp0_iter0_data_496_V_read497_phi_reg_21394 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_497_V_read498_phi_reg_21407() {
    ap_phi_reg_pp0_iter0_data_497_V_read498_phi_reg_21407 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_498_V_read499_phi_reg_21420() {
    ap_phi_reg_pp0_iter0_data_498_V_read499_phi_reg_21420 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_499_V_read500_phi_reg_21433() {
    ap_phi_reg_pp0_iter0_data_499_V_read500_phi_reg_21433 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_49_V_read50_phi_reg_15583() {
    ap_phi_reg_pp0_iter0_data_49_V_read50_phi_reg_15583 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_4_V_read5_phi_reg_14998() {
    ap_phi_reg_pp0_iter0_data_4_V_read5_phi_reg_14998 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_500_V_read501_phi_reg_21446() {
    ap_phi_reg_pp0_iter0_data_500_V_read501_phi_reg_21446 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_501_V_read502_phi_reg_21459() {
    ap_phi_reg_pp0_iter0_data_501_V_read502_phi_reg_21459 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_502_V_read503_phi_reg_21472() {
    ap_phi_reg_pp0_iter0_data_502_V_read503_phi_reg_21472 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_503_V_read504_phi_reg_21485() {
    ap_phi_reg_pp0_iter0_data_503_V_read504_phi_reg_21485 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_504_V_read505_phi_reg_21498() {
    ap_phi_reg_pp0_iter0_data_504_V_read505_phi_reg_21498 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_505_V_read506_phi_reg_21511() {
    ap_phi_reg_pp0_iter0_data_505_V_read506_phi_reg_21511 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_506_V_read507_phi_reg_21524() {
    ap_phi_reg_pp0_iter0_data_506_V_read507_phi_reg_21524 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_507_V_read508_phi_reg_21537() {
    ap_phi_reg_pp0_iter0_data_507_V_read508_phi_reg_21537 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_508_V_read509_phi_reg_21550() {
    ap_phi_reg_pp0_iter0_data_508_V_read509_phi_reg_21550 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_509_V_read510_phi_reg_21563() {
    ap_phi_reg_pp0_iter0_data_509_V_read510_phi_reg_21563 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_50_V_read51_phi_reg_15596() {
    ap_phi_reg_pp0_iter0_data_50_V_read51_phi_reg_15596 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_510_V_read511_phi_reg_21576() {
    ap_phi_reg_pp0_iter0_data_510_V_read511_phi_reg_21576 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_511_V_read512_phi_reg_21589() {
    ap_phi_reg_pp0_iter0_data_511_V_read512_phi_reg_21589 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_51_V_read52_phi_reg_15609() {
    ap_phi_reg_pp0_iter0_data_51_V_read52_phi_reg_15609 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_52_V_read53_phi_reg_15622() {
    ap_phi_reg_pp0_iter0_data_52_V_read53_phi_reg_15622 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_53_V_read54_phi_reg_15635() {
    ap_phi_reg_pp0_iter0_data_53_V_read54_phi_reg_15635 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_54_V_read55_phi_reg_15648() {
    ap_phi_reg_pp0_iter0_data_54_V_read55_phi_reg_15648 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_55_V_read56_phi_reg_15661() {
    ap_phi_reg_pp0_iter0_data_55_V_read56_phi_reg_15661 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_56_V_read57_phi_reg_15674() {
    ap_phi_reg_pp0_iter0_data_56_V_read57_phi_reg_15674 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_57_V_read58_phi_reg_15687() {
    ap_phi_reg_pp0_iter0_data_57_V_read58_phi_reg_15687 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_58_V_read59_phi_reg_15700() {
    ap_phi_reg_pp0_iter0_data_58_V_read59_phi_reg_15700 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_59_V_read60_phi_reg_15713() {
    ap_phi_reg_pp0_iter0_data_59_V_read60_phi_reg_15713 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_5_V_read6_phi_reg_15011() {
    ap_phi_reg_pp0_iter0_data_5_V_read6_phi_reg_15011 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_60_V_read61_phi_reg_15726() {
    ap_phi_reg_pp0_iter0_data_60_V_read61_phi_reg_15726 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_61_V_read62_phi_reg_15739() {
    ap_phi_reg_pp0_iter0_data_61_V_read62_phi_reg_15739 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_62_V_read63_phi_reg_15752() {
    ap_phi_reg_pp0_iter0_data_62_V_read63_phi_reg_15752 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_63_V_read64_phi_reg_15765() {
    ap_phi_reg_pp0_iter0_data_63_V_read64_phi_reg_15765 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_64_V_read65_phi_reg_15778() {
    ap_phi_reg_pp0_iter0_data_64_V_read65_phi_reg_15778 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_65_V_read66_phi_reg_15791() {
    ap_phi_reg_pp0_iter0_data_65_V_read66_phi_reg_15791 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_66_V_read67_phi_reg_15804() {
    ap_phi_reg_pp0_iter0_data_66_V_read67_phi_reg_15804 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_67_V_read68_phi_reg_15817() {
    ap_phi_reg_pp0_iter0_data_67_V_read68_phi_reg_15817 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_68_V_read69_phi_reg_15830() {
    ap_phi_reg_pp0_iter0_data_68_V_read69_phi_reg_15830 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_69_V_read70_phi_reg_15843() {
    ap_phi_reg_pp0_iter0_data_69_V_read70_phi_reg_15843 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_6_V_read7_phi_reg_15024() {
    ap_phi_reg_pp0_iter0_data_6_V_read7_phi_reg_15024 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_70_V_read71_phi_reg_15856() {
    ap_phi_reg_pp0_iter0_data_70_V_read71_phi_reg_15856 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_71_V_read72_phi_reg_15869() {
    ap_phi_reg_pp0_iter0_data_71_V_read72_phi_reg_15869 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_72_V_read73_phi_reg_15882() {
    ap_phi_reg_pp0_iter0_data_72_V_read73_phi_reg_15882 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_73_V_read74_phi_reg_15895() {
    ap_phi_reg_pp0_iter0_data_73_V_read74_phi_reg_15895 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_74_V_read75_phi_reg_15908() {
    ap_phi_reg_pp0_iter0_data_74_V_read75_phi_reg_15908 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_75_V_read76_phi_reg_15921() {
    ap_phi_reg_pp0_iter0_data_75_V_read76_phi_reg_15921 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_76_V_read77_phi_reg_15934() {
    ap_phi_reg_pp0_iter0_data_76_V_read77_phi_reg_15934 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_77_V_read78_phi_reg_15947() {
    ap_phi_reg_pp0_iter0_data_77_V_read78_phi_reg_15947 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_78_V_read79_phi_reg_15960() {
    ap_phi_reg_pp0_iter0_data_78_V_read79_phi_reg_15960 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_79_V_read80_phi_reg_15973() {
    ap_phi_reg_pp0_iter0_data_79_V_read80_phi_reg_15973 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_7_V_read8_phi_reg_15037() {
    ap_phi_reg_pp0_iter0_data_7_V_read8_phi_reg_15037 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_80_V_read81_phi_reg_15986() {
    ap_phi_reg_pp0_iter0_data_80_V_read81_phi_reg_15986 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_81_V_read82_phi_reg_15999() {
    ap_phi_reg_pp0_iter0_data_81_V_read82_phi_reg_15999 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_82_V_read83_phi_reg_16012() {
    ap_phi_reg_pp0_iter0_data_82_V_read83_phi_reg_16012 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_83_V_read84_phi_reg_16025() {
    ap_phi_reg_pp0_iter0_data_83_V_read84_phi_reg_16025 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_84_V_read85_phi_reg_16038() {
    ap_phi_reg_pp0_iter0_data_84_V_read85_phi_reg_16038 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_85_V_read86_phi_reg_16051() {
    ap_phi_reg_pp0_iter0_data_85_V_read86_phi_reg_16051 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_86_V_read87_phi_reg_16064() {
    ap_phi_reg_pp0_iter0_data_86_V_read87_phi_reg_16064 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_87_V_read88_phi_reg_16077() {
    ap_phi_reg_pp0_iter0_data_87_V_read88_phi_reg_16077 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_88_V_read89_phi_reg_16090() {
    ap_phi_reg_pp0_iter0_data_88_V_read89_phi_reg_16090 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_89_V_read90_phi_reg_16103() {
    ap_phi_reg_pp0_iter0_data_89_V_read90_phi_reg_16103 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_8_V_read9_phi_reg_15050() {
    ap_phi_reg_pp0_iter0_data_8_V_read9_phi_reg_15050 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_90_V_read91_phi_reg_16116() {
    ap_phi_reg_pp0_iter0_data_90_V_read91_phi_reg_16116 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_91_V_read92_phi_reg_16129() {
    ap_phi_reg_pp0_iter0_data_91_V_read92_phi_reg_16129 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_92_V_read93_phi_reg_16142() {
    ap_phi_reg_pp0_iter0_data_92_V_read93_phi_reg_16142 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_93_V_read94_phi_reg_16155() {
    ap_phi_reg_pp0_iter0_data_93_V_read94_phi_reg_16155 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_94_V_read95_phi_reg_16168() {
    ap_phi_reg_pp0_iter0_data_94_V_read95_phi_reg_16168 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_95_V_read96_phi_reg_16181() {
    ap_phi_reg_pp0_iter0_data_95_V_read96_phi_reg_16181 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_96_V_read97_phi_reg_16194() {
    ap_phi_reg_pp0_iter0_data_96_V_read97_phi_reg_16194 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_97_V_read98_phi_reg_16207() {
    ap_phi_reg_pp0_iter0_data_97_V_read98_phi_reg_16207 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_98_V_read99_phi_reg_16220() {
    ap_phi_reg_pp0_iter0_data_98_V_read99_phi_reg_16220 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_99_V_read100_phi_reg_16233() {
    ap_phi_reg_pp0_iter0_data_99_V_read100_phi_reg_16233 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_phi_reg_pp0_iter0_data_9_V_read10_phi_reg_15063() {
    ap_phi_reg_pp0_iter0_data_9_V_read10_phi_reg_15063 =  (sc_lv<8>) ("XXXXXXXX");
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(icmp_ln34_fu_2029308_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to2.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_0 = res_0_V_1_fu_2060074_p3.read();
    } else {
        ap_return_0 = ap_return_0_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_1 = res_1_V_1_fu_2061258_p3.read();
    } else {
        ap_return_1 = ap_return_1_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_10() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_10 = res_10_V_1_fu_2071918_p3.read();
    } else {
        ap_return_10 = ap_return_10_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_100() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_100 = res_100_V_1_fu_2064474_p3.read();
    } else {
        ap_return_100 = ap_return_100_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_101() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_101 = res_101_V_1_fu_2065662_p3.read();
    } else {
        ap_return_101 = ap_return_101_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_102() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_102 = res_102_V_1_fu_2066846_p3.read();
    } else {
        ap_return_102 = ap_return_102_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_103() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_103 = res_103_V_1_fu_2068030_p3.read();
    } else {
        ap_return_103 = ap_return_103_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_104() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_104 = res_104_V_1_fu_2069214_p3.read();
    } else {
        ap_return_104 = ap_return_104_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_105() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_105 = res_105_V_1_fu_2070398_p3.read();
    } else {
        ap_return_105 = ap_return_105_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_106() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_106 = res_106_V_1_fu_2071686_p3.read();
    } else {
        ap_return_106 = ap_return_106_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_107() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_107 = res_107_V_1_fu_2072766_p3.read();
    } else {
        ap_return_107 = ap_return_107_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_108() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_108 = res_108_V_1_fu_2073950_p3.read();
    } else {
        ap_return_108 = ap_return_108_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_109() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_109 = res_109_V_1_fu_2075134_p3.read();
    } else {
        ap_return_109 = ap_return_109_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_11() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_11 = res_11_V_1_fu_2073102_p3.read();
    } else {
        ap_return_11 = ap_return_11_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_110() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_110 = res_110_V_1_fu_2076318_p3.read();
    } else {
        ap_return_110 = ap_return_110_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_111() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_111 = res_111_V_1_fu_2077502_p3.read();
    } else {
        ap_return_111 = ap_return_111_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_112() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_112 = res_112_V_1_fu_2078690_p3.read();
    } else {
        ap_return_112 = ap_return_112_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_113() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_113 = res_113_V_1_fu_2079874_p3.read();
    } else {
        ap_return_113 = ap_return_113_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_114() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_114 = res_114_V_1_fu_2081062_p3.read();
    } else {
        ap_return_114 = ap_return_114_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_115() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_115 = res_115_V_1_fu_2082246_p3.read();
    } else {
        ap_return_115 = ap_return_115_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_116() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_116 = res_116_V_1_fu_2083430_p3.read();
    } else {
        ap_return_116 = ap_return_116_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_117() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_117 = res_117_V_1_fu_2084614_p3.read();
    } else {
        ap_return_117 = ap_return_117_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_118() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_118 = res_118_V_1_fu_2085798_p3.read();
    } else {
        ap_return_118 = ap_return_118_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_119() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_119 = res_119_V_1_fu_2086982_p3.read();
    } else {
        ap_return_119 = ap_return_119_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_12() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_12 = res_12_V_1_fu_2074286_p3.read();
    } else {
        ap_return_12 = ap_return_12_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_120() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_120 = res_120_V_1_fu_2088166_p3.read();
    } else {
        ap_return_120 = ap_return_120_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_121() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_121 = res_121_V_1_fu_2089350_p3.read();
    } else {
        ap_return_121 = ap_return_121_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_122() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_122 = res_122_V_1_fu_2090534_p3.read();
    } else {
        ap_return_122 = ap_return_122_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_123() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_123 = res_123_V_1_fu_2091722_p3.read();
    } else {
        ap_return_123 = ap_return_123_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_124() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_124 = res_124_V_1_fu_2092906_p3.read();
    } else {
        ap_return_124 = ap_return_124_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_125() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_125 = res_125_V_1_fu_2094090_p3.read();
    } else {
        ap_return_125 = ap_return_125_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_126() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_126 = res_126_V_1_fu_2095278_p3.read();
    } else {
        ap_return_126 = ap_return_126_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_127() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_127 = res_127_V_1_fu_2096462_p3.read();
    } else {
        ap_return_127 = ap_return_127_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_128() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_128 = res_128_V_1_fu_2059642_p3.read();
    } else {
        ap_return_128 = ap_return_128_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_129() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_129 = res_129_V_1_fu_2060826_p3.read();
    } else {
        ap_return_129 = ap_return_129_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_13() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_13 = res_13_V_1_fu_2075470_p3.read();
    } else {
        ap_return_13 = ap_return_13_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_130() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_130 = res_130_V_1_fu_2062010_p3.read();
    } else {
        ap_return_130 = ap_return_130_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_131() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_131 = res_131_V_1_fu_2063194_p3.read();
    } else {
        ap_return_131 = ap_return_131_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_132() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_132 = res_132_V_1_fu_2064378_p3.read();
    } else {
        ap_return_132 = ap_return_132_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_133() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_133 = res_133_V_1_fu_2065566_p3.read();
    } else {
        ap_return_133 = ap_return_133_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_134() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_134 = res_134_V_1_fu_2066750_p3.read();
    } else {
        ap_return_134 = ap_return_134_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_135() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_135 = res_135_V_1_fu_2067934_p3.read();
    } else {
        ap_return_135 = ap_return_135_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_136() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_136 = res_136_V_1_fu_2069118_p3.read();
    } else {
        ap_return_136 = ap_return_136_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_137() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_137 = res_137_V_1_fu_2070302_p3.read();
    } else {
        ap_return_137 = ap_return_137_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_138() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_138 = res_138_V_1_fu_2071486_p3.read();
    } else {
        ap_return_138 = ap_return_138_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_139() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_139 = res_139_V_1_fu_2072670_p3.read();
    } else {
        ap_return_139 = ap_return_139_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_14() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_14 = res_14_V_1_fu_2076654_p3.read();
    } else {
        ap_return_14 = ap_return_14_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_140() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_140 = res_140_V_1_fu_2073854_p3.read();
    } else {
        ap_return_140 = ap_return_140_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_141() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_141 = res_141_V_1_fu_2074958_p3.read();
    } else {
        ap_return_141 = ap_return_141_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_142() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_142 = res_142_V_1_fu_2076222_p3.read();
    } else {
        ap_return_142 = ap_return_142_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_143() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_143 = res_143_V_1_fu_2077406_p3.read();
    } else {
        ap_return_143 = ap_return_143_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_144() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_144 = res_144_V_1_fu_2078594_p3.read();
    } else {
        ap_return_144 = ap_return_144_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_145() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_145 = res_145_V_1_fu_2079778_p3.read();
    } else {
        ap_return_145 = ap_return_145_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_146() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_146 = res_146_V_1_fu_2080966_p3.read();
    } else {
        ap_return_146 = ap_return_146_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_147() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_147 = res_147_V_1_fu_2082150_p3.read();
    } else {
        ap_return_147 = ap_return_147_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_148() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_148 = res_148_V_1_fu_2083334_p3.read();
    } else {
        ap_return_148 = ap_return_148_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_149() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_149 = res_149_V_1_fu_2084518_p3.read();
    } else {
        ap_return_149 = ap_return_149_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_15() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_15 = res_15_V_1_fu_2077838_p3.read();
    } else {
        ap_return_15 = ap_return_15_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_150() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_150 = res_150_V_1_fu_2085702_p3.read();
    } else {
        ap_return_150 = ap_return_150_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_151() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_151 = res_151_V_1_fu_2086886_p3.read();
    } else {
        ap_return_151 = ap_return_151_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_152() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_152 = res_152_V_1_fu_2088070_p3.read();
    } else {
        ap_return_152 = ap_return_152_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_153() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_153 = res_153_V_1_fu_2089254_p3.read();
    } else {
        ap_return_153 = ap_return_153_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_154() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_154 = res_154_V_1_fu_2090438_p3.read();
    } else {
        ap_return_154 = ap_return_154_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_155() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_155 = res_155_V_1_fu_2091626_p3.read();
    } else {
        ap_return_155 = ap_return_155_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_156() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_156 = res_156_V_1_fu_2092810_p3.read();
    } else {
        ap_return_156 = ap_return_156_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_157() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_157 = res_157_V_1_fu_2093994_p3.read();
    } else {
        ap_return_157 = ap_return_157_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_158() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_158 = res_158_V_1_fu_2095182_p3.read();
    } else {
        ap_return_158 = ap_return_158_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_159() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_159 = res_159_V_1_fu_2096366_p3.read();
    } else {
        ap_return_159 = ap_return_159_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_16() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_16 = res_16_V_1_fu_2079026_p3.read();
    } else {
        ap_return_16 = ap_return_16_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_160() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_160 = res_160_V_1_fu_2059554_p3.read();
    } else {
        ap_return_160 = ap_return_160_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_161() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_161 = res_161_V_1_fu_2060738_p3.read();
    } else {
        ap_return_161 = ap_return_161_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_162() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_162 = res_162_V_1_fu_2061922_p3.read();
    } else {
        ap_return_162 = ap_return_162_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_163() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_163 = res_163_V_1_fu_2063106_p3.read();
    } else {
        ap_return_163 = ap_return_163_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_164() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_164 = res_164_V_1_fu_2064290_p3.read();
    } else {
        ap_return_164 = ap_return_164_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_165() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_165 = res_165_V_1_fu_2065478_p3.read();
    } else {
        ap_return_165 = ap_return_165_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_166() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_166 = res_166_V_1_fu_2066662_p3.read();
    } else {
        ap_return_166 = ap_return_166_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_167() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_167 = res_167_V_1_fu_2067846_p3.read();
    } else {
        ap_return_167 = ap_return_167_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_168() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_168 = res_168_V_1_fu_2069030_p3.read();
    } else {
        ap_return_168 = ap_return_168_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_169() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_169 = res_169_V_1_fu_2070214_p3.read();
    } else {
        ap_return_169 = ap_return_169_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_17() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_17 = res_17_V_1_fu_2080210_p3.read();
    } else {
        ap_return_17 = ap_return_17_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_170() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_170 = res_170_V_1_fu_2071398_p3.read();
    } else {
        ap_return_170 = ap_return_170_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_171() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_171 = res_171_V_1_fu_2072582_p3.read();
    } else {
        ap_return_171 = ap_return_171_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_172() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_172 = res_172_V_1_fu_2073766_p3.read();
    } else {
        ap_return_172 = ap_return_172_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_173() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_173 = res_173_V_1_fu_2075038_p3.read();
    } else {
        ap_return_173 = ap_return_173_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_174() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_174 = res_174_V_1_fu_2076134_p3.read();
    } else {
        ap_return_174 = ap_return_174_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_175() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_175 = res_175_V_1_fu_2077246_p3.read();
    } else {
        ap_return_175 = ap_return_175_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_176() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_176 = res_176_V_1_fu_2078506_p3.read();
    } else {
        ap_return_176 = ap_return_176_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_177() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_177 = res_177_V_1_fu_2079690_p3.read();
    } else {
        ap_return_177 = ap_return_177_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_178() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_178 = res_178_V_1_fu_2080878_p3.read();
    } else {
        ap_return_178 = ap_return_178_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_179() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_179 = res_179_V_1_fu_2082062_p3.read();
    } else {
        ap_return_179 = ap_return_179_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_18() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_18 = res_18_V_1_fu_2081398_p3.read();
    } else {
        ap_return_18 = ap_return_18_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_180() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_180 = res_180_V_1_fu_2083246_p3.read();
    } else {
        ap_return_180 = ap_return_180_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_181() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_181 = res_181_V_1_fu_2084430_p3.read();
    } else {
        ap_return_181 = ap_return_181_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_182() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_182 = res_182_V_1_fu_2085614_p3.read();
    } else {
        ap_return_182 = ap_return_182_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_183() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_183 = res_183_V_1_fu_2086798_p3.read();
    } else {
        ap_return_183 = ap_return_183_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_184() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_184 = res_184_V_1_fu_2087982_p3.read();
    } else {
        ap_return_184 = ap_return_184_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_185() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_185 = res_185_V_1_fu_2089166_p3.read();
    } else {
        ap_return_185 = ap_return_185_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_186() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_186 = res_186_V_1_fu_2090350_p3.read();
    } else {
        ap_return_186 = ap_return_186_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_187() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_187 = res_187_V_1_fu_2091538_p3.read();
    } else {
        ap_return_187 = ap_return_187_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_188() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_188 = res_188_V_1_fu_2092722_p3.read();
    } else {
        ap_return_188 = ap_return_188_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_189() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_189 = res_189_V_1_fu_2093906_p3.read();
    } else {
        ap_return_189 = ap_return_189_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_19() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_19 = res_19_V_1_fu_2082582_p3.read();
    } else {
        ap_return_19 = ap_return_19_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_190() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_190 = res_190_V_1_fu_2095094_p3.read();
    } else {
        ap_return_190 = ap_return_190_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_191() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_191 = res_191_V_1_fu_2096278_p3.read();
    } else {
        ap_return_191 = ap_return_191_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_192() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_192 = res_192_V_1_fu_2059474_p3.read();
    } else {
        ap_return_192 = ap_return_192_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_193() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_193 = res_193_V_1_fu_2060658_p3.read();
    } else {
        ap_return_193 = ap_return_193_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_194() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_194 = res_194_V_1_fu_2061842_p3.read();
    } else {
        ap_return_194 = ap_return_194_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_195() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_195 = res_195_V_1_fu_2063026_p3.read();
    } else {
        ap_return_195 = ap_return_195_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_196() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_196 = res_196_V_1_fu_2064210_p3.read();
    } else {
        ap_return_196 = ap_return_196_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_197() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_197 = res_197_V_1_fu_2065398_p3.read();
    } else {
        ap_return_197 = ap_return_197_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_198() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_198 = res_198_V_1_fu_2066582_p3.read();
    } else {
        ap_return_198 = ap_return_198_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_199() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_199 = res_199_V_1_fu_2067766_p3.read();
    } else {
        ap_return_199 = ap_return_199_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_2() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_2 = res_2_V_1_fu_2062442_p3.read();
    } else {
        ap_return_2 = ap_return_2_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_20() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_20 = res_20_V_1_fu_2083766_p3.read();
    } else {
        ap_return_20 = ap_return_20_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_200() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_200 = res_200_V_1_fu_2068950_p3.read();
    } else {
        ap_return_200 = ap_return_200_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_201() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_201 = res_201_V_1_fu_2070134_p3.read();
    } else {
        ap_return_201 = ap_return_201_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_202() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_202 = res_202_V_1_fu_2071318_p3.read();
    } else {
        ap_return_202 = ap_return_202_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_203() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_203 = res_203_V_1_fu_2072502_p3.read();
    } else {
        ap_return_203 = ap_return_203_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_204() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_204 = res_204_V_1_fu_2073686_p3.read();
    } else {
        ap_return_204 = ap_return_204_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_205() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_205 = res_205_V_1_fu_2074870_p3.read();
    } else {
        ap_return_205 = ap_return_205_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_206() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_206 = res_206_V_1_fu_2076054_p3.read();
    } else {
        ap_return_206 = ap_return_206_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_207() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_207 = res_207_V_1_fu_2077318_p3.read();
    } else {
        ap_return_207 = ap_return_207_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_208() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_208 = res_208_V_1_fu_2078426_p3.read();
    } else {
        ap_return_208 = ap_return_208_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_209() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_209 = res_209_V_1_fu_2079610_p3.read();
    } else {
        ap_return_209 = ap_return_209_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_21() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_21 = res_21_V_1_fu_2084950_p3.read();
    } else {
        ap_return_21 = ap_return_21_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_210() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_210 = res_210_V_1_fu_2080798_p3.read();
    } else {
        ap_return_210 = ap_return_210_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_211() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_211 = res_211_V_1_fu_2081982_p3.read();
    } else {
        ap_return_211 = ap_return_211_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_212() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_212 = res_212_V_1_fu_2083166_p3.read();
    } else {
        ap_return_212 = ap_return_212_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_213() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_213 = res_213_V_1_fu_2084350_p3.read();
    } else {
        ap_return_213 = ap_return_213_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_214() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_214 = res_214_V_1_fu_2085534_p3.read();
    } else {
        ap_return_214 = ap_return_214_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_215() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_215 = res_215_V_1_fu_2086718_p3.read();
    } else {
        ap_return_215 = ap_return_215_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_216() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_216 = res_216_V_1_fu_2087902_p3.read();
    } else {
        ap_return_216 = ap_return_216_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_217() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_217 = res_217_V_1_fu_2089086_p3.read();
    } else {
        ap_return_217 = ap_return_217_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_218() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_218 = res_218_V_1_fu_2090270_p3.read();
    } else {
        ap_return_218 = ap_return_218_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_219() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_219 = res_219_V_1_fu_2091458_p3.read();
    } else {
        ap_return_219 = ap_return_219_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_22() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_22 = res_22_V_1_fu_2086134_p3.read();
    } else {
        ap_return_22 = ap_return_22_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_220() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_220 = res_220_V_1_fu_2092642_p3.read();
    } else {
        ap_return_220 = ap_return_220_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_221() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_221 = res_221_V_1_fu_2093826_p3.read();
    } else {
        ap_return_221 = ap_return_221_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_222() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_222 = res_222_V_1_fu_2095014_p3.read();
    } else {
        ap_return_222 = ap_return_222_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_223() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_223 = res_223_V_1_fu_2096198_p3.read();
    } else {
        ap_return_223 = ap_return_223_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_224() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_224 = res_224_V_1_fu_2059402_p3.read();
    } else {
        ap_return_224 = ap_return_224_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_225() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_225 = res_225_V_1_fu_2060586_p3.read();
    } else {
        ap_return_225 = ap_return_225_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_226() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_226 = res_226_V_1_fu_2061770_p3.read();
    } else {
        ap_return_226 = ap_return_226_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_227() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_227 = res_227_V_1_fu_2062954_p3.read();
    } else {
        ap_return_227 = ap_return_227_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_228() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_228 = res_228_V_1_fu_2064138_p3.read();
    } else {
        ap_return_228 = ap_return_228_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_229() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_229 = res_229_V_1_fu_2065326_p3.read();
    } else {
        ap_return_229 = ap_return_229_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_23() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_23 = res_23_V_1_fu_2087318_p3.read();
    } else {
        ap_return_23 = ap_return_23_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_230() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_230 = res_230_V_1_fu_2066510_p3.read();
    } else {
        ap_return_230 = ap_return_230_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_231() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_231 = res_231_V_1_fu_2067694_p3.read();
    } else {
        ap_return_231 = ap_return_231_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_232() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_232 = res_232_V_1_fu_2068878_p3.read();
    } else {
        ap_return_232 = ap_return_232_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_233() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_233 = res_233_V_1_fu_2070062_p3.read();
    } else {
        ap_return_233 = ap_return_233_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_234() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_234 = res_234_V_1_fu_2071246_p3.read();
    } else {
        ap_return_234 = ap_return_234_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_235() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_235 = res_235_V_1_fu_2072430_p3.read();
    } else {
        ap_return_235 = ap_return_235_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_236() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_236 = res_236_V_1_fu_2073614_p3.read();
    } else {
        ap_return_236 = ap_return_236_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_237() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_237 = res_237_V_1_fu_2074798_p3.read();
    } else {
        ap_return_237 = ap_return_237_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_238() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_238 = res_238_V_1_fu_2075982_p3.read();
    } else {
        ap_return_238 = ap_return_238_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_239() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_239 = res_239_V_1_fu_2077166_p3.read();
    } else {
        ap_return_239 = ap_return_239_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_24() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_24 = res_24_V_1_fu_2088502_p3.read();
    } else {
        ap_return_24 = ap_return_24_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_240() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_240 = res_240_V_1_fu_2078354_p3.read();
    } else {
        ap_return_240 = ap_return_240_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_241() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_241 = res_241_V_1_fu_2079538_p3.read();
    } else {
        ap_return_241 = ap_return_241_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_242() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_242 = res_242_V_1_fu_2080670_p3.read();
    } else {
        ap_return_242 = ap_return_242_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_243() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_243 = res_243_V_1_fu_2081910_p3.read();
    } else {
        ap_return_243 = ap_return_243_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_244() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_244 = res_244_V_1_fu_2083094_p3.read();
    } else {
        ap_return_244 = ap_return_244_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_245() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_245 = res_245_V_1_fu_2084278_p3.read();
    } else {
        ap_return_245 = ap_return_245_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_246() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_246 = res_246_V_1_fu_2085462_p3.read();
    } else {
        ap_return_246 = ap_return_246_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_247() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_247 = res_247_V_1_fu_2086646_p3.read();
    } else {
        ap_return_247 = ap_return_247_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_248() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_248 = res_248_V_1_fu_2087830_p3.read();
    } else {
        ap_return_248 = ap_return_248_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_249() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_249 = res_249_V_1_fu_2089014_p3.read();
    } else {
        ap_return_249 = ap_return_249_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_25() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_25 = res_25_V_1_fu_2089686_p3.read();
    } else {
        ap_return_25 = ap_return_25_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_250() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_250 = res_250_V_1_fu_2090198_p3.read();
    } else {
        ap_return_250 = ap_return_250_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_251() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_251 = res_251_V_1_fu_2091386_p3.read();
    } else {
        ap_return_251 = ap_return_251_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_252() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_252 = res_252_V_1_fu_2092570_p3.read();
    } else {
        ap_return_252 = ap_return_252_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_253() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_253 = res_253_V_1_fu_2093754_p3.read();
    } else {
        ap_return_253 = ap_return_253_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_254() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_254 = res_254_V_1_fu_2094942_p3.read();
    } else {
        ap_return_254 = ap_return_254_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_255() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_255 = res_255_V_1_fu_2096126_p3.read();
    } else {
        ap_return_255 = ap_return_255_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_256() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_256 = res_256_V_1_fu_2059338_p3.read();
    } else {
        ap_return_256 = ap_return_256_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_257() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_257 = res_257_V_1_fu_2060522_p3.read();
    } else {
        ap_return_257 = ap_return_257_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_258() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_258 = res_258_V_1_fu_2061706_p3.read();
    } else {
        ap_return_258 = ap_return_258_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_259() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_259 = res_259_V_1_fu_2062890_p3.read();
    } else {
        ap_return_259 = ap_return_259_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_26() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_26 = res_26_V_1_fu_2090870_p3.read();
    } else {
        ap_return_26 = ap_return_26_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_260() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_260 = res_260_V_1_fu_2064074_p3.read();
    } else {
        ap_return_260 = ap_return_260_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_261() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_261 = res_261_V_1_fu_2065262_p3.read();
    } else {
        ap_return_261 = ap_return_261_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_262() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_262 = res_262_V_1_fu_2066446_p3.read();
    } else {
        ap_return_262 = ap_return_262_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_263() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_263 = res_263_V_1_fu_2067630_p3.read();
    } else {
        ap_return_263 = ap_return_263_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_264() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_264 = res_264_V_1_fu_2068814_p3.read();
    } else {
        ap_return_264 = ap_return_264_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_265() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_265 = res_265_V_1_fu_2069998_p3.read();
    } else {
        ap_return_265 = ap_return_265_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_266() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_266 = res_266_V_1_fu_2071182_p3.read();
    } else {
        ap_return_266 = ap_return_266_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_267() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_267 = res_267_V_1_fu_2072366_p3.read();
    } else {
        ap_return_267 = ap_return_267_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_268() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_268 = res_268_V_1_fu_2073550_p3.read();
    } else {
        ap_return_268 = ap_return_268_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_269() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_269 = res_269_V_1_fu_2074734_p3.read();
    } else {
        ap_return_269 = ap_return_269_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_27() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_27 = res_27_V_1_fu_2092058_p3.read();
    } else {
        ap_return_27 = ap_return_27_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_270() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_270 = res_270_V_1_fu_2075918_p3.read();
    } else {
        ap_return_270 = ap_return_270_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_271() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_271 = res_271_V_1_fu_2077102_p3.read();
    } else {
        ap_return_271 = ap_return_271_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_272() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_272 = res_272_V_1_fu_2078290_p3.read();
    } else {
        ap_return_272 = ap_return_272_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_273() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_273 = res_273_V_1_fu_2079474_p3.read();
    } else {
        ap_return_273 = ap_return_273_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_274() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_274 = res_274_V_1_fu_2080726_p3.read();
    } else {
        ap_return_274 = ap_return_274_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_275() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_275 = res_275_V_1_fu_2081846_p3.read();
    } else {
        ap_return_275 = ap_return_275_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_276() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_276 = res_276_V_1_fu_2082982_p3.read();
    } else {
        ap_return_276 = ap_return_276_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_277() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_277 = res_277_V_1_fu_2084214_p3.read();
    } else {
        ap_return_277 = ap_return_277_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_278() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_278 = res_278_V_1_fu_2085398_p3.read();
    } else {
        ap_return_278 = ap_return_278_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_279() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_279 = res_279_V_1_fu_2086582_p3.read();
    } else {
        ap_return_279 = ap_return_279_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_28() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_28 = res_28_V_1_fu_2093242_p3.read();
    } else {
        ap_return_28 = ap_return_28_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_280() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_280 = res_280_V_1_fu_2087766_p3.read();
    } else {
        ap_return_280 = ap_return_280_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_281() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_281 = res_281_V_1_fu_2088950_p3.read();
    } else {
        ap_return_281 = ap_return_281_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_282() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_282 = res_282_V_1_fu_2090134_p3.read();
    } else {
        ap_return_282 = ap_return_282_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_283() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_283 = res_283_V_1_fu_2091322_p3.read();
    } else {
        ap_return_283 = ap_return_283_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_284() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_284 = res_284_V_1_fu_2092506_p3.read();
    } else {
        ap_return_284 = ap_return_284_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_285() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_285 = res_285_V_1_fu_2093690_p3.read();
    } else {
        ap_return_285 = ap_return_285_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_286() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_286 = res_286_V_1_fu_2094878_p3.read();
    } else {
        ap_return_286 = ap_return_286_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_287() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_287 = res_287_V_1_fu_2096062_p3.read();
    } else {
        ap_return_287 = ap_return_287_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_288() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_288 = res_288_V_1_fu_2059282_p3.read();
    } else {
        ap_return_288 = ap_return_288_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_289() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_289 = res_289_V_1_fu_2060466_p3.read();
    } else {
        ap_return_289 = ap_return_289_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_29() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_29 = res_29_V_1_fu_2094426_p3.read();
    } else {
        ap_return_29 = ap_return_29_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_290() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_290 = res_290_V_1_fu_2061650_p3.read();
    } else {
        ap_return_290 = ap_return_290_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_291() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_291 = res_291_V_1_fu_2062834_p3.read();
    } else {
        ap_return_291 = ap_return_291_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_292() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_292 = res_292_V_1_fu_2064018_p3.read();
    } else {
        ap_return_292 = ap_return_292_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_293() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_293 = res_293_V_1_fu_2065206_p3.read();
    } else {
        ap_return_293 = ap_return_293_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_294() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_294 = res_294_V_1_fu_2066390_p3.read();
    } else {
        ap_return_294 = ap_return_294_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_295() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_295 = res_295_V_1_fu_2067574_p3.read();
    } else {
        ap_return_295 = ap_return_295_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_296() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_296 = res_296_V_1_fu_2068758_p3.read();
    } else {
        ap_return_296 = ap_return_296_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_297() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_297 = res_297_V_1_fu_2069942_p3.read();
    } else {
        ap_return_297 = ap_return_297_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_298() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_298 = res_298_V_1_fu_2071126_p3.read();
    } else {
        ap_return_298 = ap_return_298_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_299() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_299 = res_299_V_1_fu_2072310_p3.read();
    } else {
        ap_return_299 = ap_return_299_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_3() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_3 = res_3_V_1_fu_2063626_p3.read();
    } else {
        ap_return_3 = ap_return_3_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_30() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_30 = res_30_V_1_fu_2095614_p3.read();
    } else {
        ap_return_30 = ap_return_30_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_300() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_300 = res_300_V_1_fu_2073494_p3.read();
    } else {
        ap_return_300 = ap_return_300_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_301() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_301 = res_301_V_1_fu_2074678_p3.read();
    } else {
        ap_return_301 = ap_return_301_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_302() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_302 = res_302_V_1_fu_2075862_p3.read();
    } else {
        ap_return_302 = ap_return_302_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_303() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_303 = res_303_V_1_fu_2077046_p3.read();
    } else {
        ap_return_303 = ap_return_303_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_304() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_304 = res_304_V_1_fu_2078234_p3.read();
    } else {
        ap_return_304 = ap_return_304_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_305() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_305 = res_305_V_1_fu_2079418_p3.read();
    } else {
        ap_return_305 = ap_return_305_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_306() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_306 = res_306_V_1_fu_2080606_p3.read();
    } else {
        ap_return_306 = ap_return_306_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_307() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_307 = res_307_V_1_fu_2081790_p3.read();
    } else {
        ap_return_307 = ap_return_307_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_308() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_308 = res_308_V_1_fu_2083030_p3.read();
    } else {
        ap_return_308 = ap_return_308_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_309() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_309 = res_309_V_1_fu_2084158_p3.read();
    } else {
        ap_return_309 = ap_return_309_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_31() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_31 = res_31_V_1_fu_2096798_p3.read();
    } else {
        ap_return_31 = ap_return_31_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_310() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_310 = res_310_V_1_fu_2085342_p3.read();
    } else {
        ap_return_310 = ap_return_310_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_311() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_311 = res_311_V_1_fu_2086526_p3.read();
    } else {
        ap_return_311 = ap_return_311_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_312() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_312 = res_312_V_1_fu_2087710_p3.read();
    } else {
        ap_return_312 = ap_return_312_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_313() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_313 = res_313_V_1_fu_2088894_p3.read();
    } else {
        ap_return_313 = ap_return_313_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_314() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_314 = res_314_V_1_fu_2090078_p3.read();
    } else {
        ap_return_314 = ap_return_314_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_315() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_315 = res_315_V_1_fu_2091266_p3.read();
    } else {
        ap_return_315 = ap_return_315_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_316() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_316 = res_316_V_1_fu_2092450_p3.read();
    } else {
        ap_return_316 = ap_return_316_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_317() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_317 = res_317_V_1_fu_2093634_p3.read();
    } else {
        ap_return_317 = ap_return_317_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_318() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_318 = res_318_V_1_fu_2094822_p3.read();
    } else {
        ap_return_318 = ap_return_318_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_319() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_319 = res_319_V_1_fu_2096006_p3.read();
    } else {
        ap_return_319 = ap_return_319_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_32() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_32 = res_32_V_1_fu_2059954_p3.read();
    } else {
        ap_return_32 = ap_return_32_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_320() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_320 = res_320_V_1_fu_2059234_p3.read();
    } else {
        ap_return_320 = ap_return_320_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_321() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_321 = res_321_V_1_fu_2060418_p3.read();
    } else {
        ap_return_321 = ap_return_321_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_322() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_322 = res_322_V_1_fu_2061602_p3.read();
    } else {
        ap_return_322 = ap_return_322_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_323() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_323 = res_323_V_1_fu_2062786_p3.read();
    } else {
        ap_return_323 = ap_return_323_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_324() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_324 = res_324_V_1_fu_2063970_p3.read();
    } else {
        ap_return_324 = ap_return_324_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_325() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_325 = res_325_V_1_fu_2065158_p3.read();
    } else {
        ap_return_325 = ap_return_325_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_326() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_326 = res_326_V_1_fu_2066342_p3.read();
    } else {
        ap_return_326 = ap_return_326_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_327() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_327 = res_327_V_1_fu_2067526_p3.read();
    } else {
        ap_return_327 = ap_return_327_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_328() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_328 = res_328_V_1_fu_2068710_p3.read();
    } else {
        ap_return_328 = ap_return_328_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_329() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_329 = res_329_V_1_fu_2069894_p3.read();
    } else {
        ap_return_329 = ap_return_329_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_33() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_33 = res_33_V_1_fu_2061138_p3.read();
    } else {
        ap_return_33 = ap_return_33_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_330() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_330 = res_330_V_1_fu_2071078_p3.read();
    } else {
        ap_return_330 = ap_return_330_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_331() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_331 = res_331_V_1_fu_2072262_p3.read();
    } else {
        ap_return_331 = ap_return_331_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_332() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_332 = res_332_V_1_fu_2073446_p3.read();
    } else {
        ap_return_332 = ap_return_332_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_333() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_333 = res_333_V_1_fu_2074630_p3.read();
    } else {
        ap_return_333 = ap_return_333_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_334() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_334 = res_334_V_1_fu_2075814_p3.read();
    } else {
        ap_return_334 = ap_return_334_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_335() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_335 = res_335_V_1_fu_2076998_p3.read();
    } else {
        ap_return_335 = ap_return_335_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_336() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_336 = res_336_V_1_fu_2078186_p3.read();
    } else {
        ap_return_336 = ap_return_336_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_337() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_337 = res_337_V_1_fu_2079370_p3.read();
    } else {
        ap_return_337 = ap_return_337_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_338() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_338 = res_338_V_1_fu_2080558_p3.read();
    } else {
        ap_return_338 = ap_return_338_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_339() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_339 = res_339_V_1_fu_2081742_p3.read();
    } else {
        ap_return_339 = ap_return_339_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_34() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_34 = res_34_V_1_fu_2062322_p3.read();
    } else {
        ap_return_34 = ap_return_34_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_340() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_340 = res_340_V_1_fu_2082926_p3.read();
    } else {
        ap_return_340 = ap_return_340_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_341() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_341 = res_341_V_1_fu_2084110_p3.read();
    } else {
        ap_return_341 = ap_return_341_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_342() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_342 = res_342_V_1_fu_2085294_p3.read();
    } else {
        ap_return_342 = ap_return_342_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_343() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_343 = res_343_V_1_fu_2086446_p3.read();
    } else {
        ap_return_343 = ap_return_343_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_344() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_344 = res_344_V_1_fu_2087662_p3.read();
    } else {
        ap_return_344 = ap_return_344_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_345() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_345 = res_345_V_1_fu_2088846_p3.read();
    } else {
        ap_return_345 = ap_return_345_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_346() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_346 = res_346_V_1_fu_2090030_p3.read();
    } else {
        ap_return_346 = ap_return_346_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_347() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_347 = res_347_V_1_fu_2091218_p3.read();
    } else {
        ap_return_347 = ap_return_347_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_348() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_348 = res_348_V_1_fu_2092402_p3.read();
    } else {
        ap_return_348 = ap_return_348_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_349() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_349 = res_349_V_1_fu_2093586_p3.read();
    } else {
        ap_return_349 = ap_return_349_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_35() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_35 = res_35_V_1_fu_2063506_p3.read();
    } else {
        ap_return_35 = ap_return_35_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_350() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_350 = res_350_V_1_fu_2094774_p3.read();
    } else {
        ap_return_350 = ap_return_350_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_351() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_351 = res_351_V_1_fu_2095958_p3.read();
    } else {
        ap_return_351 = ap_return_351_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_352() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_352 = res_352_V_1_fu_2059194_p3.read();
    } else {
        ap_return_352 = ap_return_352_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_353() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_353 = res_353_V_1_fu_2060378_p3.read();
    } else {
        ap_return_353 = ap_return_353_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_354() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_354 = res_354_V_1_fu_2061562_p3.read();
    } else {
        ap_return_354 = ap_return_354_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_355() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_355 = res_355_V_1_fu_2062746_p3.read();
    } else {
        ap_return_355 = ap_return_355_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_356() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_356 = res_356_V_1_fu_2063930_p3.read();
    } else {
        ap_return_356 = ap_return_356_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_357() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_357 = res_357_V_1_fu_2065118_p3.read();
    } else {
        ap_return_357 = ap_return_357_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_358() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_358 = res_358_V_1_fu_2066302_p3.read();
    } else {
        ap_return_358 = ap_return_358_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_359() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_359 = res_359_V_1_fu_2067486_p3.read();
    } else {
        ap_return_359 = ap_return_359_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_36() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_36 = res_36_V_1_fu_2064690_p3.read();
    } else {
        ap_return_36 = ap_return_36_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_360() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_360 = res_360_V_1_fu_2068670_p3.read();
    } else {
        ap_return_360 = ap_return_360_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_361() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_361 = res_361_V_1_fu_2069854_p3.read();
    } else {
        ap_return_361 = ap_return_361_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_362() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_362 = res_362_V_1_fu_2071038_p3.read();
    } else {
        ap_return_362 = ap_return_362_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_363() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_363 = res_363_V_1_fu_2072222_p3.read();
    } else {
        ap_return_363 = ap_return_363_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_364() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_364 = res_364_V_1_fu_2073406_p3.read();
    } else {
        ap_return_364 = ap_return_364_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_365() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_365 = res_365_V_1_fu_2074590_p3.read();
    } else {
        ap_return_365 = ap_return_365_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_366() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_366 = res_366_V_1_fu_2075774_p3.read();
    } else {
        ap_return_366 = ap_return_366_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_367() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_367 = res_367_V_1_fu_2076958_p3.read();
    } else {
        ap_return_367 = ap_return_367_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_368() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_368 = res_368_V_1_fu_2078146_p3.read();
    } else {
        ap_return_368 = ap_return_368_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_369() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_369 = res_369_V_1_fu_2079330_p3.read();
    } else {
        ap_return_369 = ap_return_369_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_37() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_37 = res_37_V_1_fu_2065878_p3.read();
    } else {
        ap_return_37 = ap_return_37_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_370() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_370 = res_370_V_1_fu_2080518_p3.read();
    } else {
        ap_return_370 = ap_return_370_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_371() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_371 = res_371_V_1_fu_2081702_p3.read();
    } else {
        ap_return_371 = ap_return_371_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_372() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_372 = res_372_V_1_fu_2082886_p3.read();
    } else {
        ap_return_372 = ap_return_372_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_373() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_373 = res_373_V_1_fu_2084070_p3.read();
    } else {
        ap_return_373 = ap_return_373_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_374() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_374 = res_374_V_1_fu_2085254_p3.read();
    } else {
        ap_return_374 = ap_return_374_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_375() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_375 = res_375_V_1_fu_2086478_p3.read();
    } else {
        ap_return_375 = ap_return_375_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_376() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_376 = res_376_V_1_fu_2087622_p3.read();
    } else {
        ap_return_376 = ap_return_376_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_377() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_377 = res_377_V_1_fu_2088782_p3.read();
    } else {
        ap_return_377 = ap_return_377_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_378() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_378 = res_378_V_1_fu_2089990_p3.read();
    } else {
        ap_return_378 = ap_return_378_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_379() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_379 = res_379_V_1_fu_2091178_p3.read();
    } else {
        ap_return_379 = ap_return_379_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_38() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_38 = res_38_V_1_fu_2067062_p3.read();
    } else {
        ap_return_38 = ap_return_38_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_380() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_380 = res_380_V_1_fu_2092362_p3.read();
    } else {
        ap_return_380 = ap_return_380_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_381() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_381 = res_381_V_1_fu_2093546_p3.read();
    } else {
        ap_return_381 = ap_return_381_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_382() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_382 = res_382_V_1_fu_2094734_p3.read();
    } else {
        ap_return_382 = ap_return_382_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_383() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_383 = res_383_V_1_fu_2095918_p3.read();
    } else {
        ap_return_383 = ap_return_383_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_384() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_384 = res_384_V_1_fu_2059162_p3.read();
    } else {
        ap_return_384 = ap_return_384_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_385() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_385 = res_385_V_1_fu_2060346_p3.read();
    } else {
        ap_return_385 = ap_return_385_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_386() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_386 = res_386_V_1_fu_2061530_p3.read();
    } else {
        ap_return_386 = ap_return_386_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_387() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_387 = res_387_V_1_fu_2062714_p3.read();
    } else {
        ap_return_387 = ap_return_387_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_388() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_388 = res_388_V_1_fu_2063898_p3.read();
    } else {
        ap_return_388 = ap_return_388_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_389() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_389 = res_389_V_1_fu_2065086_p3.read();
    } else {
        ap_return_389 = ap_return_389_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_39() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_39 = res_39_V_1_fu_2068246_p3.read();
    } else {
        ap_return_39 = ap_return_39_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_390() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_390 = res_390_V_1_fu_2066270_p3.read();
    } else {
        ap_return_390 = ap_return_390_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_391() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_391 = res_391_V_1_fu_2067454_p3.read();
    } else {
        ap_return_391 = ap_return_391_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_392() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_392 = res_392_V_1_fu_2068638_p3.read();
    } else {
        ap_return_392 = ap_return_392_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_393() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_393 = res_393_V_1_fu_2069822_p3.read();
    } else {
        ap_return_393 = ap_return_393_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_394() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_394 = res_394_V_1_fu_2071006_p3.read();
    } else {
        ap_return_394 = ap_return_394_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_395() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_395 = res_395_V_1_fu_2072190_p3.read();
    } else {
        ap_return_395 = ap_return_395_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_396() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_396 = res_396_V_1_fu_2073374_p3.read();
    } else {
        ap_return_396 = ap_return_396_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_397() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_397 = res_397_V_1_fu_2074558_p3.read();
    } else {
        ap_return_397 = ap_return_397_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_398() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_398 = res_398_V_1_fu_2075742_p3.read();
    } else {
        ap_return_398 = ap_return_398_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_399() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_399 = res_399_V_1_fu_2076926_p3.read();
    } else {
        ap_return_399 = ap_return_399_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_4() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_4 = res_4_V_1_fu_2064810_p3.read();
    } else {
        ap_return_4 = ap_return_4_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_40() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_40 = res_40_V_1_fu_2069326_p3.read();
    } else {
        ap_return_40 = ap_return_40_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_400() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_400 = res_400_V_1_fu_2078114_p3.read();
    } else {
        ap_return_400 = ap_return_400_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_401() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_401 = res_401_V_1_fu_2079298_p3.read();
    } else {
        ap_return_401 = ap_return_401_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_402() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_402 = res_402_V_1_fu_2080486_p3.read();
    } else {
        ap_return_402 = ap_return_402_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_403() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_403 = res_403_V_1_fu_2081670_p3.read();
    } else {
        ap_return_403 = ap_return_403_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_404() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_404 = res_404_V_1_fu_2082854_p3.read();
    } else {
        ap_return_404 = ap_return_404_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_405() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_405 = res_405_V_1_fu_2084038_p3.read();
    } else {
        ap_return_405 = ap_return_405_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_406() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_406 = res_406_V_1_fu_2085222_p3.read();
    } else {
        ap_return_406 = ap_return_406_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_407() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_407 = res_407_V_1_fu_2086406_p3.read();
    } else {
        ap_return_407 = ap_return_407_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_408() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_408 = res_408_V_1_fu_2087590_p3.read();
    } else {
        ap_return_408 = ap_return_408_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_409() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_409 = res_409_V_1_fu_2088806_p3.read();
    } else {
        ap_return_409 = ap_return_409_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_41() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_41 = res_41_V_1_fu_2070614_p3.read();
    } else {
        ap_return_41 = ap_return_41_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_410() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_410 = res_410_V_1_fu_2089958_p3.read();
    } else {
        ap_return_410 = ap_return_410_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_411() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_411 = res_411_V_1_fu_2091146_p3.read();
    } else {
        ap_return_411 = ap_return_411_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_412() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_412 = res_412_V_1_fu_2092330_p3.read();
    } else {
        ap_return_412 = ap_return_412_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_413() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_413 = res_413_V_1_fu_2093514_p3.read();
    } else {
        ap_return_413 = ap_return_413_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_414() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_414 = res_414_V_1_fu_2094702_p3.read();
    } else {
        ap_return_414 = ap_return_414_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_415() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_415 = res_415_V_1_fu_2095886_p3.read();
    } else {
        ap_return_415 = ap_return_415_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_416() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_416 = res_416_V_1_fu_2059138_p3.read();
    } else {
        ap_return_416 = ap_return_416_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_417() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_417 = res_417_V_1_fu_2060322_p3.read();
    } else {
        ap_return_417 = ap_return_417_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_418() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_418 = res_418_V_1_fu_2061506_p3.read();
    } else {
        ap_return_418 = ap_return_418_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_419() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_419 = res_419_V_1_fu_2062690_p3.read();
    } else {
        ap_return_419 = ap_return_419_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_42() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_42 = res_42_V_1_fu_2071798_p3.read();
    } else {
        ap_return_42 = ap_return_42_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_420() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_420 = res_420_V_1_fu_2063874_p3.read();
    } else {
        ap_return_420 = ap_return_420_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_421() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_421 = res_421_V_1_fu_2065062_p3.read();
    } else {
        ap_return_421 = ap_return_421_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_422() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_422 = res_422_V_1_fu_2066246_p3.read();
    } else {
        ap_return_422 = ap_return_422_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_423() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_423 = res_423_V_1_fu_2067430_p3.read();
    } else {
        ap_return_423 = ap_return_423_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_424() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_424 = res_424_V_1_fu_2068614_p3.read();
    } else {
        ap_return_424 = ap_return_424_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_425() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_425 = res_425_V_1_fu_2069798_p3.read();
    } else {
        ap_return_425 = ap_return_425_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_426() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_426 = res_426_V_1_fu_2070982_p3.read();
    } else {
        ap_return_426 = ap_return_426_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_427() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_427 = res_427_V_1_fu_2072166_p3.read();
    } else {
        ap_return_427 = ap_return_427_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_428() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_428 = res_428_V_1_fu_2073350_p3.read();
    } else {
        ap_return_428 = ap_return_428_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_429() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_429 = res_429_V_1_fu_2074534_p3.read();
    } else {
        ap_return_429 = ap_return_429_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_43() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_43 = res_43_V_1_fu_2072982_p3.read();
    } else {
        ap_return_43 = ap_return_43_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_430() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_430 = res_430_V_1_fu_2075718_p3.read();
    } else {
        ap_return_430 = ap_return_430_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_431() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_431 = res_431_V_1_fu_2076902_p3.read();
    } else {
        ap_return_431 = ap_return_431_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_432() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_432 = res_432_V_1_fu_2078090_p3.read();
    } else {
        ap_return_432 = ap_return_432_preg.read();
    }
}

void pointwise_conv_1d_cl_ap_ufixed_ap_fixed_22_7_5_3_0_config20_s::thread_ap_return_433() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(icmp_ln34_reg_2106324_pp0_iter2_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter3.read(), ap_const_logic_1))) {
        ap_return_433 = res_433_V_1_fu_2079274_p3.read();
    } else {
        ap_return_433 = ap_return_433_preg.read();
    }
}

}

