// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        res_0_V,
        res_0_V_ap_vld,
        res_1_V,
        res_1_V_ap_vld,
        res_2_V,
        res_2_V_ap_vld,
        res_3_V,
        res_3_V_ap_vld,
        res_4_V,
        res_4_V_ap_vld
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [21:0] data_0_V_read;
input  [21:0] data_1_V_read;
input  [21:0] data_2_V_read;
input  [21:0] data_3_V_read;
input  [21:0] data_4_V_read;
output  [15:0] res_0_V;
output   res_0_V_ap_vld;
output  [15:0] res_1_V;
output   res_1_V_ap_vld;
output  [15:0] res_2_V;
output   res_2_V_ap_vld;
output  [15:0] res_3_V;
output   res_3_V_ap_vld;
output  [15:0] res_4_V;
output   res_4_V_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg res_0_V_ap_vld;
reg res_1_V_ap_vld;
reg res_2_V_ap_vld;
reg res_3_V_ap_vld;
reg res_4_V_ap_vld;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_idle_pp0;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] exp_table1_address0;
reg    exp_table1_ce0;
wire   [16:0] exp_table1_q0;
wire   [9:0] exp_table1_address1;
reg    exp_table1_ce1;
wire   [16:0] exp_table1_q1;
wire   [9:0] exp_table1_address2;
reg    exp_table1_ce2;
wire   [16:0] exp_table1_q2;
wire   [9:0] exp_table1_address3;
reg    exp_table1_ce3;
wire   [16:0] exp_table1_q3;
wire   [9:0] exp_table1_address4;
reg    exp_table1_ce4;
wire   [16:0] exp_table1_q4;
wire   [9:0] invert_table2_address0;
reg    invert_table2_ce0;
wire   [17:0] invert_table2_q0;
reg   [0:0] tmp_1_reg_1072;
reg   [0:0] tmp_3_reg_1079;
reg   [0:0] tmp_5_reg_1086;
reg   [0:0] tmp_7_reg_1093;
reg   [0:0] tmp_9_reg_1100;
reg   [0:0] tmp_10_reg_1107;
reg   [0:0] tmp_11_reg_1114;
reg   [0:0] tmp_12_reg_1121;
reg   [0:0] tmp_13_reg_1128;
reg   [0:0] tmp_14_reg_1135;
reg   [9:0] tmp_reg_1142;
reg   [9:0] tmp_2_reg_1148;
reg   [9:0] tmp_4_reg_1154;
reg   [9:0] tmp_6_reg_1160;
reg   [9:0] tmp_8_reg_1166;
wire   [9:0] y_V_4_fu_699_p3;
reg   [9:0] y_V_4_reg_1192;
reg   [16:0] exp_res_0_V_reg_1197;
reg   [16:0] exp_res_0_V_reg_1197_pp0_iter3_reg;
reg   [16:0] exp_res_1_V_reg_1202;
reg   [16:0] exp_res_1_V_reg_1202_pp0_iter3_reg;
reg   [16:0] exp_res_2_V_reg_1207;
reg   [16:0] exp_res_2_V_reg_1207_pp0_iter3_reg;
reg   [16:0] exp_res_3_V_reg_1212;
reg   [16:0] exp_res_3_V_reg_1212_pp0_iter3_reg;
wire  signed [17:0] p_Val2_16_fu_853_p3;
reg  signed [17:0] p_Val2_16_reg_1222;
reg   [16:0] exp_res_4_V_reg_1228;
reg    ap_block_pp0_stage0_subdone;
wire   [63:0] zext_ln255_fu_599_p1;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln255_1_fu_626_p1;
wire   [63:0] zext_ln255_2_fu_653_p1;
wire   [63:0] zext_ln255_3_fu_680_p1;
wire   [63:0] zext_ln255_4_fu_707_p1;
wire   [63:0] zext_ln265_fu_963_p1;
reg    ap_block_pp0_stage0_01001;
wire  signed [21:0] icmp_ln1496_fu_217_p0;
wire  signed [21:0] icmp_ln1496_fu_217_p1;
wire   [0:0] icmp_ln1496_fu_217_p2;
wire  signed [21:0] select_ln65_fu_223_p1;
wire  signed [21:0] select_ln65_fu_223_p2;
wire  signed [21:0] icmp_ln1496_1_fu_231_p0;
wire  signed [21:0] icmp_ln1496_1_fu_231_p1;
wire   [0:0] icmp_ln1496_1_fu_231_p2;
wire  signed [21:0] select_ln65_1_fu_237_p1;
wire  signed [21:0] select_ln65_1_fu_237_p2;
wire   [21:0] select_ln65_fu_223_p3;
wire   [21:0] select_ln65_1_fu_237_p3;
wire   [0:0] icmp_ln1496_2_fu_245_p2;
wire   [21:0] select_ln65_2_fu_251_p3;
wire  signed [21:0] icmp_ln1496_3_fu_259_p1;
wire   [0:0] icmp_ln1496_3_fu_259_p2;
wire  signed [21:0] x_max_V_fu_265_p1;
wire  signed [21:0] sext_ln703_fu_273_p0;
wire   [21:0] x_max_V_fu_265_p3;
wire  signed [22:0] sext_ln703_fu_273_p1;
wire  signed [22:0] sext_ln703_1_fu_277_p1;
wire   [22:0] sub_ln1193_fu_281_p2;
wire  signed [21:0] sext_ln703_2_fu_303_p0;
wire  signed [22:0] sext_ln703_2_fu_303_p1;
wire   [22:0] sub_ln1193_1_fu_307_p2;
wire  signed [21:0] sext_ln703_3_fu_329_p0;
wire  signed [22:0] sext_ln703_3_fu_329_p1;
wire   [22:0] sub_ln1193_2_fu_333_p2;
wire  signed [21:0] sext_ln703_4_fu_355_p0;
wire  signed [22:0] sext_ln703_4_fu_355_p1;
wire   [22:0] sub_ln1193_3_fu_359_p2;
wire  signed [21:0] sext_ln703_5_fu_381_p0;
wire  signed [22:0] sext_ln703_5_fu_381_p1;
wire   [22:0] sub_ln1193_4_fu_385_p2;
wire   [0:0] xor_ln786_fu_457_p2;
wire   [0:0] xor_ln340_fu_471_p2;
wire   [0:0] xor_ln786_1_fu_481_p2;
wire   [0:0] xor_ln340_1_fu_495_p2;
wire   [0:0] xor_ln786_2_fu_505_p2;
wire   [0:0] xor_ln340_2_fu_519_p2;
wire   [0:0] xor_ln786_3_fu_529_p2;
wire   [0:0] xor_ln340_3_fu_543_p2;
wire   [0:0] xor_ln786_4_fu_553_p2;
wire   [0:0] xor_ln340_4_fu_567_p2;
wire   [0:0] xor_ln340_5_fu_467_p2;
wire   [0:0] and_ln786_fu_462_p2;
wire   [0:0] or_ln340_fu_476_p2;
wire   [9:0] select_ln340_fu_577_p3;
wire   [9:0] select_ln388_fu_584_p3;
wire   [9:0] y_V_fu_591_p3;
wire   [0:0] xor_ln340_6_fu_491_p2;
wire   [0:0] and_ln786_1_fu_486_p2;
wire   [0:0] or_ln340_1_fu_500_p2;
wire   [9:0] select_ln340_2_fu_604_p3;
wire   [9:0] select_ln388_1_fu_611_p3;
wire   [9:0] y_V_1_fu_618_p3;
wire   [0:0] xor_ln340_7_fu_515_p2;
wire   [0:0] and_ln786_2_fu_510_p2;
wire   [0:0] or_ln340_2_fu_524_p2;
wire   [9:0] select_ln340_4_fu_631_p3;
wire   [9:0] select_ln388_2_fu_638_p3;
wire   [9:0] y_V_2_fu_645_p3;
wire   [0:0] xor_ln340_8_fu_539_p2;
wire   [0:0] and_ln786_3_fu_534_p2;
wire   [0:0] or_ln340_3_fu_548_p2;
wire   [9:0] select_ln340_6_fu_658_p3;
wire   [9:0] select_ln388_3_fu_665_p3;
wire   [9:0] y_V_3_fu_672_p3;
wire   [0:0] xor_ln340_9_fu_563_p2;
wire   [0:0] and_ln786_4_fu_558_p2;
wire   [0:0] or_ln340_4_fu_572_p2;
wire   [9:0] select_ln340_8_fu_685_p3;
wire   [9:0] select_ln388_4_fu_692_p3;
wire   [17:0] p_Val2_6_fu_711_p1;
wire   [17:0] p_Val2_7_fu_715_p1;
wire   [17:0] p_Val2_8_fu_719_p2;
wire   [0:0] p_Result_s_fu_725_p3;
wire   [17:0] p_Val2_9_fu_741_p1;
wire   [17:0] p_Val2_10_fu_745_p1;
wire   [17:0] p_Val2_11_fu_749_p2;
wire   [0:0] p_Result_14_fu_755_p3;
wire  signed [17:0] p_Val2_12_fu_733_p3;
wire  signed [17:0] p_Val2_13_fu_763_p3;
wire  signed [18:0] rhs_V_fu_775_p1;
wire  signed [18:0] lhs_V_fu_771_p1;
wire   [18:0] ret_V_fu_779_p2;
wire   [17:0] p_Val2_15_fu_793_p2;
wire   [0:0] p_Result_16_fu_799_p3;
wire   [0:0] p_Result_15_fu_785_p3;
wire   [0:0] xor_ln786_5_fu_807_p2;
wire   [0:0] xor_ln340_11_fu_825_p2;
wire   [0:0] xor_ln340_10_fu_819_p2;
wire   [0:0] underflow_fu_813_p2;
wire   [0:0] or_ln340_5_fu_831_p2;
wire   [17:0] select_ln340_12_fu_837_p3;
wire   [17:0] select_ln388_5_fu_845_p3;
wire  signed [18:0] lhs_V_1_fu_865_p1;
wire   [18:0] rhs_V_1_fu_868_p1;
wire   [18:0] ret_V_1_fu_872_p2;
wire   [17:0] p_Val2_17_fu_861_p1;
wire   [17:0] p_Val2_19_fu_886_p2;
wire   [0:0] p_Result_18_fu_891_p3;
wire   [0:0] p_Result_17_fu_878_p3;
wire   [0:0] xor_ln786_6_fu_899_p2;
wire   [0:0] xor_ln340_13_fu_917_p2;
wire   [0:0] xor_ln340_12_fu_911_p2;
wire   [9:0] tmp_s_fu_929_p4;
wire   [0:0] underflow_1_fu_905_p2;
wire   [0:0] or_ln340_6_fu_923_p2;
wire   [9:0] select_ln340_14_fu_939_p3;
wire   [9:0] select_ln388_6_fu_947_p3;
wire   [9:0] y_V_5_fu_955_p3;
wire  signed [25:0] mul_ln1118_fu_1037_p2;
wire  signed [25:0] mul_ln1118_1_fu_1044_p2;
wire  signed [25:0] mul_ln1118_2_fu_1051_p2;
wire  signed [25:0] mul_ln1118_3_fu_1058_p2;
wire  signed [25:0] mul_ln1118_4_fu_1065_p2;
wire  signed [17:0] mul_ln1118_fu_1037_p0;
wire  signed [25:0] sext_ln1116_fu_968_p1;
wire   [16:0] mul_ln1118_fu_1037_p1;
wire  signed [17:0] mul_ln1118_1_fu_1044_p0;
wire   [16:0] mul_ln1118_1_fu_1044_p1;
wire  signed [17:0] mul_ln1118_2_fu_1051_p0;
wire   [16:0] mul_ln1118_2_fu_1051_p1;
wire  signed [17:0] mul_ln1118_3_fu_1058_p0;
wire   [16:0] mul_ln1118_3_fu_1058_p1;
wire  signed [17:0] mul_ln1118_4_fu_1065_p0;
wire   [16:0] mul_ln1118_4_fu_1065_p1;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to3;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;
wire   [25:0] mul_ln1118_1_fu_1044_p10;
wire   [25:0] mul_ln1118_2_fu_1051_p10;
wire   [25:0] mul_ln1118_3_fu_1058_p10;
wire   [25:0] mul_ln1118_4_fu_1065_p10;
wire   [25:0] mul_ln1118_fu_1037_p10;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
end

softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s_exp_table1 #(
    .DataWidth( 17 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
exp_table1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(exp_table1_address0),
    .ce0(exp_table1_ce0),
    .q0(exp_table1_q0),
    .address1(exp_table1_address1),
    .ce1(exp_table1_ce1),
    .q1(exp_table1_q1),
    .address2(exp_table1_address2),
    .ce2(exp_table1_ce2),
    .q2(exp_table1_q2),
    .address3(exp_table1_address3),
    .ce3(exp_table1_ce3),
    .q3(exp_table1_q3),
    .address4(exp_table1_address4),
    .ce4(exp_table1_ce4),
    .q4(exp_table1_q4)
);

softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s_invert_table2 #(
    .DataWidth( 18 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
invert_table2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(invert_table2_address0),
    .ce0(invert_table2_ce0),
    .q0(invert_table2_q0)
);

hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 26 ))
hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1_U4793(
    .din0(mul_ln1118_fu_1037_p0),
    .din1(mul_ln1118_fu_1037_p1),
    .dout(mul_ln1118_fu_1037_p2)
);

hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 26 ))
hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1_U4794(
    .din0(mul_ln1118_1_fu_1044_p0),
    .din1(mul_ln1118_1_fu_1044_p1),
    .dout(mul_ln1118_1_fu_1044_p2)
);

hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 26 ))
hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1_U4795(
    .din0(mul_ln1118_2_fu_1051_p0),
    .din1(mul_ln1118_2_fu_1051_p1),
    .dout(mul_ln1118_2_fu_1051_p2)
);

hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 26 ))
hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1_U4796(
    .din0(mul_ln1118_3_fu_1058_p0),
    .din1(mul_ln1118_3_fu_1058_p1),
    .dout(mul_ln1118_3_fu_1058_p2)
);

hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 26 ))
hls_deepset_pointwisePhi_ioparallel_mul_mul_18s_17ns_26_1_1_U4797(
    .din0(mul_ln1118_4_fu_1065_p0),
    .din1(mul_ln1118_4_fu_1065_p1),
    .dout(mul_ln1118_4_fu_1065_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        exp_res_0_V_reg_1197 <= exp_table1_q0;
        exp_res_1_V_reg_1202 <= exp_table1_q1;
        exp_res_2_V_reg_1207 <= exp_table1_q2;
        exp_res_3_V_reg_1212 <= exp_table1_q3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        exp_res_0_V_reg_1197_pp0_iter3_reg <= exp_res_0_V_reg_1197;
        exp_res_1_V_reg_1202_pp0_iter3_reg <= exp_res_1_V_reg_1202;
        exp_res_2_V_reg_1207_pp0_iter3_reg <= exp_res_2_V_reg_1207;
        exp_res_3_V_reg_1212_pp0_iter3_reg <= exp_res_3_V_reg_1212;
        p_Val2_16_reg_1222 <= p_Val2_16_fu_853_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        exp_res_4_V_reg_1228 <= exp_table1_q4;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        tmp_10_reg_1107 <= sub_ln1193_2_fu_333_p2[32'd21];
        tmp_11_reg_1114 <= sub_ln1193_3_fu_359_p2[32'd22];
        tmp_12_reg_1121 <= sub_ln1193_3_fu_359_p2[32'd21];
        tmp_13_reg_1128 <= sub_ln1193_4_fu_385_p2[32'd22];
        tmp_14_reg_1135 <= sub_ln1193_4_fu_385_p2[32'd21];
        tmp_1_reg_1072 <= sub_ln1193_fu_281_p2[32'd22];
        tmp_2_reg_1148 <= {{sub_ln1193_1_fu_307_p2[21:12]}};
        tmp_3_reg_1079 <= sub_ln1193_fu_281_p2[32'd21];
        tmp_4_reg_1154 <= {{sub_ln1193_2_fu_333_p2[21:12]}};
        tmp_5_reg_1086 <= sub_ln1193_1_fu_307_p2[32'd22];
        tmp_6_reg_1160 <= {{sub_ln1193_3_fu_359_p2[21:12]}};
        tmp_7_reg_1093 <= sub_ln1193_1_fu_307_p2[32'd21];
        tmp_8_reg_1166 <= {{sub_ln1193_4_fu_385_p2[21:12]}};
        tmp_9_reg_1100 <= sub_ln1193_2_fu_333_p2[32'd22];
        tmp_reg_1142 <= {{sub_ln1193_fu_281_p2[21:12]}};
        y_V_4_reg_1192 <= y_V_4_fu_699_p3;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to3 = 1'b1;
    end else begin
        ap_idle_pp0_0to3 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to3 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce0 = 1'b1;
    end else begin
        exp_table1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce1 = 1'b1;
    end else begin
        exp_table1_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce2 = 1'b1;
    end else begin
        exp_table1_ce2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce3 = 1'b1;
    end else begin
        exp_table1_ce3 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        exp_table1_ce4 = 1'b1;
    end else begin
        exp_table1_ce4 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        invert_table2_ce0 = 1'b1;
    end else begin
        invert_table2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        res_0_V_ap_vld = 1'b1;
    end else begin
        res_0_V_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        res_1_V_ap_vld = 1'b1;
    end else begin
        res_1_V_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        res_2_V_ap_vld = 1'b1;
    end else begin
        res_2_V_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        res_3_V_ap_vld = 1'b1;
    end else begin
        res_3_V_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        res_4_V_ap_vld = 1'b1;
    end else begin
        res_4_V_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign and_ln786_1_fu_486_p2 = (xor_ln786_1_fu_481_p2 & tmp_5_reg_1086);

assign and_ln786_2_fu_510_p2 = (xor_ln786_2_fu_505_p2 & tmp_9_reg_1100);

assign and_ln786_3_fu_534_p2 = (xor_ln786_3_fu_529_p2 & tmp_11_reg_1114);

assign and_ln786_4_fu_558_p2 = (xor_ln786_4_fu_553_p2 & tmp_13_reg_1128);

assign and_ln786_fu_462_p2 = (xor_ln786_fu_457_p2 & tmp_1_reg_1072);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((ap_done_reg == 1'b1) | ((ap_start == 1'b1) & ((ap_start == 1'b0) | (ap_done_reg == 1'b1))));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_done_reg == 1'b1) | ((ap_start == 1'b1) & ((ap_start == 1'b0) | (ap_done_reg == 1'b1))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((ap_done_reg == 1'b1) | ((ap_start == 1'b1) & ((ap_start == 1'b0) | (ap_done_reg == 1'b1))));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

assign exp_table1_address0 = zext_ln255_fu_599_p1;

assign exp_table1_address1 = zext_ln255_1_fu_626_p1;

assign exp_table1_address2 = zext_ln255_2_fu_653_p1;

assign exp_table1_address3 = zext_ln255_3_fu_680_p1;

assign exp_table1_address4 = zext_ln255_4_fu_707_p1;

assign icmp_ln1496_1_fu_231_p0 = data_2_V_read;

assign icmp_ln1496_1_fu_231_p1 = data_3_V_read;

assign icmp_ln1496_1_fu_231_p2 = (($signed(icmp_ln1496_1_fu_231_p0) < $signed(icmp_ln1496_1_fu_231_p1)) ? 1'b1 : 1'b0);

assign icmp_ln1496_2_fu_245_p2 = (($signed(select_ln65_fu_223_p3) < $signed(select_ln65_1_fu_237_p3)) ? 1'b1 : 1'b0);

assign icmp_ln1496_3_fu_259_p1 = data_4_V_read;

assign icmp_ln1496_3_fu_259_p2 = (($signed(select_ln65_2_fu_251_p3) < $signed(icmp_ln1496_3_fu_259_p1)) ? 1'b1 : 1'b0);

assign icmp_ln1496_fu_217_p0 = data_0_V_read;

assign icmp_ln1496_fu_217_p1 = data_1_V_read;

assign icmp_ln1496_fu_217_p2 = (($signed(icmp_ln1496_fu_217_p0) < $signed(icmp_ln1496_fu_217_p1)) ? 1'b1 : 1'b0);

assign invert_table2_address0 = zext_ln265_fu_963_p1;

assign lhs_V_1_fu_865_p1 = p_Val2_16_reg_1222;

assign lhs_V_fu_771_p1 = p_Val2_12_fu_733_p3;

assign mul_ln1118_1_fu_1044_p0 = sext_ln1116_fu_968_p1;

assign mul_ln1118_1_fu_1044_p1 = mul_ln1118_1_fu_1044_p10;

assign mul_ln1118_1_fu_1044_p10 = exp_res_1_V_reg_1202_pp0_iter3_reg;

assign mul_ln1118_2_fu_1051_p0 = sext_ln1116_fu_968_p1;

assign mul_ln1118_2_fu_1051_p1 = mul_ln1118_2_fu_1051_p10;

assign mul_ln1118_2_fu_1051_p10 = exp_res_2_V_reg_1207_pp0_iter3_reg;

assign mul_ln1118_3_fu_1058_p0 = sext_ln1116_fu_968_p1;

assign mul_ln1118_3_fu_1058_p1 = mul_ln1118_3_fu_1058_p10;

assign mul_ln1118_3_fu_1058_p10 = exp_res_3_V_reg_1212_pp0_iter3_reg;

assign mul_ln1118_4_fu_1065_p0 = sext_ln1116_fu_968_p1;

assign mul_ln1118_4_fu_1065_p1 = mul_ln1118_4_fu_1065_p10;

assign mul_ln1118_4_fu_1065_p10 = exp_res_4_V_reg_1228;

assign mul_ln1118_fu_1037_p0 = sext_ln1116_fu_968_p1;

assign mul_ln1118_fu_1037_p1 = mul_ln1118_fu_1037_p10;

assign mul_ln1118_fu_1037_p10 = exp_res_0_V_reg_1197_pp0_iter3_reg;

assign or_ln340_1_fu_500_p2 = (xor_ln340_1_fu_495_p2 | tmp_7_reg_1093);

assign or_ln340_2_fu_524_p2 = (xor_ln340_2_fu_519_p2 | tmp_10_reg_1107);

assign or_ln340_3_fu_548_p2 = (xor_ln340_3_fu_543_p2 | tmp_12_reg_1121);

assign or_ln340_4_fu_572_p2 = (xor_ln340_4_fu_567_p2 | tmp_14_reg_1135);

assign or_ln340_5_fu_831_p2 = (xor_ln340_11_fu_825_p2 | p_Result_16_fu_799_p3);

assign or_ln340_6_fu_923_p2 = (xor_ln340_13_fu_917_p2 | p_Result_18_fu_891_p3);

assign or_ln340_fu_476_p2 = (xor_ln340_fu_471_p2 | tmp_3_reg_1079);

assign p_Result_14_fu_755_p3 = p_Val2_11_fu_749_p2[32'd17];

assign p_Result_15_fu_785_p3 = ret_V_fu_779_p2[32'd18];

assign p_Result_16_fu_799_p3 = p_Val2_15_fu_793_p2[32'd17];

assign p_Result_17_fu_878_p3 = ret_V_1_fu_872_p2[32'd18];

assign p_Result_18_fu_891_p3 = p_Val2_19_fu_886_p2[32'd17];

assign p_Result_s_fu_725_p3 = p_Val2_8_fu_719_p2[32'd17];

assign p_Val2_10_fu_745_p1 = exp_table1_q3;

assign p_Val2_11_fu_749_p2 = (p_Val2_9_fu_741_p1 + p_Val2_10_fu_745_p1);

assign p_Val2_12_fu_733_p3 = ((p_Result_s_fu_725_p3[0:0] === 1'b1) ? 18'd131071 : p_Val2_8_fu_719_p2);

assign p_Val2_13_fu_763_p3 = ((p_Result_14_fu_755_p3[0:0] === 1'b1) ? 18'd131071 : p_Val2_11_fu_749_p2);

assign p_Val2_15_fu_793_p2 = ($signed(p_Val2_12_fu_733_p3) + $signed(p_Val2_13_fu_763_p3));

assign p_Val2_16_fu_853_p3 = ((or_ln340_5_fu_831_p2[0:0] === 1'b1) ? select_ln340_12_fu_837_p3 : select_ln388_5_fu_845_p3);

assign p_Val2_17_fu_861_p1 = exp_table1_q4;

assign p_Val2_19_fu_886_p2 = ($signed(p_Val2_17_fu_861_p1) + $signed(p_Val2_16_reg_1222));

assign p_Val2_6_fu_711_p1 = exp_table1_q0;

assign p_Val2_7_fu_715_p1 = exp_table1_q1;

assign p_Val2_8_fu_719_p2 = (p_Val2_6_fu_711_p1 + p_Val2_7_fu_715_p1);

assign p_Val2_9_fu_741_p1 = exp_table1_q2;

assign res_0_V = {{mul_ln1118_fu_1037_p2[25:10]}};

assign res_1_V = {{mul_ln1118_1_fu_1044_p2[25:10]}};

assign res_2_V = {{mul_ln1118_2_fu_1051_p2[25:10]}};

assign res_3_V = {{mul_ln1118_3_fu_1058_p2[25:10]}};

assign res_4_V = {{mul_ln1118_4_fu_1065_p2[25:10]}};

assign ret_V_1_fu_872_p2 = ($signed(lhs_V_1_fu_865_p1) + $signed(rhs_V_1_fu_868_p1));

assign ret_V_fu_779_p2 = ($signed(rhs_V_fu_775_p1) + $signed(lhs_V_fu_771_p1));

assign rhs_V_1_fu_868_p1 = exp_table1_q4;

assign rhs_V_fu_775_p1 = p_Val2_13_fu_763_p3;

assign select_ln340_12_fu_837_p3 = ((xor_ln340_10_fu_819_p2[0:0] === 1'b1) ? 18'd131071 : p_Val2_15_fu_793_p2);

assign select_ln340_14_fu_939_p3 = ((xor_ln340_12_fu_911_p2[0:0] === 1'b1) ? 10'd511 : tmp_s_fu_929_p4);

assign select_ln340_2_fu_604_p3 = ((xor_ln340_6_fu_491_p2[0:0] === 1'b1) ? 10'd511 : tmp_2_reg_1148);

assign select_ln340_4_fu_631_p3 = ((xor_ln340_7_fu_515_p2[0:0] === 1'b1) ? 10'd511 : tmp_4_reg_1154);

assign select_ln340_6_fu_658_p3 = ((xor_ln340_8_fu_539_p2[0:0] === 1'b1) ? 10'd511 : tmp_6_reg_1160);

assign select_ln340_8_fu_685_p3 = ((xor_ln340_9_fu_563_p2[0:0] === 1'b1) ? 10'd511 : tmp_8_reg_1166);

assign select_ln340_fu_577_p3 = ((xor_ln340_5_fu_467_p2[0:0] === 1'b1) ? 10'd511 : tmp_reg_1142);

assign select_ln388_1_fu_611_p3 = ((and_ln786_1_fu_486_p2[0:0] === 1'b1) ? 10'd512 : tmp_2_reg_1148);

assign select_ln388_2_fu_638_p3 = ((and_ln786_2_fu_510_p2[0:0] === 1'b1) ? 10'd512 : tmp_4_reg_1154);

assign select_ln388_3_fu_665_p3 = ((and_ln786_3_fu_534_p2[0:0] === 1'b1) ? 10'd512 : tmp_6_reg_1160);

assign select_ln388_4_fu_692_p3 = ((and_ln786_4_fu_558_p2[0:0] === 1'b1) ? 10'd512 : tmp_8_reg_1166);

assign select_ln388_5_fu_845_p3 = ((underflow_fu_813_p2[0:0] === 1'b1) ? 18'd131072 : p_Val2_15_fu_793_p2);

assign select_ln388_6_fu_947_p3 = ((underflow_1_fu_905_p2[0:0] === 1'b1) ? 10'd512 : tmp_s_fu_929_p4);

assign select_ln388_fu_584_p3 = ((and_ln786_fu_462_p2[0:0] === 1'b1) ? 10'd512 : tmp_reg_1142);

assign select_ln65_1_fu_237_p1 = data_3_V_read;

assign select_ln65_1_fu_237_p2 = data_2_V_read;

assign select_ln65_1_fu_237_p3 = ((icmp_ln1496_1_fu_231_p2[0:0] === 1'b1) ? select_ln65_1_fu_237_p1 : select_ln65_1_fu_237_p2);

assign select_ln65_2_fu_251_p3 = ((icmp_ln1496_2_fu_245_p2[0:0] === 1'b1) ? select_ln65_1_fu_237_p3 : select_ln65_fu_223_p3);

assign select_ln65_fu_223_p1 = data_1_V_read;

assign select_ln65_fu_223_p2 = data_0_V_read;

assign select_ln65_fu_223_p3 = ((icmp_ln1496_fu_217_p2[0:0] === 1'b1) ? select_ln65_fu_223_p1 : select_ln65_fu_223_p2);

assign sext_ln1116_fu_968_p1 = $signed(invert_table2_q0);

assign sext_ln703_1_fu_277_p1 = $signed(x_max_V_fu_265_p3);

assign sext_ln703_2_fu_303_p0 = data_1_V_read;

assign sext_ln703_2_fu_303_p1 = sext_ln703_2_fu_303_p0;

assign sext_ln703_3_fu_329_p0 = data_2_V_read;

assign sext_ln703_3_fu_329_p1 = sext_ln703_3_fu_329_p0;

assign sext_ln703_4_fu_355_p0 = data_3_V_read;

assign sext_ln703_4_fu_355_p1 = sext_ln703_4_fu_355_p0;

assign sext_ln703_5_fu_381_p0 = data_4_V_read;

assign sext_ln703_5_fu_381_p1 = sext_ln703_5_fu_381_p0;

assign sext_ln703_fu_273_p0 = data_0_V_read;

assign sext_ln703_fu_273_p1 = sext_ln703_fu_273_p0;

assign sub_ln1193_1_fu_307_p2 = ($signed(sext_ln703_2_fu_303_p1) - $signed(sext_ln703_1_fu_277_p1));

assign sub_ln1193_2_fu_333_p2 = ($signed(sext_ln703_3_fu_329_p1) - $signed(sext_ln703_1_fu_277_p1));

assign sub_ln1193_3_fu_359_p2 = ($signed(sext_ln703_4_fu_355_p1) - $signed(sext_ln703_1_fu_277_p1));

assign sub_ln1193_4_fu_385_p2 = ($signed(sext_ln703_5_fu_381_p1) - $signed(sext_ln703_1_fu_277_p1));

assign sub_ln1193_fu_281_p2 = ($signed(sext_ln703_fu_273_p1) - $signed(sext_ln703_1_fu_277_p1));

assign tmp_s_fu_929_p4 = {{p_Val2_19_fu_886_p2[17:8]}};

assign underflow_1_fu_905_p2 = (xor_ln786_6_fu_899_p2 & p_Result_17_fu_878_p3);

assign underflow_fu_813_p2 = (xor_ln786_5_fu_807_p2 & p_Result_15_fu_785_p3);

assign x_max_V_fu_265_p1 = data_4_V_read;

assign x_max_V_fu_265_p3 = ((icmp_ln1496_3_fu_259_p2[0:0] === 1'b1) ? x_max_V_fu_265_p1 : select_ln65_2_fu_251_p3);

assign xor_ln340_10_fu_819_p2 = (p_Result_16_fu_799_p3 ^ p_Result_15_fu_785_p3);

assign xor_ln340_11_fu_825_p2 = (p_Result_15_fu_785_p3 ^ 1'd1);

assign xor_ln340_12_fu_911_p2 = (p_Result_18_fu_891_p3 ^ p_Result_17_fu_878_p3);

assign xor_ln340_13_fu_917_p2 = (p_Result_17_fu_878_p3 ^ 1'd1);

assign xor_ln340_1_fu_495_p2 = (tmp_5_reg_1086 ^ 1'd1);

assign xor_ln340_2_fu_519_p2 = (tmp_9_reg_1100 ^ 1'd1);

assign xor_ln340_3_fu_543_p2 = (tmp_11_reg_1114 ^ 1'd1);

assign xor_ln340_4_fu_567_p2 = (tmp_13_reg_1128 ^ 1'd1);

assign xor_ln340_5_fu_467_p2 = (tmp_3_reg_1079 ^ tmp_1_reg_1072);

assign xor_ln340_6_fu_491_p2 = (tmp_7_reg_1093 ^ tmp_5_reg_1086);

assign xor_ln340_7_fu_515_p2 = (tmp_9_reg_1100 ^ tmp_10_reg_1107);

assign xor_ln340_8_fu_539_p2 = (tmp_12_reg_1121 ^ tmp_11_reg_1114);

assign xor_ln340_9_fu_563_p2 = (tmp_14_reg_1135 ^ tmp_13_reg_1128);

assign xor_ln340_fu_471_p2 = (tmp_1_reg_1072 ^ 1'd1);

assign xor_ln786_1_fu_481_p2 = (tmp_7_reg_1093 ^ 1'd1);

assign xor_ln786_2_fu_505_p2 = (tmp_10_reg_1107 ^ 1'd1);

assign xor_ln786_3_fu_529_p2 = (tmp_12_reg_1121 ^ 1'd1);

assign xor_ln786_4_fu_553_p2 = (tmp_14_reg_1135 ^ 1'd1);

assign xor_ln786_5_fu_807_p2 = (p_Result_16_fu_799_p3 ^ 1'd1);

assign xor_ln786_6_fu_899_p2 = (p_Result_18_fu_891_p3 ^ 1'd1);

assign xor_ln786_fu_457_p2 = (tmp_3_reg_1079 ^ 1'd1);

assign y_V_1_fu_618_p3 = ((or_ln340_1_fu_500_p2[0:0] === 1'b1) ? select_ln340_2_fu_604_p3 : select_ln388_1_fu_611_p3);

assign y_V_2_fu_645_p3 = ((or_ln340_2_fu_524_p2[0:0] === 1'b1) ? select_ln340_4_fu_631_p3 : select_ln388_2_fu_638_p3);

assign y_V_3_fu_672_p3 = ((or_ln340_3_fu_548_p2[0:0] === 1'b1) ? select_ln340_6_fu_658_p3 : select_ln388_3_fu_665_p3);

assign y_V_4_fu_699_p3 = ((or_ln340_4_fu_572_p2[0:0] === 1'b1) ? select_ln340_8_fu_685_p3 : select_ln388_4_fu_692_p3);

assign y_V_5_fu_955_p3 = ((or_ln340_6_fu_923_p2[0:0] === 1'b1) ? select_ln340_14_fu_939_p3 : select_ln388_6_fu_947_p3);

assign y_V_fu_591_p3 = ((or_ln340_fu_476_p2[0:0] === 1'b1) ? select_ln340_fu_577_p3 : select_ln388_fu_584_p3);

assign zext_ln255_1_fu_626_p1 = y_V_1_fu_618_p3;

assign zext_ln255_2_fu_653_p1 = y_V_2_fu_645_p3;

assign zext_ln255_3_fu_680_p1 = y_V_3_fu_672_p3;

assign zext_ln255_4_fu_707_p1 = y_V_4_reg_1192;

assign zext_ln255_fu_599_p1 = y_V_fu_591_p3;

assign zext_ln265_fu_963_p1 = y_V_5_fu_955_p3;

endmodule //softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s