set SynModuleInfo {
  {SRCNAME sparse_input MODELNAME sparse_input RTLNAME model_test_sparse_input}
  {SRCNAME sparse_compute MODELNAME sparse_compute RTLNAME model_test_sparse_compute
    SUBMODULES {
      {MODELNAME model_test_mul_12s_8ns_19_1_1 RTLNAME model_test_mul_12s_8ns_19_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME model_test_mul_12s_7ns_18_1_1 RTLNAME model_test_mul_12s_7ns_18_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME model_test_mul_12s_6ns_17_1_1 RTLNAME model_test_mul_12s_6ns_17_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME model_test_mul_12s_5s_17_1_1 RTLNAME model_test_mul_12s_5s_17_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME model_test_mac_muladd_12s_6ns_19s_20_1_1 RTLNAME model_test_mac_muladd_12s_6ns_19s_20_1_1 BINDTYPE op TYPE all IMPL dsp48 LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME model_test_mac_muladd_12s_6ns_20s_20_1_1 RTLNAME model_test_mac_muladd_12s_6ns_20s_20_1_1 BINDTYPE op TYPE all IMPL dsp48 LATENCY 0 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME Block_entry16_proc MODELNAME Block_entry16_proc RTLNAME model_test_Block_entry16_proc}
  {SRCNAME Block_entry17_proc MODELNAME Block_entry17_proc RTLNAME model_test_Block_entry17_proc}
  {SRCNAME model_test MODELNAME model_test RTLNAME model_test IS_TOP 1
    SUBMODULES {
      {MODELNAME model_test_fifo_w2_d2_S RTLNAME model_test_fifo_w2_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_U}
      {MODELNAME model_test_fifo_w2_d2_S RTLNAME model_test_fifo_w2_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_1_U}
      {MODELNAME model_test_fifo_w3_d2_S RTLNAME model_test_fifo_w3_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_2_U}
      {MODELNAME model_test_fifo_w3_d2_S RTLNAME model_test_fifo_w3_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_3_U}
      {MODELNAME model_test_fifo_w3_d2_S RTLNAME model_test_fifo_w3_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_4_U}
      {MODELNAME model_test_fifo_w2_d2_S RTLNAME model_test_fifo_w2_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_5_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_6_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_7_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_8_U}
      {MODELNAME model_test_fifo_w2_d2_S RTLNAME model_test_fifo_w2_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_9_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_10_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME newret21_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_1_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_2_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_3_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_4_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_5_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_6_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_7_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_8_U}
      {MODELNAME model_test_fifo_w21_d2_S RTLNAME model_test_fifo_w21_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_out_channel_U}
      {MODELNAME model_test_fifo_w21_d2_S RTLNAME model_test_fifo_w21_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_out_load_loc_channel_U}
    }
  }
}
