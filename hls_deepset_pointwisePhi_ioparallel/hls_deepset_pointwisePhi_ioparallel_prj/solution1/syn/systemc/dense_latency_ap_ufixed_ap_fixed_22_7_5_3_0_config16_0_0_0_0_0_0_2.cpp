#include "dense_latency_ap_ufixed_ap_fixed_22_7_5_3_0_config16_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_ap_ufixed_ap_fixed_22_7_5_3_0_config16_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_0_preg = ap_const_lv22_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_0_preg = sext_ln728_fu_42733_p1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_1_preg = ap_const_lv22_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_1_preg = sext_ln728_9_fu_42745_p1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_2_preg = ap_const_lv22_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_2_preg = sext_ln728_10_fu_42757_p1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_3_preg = ap_const_lv22_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_3_preg = sext_ln728_11_fu_42769_p1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_4_preg = ap_const_lv22_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_4_preg = sext_ln728_12_fu_42781_p1.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln703_2144_reg_42842 = add_ln703_2144_fu_41505_p2.read();
        add_ln703_2154_reg_42847 = add_ln703_2154_fu_41593_p2.read();
        add_ln703_2156_reg_42852 = add_ln703_2156_fu_41609_p2.read();
        add_ln703_2160_reg_42857 = add_ln703_2160_fu_41625_p2.read();
        add_ln703_2162_reg_42862 = add_ln703_2162_fu_41631_p2.read();
        add_ln703_2164_reg_42867 = add_ln703_2164_fu_41647_p2.read();
        add_ln703_2169_reg_42872 = add_ln703_2169_fu_41683_p2.read();
        add_ln703_2171_reg_42877 = add_ln703_2171_fu_41689_p2.read();
        add_ln703_2172_reg_42882 = add_ln703_2172_fu_41695_p2.read();
        add_ln703_2177_reg_42887 = add_ln703_2177_fu_41731_p2.read();
        add_ln703_2179_reg_42892 = add_ln703_2179_fu_41737_p2.read();
        add_ln703_2181_reg_42897 = add_ln703_2181_fu_41753_p2.read();
        add_ln703_2186_reg_42902 = add_ln703_2186_fu_41789_p2.read();
        add_ln703_2189_reg_42907 = add_ln703_2189_fu_41795_p2.read();
        add_ln703_2195_reg_42912 = add_ln703_2195_fu_41831_p2.read();
        add_ln703_2198_reg_42917 = add_ln703_2198_fu_41837_p2.read();
        add_ln703_2204_reg_42922 = add_ln703_2204_fu_41873_p2.read();
        add_ln703_2207_reg_42927 = add_ln703_2207_fu_41879_p2.read();
        add_ln703_2211_reg_42932 = add_ln703_2211_fu_41905_p2.read();
        add_ln703_2220_reg_42937 = add_ln703_2220_fu_41981_p2.read();
        add_ln703_2222_reg_42942 = add_ln703_2222_fu_41987_p2.read();
        add_ln703_2226_reg_42947 = add_ln703_2226_fu_42013_p2.read();
        add_ln703_2234_reg_42952 = add_ln703_2234_fu_42079_p2.read();
        add_ln703_2237_reg_42957 = add_ln703_2237_fu_42085_p2.read();
        add_ln703_2241_reg_42962 = add_ln703_2241_fu_42111_p2.read();
        add_ln703_2245_reg_42967 = add_ln703_2245_fu_42137_p2.read();
        add_ln703_2249_reg_42972 = add_ln703_2249_fu_42173_p2.read();
        add_ln703_2252_reg_42977 = add_ln703_2252_fu_42179_p2.read();
        add_ln703_2256_reg_42982 = add_ln703_2256_fu_42205_p2.read();
        add_ln703_2264_reg_42987 = add_ln703_2264_fu_42271_p2.read();
        add_ln703_2266_reg_42992 = add_ln703_2266_fu_42277_p2.read();
        add_ln703_2269_reg_42997 = add_ln703_2269_fu_42293_p2.read();
        add_ln703_2276_reg_43002 = add_ln703_2276_fu_42349_p2.read();
        tmp_796_reg_42831 = sub_ln708_39_fu_39442_p2.read().range(14, 5);
        trunc_ln708_2680_reg_42815 = sub_ln1118_574_fu_38434_p2.read().range(15, 5);
        trunc_ln708_2684_reg_42820 = sub_ln1118_617_fu_38635_p2.read().range(15, 5);
        trunc_ln708_2693_reg_42825 = mul_ln1118_775_fu_466_p2.read().range(15, 5);
        trunc_ln708_2701_reg_42836 = sub_ln1118_589_fu_39476_p2.read().range(15, 5);
    }
}

void dense_latency_ap_ufixed_ap_fixed_22_7_5_3_0_config16_0_0_0_0_0_0::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

