
`include "dump_file_agent.svh"
`include "csv_file_dump.svh"
`include "sample_agent.svh"
`include "sample_manager.svh"
`include "nodf_module_interface.svh"
`include "nodf_module_monitor.svh"
`include "df_fifo_interface.svh"
`include "df_fifo_monitor.svh"
`include "df_process_interface.svh"
`include "df_process_monitor.svh"
`timescale 1ns/1ps

// top module for dataflow related monitors
module dataflow_monitor(
input logic clock,
input logic reset,
input logic finish
);

    df_fifo_intf fifo_intf_1(clock,reset);
    assign fifo_intf_1.rd_en = AESL_inst_model_test.hash_arr_U.if_read & AESL_inst_model_test.hash_arr_U.if_empty_n;
    assign fifo_intf_1.wr_en = AESL_inst_model_test.hash_arr_U.if_write & AESL_inst_model_test.hash_arr_U.if_full_n;
    assign fifo_intf_1.fifo_rd_block = 0;
    assign fifo_intf_1.fifo_wr_block = 0;
    assign fifo_intf_1.finish = finish;
    csv_file_dump fifo_csv_dumper_1;
    csv_file_dump cstatus_csv_dumper_1;
    df_fifo_monitor fifo_monitor_1;
    df_fifo_intf fifo_intf_2(clock,reset);
    assign fifo_intf_2.rd_en = AESL_inst_model_test.hash_arr_1_U.if_read & AESL_inst_model_test.hash_arr_1_U.if_empty_n;
    assign fifo_intf_2.wr_en = AESL_inst_model_test.hash_arr_1_U.if_write & AESL_inst_model_test.hash_arr_1_U.if_full_n;
    assign fifo_intf_2.fifo_rd_block = 0;
    assign fifo_intf_2.fifo_wr_block = 0;
    assign fifo_intf_2.finish = finish;
    csv_file_dump fifo_csv_dumper_2;
    csv_file_dump cstatus_csv_dumper_2;
    df_fifo_monitor fifo_monitor_2;
    df_fifo_intf fifo_intf_3(clock,reset);
    assign fifo_intf_3.rd_en = AESL_inst_model_test.hash_arr_2_U.if_read & AESL_inst_model_test.hash_arr_2_U.if_empty_n;
    assign fifo_intf_3.wr_en = AESL_inst_model_test.hash_arr_2_U.if_write & AESL_inst_model_test.hash_arr_2_U.if_full_n;
    assign fifo_intf_3.fifo_rd_block = 0;
    assign fifo_intf_3.fifo_wr_block = 0;
    assign fifo_intf_3.finish = finish;
    csv_file_dump fifo_csv_dumper_3;
    csv_file_dump cstatus_csv_dumper_3;
    df_fifo_monitor fifo_monitor_3;
    df_fifo_intf fifo_intf_4(clock,reset);
    assign fifo_intf_4.rd_en = AESL_inst_model_test.hash_arr_3_U.if_read & AESL_inst_model_test.hash_arr_3_U.if_empty_n;
    assign fifo_intf_4.wr_en = AESL_inst_model_test.hash_arr_3_U.if_write & AESL_inst_model_test.hash_arr_3_U.if_full_n;
    assign fifo_intf_4.fifo_rd_block = 0;
    assign fifo_intf_4.fifo_wr_block = 0;
    assign fifo_intf_4.finish = finish;
    csv_file_dump fifo_csv_dumper_4;
    csv_file_dump cstatus_csv_dumper_4;
    df_fifo_monitor fifo_monitor_4;
    df_fifo_intf fifo_intf_5(clock,reset);
    assign fifo_intf_5.rd_en = AESL_inst_model_test.hash_arr_4_U.if_read & AESL_inst_model_test.hash_arr_4_U.if_empty_n;
    assign fifo_intf_5.wr_en = AESL_inst_model_test.hash_arr_4_U.if_write & AESL_inst_model_test.hash_arr_4_U.if_full_n;
    assign fifo_intf_5.fifo_rd_block = 0;
    assign fifo_intf_5.fifo_wr_block = 0;
    assign fifo_intf_5.finish = finish;
    csv_file_dump fifo_csv_dumper_5;
    csv_file_dump cstatus_csv_dumper_5;
    df_fifo_monitor fifo_monitor_5;
    df_fifo_intf fifo_intf_6(clock,reset);
    assign fifo_intf_6.rd_en = AESL_inst_model_test.hash_arr_5_U.if_read & AESL_inst_model_test.hash_arr_5_U.if_empty_n;
    assign fifo_intf_6.wr_en = AESL_inst_model_test.hash_arr_5_U.if_write & AESL_inst_model_test.hash_arr_5_U.if_full_n;
    assign fifo_intf_6.fifo_rd_block = 0;
    assign fifo_intf_6.fifo_wr_block = 0;
    assign fifo_intf_6.finish = finish;
    csv_file_dump fifo_csv_dumper_6;
    csv_file_dump cstatus_csv_dumper_6;
    df_fifo_monitor fifo_monitor_6;
    df_fifo_intf fifo_intf_7(clock,reset);
    assign fifo_intf_7.rd_en = AESL_inst_model_test.hash_arr_6_U.if_read & AESL_inst_model_test.hash_arr_6_U.if_empty_n;
    assign fifo_intf_7.wr_en = AESL_inst_model_test.hash_arr_6_U.if_write & AESL_inst_model_test.hash_arr_6_U.if_full_n;
    assign fifo_intf_7.fifo_rd_block = 0;
    assign fifo_intf_7.fifo_wr_block = 0;
    assign fifo_intf_7.finish = finish;
    csv_file_dump fifo_csv_dumper_7;
    csv_file_dump cstatus_csv_dumper_7;
    df_fifo_monitor fifo_monitor_7;
    df_fifo_intf fifo_intf_8(clock,reset);
    assign fifo_intf_8.rd_en = AESL_inst_model_test.hash_arr_7_U.if_read & AESL_inst_model_test.hash_arr_7_U.if_empty_n;
    assign fifo_intf_8.wr_en = AESL_inst_model_test.hash_arr_7_U.if_write & AESL_inst_model_test.hash_arr_7_U.if_full_n;
    assign fifo_intf_8.fifo_rd_block = 0;
    assign fifo_intf_8.fifo_wr_block = 0;
    assign fifo_intf_8.finish = finish;
    csv_file_dump fifo_csv_dumper_8;
    csv_file_dump cstatus_csv_dumper_8;
    df_fifo_monitor fifo_monitor_8;
    df_fifo_intf fifo_intf_9(clock,reset);
    assign fifo_intf_9.rd_en = AESL_inst_model_test.hash_arr_8_U.if_read & AESL_inst_model_test.hash_arr_8_U.if_empty_n;
    assign fifo_intf_9.wr_en = AESL_inst_model_test.hash_arr_8_U.if_write & AESL_inst_model_test.hash_arr_8_U.if_full_n;
    assign fifo_intf_9.fifo_rd_block = 0;
    assign fifo_intf_9.fifo_wr_block = 0;
    assign fifo_intf_9.finish = finish;
    csv_file_dump fifo_csv_dumper_9;
    csv_file_dump cstatus_csv_dumper_9;
    df_fifo_monitor fifo_monitor_9;
    df_fifo_intf fifo_intf_10(clock,reset);
    assign fifo_intf_10.rd_en = AESL_inst_model_test.hash_arr_9_U.if_read & AESL_inst_model_test.hash_arr_9_U.if_empty_n;
    assign fifo_intf_10.wr_en = AESL_inst_model_test.hash_arr_9_U.if_write & AESL_inst_model_test.hash_arr_9_U.if_full_n;
    assign fifo_intf_10.fifo_rd_block = 0;
    assign fifo_intf_10.fifo_wr_block = 0;
    assign fifo_intf_10.finish = finish;
    csv_file_dump fifo_csv_dumper_10;
    csv_file_dump cstatus_csv_dumper_10;
    df_fifo_monitor fifo_monitor_10;
    df_fifo_intf fifo_intf_11(clock,reset);
    assign fifo_intf_11.rd_en = AESL_inst_model_test.hash_arr_10_U.if_read & AESL_inst_model_test.hash_arr_10_U.if_empty_n;
    assign fifo_intf_11.wr_en = AESL_inst_model_test.hash_arr_10_U.if_write & AESL_inst_model_test.hash_arr_10_U.if_full_n;
    assign fifo_intf_11.fifo_rd_block = 0;
    assign fifo_intf_11.fifo_wr_block = 0;
    assign fifo_intf_11.finish = finish;
    csv_file_dump fifo_csv_dumper_11;
    csv_file_dump cstatus_csv_dumper_11;
    df_fifo_monitor fifo_monitor_11;
    df_fifo_intf fifo_intf_12(clock,reset);
    assign fifo_intf_12.rd_en = AESL_inst_model_test.hash_arr_11_U.if_read & AESL_inst_model_test.hash_arr_11_U.if_empty_n;
    assign fifo_intf_12.wr_en = AESL_inst_model_test.hash_arr_11_U.if_write & AESL_inst_model_test.hash_arr_11_U.if_full_n;
    assign fifo_intf_12.fifo_rd_block = 0;
    assign fifo_intf_12.fifo_wr_block = 0;
    assign fifo_intf_12.finish = finish;
    csv_file_dump fifo_csv_dumper_12;
    csv_file_dump cstatus_csv_dumper_12;
    df_fifo_monitor fifo_monitor_12;
    df_fifo_intf fifo_intf_13(clock,reset);
    assign fifo_intf_13.rd_en = AESL_inst_model_test.hash_arr_12_U.if_read & AESL_inst_model_test.hash_arr_12_U.if_empty_n;
    assign fifo_intf_13.wr_en = AESL_inst_model_test.hash_arr_12_U.if_write & AESL_inst_model_test.hash_arr_12_U.if_full_n;
    assign fifo_intf_13.fifo_rd_block = 0;
    assign fifo_intf_13.fifo_wr_block = 0;
    assign fifo_intf_13.finish = finish;
    csv_file_dump fifo_csv_dumper_13;
    csv_file_dump cstatus_csv_dumper_13;
    df_fifo_monitor fifo_monitor_13;
    df_fifo_intf fifo_intf_14(clock,reset);
    assign fifo_intf_14.rd_en = AESL_inst_model_test.hash_arr_13_U.if_read & AESL_inst_model_test.hash_arr_13_U.if_empty_n;
    assign fifo_intf_14.wr_en = AESL_inst_model_test.hash_arr_13_U.if_write & AESL_inst_model_test.hash_arr_13_U.if_full_n;
    assign fifo_intf_14.fifo_rd_block = 0;
    assign fifo_intf_14.fifo_wr_block = 0;
    assign fifo_intf_14.finish = finish;
    csv_file_dump fifo_csv_dumper_14;
    csv_file_dump cstatus_csv_dumper_14;
    df_fifo_monitor fifo_monitor_14;
    df_fifo_intf fifo_intf_15(clock,reset);
    assign fifo_intf_15.rd_en = AESL_inst_model_test.hash_arr_14_U.if_read & AESL_inst_model_test.hash_arr_14_U.if_empty_n;
    assign fifo_intf_15.wr_en = AESL_inst_model_test.hash_arr_14_U.if_write & AESL_inst_model_test.hash_arr_14_U.if_full_n;
    assign fifo_intf_15.fifo_rd_block = 0;
    assign fifo_intf_15.fifo_wr_block = 0;
    assign fifo_intf_15.finish = finish;
    csv_file_dump fifo_csv_dumper_15;
    csv_file_dump cstatus_csv_dumper_15;
    df_fifo_monitor fifo_monitor_15;
    df_fifo_intf fifo_intf_16(clock,reset);
    assign fifo_intf_16.rd_en = AESL_inst_model_test.hash_arr_15_U.if_read & AESL_inst_model_test.hash_arr_15_U.if_empty_n;
    assign fifo_intf_16.wr_en = AESL_inst_model_test.hash_arr_15_U.if_write & AESL_inst_model_test.hash_arr_15_U.if_full_n;
    assign fifo_intf_16.fifo_rd_block = 0;
    assign fifo_intf_16.fifo_wr_block = 0;
    assign fifo_intf_16.finish = finish;
    csv_file_dump fifo_csv_dumper_16;
    csv_file_dump cstatus_csv_dumper_16;
    df_fifo_monitor fifo_monitor_16;
    df_fifo_intf fifo_intf_17(clock,reset);
    assign fifo_intf_17.rd_en = AESL_inst_model_test.hash_arr_16_U.if_read & AESL_inst_model_test.hash_arr_16_U.if_empty_n;
    assign fifo_intf_17.wr_en = AESL_inst_model_test.hash_arr_16_U.if_write & AESL_inst_model_test.hash_arr_16_U.if_full_n;
    assign fifo_intf_17.fifo_rd_block = 0;
    assign fifo_intf_17.fifo_wr_block = 0;
    assign fifo_intf_17.finish = finish;
    csv_file_dump fifo_csv_dumper_17;
    csv_file_dump cstatus_csv_dumper_17;
    df_fifo_monitor fifo_monitor_17;
    df_fifo_intf fifo_intf_18(clock,reset);
    assign fifo_intf_18.rd_en = AESL_inst_model_test.hash_arr_17_U.if_read & AESL_inst_model_test.hash_arr_17_U.if_empty_n;
    assign fifo_intf_18.wr_en = AESL_inst_model_test.hash_arr_17_U.if_write & AESL_inst_model_test.hash_arr_17_U.if_full_n;
    assign fifo_intf_18.fifo_rd_block = 0;
    assign fifo_intf_18.fifo_wr_block = 0;
    assign fifo_intf_18.finish = finish;
    csv_file_dump fifo_csv_dumper_18;
    csv_file_dump cstatus_csv_dumper_18;
    df_fifo_monitor fifo_monitor_18;
    df_fifo_intf fifo_intf_19(clock,reset);
    assign fifo_intf_19.rd_en = AESL_inst_model_test.hash_arr_18_U.if_read & AESL_inst_model_test.hash_arr_18_U.if_empty_n;
    assign fifo_intf_19.wr_en = AESL_inst_model_test.hash_arr_18_U.if_write & AESL_inst_model_test.hash_arr_18_U.if_full_n;
    assign fifo_intf_19.fifo_rd_block = 0;
    assign fifo_intf_19.fifo_wr_block = 0;
    assign fifo_intf_19.finish = finish;
    csv_file_dump fifo_csv_dumper_19;
    csv_file_dump cstatus_csv_dumper_19;
    df_fifo_monitor fifo_monitor_19;
    df_fifo_intf fifo_intf_20(clock,reset);
    assign fifo_intf_20.rd_en = AESL_inst_model_test.hash_arr_19_U.if_read & AESL_inst_model_test.hash_arr_19_U.if_empty_n;
    assign fifo_intf_20.wr_en = AESL_inst_model_test.hash_arr_19_U.if_write & AESL_inst_model_test.hash_arr_19_U.if_full_n;
    assign fifo_intf_20.fifo_rd_block = 0;
    assign fifo_intf_20.fifo_wr_block = 0;
    assign fifo_intf_20.finish = finish;
    csv_file_dump fifo_csv_dumper_20;
    csv_file_dump cstatus_csv_dumper_20;
    df_fifo_monitor fifo_monitor_20;
    df_fifo_intf fifo_intf_21(clock,reset);
    assign fifo_intf_21.rd_en = AESL_inst_model_test.feat_arr_U.if_read & AESL_inst_model_test.feat_arr_U.if_empty_n;
    assign fifo_intf_21.wr_en = AESL_inst_model_test.feat_arr_U.if_write & AESL_inst_model_test.feat_arr_U.if_full_n;
    assign fifo_intf_21.fifo_rd_block = 0;
    assign fifo_intf_21.fifo_wr_block = 0;
    assign fifo_intf_21.finish = finish;
    csv_file_dump fifo_csv_dumper_21;
    csv_file_dump cstatus_csv_dumper_21;
    df_fifo_monitor fifo_monitor_21;
    df_fifo_intf fifo_intf_22(clock,reset);
    assign fifo_intf_22.rd_en = AESL_inst_model_test.feat_arr_1_U.if_read & AESL_inst_model_test.feat_arr_1_U.if_empty_n;
    assign fifo_intf_22.wr_en = AESL_inst_model_test.feat_arr_1_U.if_write & AESL_inst_model_test.feat_arr_1_U.if_full_n;
    assign fifo_intf_22.fifo_rd_block = 0;
    assign fifo_intf_22.fifo_wr_block = 0;
    assign fifo_intf_22.finish = finish;
    csv_file_dump fifo_csv_dumper_22;
    csv_file_dump cstatus_csv_dumper_22;
    df_fifo_monitor fifo_monitor_22;
    df_fifo_intf fifo_intf_23(clock,reset);
    assign fifo_intf_23.rd_en = AESL_inst_model_test.feat_arr_2_U.if_read & AESL_inst_model_test.feat_arr_2_U.if_empty_n;
    assign fifo_intf_23.wr_en = AESL_inst_model_test.feat_arr_2_U.if_write & AESL_inst_model_test.feat_arr_2_U.if_full_n;
    assign fifo_intf_23.fifo_rd_block = 0;
    assign fifo_intf_23.fifo_wr_block = 0;
    assign fifo_intf_23.finish = finish;
    csv_file_dump fifo_csv_dumper_23;
    csv_file_dump cstatus_csv_dumper_23;
    df_fifo_monitor fifo_monitor_23;
    df_fifo_intf fifo_intf_24(clock,reset);
    assign fifo_intf_24.rd_en = AESL_inst_model_test.feat_arr_3_U.if_read & AESL_inst_model_test.feat_arr_3_U.if_empty_n;
    assign fifo_intf_24.wr_en = AESL_inst_model_test.feat_arr_3_U.if_write & AESL_inst_model_test.feat_arr_3_U.if_full_n;
    assign fifo_intf_24.fifo_rd_block = 0;
    assign fifo_intf_24.fifo_wr_block = 0;
    assign fifo_intf_24.finish = finish;
    csv_file_dump fifo_csv_dumper_24;
    csv_file_dump cstatus_csv_dumper_24;
    df_fifo_monitor fifo_monitor_24;
    df_fifo_intf fifo_intf_25(clock,reset);
    assign fifo_intf_25.rd_en = AESL_inst_model_test.feat_arr_4_U.if_read & AESL_inst_model_test.feat_arr_4_U.if_empty_n;
    assign fifo_intf_25.wr_en = AESL_inst_model_test.feat_arr_4_U.if_write & AESL_inst_model_test.feat_arr_4_U.if_full_n;
    assign fifo_intf_25.fifo_rd_block = 0;
    assign fifo_intf_25.fifo_wr_block = 0;
    assign fifo_intf_25.finish = finish;
    csv_file_dump fifo_csv_dumper_25;
    csv_file_dump cstatus_csv_dumper_25;
    df_fifo_monitor fifo_monitor_25;
    df_fifo_intf fifo_intf_26(clock,reset);
    assign fifo_intf_26.rd_en = AESL_inst_model_test.feat_arr_5_U.if_read & AESL_inst_model_test.feat_arr_5_U.if_empty_n;
    assign fifo_intf_26.wr_en = AESL_inst_model_test.feat_arr_5_U.if_write & AESL_inst_model_test.feat_arr_5_U.if_full_n;
    assign fifo_intf_26.fifo_rd_block = 0;
    assign fifo_intf_26.fifo_wr_block = 0;
    assign fifo_intf_26.finish = finish;
    csv_file_dump fifo_csv_dumper_26;
    csv_file_dump cstatus_csv_dumper_26;
    df_fifo_monitor fifo_monitor_26;
    df_fifo_intf fifo_intf_27(clock,reset);
    assign fifo_intf_27.rd_en = AESL_inst_model_test.feat_arr_6_U.if_read & AESL_inst_model_test.feat_arr_6_U.if_empty_n;
    assign fifo_intf_27.wr_en = AESL_inst_model_test.feat_arr_6_U.if_write & AESL_inst_model_test.feat_arr_6_U.if_full_n;
    assign fifo_intf_27.fifo_rd_block = 0;
    assign fifo_intf_27.fifo_wr_block = 0;
    assign fifo_intf_27.finish = finish;
    csv_file_dump fifo_csv_dumper_27;
    csv_file_dump cstatus_csv_dumper_27;
    df_fifo_monitor fifo_monitor_27;
    df_fifo_intf fifo_intf_28(clock,reset);
    assign fifo_intf_28.rd_en = AESL_inst_model_test.feat_arr_7_U.if_read & AESL_inst_model_test.feat_arr_7_U.if_empty_n;
    assign fifo_intf_28.wr_en = AESL_inst_model_test.feat_arr_7_U.if_write & AESL_inst_model_test.feat_arr_7_U.if_full_n;
    assign fifo_intf_28.fifo_rd_block = 0;
    assign fifo_intf_28.fifo_wr_block = 0;
    assign fifo_intf_28.finish = finish;
    csv_file_dump fifo_csv_dumper_28;
    csv_file_dump cstatus_csv_dumper_28;
    df_fifo_monitor fifo_monitor_28;
    df_fifo_intf fifo_intf_29(clock,reset);
    assign fifo_intf_29.rd_en = AESL_inst_model_test.feat_arr_8_U.if_read & AESL_inst_model_test.feat_arr_8_U.if_empty_n;
    assign fifo_intf_29.wr_en = AESL_inst_model_test.feat_arr_8_U.if_write & AESL_inst_model_test.feat_arr_8_U.if_full_n;
    assign fifo_intf_29.fifo_rd_block = 0;
    assign fifo_intf_29.fifo_wr_block = 0;
    assign fifo_intf_29.finish = finish;
    csv_file_dump fifo_csv_dumper_29;
    csv_file_dump cstatus_csv_dumper_29;
    df_fifo_monitor fifo_monitor_29;
    df_fifo_intf fifo_intf_30(clock,reset);
    assign fifo_intf_30.rd_en = AESL_inst_model_test.feat_arr_9_U.if_read & AESL_inst_model_test.feat_arr_9_U.if_empty_n;
    assign fifo_intf_30.wr_en = AESL_inst_model_test.feat_arr_9_U.if_write & AESL_inst_model_test.feat_arr_9_U.if_full_n;
    assign fifo_intf_30.fifo_rd_block = 0;
    assign fifo_intf_30.fifo_wr_block = 0;
    assign fifo_intf_30.finish = finish;
    csv_file_dump fifo_csv_dumper_30;
    csv_file_dump cstatus_csv_dumper_30;
    df_fifo_monitor fifo_monitor_30;

logic region_0_idle;
logic [31:0] region_0_start_cnt;
logic [31:0] region_0_done_cnt;
assign region_0_idle = (region_0_start_cnt == region_0_done_cnt) && AESL_inst_model_test.ap_start == 1'b0 ;
always @(posedge clock) begin
    if (reset == 1'b1)
        region_0_start_cnt <= 32'h0;
    else if (AESL_inst_model_test.ap_start == 1'b1 && AESL_inst_model_test.ap_ready == 1'b1)
        region_0_start_cnt <= region_0_start_cnt + 32'h1;
    else;
end
always @(posedge clock) begin
    if (reset == 1'b1)
        region_0_done_cnt <= 32'h0;
    else if (AESL_inst_model_test.ap_done == 1'b1)
        region_0_done_cnt <= region_0_done_cnt + 32'h1;
    else;
end


    df_process_intf process_intf_1(clock,reset);
    assign process_intf_1.ap_start = AESL_inst_model_test.sparse_input_U0.ap_start;
    assign process_intf_1.ap_ready = AESL_inst_model_test.sparse_input_U0.ap_ready;
    assign process_intf_1.ap_done = AESL_inst_model_test.sparse_input_U0.ap_done;
    assign process_intf_1.ap_continue = AESL_inst_model_test.sparse_input_U0.ap_continue;
    assign process_intf_1.real_start = AESL_inst_model_test.sparse_input_U0.ap_start;
    assign process_intf_1.pin_stall = 1'b0;
    assign process_intf_1.pout_stall = 1'b0;
    assign process_intf_1.cin_stall = 1'b0;
    assign process_intf_1.cout_stall = 1'b0;
    assign process_intf_1.region_idle = region_0_idle;
    assign process_intf_1.finish = finish;
    csv_file_dump pstall_csv_dumper_1;
    csv_file_dump pstatus_csv_dumper_1;
    df_process_monitor process_monitor_1;
    df_process_intf process_intf_2(clock,reset);
    assign process_intf_2.ap_start = AESL_inst_model_test.sparse_compute_U0.ap_start;
    assign process_intf_2.ap_ready = AESL_inst_model_test.sparse_compute_U0.ap_ready;
    assign process_intf_2.ap_done = AESL_inst_model_test.sparse_compute_U0.ap_done;
    assign process_intf_2.ap_continue = AESL_inst_model_test.sparse_compute_U0.ap_continue;
    assign process_intf_2.real_start = AESL_inst_model_test.sparse_compute_U0.ap_start;
    assign process_intf_2.pin_stall = 1'b0;
    assign process_intf_2.pout_stall = 1'b0;
    assign process_intf_2.cin_stall = 1'b0;
    assign process_intf_2.cout_stall = 1'b0;
    assign process_intf_2.region_idle = region_0_idle;
    assign process_intf_2.finish = finish;
    csv_file_dump pstall_csv_dumper_2;
    csv_file_dump pstatus_csv_dumper_2;
    df_process_monitor process_monitor_2;

    nodf_module_intf module_intf_1(clock,reset);
    assign module_intf_1.ap_start = AESL_inst_model_test.ap_start;
    assign module_intf_1.ap_ready = AESL_inst_model_test.ap_ready;
    assign module_intf_1.ap_done = AESL_inst_model_test.ap_done;
    assign module_intf_1.ap_continue = 1'b1;
    assign module_intf_1.finish = finish;
    csv_file_dump mstatus_csv_dumper_1;
    nodf_module_monitor module_monitor_1;


    sample_manager sample_manager_inst;

initial begin
    sample_manager_inst = new;

    fifo_csv_dumper_1 = new("./depth1.csv");
    cstatus_csv_dumper_1 = new("./chan_status1.csv");
    fifo_monitor_1 = new(fifo_csv_dumper_1,fifo_intf_1,cstatus_csv_dumper_1);
    fifo_csv_dumper_2 = new("./depth2.csv");
    cstatus_csv_dumper_2 = new("./chan_status2.csv");
    fifo_monitor_2 = new(fifo_csv_dumper_2,fifo_intf_2,cstatus_csv_dumper_2);
    fifo_csv_dumper_3 = new("./depth3.csv");
    cstatus_csv_dumper_3 = new("./chan_status3.csv");
    fifo_monitor_3 = new(fifo_csv_dumper_3,fifo_intf_3,cstatus_csv_dumper_3);
    fifo_csv_dumper_4 = new("./depth4.csv");
    cstatus_csv_dumper_4 = new("./chan_status4.csv");
    fifo_monitor_4 = new(fifo_csv_dumper_4,fifo_intf_4,cstatus_csv_dumper_4);
    fifo_csv_dumper_5 = new("./depth5.csv");
    cstatus_csv_dumper_5 = new("./chan_status5.csv");
    fifo_monitor_5 = new(fifo_csv_dumper_5,fifo_intf_5,cstatus_csv_dumper_5);
    fifo_csv_dumper_6 = new("./depth6.csv");
    cstatus_csv_dumper_6 = new("./chan_status6.csv");
    fifo_monitor_6 = new(fifo_csv_dumper_6,fifo_intf_6,cstatus_csv_dumper_6);
    fifo_csv_dumper_7 = new("./depth7.csv");
    cstatus_csv_dumper_7 = new("./chan_status7.csv");
    fifo_monitor_7 = new(fifo_csv_dumper_7,fifo_intf_7,cstatus_csv_dumper_7);
    fifo_csv_dumper_8 = new("./depth8.csv");
    cstatus_csv_dumper_8 = new("./chan_status8.csv");
    fifo_monitor_8 = new(fifo_csv_dumper_8,fifo_intf_8,cstatus_csv_dumper_8);
    fifo_csv_dumper_9 = new("./depth9.csv");
    cstatus_csv_dumper_9 = new("./chan_status9.csv");
    fifo_monitor_9 = new(fifo_csv_dumper_9,fifo_intf_9,cstatus_csv_dumper_9);
    fifo_csv_dumper_10 = new("./depth10.csv");
    cstatus_csv_dumper_10 = new("./chan_status10.csv");
    fifo_monitor_10 = new(fifo_csv_dumper_10,fifo_intf_10,cstatus_csv_dumper_10);
    fifo_csv_dumper_11 = new("./depth11.csv");
    cstatus_csv_dumper_11 = new("./chan_status11.csv");
    fifo_monitor_11 = new(fifo_csv_dumper_11,fifo_intf_11,cstatus_csv_dumper_11);
    fifo_csv_dumper_12 = new("./depth12.csv");
    cstatus_csv_dumper_12 = new("./chan_status12.csv");
    fifo_monitor_12 = new(fifo_csv_dumper_12,fifo_intf_12,cstatus_csv_dumper_12);
    fifo_csv_dumper_13 = new("./depth13.csv");
    cstatus_csv_dumper_13 = new("./chan_status13.csv");
    fifo_monitor_13 = new(fifo_csv_dumper_13,fifo_intf_13,cstatus_csv_dumper_13);
    fifo_csv_dumper_14 = new("./depth14.csv");
    cstatus_csv_dumper_14 = new("./chan_status14.csv");
    fifo_monitor_14 = new(fifo_csv_dumper_14,fifo_intf_14,cstatus_csv_dumper_14);
    fifo_csv_dumper_15 = new("./depth15.csv");
    cstatus_csv_dumper_15 = new("./chan_status15.csv");
    fifo_monitor_15 = new(fifo_csv_dumper_15,fifo_intf_15,cstatus_csv_dumper_15);
    fifo_csv_dumper_16 = new("./depth16.csv");
    cstatus_csv_dumper_16 = new("./chan_status16.csv");
    fifo_monitor_16 = new(fifo_csv_dumper_16,fifo_intf_16,cstatus_csv_dumper_16);
    fifo_csv_dumper_17 = new("./depth17.csv");
    cstatus_csv_dumper_17 = new("./chan_status17.csv");
    fifo_monitor_17 = new(fifo_csv_dumper_17,fifo_intf_17,cstatus_csv_dumper_17);
    fifo_csv_dumper_18 = new("./depth18.csv");
    cstatus_csv_dumper_18 = new("./chan_status18.csv");
    fifo_monitor_18 = new(fifo_csv_dumper_18,fifo_intf_18,cstatus_csv_dumper_18);
    fifo_csv_dumper_19 = new("./depth19.csv");
    cstatus_csv_dumper_19 = new("./chan_status19.csv");
    fifo_monitor_19 = new(fifo_csv_dumper_19,fifo_intf_19,cstatus_csv_dumper_19);
    fifo_csv_dumper_20 = new("./depth20.csv");
    cstatus_csv_dumper_20 = new("./chan_status20.csv");
    fifo_monitor_20 = new(fifo_csv_dumper_20,fifo_intf_20,cstatus_csv_dumper_20);
    fifo_csv_dumper_21 = new("./depth21.csv");
    cstatus_csv_dumper_21 = new("./chan_status21.csv");
    fifo_monitor_21 = new(fifo_csv_dumper_21,fifo_intf_21,cstatus_csv_dumper_21);
    fifo_csv_dumper_22 = new("./depth22.csv");
    cstatus_csv_dumper_22 = new("./chan_status22.csv");
    fifo_monitor_22 = new(fifo_csv_dumper_22,fifo_intf_22,cstatus_csv_dumper_22);
    fifo_csv_dumper_23 = new("./depth23.csv");
    cstatus_csv_dumper_23 = new("./chan_status23.csv");
    fifo_monitor_23 = new(fifo_csv_dumper_23,fifo_intf_23,cstatus_csv_dumper_23);
    fifo_csv_dumper_24 = new("./depth24.csv");
    cstatus_csv_dumper_24 = new("./chan_status24.csv");
    fifo_monitor_24 = new(fifo_csv_dumper_24,fifo_intf_24,cstatus_csv_dumper_24);
    fifo_csv_dumper_25 = new("./depth25.csv");
    cstatus_csv_dumper_25 = new("./chan_status25.csv");
    fifo_monitor_25 = new(fifo_csv_dumper_25,fifo_intf_25,cstatus_csv_dumper_25);
    fifo_csv_dumper_26 = new("./depth26.csv");
    cstatus_csv_dumper_26 = new("./chan_status26.csv");
    fifo_monitor_26 = new(fifo_csv_dumper_26,fifo_intf_26,cstatus_csv_dumper_26);
    fifo_csv_dumper_27 = new("./depth27.csv");
    cstatus_csv_dumper_27 = new("./chan_status27.csv");
    fifo_monitor_27 = new(fifo_csv_dumper_27,fifo_intf_27,cstatus_csv_dumper_27);
    fifo_csv_dumper_28 = new("./depth28.csv");
    cstatus_csv_dumper_28 = new("./chan_status28.csv");
    fifo_monitor_28 = new(fifo_csv_dumper_28,fifo_intf_28,cstatus_csv_dumper_28);
    fifo_csv_dumper_29 = new("./depth29.csv");
    cstatus_csv_dumper_29 = new("./chan_status29.csv");
    fifo_monitor_29 = new(fifo_csv_dumper_29,fifo_intf_29,cstatus_csv_dumper_29);
    fifo_csv_dumper_30 = new("./depth30.csv");
    cstatus_csv_dumper_30 = new("./chan_status30.csv");
    fifo_monitor_30 = new(fifo_csv_dumper_30,fifo_intf_30,cstatus_csv_dumper_30);

    pstall_csv_dumper_1 = new("./stalling1.csv");
    pstatus_csv_dumper_1 = new("./status1.csv");
    process_monitor_1 = new(pstall_csv_dumper_1,process_intf_1,pstatus_csv_dumper_1);
    pstall_csv_dumper_2 = new("./stalling2.csv");
    pstatus_csv_dumper_2 = new("./status2.csv");
    process_monitor_2 = new(pstall_csv_dumper_2,process_intf_2,pstatus_csv_dumper_2);

    mstatus_csv_dumper_1 = new("./module_status1.csv");
    module_monitor_1 = new(module_intf_1,mstatus_csv_dumper_1);





    sample_manager_inst.add_one_monitor(fifo_monitor_1);
    sample_manager_inst.add_one_monitor(fifo_monitor_2);
    sample_manager_inst.add_one_monitor(fifo_monitor_3);
    sample_manager_inst.add_one_monitor(fifo_monitor_4);
    sample_manager_inst.add_one_monitor(fifo_monitor_5);
    sample_manager_inst.add_one_monitor(fifo_monitor_6);
    sample_manager_inst.add_one_monitor(fifo_monitor_7);
    sample_manager_inst.add_one_monitor(fifo_monitor_8);
    sample_manager_inst.add_one_monitor(fifo_monitor_9);
    sample_manager_inst.add_one_monitor(fifo_monitor_10);
    sample_manager_inst.add_one_monitor(fifo_monitor_11);
    sample_manager_inst.add_one_monitor(fifo_monitor_12);
    sample_manager_inst.add_one_monitor(fifo_monitor_13);
    sample_manager_inst.add_one_monitor(fifo_monitor_14);
    sample_manager_inst.add_one_monitor(fifo_monitor_15);
    sample_manager_inst.add_one_monitor(fifo_monitor_16);
    sample_manager_inst.add_one_monitor(fifo_monitor_17);
    sample_manager_inst.add_one_monitor(fifo_monitor_18);
    sample_manager_inst.add_one_monitor(fifo_monitor_19);
    sample_manager_inst.add_one_monitor(fifo_monitor_20);
    sample_manager_inst.add_one_monitor(fifo_monitor_21);
    sample_manager_inst.add_one_monitor(fifo_monitor_22);
    sample_manager_inst.add_one_monitor(fifo_monitor_23);
    sample_manager_inst.add_one_monitor(fifo_monitor_24);
    sample_manager_inst.add_one_monitor(fifo_monitor_25);
    sample_manager_inst.add_one_monitor(fifo_monitor_26);
    sample_manager_inst.add_one_monitor(fifo_monitor_27);
    sample_manager_inst.add_one_monitor(fifo_monitor_28);
    sample_manager_inst.add_one_monitor(fifo_monitor_29);
    sample_manager_inst.add_one_monitor(fifo_monitor_30);
    sample_manager_inst.add_one_monitor(process_monitor_1);
    sample_manager_inst.add_one_monitor(process_monitor_2);
    sample_manager_inst.add_one_monitor(module_monitor_1);
    
    fork
        sample_manager_inst.start_monitor();
        last_transaction_done;
    join
    disable fork;

    sample_manager_inst.start_dump();
end

    task last_transaction_done();
        wait(reset == 0);
        while(1) begin
            if (finish == 1'b1) begin
                @(negedge clock);
                break;
            end
            else
                @(posedge clock);
        end
    endtask


endmodule
