set SynModuleInfo {
  {SRCNAME sparse_input MODELNAME sparse_input RTLNAME model_test_sparse_input}
  {SRCNAME sparse_compute MODELNAME sparse_compute RTLNAME model_test_sparse_compute}
  {SRCNAME model_test MODELNAME model_test RTLNAME model_test IS_TOP 1
    SUBMODULES {
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_1_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_2_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_3_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_4_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_5_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_6_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_7_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_8_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_9_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_10_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_11_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_12_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_13_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_14_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_15_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_16_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_17_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_18_U}
      {MODELNAME model_test_fifo_w4_d2_S RTLNAME model_test_fifo_w4_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME hash_arr_19_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_1_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_2_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_3_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_4_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_5_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_6_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_7_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_8_U}
      {MODELNAME model_test_fifo_w12_d2_S RTLNAME model_test_fifo_w12_d2_S BINDTYPE storage TYPE fifo IMPL srl ALLOW_PRAGMA 1 INSTNAME feat_arr_9_U}
    }
  }
}
