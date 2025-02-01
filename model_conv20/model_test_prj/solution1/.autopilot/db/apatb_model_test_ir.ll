; ModuleID = '/home/coder/sparse/model_conv20/model_test_prj/solution1/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

%"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>" = type { %"struct.ap_int_base<12, true>" }
%"struct.ap_int_base<12, true>" = type { %"struct.ssdm_int<12, true>" }
%"struct.ssdm_int<12, true>" = type { i12 }
%"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>" = type { %"struct.ap_fixed_base<25, 10, true, AP_TRN, AP_WRAP, 0>" }
%"struct.ap_fixed_base<25, 10, true, AP_TRN, AP_WRAP, 0>" = type { %"struct.ssdm_int<25, true>" }
%"struct.ssdm_int<25, true>" = type { i25 }

; Function Attrs: noinline
define void @apatb_model_test_ir(%"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"* noalias nonnull readonly "fpga.decayed.dim.hint"="100" %x_in, %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* noalias nocapture nonnull "fpga.decayed.dim.hint"="100" "partition" %layer2_out) local_unnamed_addr #0 {
entry:
  %x_in_copy103 = alloca i1200, align 512
  %layer2_out_copy_0 = alloca i25, align 512
  %layer2_out_copy_1 = alloca i25, align 512
  %layer2_out_copy_2 = alloca i25, align 512
  %layer2_out_copy_3 = alloca i25, align 512
  %layer2_out_copy_4 = alloca i25, align 512
  %layer2_out_copy_5 = alloca i25, align 512
  %layer2_out_copy_6 = alloca i25, align 512
  %layer2_out_copy_7 = alloca i25, align 512
  %layer2_out_copy_8 = alloca i25, align 512
  %layer2_out_copy_9 = alloca i25, align 512
  %layer2_out_copy_10 = alloca i25, align 512
  %layer2_out_copy_11 = alloca i25, align 512
  %layer2_out_copy_12 = alloca i25, align 512
  %layer2_out_copy_13 = alloca i25, align 512
  %layer2_out_copy_14 = alloca i25, align 512
  %layer2_out_copy_15 = alloca i25, align 512
  %layer2_out_copy_16 = alloca i25, align 512
  %layer2_out_copy_17 = alloca i25, align 512
  %layer2_out_copy_18 = alloca i25, align 512
  %layer2_out_copy_19 = alloca i25, align 512
  %layer2_out_copy_20 = alloca i25, align 512
  %layer2_out_copy_21 = alloca i25, align 512
  %layer2_out_copy_22 = alloca i25, align 512
  %layer2_out_copy_23 = alloca i25, align 512
  %layer2_out_copy_24 = alloca i25, align 512
  %layer2_out_copy_25 = alloca i25, align 512
  %layer2_out_copy_26 = alloca i25, align 512
  %layer2_out_copy_27 = alloca i25, align 512
  %layer2_out_copy_28 = alloca i25, align 512
  %layer2_out_copy_29 = alloca i25, align 512
  %layer2_out_copy_30 = alloca i25, align 512
  %layer2_out_copy_31 = alloca i25, align 512
  %layer2_out_copy_32 = alloca i25, align 512
  %layer2_out_copy_33 = alloca i25, align 512
  %layer2_out_copy_34 = alloca i25, align 512
  %layer2_out_copy_35 = alloca i25, align 512
  %layer2_out_copy_36 = alloca i25, align 512
  %layer2_out_copy_37 = alloca i25, align 512
  %layer2_out_copy_38 = alloca i25, align 512
  %layer2_out_copy_39 = alloca i25, align 512
  %layer2_out_copy_40 = alloca i25, align 512
  %layer2_out_copy_41 = alloca i25, align 512
  %layer2_out_copy_42 = alloca i25, align 512
  %layer2_out_copy_43 = alloca i25, align 512
  %layer2_out_copy_44 = alloca i25, align 512
  %layer2_out_copy_45 = alloca i25, align 512
  %layer2_out_copy_46 = alloca i25, align 512
  %layer2_out_copy_47 = alloca i25, align 512
  %layer2_out_copy_48 = alloca i25, align 512
  %layer2_out_copy_49 = alloca i25, align 512
  %layer2_out_copy_50 = alloca i25, align 512
  %layer2_out_copy_51 = alloca i25, align 512
  %layer2_out_copy_52 = alloca i25, align 512
  %layer2_out_copy_53 = alloca i25, align 512
  %layer2_out_copy_54 = alloca i25, align 512
  %layer2_out_copy_55 = alloca i25, align 512
  %layer2_out_copy_56 = alloca i25, align 512
  %layer2_out_copy_57 = alloca i25, align 512
  %layer2_out_copy_58 = alloca i25, align 512
  %layer2_out_copy_59 = alloca i25, align 512
  %layer2_out_copy_60 = alloca i25, align 512
  %layer2_out_copy_61 = alloca i25, align 512
  %layer2_out_copy_62 = alloca i25, align 512
  %layer2_out_copy_63 = alloca i25, align 512
  %layer2_out_copy_64 = alloca i25, align 512
  %layer2_out_copy_65 = alloca i25, align 512
  %layer2_out_copy_66 = alloca i25, align 512
  %layer2_out_copy_67 = alloca i25, align 512
  %layer2_out_copy_68 = alloca i25, align 512
  %layer2_out_copy_69 = alloca i25, align 512
  %layer2_out_copy_70 = alloca i25, align 512
  %layer2_out_copy_71 = alloca i25, align 512
  %layer2_out_copy_72 = alloca i25, align 512
  %layer2_out_copy_73 = alloca i25, align 512
  %layer2_out_copy_74 = alloca i25, align 512
  %layer2_out_copy_75 = alloca i25, align 512
  %layer2_out_copy_76 = alloca i25, align 512
  %layer2_out_copy_77 = alloca i25, align 512
  %layer2_out_copy_78 = alloca i25, align 512
  %layer2_out_copy_79 = alloca i25, align 512
  %layer2_out_copy_80 = alloca i25, align 512
  %layer2_out_copy_81 = alloca i25, align 512
  %layer2_out_copy_82 = alloca i25, align 512
  %layer2_out_copy_83 = alloca i25, align 512
  %layer2_out_copy_84 = alloca i25, align 512
  %layer2_out_copy_85 = alloca i25, align 512
  %layer2_out_copy_86 = alloca i25, align 512
  %layer2_out_copy_87 = alloca i25, align 512
  %layer2_out_copy_88 = alloca i25, align 512
  %layer2_out_copy_89 = alloca i25, align 512
  %layer2_out_copy_90 = alloca i25, align 512
  %layer2_out_copy_91 = alloca i25, align 512
  %layer2_out_copy_92 = alloca i25, align 512
  %layer2_out_copy_93 = alloca i25, align 512
  %layer2_out_copy_94 = alloca i25, align 512
  %layer2_out_copy_95 = alloca i25, align 512
  %layer2_out_copy_96 = alloca i25, align 512
  %layer2_out_copy_97 = alloca i25, align 512
  %layer2_out_copy_98 = alloca i25, align 512
  %layer2_out_copy_99 = alloca i25, align 512
  %0 = bitcast %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"* %x_in to [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]*
  %1 = bitcast %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* %layer2_out to [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]*
  call void @copy_in([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* nonnull %0, i1200* nonnull align 512 %x_in_copy103, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* nonnull %1, i25* nonnull align 512 %layer2_out_copy_0, i25* nonnull align 512 %layer2_out_copy_1, i25* nonnull align 512 %layer2_out_copy_2, i25* nonnull align 512 %layer2_out_copy_3, i25* nonnull align 512 %layer2_out_copy_4, i25* nonnull align 512 %layer2_out_copy_5, i25* nonnull align 512 %layer2_out_copy_6, i25* nonnull align 512 %layer2_out_copy_7, i25* nonnull align 512 %layer2_out_copy_8, i25* nonnull align 512 %layer2_out_copy_9, i25* nonnull align 512 %layer2_out_copy_10, i25* nonnull align 512 %layer2_out_copy_11, i25* nonnull align 512 %layer2_out_copy_12, i25* nonnull align 512 %layer2_out_copy_13, i25* nonnull align 512 %layer2_out_copy_14, i25* nonnull align 512 %layer2_out_copy_15, i25* nonnull align 512 %layer2_out_copy_16, i25* nonnull align 512 %layer2_out_copy_17, i25* nonnull align 512 %layer2_out_copy_18, i25* nonnull align 512 %layer2_out_copy_19, i25* nonnull align 512 %layer2_out_copy_20, i25* nonnull align 512 %layer2_out_copy_21, i25* nonnull align 512 %layer2_out_copy_22, i25* nonnull align 512 %layer2_out_copy_23, i25* nonnull align 512 %layer2_out_copy_24, i25* nonnull align 512 %layer2_out_copy_25, i25* nonnull align 512 %layer2_out_copy_26, i25* nonnull align 512 %layer2_out_copy_27, i25* nonnull align 512 %layer2_out_copy_28, i25* nonnull align 512 %layer2_out_copy_29, i25* nonnull align 512 %layer2_out_copy_30, i25* nonnull align 512 %layer2_out_copy_31, i25* nonnull align 512 %layer2_out_copy_32, i25* nonnull align 512 %layer2_out_copy_33, i25* nonnull align 512 %layer2_out_copy_34, i25* nonnull align 512 %layer2_out_copy_35, i25* nonnull align 512 %layer2_out_copy_36, i25* nonnull align 512 %layer2_out_copy_37, i25* nonnull align 512 %layer2_out_copy_38, i25* nonnull align 512 %layer2_out_copy_39, i25* nonnull align 512 %layer2_out_copy_40, i25* nonnull align 512 %layer2_out_copy_41, i25* nonnull align 512 %layer2_out_copy_42, i25* nonnull align 512 %layer2_out_copy_43, i25* nonnull align 512 %layer2_out_copy_44, i25* nonnull align 512 %layer2_out_copy_45, i25* nonnull align 512 %layer2_out_copy_46, i25* nonnull align 512 %layer2_out_copy_47, i25* nonnull align 512 %layer2_out_copy_48, i25* nonnull align 512 %layer2_out_copy_49, i25* nonnull align 512 %layer2_out_copy_50, i25* nonnull align 512 %layer2_out_copy_51, i25* nonnull align 512 %layer2_out_copy_52, i25* nonnull align 512 %layer2_out_copy_53, i25* nonnull align 512 %layer2_out_copy_54, i25* nonnull align 512 %layer2_out_copy_55, i25* nonnull align 512 %layer2_out_copy_56, i25* nonnull align 512 %layer2_out_copy_57, i25* nonnull align 512 %layer2_out_copy_58, i25* nonnull align 512 %layer2_out_copy_59, i25* nonnull align 512 %layer2_out_copy_60, i25* nonnull align 512 %layer2_out_copy_61, i25* nonnull align 512 %layer2_out_copy_62, i25* nonnull align 512 %layer2_out_copy_63, i25* nonnull align 512 %layer2_out_copy_64, i25* nonnull align 512 %layer2_out_copy_65, i25* nonnull align 512 %layer2_out_copy_66, i25* nonnull align 512 %layer2_out_copy_67, i25* nonnull align 512 %layer2_out_copy_68, i25* nonnull align 512 %layer2_out_copy_69, i25* nonnull align 512 %layer2_out_copy_70, i25* nonnull align 512 %layer2_out_copy_71, i25* nonnull align 512 %layer2_out_copy_72, i25* nonnull align 512 %layer2_out_copy_73, i25* nonnull align 512 %layer2_out_copy_74, i25* nonnull align 512 %layer2_out_copy_75, i25* nonnull align 512 %layer2_out_copy_76, i25* nonnull align 512 %layer2_out_copy_77, i25* nonnull align 512 %layer2_out_copy_78, i25* nonnull align 512 %layer2_out_copy_79, i25* nonnull align 512 %layer2_out_copy_80, i25* nonnull align 512 %layer2_out_copy_81, i25* nonnull align 512 %layer2_out_copy_82, i25* nonnull align 512 %layer2_out_copy_83, i25* nonnull align 512 %layer2_out_copy_84, i25* nonnull align 512 %layer2_out_copy_85, i25* nonnull align 512 %layer2_out_copy_86, i25* nonnull align 512 %layer2_out_copy_87, i25* nonnull align 512 %layer2_out_copy_88, i25* nonnull align 512 %layer2_out_copy_89, i25* nonnull align 512 %layer2_out_copy_90, i25* nonnull align 512 %layer2_out_copy_91, i25* nonnull align 512 %layer2_out_copy_92, i25* nonnull align 512 %layer2_out_copy_93, i25* nonnull align 512 %layer2_out_copy_94, i25* nonnull align 512 %layer2_out_copy_95, i25* nonnull align 512 %layer2_out_copy_96, i25* nonnull align 512 %layer2_out_copy_97, i25* nonnull align 512 %layer2_out_copy_98, i25* nonnull align 512 %layer2_out_copy_99)
  call void @apatb_model_test_hw(i1200* %x_in_copy103, i25* %layer2_out_copy_0, i25* %layer2_out_copy_1, i25* %layer2_out_copy_2, i25* %layer2_out_copy_3, i25* %layer2_out_copy_4, i25* %layer2_out_copy_5, i25* %layer2_out_copy_6, i25* %layer2_out_copy_7, i25* %layer2_out_copy_8, i25* %layer2_out_copy_9, i25* %layer2_out_copy_10, i25* %layer2_out_copy_11, i25* %layer2_out_copy_12, i25* %layer2_out_copy_13, i25* %layer2_out_copy_14, i25* %layer2_out_copy_15, i25* %layer2_out_copy_16, i25* %layer2_out_copy_17, i25* %layer2_out_copy_18, i25* %layer2_out_copy_19, i25* %layer2_out_copy_20, i25* %layer2_out_copy_21, i25* %layer2_out_copy_22, i25* %layer2_out_copy_23, i25* %layer2_out_copy_24, i25* %layer2_out_copy_25, i25* %layer2_out_copy_26, i25* %layer2_out_copy_27, i25* %layer2_out_copy_28, i25* %layer2_out_copy_29, i25* %layer2_out_copy_30, i25* %layer2_out_copy_31, i25* %layer2_out_copy_32, i25* %layer2_out_copy_33, i25* %layer2_out_copy_34, i25* %layer2_out_copy_35, i25* %layer2_out_copy_36, i25* %layer2_out_copy_37, i25* %layer2_out_copy_38, i25* %layer2_out_copy_39, i25* %layer2_out_copy_40, i25* %layer2_out_copy_41, i25* %layer2_out_copy_42, i25* %layer2_out_copy_43, i25* %layer2_out_copy_44, i25* %layer2_out_copy_45, i25* %layer2_out_copy_46, i25* %layer2_out_copy_47, i25* %layer2_out_copy_48, i25* %layer2_out_copy_49, i25* %layer2_out_copy_50, i25* %layer2_out_copy_51, i25* %layer2_out_copy_52, i25* %layer2_out_copy_53, i25* %layer2_out_copy_54, i25* %layer2_out_copy_55, i25* %layer2_out_copy_56, i25* %layer2_out_copy_57, i25* %layer2_out_copy_58, i25* %layer2_out_copy_59, i25* %layer2_out_copy_60, i25* %layer2_out_copy_61, i25* %layer2_out_copy_62, i25* %layer2_out_copy_63, i25* %layer2_out_copy_64, i25* %layer2_out_copy_65, i25* %layer2_out_copy_66, i25* %layer2_out_copy_67, i25* %layer2_out_copy_68, i25* %layer2_out_copy_69, i25* %layer2_out_copy_70, i25* %layer2_out_copy_71, i25* %layer2_out_copy_72, i25* %layer2_out_copy_73, i25* %layer2_out_copy_74, i25* %layer2_out_copy_75, i25* %layer2_out_copy_76, i25* %layer2_out_copy_77, i25* %layer2_out_copy_78, i25* %layer2_out_copy_79, i25* %layer2_out_copy_80, i25* %layer2_out_copy_81, i25* %layer2_out_copy_82, i25* %layer2_out_copy_83, i25* %layer2_out_copy_84, i25* %layer2_out_copy_85, i25* %layer2_out_copy_86, i25* %layer2_out_copy_87, i25* %layer2_out_copy_88, i25* %layer2_out_copy_89, i25* %layer2_out_copy_90, i25* %layer2_out_copy_91, i25* %layer2_out_copy_92, i25* %layer2_out_copy_93, i25* %layer2_out_copy_94, i25* %layer2_out_copy_95, i25* %layer2_out_copy_96, i25* %layer2_out_copy_97, i25* %layer2_out_copy_98, i25* %layer2_out_copy_99)
  call void @copy_back([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %0, i1200* %x_in_copy103, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %1, i25* %layer2_out_copy_0, i25* %layer2_out_copy_1, i25* %layer2_out_copy_2, i25* %layer2_out_copy_3, i25* %layer2_out_copy_4, i25* %layer2_out_copy_5, i25* %layer2_out_copy_6, i25* %layer2_out_copy_7, i25* %layer2_out_copy_8, i25* %layer2_out_copy_9, i25* %layer2_out_copy_10, i25* %layer2_out_copy_11, i25* %layer2_out_copy_12, i25* %layer2_out_copy_13, i25* %layer2_out_copy_14, i25* %layer2_out_copy_15, i25* %layer2_out_copy_16, i25* %layer2_out_copy_17, i25* %layer2_out_copy_18, i25* %layer2_out_copy_19, i25* %layer2_out_copy_20, i25* %layer2_out_copy_21, i25* %layer2_out_copy_22, i25* %layer2_out_copy_23, i25* %layer2_out_copy_24, i25* %layer2_out_copy_25, i25* %layer2_out_copy_26, i25* %layer2_out_copy_27, i25* %layer2_out_copy_28, i25* %layer2_out_copy_29, i25* %layer2_out_copy_30, i25* %layer2_out_copy_31, i25* %layer2_out_copy_32, i25* %layer2_out_copy_33, i25* %layer2_out_copy_34, i25* %layer2_out_copy_35, i25* %layer2_out_copy_36, i25* %layer2_out_copy_37, i25* %layer2_out_copy_38, i25* %layer2_out_copy_39, i25* %layer2_out_copy_40, i25* %layer2_out_copy_41, i25* %layer2_out_copy_42, i25* %layer2_out_copy_43, i25* %layer2_out_copy_44, i25* %layer2_out_copy_45, i25* %layer2_out_copy_46, i25* %layer2_out_copy_47, i25* %layer2_out_copy_48, i25* %layer2_out_copy_49, i25* %layer2_out_copy_50, i25* %layer2_out_copy_51, i25* %layer2_out_copy_52, i25* %layer2_out_copy_53, i25* %layer2_out_copy_54, i25* %layer2_out_copy_55, i25* %layer2_out_copy_56, i25* %layer2_out_copy_57, i25* %layer2_out_copy_58, i25* %layer2_out_copy_59, i25* %layer2_out_copy_60, i25* %layer2_out_copy_61, i25* %layer2_out_copy_62, i25* %layer2_out_copy_63, i25* %layer2_out_copy_64, i25* %layer2_out_copy_65, i25* %layer2_out_copy_66, i25* %layer2_out_copy_67, i25* %layer2_out_copy_68, i25* %layer2_out_copy_69, i25* %layer2_out_copy_70, i25* %layer2_out_copy_71, i25* %layer2_out_copy_72, i25* %layer2_out_copy_73, i25* %layer2_out_copy_74, i25* %layer2_out_copy_75, i25* %layer2_out_copy_76, i25* %layer2_out_copy_77, i25* %layer2_out_copy_78, i25* %layer2_out_copy_79, i25* %layer2_out_copy_80, i25* %layer2_out_copy_81, i25* %layer2_out_copy_82, i25* %layer2_out_copy_83, i25* %layer2_out_copy_84, i25* %layer2_out_copy_85, i25* %layer2_out_copy_86, i25* %layer2_out_copy_87, i25* %layer2_out_copy_88, i25* %layer2_out_copy_89, i25* %layer2_out_copy_90, i25* %layer2_out_copy_91, i25* %layer2_out_copy_92, i25* %layer2_out_copy_93, i25* %layer2_out_copy_94, i25* %layer2_out_copy_95, i25* %layer2_out_copy_96, i25* %layer2_out_copy_97, i25* %layer2_out_copy_98, i25* %layer2_out_copy_99)
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"([100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* "orig.arg.no"="0" %dst, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* readonly "orig.arg.no"="1" %src, i64 "orig.arg.no"="2" %num) local_unnamed_addr #1 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %src, null
  %1 = icmp eq [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %dst, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond7 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond7, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx8 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %src.addr.0.0.05 = getelementptr [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"], [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %src, i64 0, i64 %for.loop.idx8, i32 0, i32 0, i32 0
  %dst.addr.0.0.06 = getelementptr [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"], [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %dst, i64 0, i64 %for.loop.idx8, i32 0, i32 0, i32 0
  %3 = bitcast i25* %src.addr.0.0.05 to i32*
  %4 = load i32, i32* %3
  %5 = trunc i32 %4 to i25
  store i25 %5, i25* %dst.addr.0.0.06, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx8, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: nounwind
declare void @llvm.assume(i1) #2

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.33.34"(i25* "orig.arg.no"="0" "unpacked"="0.0" %dst_0, i25* "orig.arg.no"="0" "unpacked"="0.1" %dst_1, i25* "orig.arg.no"="0" "unpacked"="0.2" %dst_2, i25* "orig.arg.no"="0" "unpacked"="0.3" %dst_3, i25* "orig.arg.no"="0" "unpacked"="0.4" %dst_4, i25* "orig.arg.no"="0" "unpacked"="0.5" %dst_5, i25* "orig.arg.no"="0" "unpacked"="0.6" %dst_6, i25* "orig.arg.no"="0" "unpacked"="0.7" %dst_7, i25* "orig.arg.no"="0" "unpacked"="0.8" %dst_8, i25* "orig.arg.no"="0" "unpacked"="0.9" %dst_9, i25* "orig.arg.no"="0" "unpacked"="0.10" %dst_10, i25* "orig.arg.no"="0" "unpacked"="0.11" %dst_11, i25* "orig.arg.no"="0" "unpacked"="0.12" %dst_12, i25* "orig.arg.no"="0" "unpacked"="0.13" %dst_13, i25* "orig.arg.no"="0" "unpacked"="0.14" %dst_14, i25* "orig.arg.no"="0" "unpacked"="0.15" %dst_15, i25* "orig.arg.no"="0" "unpacked"="0.16" %dst_16, i25* "orig.arg.no"="0" "unpacked"="0.17" %dst_17, i25* "orig.arg.no"="0" "unpacked"="0.18" %dst_18, i25* "orig.arg.no"="0" "unpacked"="0.19" %dst_19, i25* "orig.arg.no"="0" "unpacked"="0.20" %dst_20, i25* "orig.arg.no"="0" "unpacked"="0.21" %dst_21, i25* "orig.arg.no"="0" "unpacked"="0.22" %dst_22, i25* "orig.arg.no"="0" "unpacked"="0.23" %dst_23, i25* "orig.arg.no"="0" "unpacked"="0.24" %dst_24, i25* "orig.arg.no"="0" "unpacked"="0.25" %dst_25, i25* "orig.arg.no"="0" "unpacked"="0.26" %dst_26, i25* "orig.arg.no"="0" "unpacked"="0.27" %dst_27, i25* "orig.arg.no"="0" "unpacked"="0.28" %dst_28, i25* "orig.arg.no"="0" "unpacked"="0.29" %dst_29, i25* "orig.arg.no"="0" "unpacked"="0.30" %dst_30, i25* "orig.arg.no"="0" "unpacked"="0.31" %dst_31, i25* "orig.arg.no"="0" "unpacked"="0.32" %dst_32, i25* "orig.arg.no"="0" "unpacked"="0.33" %dst_33, i25* "orig.arg.no"="0" "unpacked"="0.34" %dst_34, i25* "orig.arg.no"="0" "unpacked"="0.35" %dst_35, i25* "orig.arg.no"="0" "unpacked"="0.36" %dst_36, i25* "orig.arg.no"="0" "unpacked"="0.37" %dst_37, i25* "orig.arg.no"="0" "unpacked"="0.38" %dst_38, i25* "orig.arg.no"="0" "unpacked"="0.39" %dst_39, i25* "orig.arg.no"="0" "unpacked"="0.40" %dst_40, i25* "orig.arg.no"="0" "unpacked"="0.41" %dst_41, i25* "orig.arg.no"="0" "unpacked"="0.42" %dst_42, i25* "orig.arg.no"="0" "unpacked"="0.43" %dst_43, i25* "orig.arg.no"="0" "unpacked"="0.44" %dst_44, i25* "orig.arg.no"="0" "unpacked"="0.45" %dst_45, i25* "orig.arg.no"="0" "unpacked"="0.46" %dst_46, i25* "orig.arg.no"="0" "unpacked"="0.47" %dst_47, i25* "orig.arg.no"="0" "unpacked"="0.48" %dst_48, i25* "orig.arg.no"="0" "unpacked"="0.49" %dst_49, i25* "orig.arg.no"="0" "unpacked"="0.50" %dst_50, i25* "orig.arg.no"="0" "unpacked"="0.51" %dst_51, i25* "orig.arg.no"="0" "unpacked"="0.52" %dst_52, i25* "orig.arg.no"="0" "unpacked"="0.53" %dst_53, i25* "orig.arg.no"="0" "unpacked"="0.54" %dst_54, i25* "orig.arg.no"="0" "unpacked"="0.55" %dst_55, i25* "orig.arg.no"="0" "unpacked"="0.56" %dst_56, i25* "orig.arg.no"="0" "unpacked"="0.57" %dst_57, i25* "orig.arg.no"="0" "unpacked"="0.58" %dst_58, i25* "orig.arg.no"="0" "unpacked"="0.59" %dst_59, i25* "orig.arg.no"="0" "unpacked"="0.60" %dst_60, i25* "orig.arg.no"="0" "unpacked"="0.61" %dst_61, i25* "orig.arg.no"="0" "unpacked"="0.62" %dst_62, i25* "orig.arg.no"="0" "unpacked"="0.63" %dst_63, i25* "orig.arg.no"="0" "unpacked"="0.64" %dst_64, i25* "orig.arg.no"="0" "unpacked"="0.65" %dst_65, i25* "orig.arg.no"="0" "unpacked"="0.66" %dst_66, i25* "orig.arg.no"="0" "unpacked"="0.67" %dst_67, i25* "orig.arg.no"="0" "unpacked"="0.68" %dst_68, i25* "orig.arg.no"="0" "unpacked"="0.69" %dst_69, i25* "orig.arg.no"="0" "unpacked"="0.70" %dst_70, i25* "orig.arg.no"="0" "unpacked"="0.71" %dst_71, i25* "orig.arg.no"="0" "unpacked"="0.72" %dst_72, i25* "orig.arg.no"="0" "unpacked"="0.73" %dst_73, i25* "orig.arg.no"="0" "unpacked"="0.74" %dst_74, i25* "orig.arg.no"="0" "unpacked"="0.75" %dst_75, i25* "orig.arg.no"="0" "unpacked"="0.76" %dst_76, i25* "orig.arg.no"="0" "unpacked"="0.77" %dst_77, i25* "orig.arg.no"="0" "unpacked"="0.78" %dst_78, i25* "orig.arg.no"="0" "unpacked"="0.79" %dst_79, i25* "orig.arg.no"="0" "unpacked"="0.80" %dst_80, i25* "orig.arg.no"="0" "unpacked"="0.81" %dst_81, i25* "orig.arg.no"="0" "unpacked"="0.82" %dst_82, i25* "orig.arg.no"="0" "unpacked"="0.83" %dst_83, i25* "orig.arg.no"="0" "unpacked"="0.84" %dst_84, i25* "orig.arg.no"="0" "unpacked"="0.85" %dst_85, i25* "orig.arg.no"="0" "unpacked"="0.86" %dst_86, i25* "orig.arg.no"="0" "unpacked"="0.87" %dst_87, i25* "orig.arg.no"="0" "unpacked"="0.88" %dst_88, i25* "orig.arg.no"="0" "unpacked"="0.89" %dst_89, i25* "orig.arg.no"="0" "unpacked"="0.90" %dst_90, i25* "orig.arg.no"="0" "unpacked"="0.91" %dst_91, i25* "orig.arg.no"="0" "unpacked"="0.92" %dst_92, i25* "orig.arg.no"="0" "unpacked"="0.93" %dst_93, i25* "orig.arg.no"="0" "unpacked"="0.94" %dst_94, i25* "orig.arg.no"="0" "unpacked"="0.95" %dst_95, i25* "orig.arg.no"="0" "unpacked"="0.96" %dst_96, i25* "orig.arg.no"="0" "unpacked"="0.97" %dst_97, i25* "orig.arg.no"="0" "unpacked"="0.98" %dst_98, i25* "orig.arg.no"="0" "unpacked"="0.99" %dst_99, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* readonly "orig.arg.no"="1" %src, i64 "orig.arg.no"="2" %num) #1 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %src, null
  %1 = icmp eq i25* %dst_0, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond7 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond7, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %dst.addr.0.0.06.exit, %for.loop.lr.ph
  %for.loop.idx8 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %dst.addr.0.0.06.exit ]
  %3 = trunc i64 %for.loop.idx8 to i7
  %src.addr.0.0.05 = getelementptr [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"], [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %src, i64 0, i64 %for.loop.idx8, i32 0, i32 0, i32 0
  %4 = bitcast i25* %src.addr.0.0.05 to i32*
  %5 = load i32, i32* %4
  %6 = trunc i32 %5 to i25
  switch i7 %3, label %dst.addr.0.0.06.case.99 [
    i7 0, label %dst.addr.0.0.06.case.0
    i7 1, label %dst.addr.0.0.06.case.1
    i7 2, label %dst.addr.0.0.06.case.2
    i7 3, label %dst.addr.0.0.06.case.3
    i7 4, label %dst.addr.0.0.06.case.4
    i7 5, label %dst.addr.0.0.06.case.5
    i7 6, label %dst.addr.0.0.06.case.6
    i7 7, label %dst.addr.0.0.06.case.7
    i7 8, label %dst.addr.0.0.06.case.8
    i7 9, label %dst.addr.0.0.06.case.9
    i7 10, label %dst.addr.0.0.06.case.10
    i7 11, label %dst.addr.0.0.06.case.11
    i7 12, label %dst.addr.0.0.06.case.12
    i7 13, label %dst.addr.0.0.06.case.13
    i7 14, label %dst.addr.0.0.06.case.14
    i7 15, label %dst.addr.0.0.06.case.15
    i7 16, label %dst.addr.0.0.06.case.16
    i7 17, label %dst.addr.0.0.06.case.17
    i7 18, label %dst.addr.0.0.06.case.18
    i7 19, label %dst.addr.0.0.06.case.19
    i7 20, label %dst.addr.0.0.06.case.20
    i7 21, label %dst.addr.0.0.06.case.21
    i7 22, label %dst.addr.0.0.06.case.22
    i7 23, label %dst.addr.0.0.06.case.23
    i7 24, label %dst.addr.0.0.06.case.24
    i7 25, label %dst.addr.0.0.06.case.25
    i7 26, label %dst.addr.0.0.06.case.26
    i7 27, label %dst.addr.0.0.06.case.27
    i7 28, label %dst.addr.0.0.06.case.28
    i7 29, label %dst.addr.0.0.06.case.29
    i7 30, label %dst.addr.0.0.06.case.30
    i7 31, label %dst.addr.0.0.06.case.31
    i7 32, label %dst.addr.0.0.06.case.32
    i7 33, label %dst.addr.0.0.06.case.33
    i7 34, label %dst.addr.0.0.06.case.34
    i7 35, label %dst.addr.0.0.06.case.35
    i7 36, label %dst.addr.0.0.06.case.36
    i7 37, label %dst.addr.0.0.06.case.37
    i7 38, label %dst.addr.0.0.06.case.38
    i7 39, label %dst.addr.0.0.06.case.39
    i7 40, label %dst.addr.0.0.06.case.40
    i7 41, label %dst.addr.0.0.06.case.41
    i7 42, label %dst.addr.0.0.06.case.42
    i7 43, label %dst.addr.0.0.06.case.43
    i7 44, label %dst.addr.0.0.06.case.44
    i7 45, label %dst.addr.0.0.06.case.45
    i7 46, label %dst.addr.0.0.06.case.46
    i7 47, label %dst.addr.0.0.06.case.47
    i7 48, label %dst.addr.0.0.06.case.48
    i7 49, label %dst.addr.0.0.06.case.49
    i7 50, label %dst.addr.0.0.06.case.50
    i7 51, label %dst.addr.0.0.06.case.51
    i7 52, label %dst.addr.0.0.06.case.52
    i7 53, label %dst.addr.0.0.06.case.53
    i7 54, label %dst.addr.0.0.06.case.54
    i7 55, label %dst.addr.0.0.06.case.55
    i7 56, label %dst.addr.0.0.06.case.56
    i7 57, label %dst.addr.0.0.06.case.57
    i7 58, label %dst.addr.0.0.06.case.58
    i7 59, label %dst.addr.0.0.06.case.59
    i7 60, label %dst.addr.0.0.06.case.60
    i7 61, label %dst.addr.0.0.06.case.61
    i7 62, label %dst.addr.0.0.06.case.62
    i7 63, label %dst.addr.0.0.06.case.63
    i7 -64, label %dst.addr.0.0.06.case.64
    i7 -63, label %dst.addr.0.0.06.case.65
    i7 -62, label %dst.addr.0.0.06.case.66
    i7 -61, label %dst.addr.0.0.06.case.67
    i7 -60, label %dst.addr.0.0.06.case.68
    i7 -59, label %dst.addr.0.0.06.case.69
    i7 -58, label %dst.addr.0.0.06.case.70
    i7 -57, label %dst.addr.0.0.06.case.71
    i7 -56, label %dst.addr.0.0.06.case.72
    i7 -55, label %dst.addr.0.0.06.case.73
    i7 -54, label %dst.addr.0.0.06.case.74
    i7 -53, label %dst.addr.0.0.06.case.75
    i7 -52, label %dst.addr.0.0.06.case.76
    i7 -51, label %dst.addr.0.0.06.case.77
    i7 -50, label %dst.addr.0.0.06.case.78
    i7 -49, label %dst.addr.0.0.06.case.79
    i7 -48, label %dst.addr.0.0.06.case.80
    i7 -47, label %dst.addr.0.0.06.case.81
    i7 -46, label %dst.addr.0.0.06.case.82
    i7 -45, label %dst.addr.0.0.06.case.83
    i7 -44, label %dst.addr.0.0.06.case.84
    i7 -43, label %dst.addr.0.0.06.case.85
    i7 -42, label %dst.addr.0.0.06.case.86
    i7 -41, label %dst.addr.0.0.06.case.87
    i7 -40, label %dst.addr.0.0.06.case.88
    i7 -39, label %dst.addr.0.0.06.case.89
    i7 -38, label %dst.addr.0.0.06.case.90
    i7 -37, label %dst.addr.0.0.06.case.91
    i7 -36, label %dst.addr.0.0.06.case.92
    i7 -35, label %dst.addr.0.0.06.case.93
    i7 -34, label %dst.addr.0.0.06.case.94
    i7 -33, label %dst.addr.0.0.06.case.95
    i7 -32, label %dst.addr.0.0.06.case.96
    i7 -31, label %dst.addr.0.0.06.case.97
    i7 -30, label %dst.addr.0.0.06.case.98
  ]

dst.addr.0.0.06.case.0:                           ; preds = %for.loop
  store i25 %6, i25* %dst_0, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.1:                           ; preds = %for.loop
  store i25 %6, i25* %dst_1, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.2:                           ; preds = %for.loop
  store i25 %6, i25* %dst_2, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.3:                           ; preds = %for.loop
  store i25 %6, i25* %dst_3, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.4:                           ; preds = %for.loop
  store i25 %6, i25* %dst_4, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.5:                           ; preds = %for.loop
  store i25 %6, i25* %dst_5, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.6:                           ; preds = %for.loop
  store i25 %6, i25* %dst_6, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.7:                           ; preds = %for.loop
  store i25 %6, i25* %dst_7, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.8:                           ; preds = %for.loop
  store i25 %6, i25* %dst_8, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.9:                           ; preds = %for.loop
  store i25 %6, i25* %dst_9, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.10:                          ; preds = %for.loop
  store i25 %6, i25* %dst_10, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.11:                          ; preds = %for.loop
  store i25 %6, i25* %dst_11, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.12:                          ; preds = %for.loop
  store i25 %6, i25* %dst_12, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.13:                          ; preds = %for.loop
  store i25 %6, i25* %dst_13, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.14:                          ; preds = %for.loop
  store i25 %6, i25* %dst_14, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.15:                          ; preds = %for.loop
  store i25 %6, i25* %dst_15, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.16:                          ; preds = %for.loop
  store i25 %6, i25* %dst_16, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.17:                          ; preds = %for.loop
  store i25 %6, i25* %dst_17, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.18:                          ; preds = %for.loop
  store i25 %6, i25* %dst_18, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.19:                          ; preds = %for.loop
  store i25 %6, i25* %dst_19, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.20:                          ; preds = %for.loop
  store i25 %6, i25* %dst_20, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.21:                          ; preds = %for.loop
  store i25 %6, i25* %dst_21, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.22:                          ; preds = %for.loop
  store i25 %6, i25* %dst_22, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.23:                          ; preds = %for.loop
  store i25 %6, i25* %dst_23, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.24:                          ; preds = %for.loop
  store i25 %6, i25* %dst_24, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.25:                          ; preds = %for.loop
  store i25 %6, i25* %dst_25, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.26:                          ; preds = %for.loop
  store i25 %6, i25* %dst_26, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.27:                          ; preds = %for.loop
  store i25 %6, i25* %dst_27, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.28:                          ; preds = %for.loop
  store i25 %6, i25* %dst_28, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.29:                          ; preds = %for.loop
  store i25 %6, i25* %dst_29, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.30:                          ; preds = %for.loop
  store i25 %6, i25* %dst_30, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.31:                          ; preds = %for.loop
  store i25 %6, i25* %dst_31, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.32:                          ; preds = %for.loop
  store i25 %6, i25* %dst_32, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.33:                          ; preds = %for.loop
  store i25 %6, i25* %dst_33, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.34:                          ; preds = %for.loop
  store i25 %6, i25* %dst_34, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.35:                          ; preds = %for.loop
  store i25 %6, i25* %dst_35, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.36:                          ; preds = %for.loop
  store i25 %6, i25* %dst_36, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.37:                          ; preds = %for.loop
  store i25 %6, i25* %dst_37, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.38:                          ; preds = %for.loop
  store i25 %6, i25* %dst_38, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.39:                          ; preds = %for.loop
  store i25 %6, i25* %dst_39, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.40:                          ; preds = %for.loop
  store i25 %6, i25* %dst_40, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.41:                          ; preds = %for.loop
  store i25 %6, i25* %dst_41, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.42:                          ; preds = %for.loop
  store i25 %6, i25* %dst_42, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.43:                          ; preds = %for.loop
  store i25 %6, i25* %dst_43, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.44:                          ; preds = %for.loop
  store i25 %6, i25* %dst_44, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.45:                          ; preds = %for.loop
  store i25 %6, i25* %dst_45, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.46:                          ; preds = %for.loop
  store i25 %6, i25* %dst_46, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.47:                          ; preds = %for.loop
  store i25 %6, i25* %dst_47, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.48:                          ; preds = %for.loop
  store i25 %6, i25* %dst_48, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.49:                          ; preds = %for.loop
  store i25 %6, i25* %dst_49, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.50:                          ; preds = %for.loop
  store i25 %6, i25* %dst_50, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.51:                          ; preds = %for.loop
  store i25 %6, i25* %dst_51, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.52:                          ; preds = %for.loop
  store i25 %6, i25* %dst_52, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.53:                          ; preds = %for.loop
  store i25 %6, i25* %dst_53, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.54:                          ; preds = %for.loop
  store i25 %6, i25* %dst_54, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.55:                          ; preds = %for.loop
  store i25 %6, i25* %dst_55, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.56:                          ; preds = %for.loop
  store i25 %6, i25* %dst_56, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.57:                          ; preds = %for.loop
  store i25 %6, i25* %dst_57, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.58:                          ; preds = %for.loop
  store i25 %6, i25* %dst_58, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.59:                          ; preds = %for.loop
  store i25 %6, i25* %dst_59, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.60:                          ; preds = %for.loop
  store i25 %6, i25* %dst_60, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.61:                          ; preds = %for.loop
  store i25 %6, i25* %dst_61, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.62:                          ; preds = %for.loop
  store i25 %6, i25* %dst_62, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.63:                          ; preds = %for.loop
  store i25 %6, i25* %dst_63, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.64:                          ; preds = %for.loop
  store i25 %6, i25* %dst_64, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.65:                          ; preds = %for.loop
  store i25 %6, i25* %dst_65, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.66:                          ; preds = %for.loop
  store i25 %6, i25* %dst_66, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.67:                          ; preds = %for.loop
  store i25 %6, i25* %dst_67, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.68:                          ; preds = %for.loop
  store i25 %6, i25* %dst_68, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.69:                          ; preds = %for.loop
  store i25 %6, i25* %dst_69, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.70:                          ; preds = %for.loop
  store i25 %6, i25* %dst_70, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.71:                          ; preds = %for.loop
  store i25 %6, i25* %dst_71, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.72:                          ; preds = %for.loop
  store i25 %6, i25* %dst_72, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.73:                          ; preds = %for.loop
  store i25 %6, i25* %dst_73, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.74:                          ; preds = %for.loop
  store i25 %6, i25* %dst_74, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.75:                          ; preds = %for.loop
  store i25 %6, i25* %dst_75, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.76:                          ; preds = %for.loop
  store i25 %6, i25* %dst_76, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.77:                          ; preds = %for.loop
  store i25 %6, i25* %dst_77, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.78:                          ; preds = %for.loop
  store i25 %6, i25* %dst_78, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.79:                          ; preds = %for.loop
  store i25 %6, i25* %dst_79, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.80:                          ; preds = %for.loop
  store i25 %6, i25* %dst_80, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.81:                          ; preds = %for.loop
  store i25 %6, i25* %dst_81, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.82:                          ; preds = %for.loop
  store i25 %6, i25* %dst_82, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.83:                          ; preds = %for.loop
  store i25 %6, i25* %dst_83, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.84:                          ; preds = %for.loop
  store i25 %6, i25* %dst_84, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.85:                          ; preds = %for.loop
  store i25 %6, i25* %dst_85, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.86:                          ; preds = %for.loop
  store i25 %6, i25* %dst_86, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.87:                          ; preds = %for.loop
  store i25 %6, i25* %dst_87, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.88:                          ; preds = %for.loop
  store i25 %6, i25* %dst_88, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.89:                          ; preds = %for.loop
  store i25 %6, i25* %dst_89, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.90:                          ; preds = %for.loop
  store i25 %6, i25* %dst_90, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.91:                          ; preds = %for.loop
  store i25 %6, i25* %dst_91, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.92:                          ; preds = %for.loop
  store i25 %6, i25* %dst_92, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.93:                          ; preds = %for.loop
  store i25 %6, i25* %dst_93, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.94:                          ; preds = %for.loop
  store i25 %6, i25* %dst_94, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.95:                          ; preds = %for.loop
  store i25 %6, i25* %dst_95, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.96:                          ; preds = %for.loop
  store i25 %6, i25* %dst_96, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.97:                          ; preds = %for.loop
  store i25 %6, i25* %dst_97, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.98:                          ; preds = %for.loop
  store i25 %6, i25* %dst_98, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.99:                          ; preds = %for.loop
  %7 = icmp eq i7 %3, -29
  call void @llvm.assume(i1 %7)
  store i25 %6, i25* %dst_99, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.exit:                             ; preds = %dst.addr.0.0.06.case.99, %dst.addr.0.0.06.case.98, %dst.addr.0.0.06.case.97, %dst.addr.0.0.06.case.96, %dst.addr.0.0.06.case.95, %dst.addr.0.0.06.case.94, %dst.addr.0.0.06.case.93, %dst.addr.0.0.06.case.92, %dst.addr.0.0.06.case.91, %dst.addr.0.0.06.case.90, %dst.addr.0.0.06.case.89, %dst.addr.0.0.06.case.88, %dst.addr.0.0.06.case.87, %dst.addr.0.0.06.case.86, %dst.addr.0.0.06.case.85, %dst.addr.0.0.06.case.84, %dst.addr.0.0.06.case.83, %dst.addr.0.0.06.case.82, %dst.addr.0.0.06.case.81, %dst.addr.0.0.06.case.80, %dst.addr.0.0.06.case.79, %dst.addr.0.0.06.case.78, %dst.addr.0.0.06.case.77, %dst.addr.0.0.06.case.76, %dst.addr.0.0.06.case.75, %dst.addr.0.0.06.case.74, %dst.addr.0.0.06.case.73, %dst.addr.0.0.06.case.72, %dst.addr.0.0.06.case.71, %dst.addr.0.0.06.case.70, %dst.addr.0.0.06.case.69, %dst.addr.0.0.06.case.68, %dst.addr.0.0.06.case.67, %dst.addr.0.0.06.case.66, %dst.addr.0.0.06.case.65, %dst.addr.0.0.06.case.64, %dst.addr.0.0.06.case.63, %dst.addr.0.0.06.case.62, %dst.addr.0.0.06.case.61, %dst.addr.0.0.06.case.60, %dst.addr.0.0.06.case.59, %dst.addr.0.0.06.case.58, %dst.addr.0.0.06.case.57, %dst.addr.0.0.06.case.56, %dst.addr.0.0.06.case.55, %dst.addr.0.0.06.case.54, %dst.addr.0.0.06.case.53, %dst.addr.0.0.06.case.52, %dst.addr.0.0.06.case.51, %dst.addr.0.0.06.case.50, %dst.addr.0.0.06.case.49, %dst.addr.0.0.06.case.48, %dst.addr.0.0.06.case.47, %dst.addr.0.0.06.case.46, %dst.addr.0.0.06.case.45, %dst.addr.0.0.06.case.44, %dst.addr.0.0.06.case.43, %dst.addr.0.0.06.case.42, %dst.addr.0.0.06.case.41, %dst.addr.0.0.06.case.40, %dst.addr.0.0.06.case.39, %dst.addr.0.0.06.case.38, %dst.addr.0.0.06.case.37, %dst.addr.0.0.06.case.36, %dst.addr.0.0.06.case.35, %dst.addr.0.0.06.case.34, %dst.addr.0.0.06.case.33, %dst.addr.0.0.06.case.32, %dst.addr.0.0.06.case.31, %dst.addr.0.0.06.case.30, %dst.addr.0.0.06.case.29, %dst.addr.0.0.06.case.28, %dst.addr.0.0.06.case.27, %dst.addr.0.0.06.case.26, %dst.addr.0.0.06.case.25, %dst.addr.0.0.06.case.24, %dst.addr.0.0.06.case.23, %dst.addr.0.0.06.case.22, %dst.addr.0.0.06.case.21, %dst.addr.0.0.06.case.20, %dst.addr.0.0.06.case.19, %dst.addr.0.0.06.case.18, %dst.addr.0.0.06.case.17, %dst.addr.0.0.06.case.16, %dst.addr.0.0.06.case.15, %dst.addr.0.0.06.case.14, %dst.addr.0.0.06.case.13, %dst.addr.0.0.06.case.12, %dst.addr.0.0.06.case.11, %dst.addr.0.0.06.case.10, %dst.addr.0.0.06.case.9, %dst.addr.0.0.06.case.8, %dst.addr.0.0.06.case.7, %dst.addr.0.0.06.case.6, %dst.addr.0.0.06.case.5, %dst.addr.0.0.06.case.4, %dst.addr.0.0.06.case.3, %dst.addr.0.0.06.case.2, %dst.addr.0.0.06.case.1, %dst.addr.0.0.06.case.0
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx8, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %dst.addr.0.0.06.exit, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.32.35"(i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.0" %dst_0, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.1" %dst_1, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.2" %dst_2, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.3" %dst_3, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.4" %dst_4, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.5" %dst_5, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.6" %dst_6, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.7" %dst_7, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.8" %dst_8, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.9" %dst_9, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.10" %dst_10, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.11" %dst_11, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.12" %dst_12, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.13" %dst_13, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.14" %dst_14, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.15" %dst_15, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.16" %dst_16, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.17" %dst_17, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.18" %dst_18, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.19" %dst_19, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.20" %dst_20, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.21" %dst_21, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.22" %dst_22, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.23" %dst_23, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.24" %dst_24, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.25" %dst_25, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.26" %dst_26, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.27" %dst_27, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.28" %dst_28, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.29" %dst_29, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.30" %dst_30, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.31" %dst_31, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.32" %dst_32, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.33" %dst_33, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.34" %dst_34, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.35" %dst_35, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.36" %dst_36, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.37" %dst_37, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.38" %dst_38, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.39" %dst_39, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.40" %dst_40, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.41" %dst_41, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.42" %dst_42, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.43" %dst_43, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.44" %dst_44, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.45" %dst_45, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.46" %dst_46, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.47" %dst_47, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.48" %dst_48, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.49" %dst_49, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.50" %dst_50, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.51" %dst_51, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.52" %dst_52, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.53" %dst_53, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.54" %dst_54, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.55" %dst_55, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.56" %dst_56, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.57" %dst_57, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.58" %dst_58, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.59" %dst_59, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.60" %dst_60, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.61" %dst_61, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.62" %dst_62, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.63" %dst_63, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.64" %dst_64, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.65" %dst_65, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.66" %dst_66, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.67" %dst_67, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.68" %dst_68, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.69" %dst_69, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.70" %dst_70, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.71" %dst_71, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.72" %dst_72, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.73" %dst_73, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.74" %dst_74, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.75" %dst_75, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.76" %dst_76, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.77" %dst_77, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.78" %dst_78, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.79" %dst_79, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.80" %dst_80, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.81" %dst_81, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.82" %dst_82, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.83" %dst_83, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.84" %dst_84, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.85" %dst_85, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.86" %dst_86, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.87" %dst_87, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.88" %dst_88, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.89" %dst_89, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.90" %dst_90, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.91" %dst_91, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.92" %dst_92, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.93" %dst_93, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.94" %dst_94, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.95" %dst_95, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.96" %dst_96, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.97" %dst_97, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.98" %dst_98, i25* noalias align 512 "orig.arg.no"="0" "unpacked"="0.99" %dst_99, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias readonly "orig.arg.no"="1" %src) #3 {
entry:
  %0 = icmp eq i25* %dst_0, null
  %1 = icmp eq [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.33.34"(i25* nonnull %dst_0, i25* %dst_1, i25* %dst_2, i25* %dst_3, i25* %dst_4, i25* %dst_5, i25* %dst_6, i25* %dst_7, i25* %dst_8, i25* %dst_9, i25* %dst_10, i25* %dst_11, i25* %dst_12, i25* %dst_13, i25* %dst_14, i25* %dst_15, i25* %dst_16, i25* %dst_17, i25* %dst_18, i25* %dst_19, i25* %dst_20, i25* %dst_21, i25* %dst_22, i25* %dst_23, i25* %dst_24, i25* %dst_25, i25* %dst_26, i25* %dst_27, i25* %dst_28, i25* %dst_29, i25* %dst_30, i25* %dst_31, i25* %dst_32, i25* %dst_33, i25* %dst_34, i25* %dst_35, i25* %dst_36, i25* %dst_37, i25* %dst_38, i25* %dst_39, i25* %dst_40, i25* %dst_41, i25* %dst_42, i25* %dst_43, i25* %dst_44, i25* %dst_45, i25* %dst_46, i25* %dst_47, i25* %dst_48, i25* %dst_49, i25* %dst_50, i25* %dst_51, i25* %dst_52, i25* %dst_53, i25* %dst_54, i25* %dst_55, i25* %dst_56, i25* %dst_57, i25* %dst_58, i25* %dst_59, i25* %dst_60, i25* %dst_61, i25* %dst_62, i25* %dst_63, i25* %dst_64, i25* %dst_65, i25* %dst_66, i25* %dst_67, i25* %dst_68, i25* %dst_69, i25* %dst_70, i25* %dst_71, i25* %dst_72, i25* %dst_73, i25* %dst_74, i25* %dst_75, i25* %dst_76, i25* %dst_77, i25* %dst_78, i25* %dst_79, i25* %dst_80, i25* %dst_81, i25* %dst_82, i25* %dst_83, i25* %dst_84, i25* %dst_85, i25* %dst_86, i25* %dst_87, i25* %dst_88, i25* %dst_89, i25* %dst_90, i25* %dst_91, i25* %dst_92, i25* %dst_93, i25* %dst_94, i25* %dst_95, i25* %dst_96, i25* %dst_97, i25* %dst_98, i25* %dst_99, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* nonnull %src, i64 100)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.45.46"([100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* "orig.arg.no"="0" %dst, i25* readonly "orig.arg.no"="1" "unpacked"="1.0" %src_0, i25* readonly "orig.arg.no"="1" "unpacked"="1.1" %src_1, i25* readonly "orig.arg.no"="1" "unpacked"="1.2" %src_2, i25* readonly "orig.arg.no"="1" "unpacked"="1.3" %src_3, i25* readonly "orig.arg.no"="1" "unpacked"="1.4" %src_4, i25* readonly "orig.arg.no"="1" "unpacked"="1.5" %src_5, i25* readonly "orig.arg.no"="1" "unpacked"="1.6" %src_6, i25* readonly "orig.arg.no"="1" "unpacked"="1.7" %src_7, i25* readonly "orig.arg.no"="1" "unpacked"="1.8" %src_8, i25* readonly "orig.arg.no"="1" "unpacked"="1.9" %src_9, i25* readonly "orig.arg.no"="1" "unpacked"="1.10" %src_10, i25* readonly "orig.arg.no"="1" "unpacked"="1.11" %src_11, i25* readonly "orig.arg.no"="1" "unpacked"="1.12" %src_12, i25* readonly "orig.arg.no"="1" "unpacked"="1.13" %src_13, i25* readonly "orig.arg.no"="1" "unpacked"="1.14" %src_14, i25* readonly "orig.arg.no"="1" "unpacked"="1.15" %src_15, i25* readonly "orig.arg.no"="1" "unpacked"="1.16" %src_16, i25* readonly "orig.arg.no"="1" "unpacked"="1.17" %src_17, i25* readonly "orig.arg.no"="1" "unpacked"="1.18" %src_18, i25* readonly "orig.arg.no"="1" "unpacked"="1.19" %src_19, i25* readonly "orig.arg.no"="1" "unpacked"="1.20" %src_20, i25* readonly "orig.arg.no"="1" "unpacked"="1.21" %src_21, i25* readonly "orig.arg.no"="1" "unpacked"="1.22" %src_22, i25* readonly "orig.arg.no"="1" "unpacked"="1.23" %src_23, i25* readonly "orig.arg.no"="1" "unpacked"="1.24" %src_24, i25* readonly "orig.arg.no"="1" "unpacked"="1.25" %src_25, i25* readonly "orig.arg.no"="1" "unpacked"="1.26" %src_26, i25* readonly "orig.arg.no"="1" "unpacked"="1.27" %src_27, i25* readonly "orig.arg.no"="1" "unpacked"="1.28" %src_28, i25* readonly "orig.arg.no"="1" "unpacked"="1.29" %src_29, i25* readonly "orig.arg.no"="1" "unpacked"="1.30" %src_30, i25* readonly "orig.arg.no"="1" "unpacked"="1.31" %src_31, i25* readonly "orig.arg.no"="1" "unpacked"="1.32" %src_32, i25* readonly "orig.arg.no"="1" "unpacked"="1.33" %src_33, i25* readonly "orig.arg.no"="1" "unpacked"="1.34" %src_34, i25* readonly "orig.arg.no"="1" "unpacked"="1.35" %src_35, i25* readonly "orig.arg.no"="1" "unpacked"="1.36" %src_36, i25* readonly "orig.arg.no"="1" "unpacked"="1.37" %src_37, i25* readonly "orig.arg.no"="1" "unpacked"="1.38" %src_38, i25* readonly "orig.arg.no"="1" "unpacked"="1.39" %src_39, i25* readonly "orig.arg.no"="1" "unpacked"="1.40" %src_40, i25* readonly "orig.arg.no"="1" "unpacked"="1.41" %src_41, i25* readonly "orig.arg.no"="1" "unpacked"="1.42" %src_42, i25* readonly "orig.arg.no"="1" "unpacked"="1.43" %src_43, i25* readonly "orig.arg.no"="1" "unpacked"="1.44" %src_44, i25* readonly "orig.arg.no"="1" "unpacked"="1.45" %src_45, i25* readonly "orig.arg.no"="1" "unpacked"="1.46" %src_46, i25* readonly "orig.arg.no"="1" "unpacked"="1.47" %src_47, i25* readonly "orig.arg.no"="1" "unpacked"="1.48" %src_48, i25* readonly "orig.arg.no"="1" "unpacked"="1.49" %src_49, i25* readonly "orig.arg.no"="1" "unpacked"="1.50" %src_50, i25* readonly "orig.arg.no"="1" "unpacked"="1.51" %src_51, i25* readonly "orig.arg.no"="1" "unpacked"="1.52" %src_52, i25* readonly "orig.arg.no"="1" "unpacked"="1.53" %src_53, i25* readonly "orig.arg.no"="1" "unpacked"="1.54" %src_54, i25* readonly "orig.arg.no"="1" "unpacked"="1.55" %src_55, i25* readonly "orig.arg.no"="1" "unpacked"="1.56" %src_56, i25* readonly "orig.arg.no"="1" "unpacked"="1.57" %src_57, i25* readonly "orig.arg.no"="1" "unpacked"="1.58" %src_58, i25* readonly "orig.arg.no"="1" "unpacked"="1.59" %src_59, i25* readonly "orig.arg.no"="1" "unpacked"="1.60" %src_60, i25* readonly "orig.arg.no"="1" "unpacked"="1.61" %src_61, i25* readonly "orig.arg.no"="1" "unpacked"="1.62" %src_62, i25* readonly "orig.arg.no"="1" "unpacked"="1.63" %src_63, i25* readonly "orig.arg.no"="1" "unpacked"="1.64" %src_64, i25* readonly "orig.arg.no"="1" "unpacked"="1.65" %src_65, i25* readonly "orig.arg.no"="1" "unpacked"="1.66" %src_66, i25* readonly "orig.arg.no"="1" "unpacked"="1.67" %src_67, i25* readonly "orig.arg.no"="1" "unpacked"="1.68" %src_68, i25* readonly "orig.arg.no"="1" "unpacked"="1.69" %src_69, i25* readonly "orig.arg.no"="1" "unpacked"="1.70" %src_70, i25* readonly "orig.arg.no"="1" "unpacked"="1.71" %src_71, i25* readonly "orig.arg.no"="1" "unpacked"="1.72" %src_72, i25* readonly "orig.arg.no"="1" "unpacked"="1.73" %src_73, i25* readonly "orig.arg.no"="1" "unpacked"="1.74" %src_74, i25* readonly "orig.arg.no"="1" "unpacked"="1.75" %src_75, i25* readonly "orig.arg.no"="1" "unpacked"="1.76" %src_76, i25* readonly "orig.arg.no"="1" "unpacked"="1.77" %src_77, i25* readonly "orig.arg.no"="1" "unpacked"="1.78" %src_78, i25* readonly "orig.arg.no"="1" "unpacked"="1.79" %src_79, i25* readonly "orig.arg.no"="1" "unpacked"="1.80" %src_80, i25* readonly "orig.arg.no"="1" "unpacked"="1.81" %src_81, i25* readonly "orig.arg.no"="1" "unpacked"="1.82" %src_82, i25* readonly "orig.arg.no"="1" "unpacked"="1.83" %src_83, i25* readonly "orig.arg.no"="1" "unpacked"="1.84" %src_84, i25* readonly "orig.arg.no"="1" "unpacked"="1.85" %src_85, i25* readonly "orig.arg.no"="1" "unpacked"="1.86" %src_86, i25* readonly "orig.arg.no"="1" "unpacked"="1.87" %src_87, i25* readonly "orig.arg.no"="1" "unpacked"="1.88" %src_88, i25* readonly "orig.arg.no"="1" "unpacked"="1.89" %src_89, i25* readonly "orig.arg.no"="1" "unpacked"="1.90" %src_90, i25* readonly "orig.arg.no"="1" "unpacked"="1.91" %src_91, i25* readonly "orig.arg.no"="1" "unpacked"="1.92" %src_92, i25* readonly "orig.arg.no"="1" "unpacked"="1.93" %src_93, i25* readonly "orig.arg.no"="1" "unpacked"="1.94" %src_94, i25* readonly "orig.arg.no"="1" "unpacked"="1.95" %src_95, i25* readonly "orig.arg.no"="1" "unpacked"="1.96" %src_96, i25* readonly "orig.arg.no"="1" "unpacked"="1.97" %src_97, i25* readonly "orig.arg.no"="1" "unpacked"="1.98" %src_98, i25* readonly "orig.arg.no"="1" "unpacked"="1.99" %src_99, i64 "orig.arg.no"="2" %num) #1 {
entry:
  %0 = icmp eq i25* %src_0, null
  %1 = icmp eq [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %dst, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond7 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond7, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %src.addr.0.0.05.exit, %for.loop.lr.ph
  %for.loop.idx8 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %src.addr.0.0.05.exit ]
  %3 = trunc i64 %for.loop.idx8 to i7
  %dst.addr.0.0.06 = getelementptr [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"], [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %dst, i64 0, i64 %for.loop.idx8, i32 0, i32 0, i32 0
  switch i7 %3, label %src.addr.0.0.05.case.99 [
    i7 0, label %src.addr.0.0.05.case.0
    i7 1, label %src.addr.0.0.05.case.1
    i7 2, label %src.addr.0.0.05.case.2
    i7 3, label %src.addr.0.0.05.case.3
    i7 4, label %src.addr.0.0.05.case.4
    i7 5, label %src.addr.0.0.05.case.5
    i7 6, label %src.addr.0.0.05.case.6
    i7 7, label %src.addr.0.0.05.case.7
    i7 8, label %src.addr.0.0.05.case.8
    i7 9, label %src.addr.0.0.05.case.9
    i7 10, label %src.addr.0.0.05.case.10
    i7 11, label %src.addr.0.0.05.case.11
    i7 12, label %src.addr.0.0.05.case.12
    i7 13, label %src.addr.0.0.05.case.13
    i7 14, label %src.addr.0.0.05.case.14
    i7 15, label %src.addr.0.0.05.case.15
    i7 16, label %src.addr.0.0.05.case.16
    i7 17, label %src.addr.0.0.05.case.17
    i7 18, label %src.addr.0.0.05.case.18
    i7 19, label %src.addr.0.0.05.case.19
    i7 20, label %src.addr.0.0.05.case.20
    i7 21, label %src.addr.0.0.05.case.21
    i7 22, label %src.addr.0.0.05.case.22
    i7 23, label %src.addr.0.0.05.case.23
    i7 24, label %src.addr.0.0.05.case.24
    i7 25, label %src.addr.0.0.05.case.25
    i7 26, label %src.addr.0.0.05.case.26
    i7 27, label %src.addr.0.0.05.case.27
    i7 28, label %src.addr.0.0.05.case.28
    i7 29, label %src.addr.0.0.05.case.29
    i7 30, label %src.addr.0.0.05.case.30
    i7 31, label %src.addr.0.0.05.case.31
    i7 32, label %src.addr.0.0.05.case.32
    i7 33, label %src.addr.0.0.05.case.33
    i7 34, label %src.addr.0.0.05.case.34
    i7 35, label %src.addr.0.0.05.case.35
    i7 36, label %src.addr.0.0.05.case.36
    i7 37, label %src.addr.0.0.05.case.37
    i7 38, label %src.addr.0.0.05.case.38
    i7 39, label %src.addr.0.0.05.case.39
    i7 40, label %src.addr.0.0.05.case.40
    i7 41, label %src.addr.0.0.05.case.41
    i7 42, label %src.addr.0.0.05.case.42
    i7 43, label %src.addr.0.0.05.case.43
    i7 44, label %src.addr.0.0.05.case.44
    i7 45, label %src.addr.0.0.05.case.45
    i7 46, label %src.addr.0.0.05.case.46
    i7 47, label %src.addr.0.0.05.case.47
    i7 48, label %src.addr.0.0.05.case.48
    i7 49, label %src.addr.0.0.05.case.49
    i7 50, label %src.addr.0.0.05.case.50
    i7 51, label %src.addr.0.0.05.case.51
    i7 52, label %src.addr.0.0.05.case.52
    i7 53, label %src.addr.0.0.05.case.53
    i7 54, label %src.addr.0.0.05.case.54
    i7 55, label %src.addr.0.0.05.case.55
    i7 56, label %src.addr.0.0.05.case.56
    i7 57, label %src.addr.0.0.05.case.57
    i7 58, label %src.addr.0.0.05.case.58
    i7 59, label %src.addr.0.0.05.case.59
    i7 60, label %src.addr.0.0.05.case.60
    i7 61, label %src.addr.0.0.05.case.61
    i7 62, label %src.addr.0.0.05.case.62
    i7 63, label %src.addr.0.0.05.case.63
    i7 -64, label %src.addr.0.0.05.case.64
    i7 -63, label %src.addr.0.0.05.case.65
    i7 -62, label %src.addr.0.0.05.case.66
    i7 -61, label %src.addr.0.0.05.case.67
    i7 -60, label %src.addr.0.0.05.case.68
    i7 -59, label %src.addr.0.0.05.case.69
    i7 -58, label %src.addr.0.0.05.case.70
    i7 -57, label %src.addr.0.0.05.case.71
    i7 -56, label %src.addr.0.0.05.case.72
    i7 -55, label %src.addr.0.0.05.case.73
    i7 -54, label %src.addr.0.0.05.case.74
    i7 -53, label %src.addr.0.0.05.case.75
    i7 -52, label %src.addr.0.0.05.case.76
    i7 -51, label %src.addr.0.0.05.case.77
    i7 -50, label %src.addr.0.0.05.case.78
    i7 -49, label %src.addr.0.0.05.case.79
    i7 -48, label %src.addr.0.0.05.case.80
    i7 -47, label %src.addr.0.0.05.case.81
    i7 -46, label %src.addr.0.0.05.case.82
    i7 -45, label %src.addr.0.0.05.case.83
    i7 -44, label %src.addr.0.0.05.case.84
    i7 -43, label %src.addr.0.0.05.case.85
    i7 -42, label %src.addr.0.0.05.case.86
    i7 -41, label %src.addr.0.0.05.case.87
    i7 -40, label %src.addr.0.0.05.case.88
    i7 -39, label %src.addr.0.0.05.case.89
    i7 -38, label %src.addr.0.0.05.case.90
    i7 -37, label %src.addr.0.0.05.case.91
    i7 -36, label %src.addr.0.0.05.case.92
    i7 -35, label %src.addr.0.0.05.case.93
    i7 -34, label %src.addr.0.0.05.case.94
    i7 -33, label %src.addr.0.0.05.case.95
    i7 -32, label %src.addr.0.0.05.case.96
    i7 -31, label %src.addr.0.0.05.case.97
    i7 -30, label %src.addr.0.0.05.case.98
  ]

src.addr.0.0.05.case.0:                           ; preds = %for.loop
  %4 = bitcast i25* %src_0 to i32*
  %5 = load i32, i32* %4
  %6 = trunc i32 %5 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.1:                           ; preds = %for.loop
  %7 = bitcast i25* %src_1 to i32*
  %8 = load i32, i32* %7
  %9 = trunc i32 %8 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.2:                           ; preds = %for.loop
  %10 = bitcast i25* %src_2 to i32*
  %11 = load i32, i32* %10
  %12 = trunc i32 %11 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.3:                           ; preds = %for.loop
  %13 = bitcast i25* %src_3 to i32*
  %14 = load i32, i32* %13
  %15 = trunc i32 %14 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.4:                           ; preds = %for.loop
  %16 = bitcast i25* %src_4 to i32*
  %17 = load i32, i32* %16
  %18 = trunc i32 %17 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.5:                           ; preds = %for.loop
  %19 = bitcast i25* %src_5 to i32*
  %20 = load i32, i32* %19
  %21 = trunc i32 %20 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.6:                           ; preds = %for.loop
  %22 = bitcast i25* %src_6 to i32*
  %23 = load i32, i32* %22
  %24 = trunc i32 %23 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.7:                           ; preds = %for.loop
  %25 = bitcast i25* %src_7 to i32*
  %26 = load i32, i32* %25
  %27 = trunc i32 %26 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.8:                           ; preds = %for.loop
  %28 = bitcast i25* %src_8 to i32*
  %29 = load i32, i32* %28
  %30 = trunc i32 %29 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.9:                           ; preds = %for.loop
  %31 = bitcast i25* %src_9 to i32*
  %32 = load i32, i32* %31
  %33 = trunc i32 %32 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.10:                          ; preds = %for.loop
  %34 = bitcast i25* %src_10 to i32*
  %35 = load i32, i32* %34
  %36 = trunc i32 %35 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.11:                          ; preds = %for.loop
  %37 = bitcast i25* %src_11 to i32*
  %38 = load i32, i32* %37
  %39 = trunc i32 %38 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.12:                          ; preds = %for.loop
  %40 = bitcast i25* %src_12 to i32*
  %41 = load i32, i32* %40
  %42 = trunc i32 %41 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.13:                          ; preds = %for.loop
  %43 = bitcast i25* %src_13 to i32*
  %44 = load i32, i32* %43
  %45 = trunc i32 %44 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.14:                          ; preds = %for.loop
  %46 = bitcast i25* %src_14 to i32*
  %47 = load i32, i32* %46
  %48 = trunc i32 %47 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.15:                          ; preds = %for.loop
  %49 = bitcast i25* %src_15 to i32*
  %50 = load i32, i32* %49
  %51 = trunc i32 %50 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.16:                          ; preds = %for.loop
  %52 = bitcast i25* %src_16 to i32*
  %53 = load i32, i32* %52
  %54 = trunc i32 %53 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.17:                          ; preds = %for.loop
  %55 = bitcast i25* %src_17 to i32*
  %56 = load i32, i32* %55
  %57 = trunc i32 %56 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.18:                          ; preds = %for.loop
  %58 = bitcast i25* %src_18 to i32*
  %59 = load i32, i32* %58
  %60 = trunc i32 %59 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.19:                          ; preds = %for.loop
  %61 = bitcast i25* %src_19 to i32*
  %62 = load i32, i32* %61
  %63 = trunc i32 %62 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.20:                          ; preds = %for.loop
  %64 = bitcast i25* %src_20 to i32*
  %65 = load i32, i32* %64
  %66 = trunc i32 %65 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.21:                          ; preds = %for.loop
  %67 = bitcast i25* %src_21 to i32*
  %68 = load i32, i32* %67
  %69 = trunc i32 %68 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.22:                          ; preds = %for.loop
  %70 = bitcast i25* %src_22 to i32*
  %71 = load i32, i32* %70
  %72 = trunc i32 %71 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.23:                          ; preds = %for.loop
  %73 = bitcast i25* %src_23 to i32*
  %74 = load i32, i32* %73
  %75 = trunc i32 %74 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.24:                          ; preds = %for.loop
  %76 = bitcast i25* %src_24 to i32*
  %77 = load i32, i32* %76
  %78 = trunc i32 %77 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.25:                          ; preds = %for.loop
  %79 = bitcast i25* %src_25 to i32*
  %80 = load i32, i32* %79
  %81 = trunc i32 %80 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.26:                          ; preds = %for.loop
  %82 = bitcast i25* %src_26 to i32*
  %83 = load i32, i32* %82
  %84 = trunc i32 %83 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.27:                          ; preds = %for.loop
  %85 = bitcast i25* %src_27 to i32*
  %86 = load i32, i32* %85
  %87 = trunc i32 %86 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.28:                          ; preds = %for.loop
  %88 = bitcast i25* %src_28 to i32*
  %89 = load i32, i32* %88
  %90 = trunc i32 %89 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.29:                          ; preds = %for.loop
  %91 = bitcast i25* %src_29 to i32*
  %92 = load i32, i32* %91
  %93 = trunc i32 %92 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.30:                          ; preds = %for.loop
  %94 = bitcast i25* %src_30 to i32*
  %95 = load i32, i32* %94
  %96 = trunc i32 %95 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.31:                          ; preds = %for.loop
  %97 = bitcast i25* %src_31 to i32*
  %98 = load i32, i32* %97
  %99 = trunc i32 %98 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.32:                          ; preds = %for.loop
  %100 = bitcast i25* %src_32 to i32*
  %101 = load i32, i32* %100
  %102 = trunc i32 %101 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.33:                          ; preds = %for.loop
  %103 = bitcast i25* %src_33 to i32*
  %104 = load i32, i32* %103
  %105 = trunc i32 %104 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.34:                          ; preds = %for.loop
  %106 = bitcast i25* %src_34 to i32*
  %107 = load i32, i32* %106
  %108 = trunc i32 %107 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.35:                          ; preds = %for.loop
  %109 = bitcast i25* %src_35 to i32*
  %110 = load i32, i32* %109
  %111 = trunc i32 %110 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.36:                          ; preds = %for.loop
  %112 = bitcast i25* %src_36 to i32*
  %113 = load i32, i32* %112
  %114 = trunc i32 %113 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.37:                          ; preds = %for.loop
  %115 = bitcast i25* %src_37 to i32*
  %116 = load i32, i32* %115
  %117 = trunc i32 %116 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.38:                          ; preds = %for.loop
  %118 = bitcast i25* %src_38 to i32*
  %119 = load i32, i32* %118
  %120 = trunc i32 %119 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.39:                          ; preds = %for.loop
  %121 = bitcast i25* %src_39 to i32*
  %122 = load i32, i32* %121
  %123 = trunc i32 %122 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.40:                          ; preds = %for.loop
  %124 = bitcast i25* %src_40 to i32*
  %125 = load i32, i32* %124
  %126 = trunc i32 %125 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.41:                          ; preds = %for.loop
  %127 = bitcast i25* %src_41 to i32*
  %128 = load i32, i32* %127
  %129 = trunc i32 %128 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.42:                          ; preds = %for.loop
  %130 = bitcast i25* %src_42 to i32*
  %131 = load i32, i32* %130
  %132 = trunc i32 %131 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.43:                          ; preds = %for.loop
  %133 = bitcast i25* %src_43 to i32*
  %134 = load i32, i32* %133
  %135 = trunc i32 %134 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.44:                          ; preds = %for.loop
  %136 = bitcast i25* %src_44 to i32*
  %137 = load i32, i32* %136
  %138 = trunc i32 %137 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.45:                          ; preds = %for.loop
  %139 = bitcast i25* %src_45 to i32*
  %140 = load i32, i32* %139
  %141 = trunc i32 %140 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.46:                          ; preds = %for.loop
  %142 = bitcast i25* %src_46 to i32*
  %143 = load i32, i32* %142
  %144 = trunc i32 %143 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.47:                          ; preds = %for.loop
  %145 = bitcast i25* %src_47 to i32*
  %146 = load i32, i32* %145
  %147 = trunc i32 %146 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.48:                          ; preds = %for.loop
  %148 = bitcast i25* %src_48 to i32*
  %149 = load i32, i32* %148
  %150 = trunc i32 %149 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.49:                          ; preds = %for.loop
  %151 = bitcast i25* %src_49 to i32*
  %152 = load i32, i32* %151
  %153 = trunc i32 %152 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.50:                          ; preds = %for.loop
  %154 = bitcast i25* %src_50 to i32*
  %155 = load i32, i32* %154
  %156 = trunc i32 %155 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.51:                          ; preds = %for.loop
  %157 = bitcast i25* %src_51 to i32*
  %158 = load i32, i32* %157
  %159 = trunc i32 %158 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.52:                          ; preds = %for.loop
  %160 = bitcast i25* %src_52 to i32*
  %161 = load i32, i32* %160
  %162 = trunc i32 %161 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.53:                          ; preds = %for.loop
  %163 = bitcast i25* %src_53 to i32*
  %164 = load i32, i32* %163
  %165 = trunc i32 %164 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.54:                          ; preds = %for.loop
  %166 = bitcast i25* %src_54 to i32*
  %167 = load i32, i32* %166
  %168 = trunc i32 %167 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.55:                          ; preds = %for.loop
  %169 = bitcast i25* %src_55 to i32*
  %170 = load i32, i32* %169
  %171 = trunc i32 %170 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.56:                          ; preds = %for.loop
  %172 = bitcast i25* %src_56 to i32*
  %173 = load i32, i32* %172
  %174 = trunc i32 %173 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.57:                          ; preds = %for.loop
  %175 = bitcast i25* %src_57 to i32*
  %176 = load i32, i32* %175
  %177 = trunc i32 %176 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.58:                          ; preds = %for.loop
  %178 = bitcast i25* %src_58 to i32*
  %179 = load i32, i32* %178
  %180 = trunc i32 %179 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.59:                          ; preds = %for.loop
  %181 = bitcast i25* %src_59 to i32*
  %182 = load i32, i32* %181
  %183 = trunc i32 %182 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.60:                          ; preds = %for.loop
  %184 = bitcast i25* %src_60 to i32*
  %185 = load i32, i32* %184
  %186 = trunc i32 %185 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.61:                          ; preds = %for.loop
  %187 = bitcast i25* %src_61 to i32*
  %188 = load i32, i32* %187
  %189 = trunc i32 %188 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.62:                          ; preds = %for.loop
  %190 = bitcast i25* %src_62 to i32*
  %191 = load i32, i32* %190
  %192 = trunc i32 %191 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.63:                          ; preds = %for.loop
  %193 = bitcast i25* %src_63 to i32*
  %194 = load i32, i32* %193
  %195 = trunc i32 %194 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.64:                          ; preds = %for.loop
  %196 = bitcast i25* %src_64 to i32*
  %197 = load i32, i32* %196
  %198 = trunc i32 %197 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.65:                          ; preds = %for.loop
  %199 = bitcast i25* %src_65 to i32*
  %200 = load i32, i32* %199
  %201 = trunc i32 %200 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.66:                          ; preds = %for.loop
  %202 = bitcast i25* %src_66 to i32*
  %203 = load i32, i32* %202
  %204 = trunc i32 %203 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.67:                          ; preds = %for.loop
  %205 = bitcast i25* %src_67 to i32*
  %206 = load i32, i32* %205
  %207 = trunc i32 %206 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.68:                          ; preds = %for.loop
  %208 = bitcast i25* %src_68 to i32*
  %209 = load i32, i32* %208
  %210 = trunc i32 %209 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.69:                          ; preds = %for.loop
  %211 = bitcast i25* %src_69 to i32*
  %212 = load i32, i32* %211
  %213 = trunc i32 %212 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.70:                          ; preds = %for.loop
  %214 = bitcast i25* %src_70 to i32*
  %215 = load i32, i32* %214
  %216 = trunc i32 %215 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.71:                          ; preds = %for.loop
  %217 = bitcast i25* %src_71 to i32*
  %218 = load i32, i32* %217
  %219 = trunc i32 %218 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.72:                          ; preds = %for.loop
  %220 = bitcast i25* %src_72 to i32*
  %221 = load i32, i32* %220
  %222 = trunc i32 %221 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.73:                          ; preds = %for.loop
  %223 = bitcast i25* %src_73 to i32*
  %224 = load i32, i32* %223
  %225 = trunc i32 %224 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.74:                          ; preds = %for.loop
  %226 = bitcast i25* %src_74 to i32*
  %227 = load i32, i32* %226
  %228 = trunc i32 %227 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.75:                          ; preds = %for.loop
  %229 = bitcast i25* %src_75 to i32*
  %230 = load i32, i32* %229
  %231 = trunc i32 %230 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.76:                          ; preds = %for.loop
  %232 = bitcast i25* %src_76 to i32*
  %233 = load i32, i32* %232
  %234 = trunc i32 %233 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.77:                          ; preds = %for.loop
  %235 = bitcast i25* %src_77 to i32*
  %236 = load i32, i32* %235
  %237 = trunc i32 %236 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.78:                          ; preds = %for.loop
  %238 = bitcast i25* %src_78 to i32*
  %239 = load i32, i32* %238
  %240 = trunc i32 %239 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.79:                          ; preds = %for.loop
  %241 = bitcast i25* %src_79 to i32*
  %242 = load i32, i32* %241
  %243 = trunc i32 %242 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.80:                          ; preds = %for.loop
  %244 = bitcast i25* %src_80 to i32*
  %245 = load i32, i32* %244
  %246 = trunc i32 %245 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.81:                          ; preds = %for.loop
  %247 = bitcast i25* %src_81 to i32*
  %248 = load i32, i32* %247
  %249 = trunc i32 %248 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.82:                          ; preds = %for.loop
  %250 = bitcast i25* %src_82 to i32*
  %251 = load i32, i32* %250
  %252 = trunc i32 %251 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.83:                          ; preds = %for.loop
  %253 = bitcast i25* %src_83 to i32*
  %254 = load i32, i32* %253
  %255 = trunc i32 %254 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.84:                          ; preds = %for.loop
  %256 = bitcast i25* %src_84 to i32*
  %257 = load i32, i32* %256
  %258 = trunc i32 %257 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.85:                          ; preds = %for.loop
  %259 = bitcast i25* %src_85 to i32*
  %260 = load i32, i32* %259
  %261 = trunc i32 %260 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.86:                          ; preds = %for.loop
  %262 = bitcast i25* %src_86 to i32*
  %263 = load i32, i32* %262
  %264 = trunc i32 %263 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.87:                          ; preds = %for.loop
  %265 = bitcast i25* %src_87 to i32*
  %266 = load i32, i32* %265
  %267 = trunc i32 %266 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.88:                          ; preds = %for.loop
  %268 = bitcast i25* %src_88 to i32*
  %269 = load i32, i32* %268
  %270 = trunc i32 %269 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.89:                          ; preds = %for.loop
  %271 = bitcast i25* %src_89 to i32*
  %272 = load i32, i32* %271
  %273 = trunc i32 %272 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.90:                          ; preds = %for.loop
  %274 = bitcast i25* %src_90 to i32*
  %275 = load i32, i32* %274
  %276 = trunc i32 %275 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.91:                          ; preds = %for.loop
  %277 = bitcast i25* %src_91 to i32*
  %278 = load i32, i32* %277
  %279 = trunc i32 %278 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.92:                          ; preds = %for.loop
  %280 = bitcast i25* %src_92 to i32*
  %281 = load i32, i32* %280
  %282 = trunc i32 %281 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.93:                          ; preds = %for.loop
  %283 = bitcast i25* %src_93 to i32*
  %284 = load i32, i32* %283
  %285 = trunc i32 %284 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.94:                          ; preds = %for.loop
  %286 = bitcast i25* %src_94 to i32*
  %287 = load i32, i32* %286
  %288 = trunc i32 %287 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.95:                          ; preds = %for.loop
  %289 = bitcast i25* %src_95 to i32*
  %290 = load i32, i32* %289
  %291 = trunc i32 %290 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.96:                          ; preds = %for.loop
  %292 = bitcast i25* %src_96 to i32*
  %293 = load i32, i32* %292
  %294 = trunc i32 %293 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.97:                          ; preds = %for.loop
  %295 = bitcast i25* %src_97 to i32*
  %296 = load i32, i32* %295
  %297 = trunc i32 %296 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.98:                          ; preds = %for.loop
  %298 = bitcast i25* %src_98 to i32*
  %299 = load i32, i32* %298
  %300 = trunc i32 %299 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.99:                          ; preds = %for.loop
  %301 = icmp eq i7 %3, -29
  call void @llvm.assume(i1 %301)
  %302 = bitcast i25* %src_99 to i32*
  %303 = load i32, i32* %302
  %304 = trunc i32 %303 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.exit:                             ; preds = %src.addr.0.0.05.case.99, %src.addr.0.0.05.case.98, %src.addr.0.0.05.case.97, %src.addr.0.0.05.case.96, %src.addr.0.0.05.case.95, %src.addr.0.0.05.case.94, %src.addr.0.0.05.case.93, %src.addr.0.0.05.case.92, %src.addr.0.0.05.case.91, %src.addr.0.0.05.case.90, %src.addr.0.0.05.case.89, %src.addr.0.0.05.case.88, %src.addr.0.0.05.case.87, %src.addr.0.0.05.case.86, %src.addr.0.0.05.case.85, %src.addr.0.0.05.case.84, %src.addr.0.0.05.case.83, %src.addr.0.0.05.case.82, %src.addr.0.0.05.case.81, %src.addr.0.0.05.case.80, %src.addr.0.0.05.case.79, %src.addr.0.0.05.case.78, %src.addr.0.0.05.case.77, %src.addr.0.0.05.case.76, %src.addr.0.0.05.case.75, %src.addr.0.0.05.case.74, %src.addr.0.0.05.case.73, %src.addr.0.0.05.case.72, %src.addr.0.0.05.case.71, %src.addr.0.0.05.case.70, %src.addr.0.0.05.case.69, %src.addr.0.0.05.case.68, %src.addr.0.0.05.case.67, %src.addr.0.0.05.case.66, %src.addr.0.0.05.case.65, %src.addr.0.0.05.case.64, %src.addr.0.0.05.case.63, %src.addr.0.0.05.case.62, %src.addr.0.0.05.case.61, %src.addr.0.0.05.case.60, %src.addr.0.0.05.case.59, %src.addr.0.0.05.case.58, %src.addr.0.0.05.case.57, %src.addr.0.0.05.case.56, %src.addr.0.0.05.case.55, %src.addr.0.0.05.case.54, %src.addr.0.0.05.case.53, %src.addr.0.0.05.case.52, %src.addr.0.0.05.case.51, %src.addr.0.0.05.case.50, %src.addr.0.0.05.case.49, %src.addr.0.0.05.case.48, %src.addr.0.0.05.case.47, %src.addr.0.0.05.case.46, %src.addr.0.0.05.case.45, %src.addr.0.0.05.case.44, %src.addr.0.0.05.case.43, %src.addr.0.0.05.case.42, %src.addr.0.0.05.case.41, %src.addr.0.0.05.case.40, %src.addr.0.0.05.case.39, %src.addr.0.0.05.case.38, %src.addr.0.0.05.case.37, %src.addr.0.0.05.case.36, %src.addr.0.0.05.case.35, %src.addr.0.0.05.case.34, %src.addr.0.0.05.case.33, %src.addr.0.0.05.case.32, %src.addr.0.0.05.case.31, %src.addr.0.0.05.case.30, %src.addr.0.0.05.case.29, %src.addr.0.0.05.case.28, %src.addr.0.0.05.case.27, %src.addr.0.0.05.case.26, %src.addr.0.0.05.case.25, %src.addr.0.0.05.case.24, %src.addr.0.0.05.case.23, %src.addr.0.0.05.case.22, %src.addr.0.0.05.case.21, %src.addr.0.0.05.case.20, %src.addr.0.0.05.case.19, %src.addr.0.0.05.case.18, %src.addr.0.0.05.case.17, %src.addr.0.0.05.case.16, %src.addr.0.0.05.case.15, %src.addr.0.0.05.case.14, %src.addr.0.0.05.case.13, %src.addr.0.0.05.case.12, %src.addr.0.0.05.case.11, %src.addr.0.0.05.case.10, %src.addr.0.0.05.case.9, %src.addr.0.0.05.case.8, %src.addr.0.0.05.case.7, %src.addr.0.0.05.case.6, %src.addr.0.0.05.case.5, %src.addr.0.0.05.case.4, %src.addr.0.0.05.case.3, %src.addr.0.0.05.case.2, %src.addr.0.0.05.case.1, %src.addr.0.0.05.case.0
  %305 = phi i25 [ %6, %src.addr.0.0.05.case.0 ], [ %9, %src.addr.0.0.05.case.1 ], [ %12, %src.addr.0.0.05.case.2 ], [ %15, %src.addr.0.0.05.case.3 ], [ %18, %src.addr.0.0.05.case.4 ], [ %21, %src.addr.0.0.05.case.5 ], [ %24, %src.addr.0.0.05.case.6 ], [ %27, %src.addr.0.0.05.case.7 ], [ %30, %src.addr.0.0.05.case.8 ], [ %33, %src.addr.0.0.05.case.9 ], [ %36, %src.addr.0.0.05.case.10 ], [ %39, %src.addr.0.0.05.case.11 ], [ %42, %src.addr.0.0.05.case.12 ], [ %45, %src.addr.0.0.05.case.13 ], [ %48, %src.addr.0.0.05.case.14 ], [ %51, %src.addr.0.0.05.case.15 ], [ %54, %src.addr.0.0.05.case.16 ], [ %57, %src.addr.0.0.05.case.17 ], [ %60, %src.addr.0.0.05.case.18 ], [ %63, %src.addr.0.0.05.case.19 ], [ %66, %src.addr.0.0.05.case.20 ], [ %69, %src.addr.0.0.05.case.21 ], [ %72, %src.addr.0.0.05.case.22 ], [ %75, %src.addr.0.0.05.case.23 ], [ %78, %src.addr.0.0.05.case.24 ], [ %81, %src.addr.0.0.05.case.25 ], [ %84, %src.addr.0.0.05.case.26 ], [ %87, %src.addr.0.0.05.case.27 ], [ %90, %src.addr.0.0.05.case.28 ], [ %93, %src.addr.0.0.05.case.29 ], [ %96, %src.addr.0.0.05.case.30 ], [ %99, %src.addr.0.0.05.case.31 ], [ %102, %src.addr.0.0.05.case.32 ], [ %105, %src.addr.0.0.05.case.33 ], [ %108, %src.addr.0.0.05.case.34 ], [ %111, %src.addr.0.0.05.case.35 ], [ %114, %src.addr.0.0.05.case.36 ], [ %117, %src.addr.0.0.05.case.37 ], [ %120, %src.addr.0.0.05.case.38 ], [ %123, %src.addr.0.0.05.case.39 ], [ %126, %src.addr.0.0.05.case.40 ], [ %129, %src.addr.0.0.05.case.41 ], [ %132, %src.addr.0.0.05.case.42 ], [ %135, %src.addr.0.0.05.case.43 ], [ %138, %src.addr.0.0.05.case.44 ], [ %141, %src.addr.0.0.05.case.45 ], [ %144, %src.addr.0.0.05.case.46 ], [ %147, %src.addr.0.0.05.case.47 ], [ %150, %src.addr.0.0.05.case.48 ], [ %153, %src.addr.0.0.05.case.49 ], [ %156, %src.addr.0.0.05.case.50 ], [ %159, %src.addr.0.0.05.case.51 ], [ %162, %src.addr.0.0.05.case.52 ], [ %165, %src.addr.0.0.05.case.53 ], [ %168, %src.addr.0.0.05.case.54 ], [ %171, %src.addr.0.0.05.case.55 ], [ %174, %src.addr.0.0.05.case.56 ], [ %177, %src.addr.0.0.05.case.57 ], [ %180, %src.addr.0.0.05.case.58 ], [ %183, %src.addr.0.0.05.case.59 ], [ %186, %src.addr.0.0.05.case.60 ], [ %189, %src.addr.0.0.05.case.61 ], [ %192, %src.addr.0.0.05.case.62 ], [ %195, %src.addr.0.0.05.case.63 ], [ %198, %src.addr.0.0.05.case.64 ], [ %201, %src.addr.0.0.05.case.65 ], [ %204, %src.addr.0.0.05.case.66 ], [ %207, %src.addr.0.0.05.case.67 ], [ %210, %src.addr.0.0.05.case.68 ], [ %213, %src.addr.0.0.05.case.69 ], [ %216, %src.addr.0.0.05.case.70 ], [ %219, %src.addr.0.0.05.case.71 ], [ %222, %src.addr.0.0.05.case.72 ], [ %225, %src.addr.0.0.05.case.73 ], [ %228, %src.addr.0.0.05.case.74 ], [ %231, %src.addr.0.0.05.case.75 ], [ %234, %src.addr.0.0.05.case.76 ], [ %237, %src.addr.0.0.05.case.77 ], [ %240, %src.addr.0.0.05.case.78 ], [ %243, %src.addr.0.0.05.case.79 ], [ %246, %src.addr.0.0.05.case.80 ], [ %249, %src.addr.0.0.05.case.81 ], [ %252, %src.addr.0.0.05.case.82 ], [ %255, %src.addr.0.0.05.case.83 ], [ %258, %src.addr.0.0.05.case.84 ], [ %261, %src.addr.0.0.05.case.85 ], [ %264, %src.addr.0.0.05.case.86 ], [ %267, %src.addr.0.0.05.case.87 ], [ %270, %src.addr.0.0.05.case.88 ], [ %273, %src.addr.0.0.05.case.89 ], [ %276, %src.addr.0.0.05.case.90 ], [ %279, %src.addr.0.0.05.case.91 ], [ %282, %src.addr.0.0.05.case.92 ], [ %285, %src.addr.0.0.05.case.93 ], [ %288, %src.addr.0.0.05.case.94 ], [ %291, %src.addr.0.0.05.case.95 ], [ %294, %src.addr.0.0.05.case.96 ], [ %297, %src.addr.0.0.05.case.97 ], [ %300, %src.addr.0.0.05.case.98 ], [ %304, %src.addr.0.0.05.case.99 ]
  store i25 %305, i25* %dst.addr.0.0.06, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx8, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %src.addr.0.0.05.exit, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.44.47"([100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="0" %dst, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.0" %src_0, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.1" %src_1, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.2" %src_2, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.3" %src_3, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.4" %src_4, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.5" %src_5, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.6" %src_6, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.7" %src_7, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.8" %src_8, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.9" %src_9, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.10" %src_10, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.11" %src_11, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.12" %src_12, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.13" %src_13, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.14" %src_14, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.15" %src_15, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.16" %src_16, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.17" %src_17, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.18" %src_18, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.19" %src_19, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.20" %src_20, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.21" %src_21, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.22" %src_22, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.23" %src_23, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.24" %src_24, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.25" %src_25, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.26" %src_26, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.27" %src_27, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.28" %src_28, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.29" %src_29, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.30" %src_30, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.31" %src_31, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.32" %src_32, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.33" %src_33, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.34" %src_34, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.35" %src_35, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.36" %src_36, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.37" %src_37, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.38" %src_38, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.39" %src_39, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.40" %src_40, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.41" %src_41, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.42" %src_42, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.43" %src_43, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.44" %src_44, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.45" %src_45, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.46" %src_46, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.47" %src_47, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.48" %src_48, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.49" %src_49, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.50" %src_50, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.51" %src_51, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.52" %src_52, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.53" %src_53, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.54" %src_54, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.55" %src_55, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.56" %src_56, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.57" %src_57, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.58" %src_58, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.59" %src_59, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.60" %src_60, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.61" %src_61, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.62" %src_62, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.63" %src_63, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.64" %src_64, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.65" %src_65, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.66" %src_66, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.67" %src_67, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.68" %src_68, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.69" %src_69, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.70" %src_70, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.71" %src_71, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.72" %src_72, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.73" %src_73, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.74" %src_74, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.75" %src_75, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.76" %src_76, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.77" %src_77, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.78" %src_78, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.79" %src_79, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.80" %src_80, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.81" %src_81, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.82" %src_82, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.83" %src_83, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.84" %src_84, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.85" %src_85, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.86" %src_86, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.87" %src_87, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.88" %src_88, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.89" %src_89, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.90" %src_90, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.91" %src_91, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.92" %src_92, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.93" %src_93, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.94" %src_94, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.95" %src_95, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.96" %src_96, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.97" %src_97, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.98" %src_98, i25* noalias readonly align 512 "orig.arg.no"="1" "unpacked"="1.99" %src_99) #3 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %dst, null
  %1 = icmp eq i25* %src_0, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.45.46"([100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* nonnull %dst, i25* nonnull %src_0, i25* %src_1, i25* %src_2, i25* %src_3, i25* %src_4, i25* %src_5, i25* %src_6, i25* %src_7, i25* %src_8, i25* %src_9, i25* %src_10, i25* %src_11, i25* %src_12, i25* %src_13, i25* %src_14, i25* %src_15, i25* %src_16, i25* %src_17, i25* %src_18, i25* %src_19, i25* %src_20, i25* %src_21, i25* %src_22, i25* %src_23, i25* %src_24, i25* %src_25, i25* %src_26, i25* %src_27, i25* %src_28, i25* %src_29, i25* %src_30, i25* %src_31, i25* %src_32, i25* %src_33, i25* %src_34, i25* %src_35, i25* %src_36, i25* %src_37, i25* %src_38, i25* %src_39, i25* %src_40, i25* %src_41, i25* %src_42, i25* %src_43, i25* %src_44, i25* %src_45, i25* %src_46, i25* %src_47, i25* %src_48, i25* %src_49, i25* %src_50, i25* %src_51, i25* %src_52, i25* %src_53, i25* %src_54, i25* %src_55, i25* %src_56, i25* %src_57, i25* %src_58, i25* %src_59, i25* %src_60, i25* %src_61, i25* %src_62, i25* %src_63, i25* %src_64, i25* %src_65, i25* %src_66, i25* %src_67, i25* %src_68, i25* %src_69, i25* %src_70, i25* %src_71, i25* %src_72, i25* %src_73, i25* %src_74, i25* %src_75, i25* %src_76, i25* %src_77, i25* %src_78, i25* %src_79, i25* %src_80, i25* %src_81, i25* %src_82, i25* %src_83, i25* %src_84, i25* %src_85, i25* %src_86, i25* %src_87, i25* %src_88, i25* %src_89, i25* %src_90, i25* %src_91, i25* %src_92, i25* %src_93, i25* %src_94, i25* %src_95, i25* %src_96, i25* %src_97, i25* %src_98, i25* %src_99, i64 100)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"(i1200* nocapture "orig.arg.no"="0" "unpacked"="0.0" %dst, i64 %dst_shift, [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* readonly "orig.arg.no"="1" "unpacked"="1" %src, i64 "orig.arg.no"="2" "unpacked"="2" %num) #1 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %src.addr.0.0.05 = getelementptr [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"], [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %src, i64 0, i64 %for.loop.idx2, i32 0, i32 0, i32 0
  %1 = mul i64 12, %for.loop.idx2
  %2 = add i64 %dst_shift, %1
  %3 = bitcast i12* %src.addr.0.0.05 to i16*
  %4 = load i16, i16* %3
  %5 = trunc i16 %4 to i12
  %6 = load i1200, i1200* %dst, align 256
  %7 = zext i64 %2 to i1200
  %8 = shl i1200 4095, %7
  %9 = zext i12 %5 to i1200
  %10 = shl i1200 %9, %7
  %thr.xor1 = xor i1200 %8, -1
  %thr.and2 = and i1200 %6, %thr.xor1
  %thr.or3 = or i1200 %thr.and2, %10
  store i1200 %thr.or3, i1200* %dst, align 256
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"(i1200* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0" %dst, [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias readonly "orig.arg.no"="1" "unpacked"="1" %src) #3 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"(i1200* %dst, i64 0, [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* nonnull %src, i64 100)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_in([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias readonly "orig.arg.no"="0" "unpacked"="0", i1200* noalias nocapture align 512 "orig.arg.no"="1" "unpacked"="1.0", [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias readonly "orig.arg.no"="2" "unpacked"="2", i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.0" %_0, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.1" %_1, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.2" %_2, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.3" %_3, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.4" %_4, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.5" %_5, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.6" %_6, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.7" %_7, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.8" %_8, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.9" %_9, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.10" %_10, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.11" %_11, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.12" %_12, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.13" %_13, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.14" %_14, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.15" %_15, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.16" %_16, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.17" %_17, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.18" %_18, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.19" %_19, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.20" %_20, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.21" %_21, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.22" %_22, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.23" %_23, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.24" %_24, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.25" %_25, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.26" %_26, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.27" %_27, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.28" %_28, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.29" %_29, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.30" %_30, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.31" %_31, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.32" %_32, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.33" %_33, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.34" %_34, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.35" %_35, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.36" %_36, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.37" %_37, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.38" %_38, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.39" %_39, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.40" %_40, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.41" %_41, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.42" %_42, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.43" %_43, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.44" %_44, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.45" %_45, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.46" %_46, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.47" %_47, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.48" %_48, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.49" %_49, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.50" %_50, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.51" %_51, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.52" %_52, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.53" %_53, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.54" %_54, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.55" %_55, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.56" %_56, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.57" %_57, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.58" %_58, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.59" %_59, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.60" %_60, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.61" %_61, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.62" %_62, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.63" %_63, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.64" %_64, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.65" %_65, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.66" %_66, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.67" %_67, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.68" %_68, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.69" %_69, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.70" %_70, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.71" %_71, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.72" %_72, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.73" %_73, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.74" %_74, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.75" %_75, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.76" %_76, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.77" %_77, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.78" %_78, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.79" %_79, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.80" %_80, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.81" %_81, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.82" %_82, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.83" %_83, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.84" %_84, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.85" %_85, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.86" %_86, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.87" %_87, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.88" %_88, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.89" %_89, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.90" %_90, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.91" %_91, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.92" %_92, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.93" %_93, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.94" %_94, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.95" %_95, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.96" %_96, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.97" %_97, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.98" %_98, i25* noalias align 512 "orig.arg.no"="3" "unpacked"="3.99" %_99) #4 {
entry:
  call void @"onebyonecpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"(i1200* align 512 %1, [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %0)
  call void @"onebyonecpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.32.35"(i25* align 512 %_0, i25* align 512 %_1, i25* align 512 %_2, i25* align 512 %_3, i25* align 512 %_4, i25* align 512 %_5, i25* align 512 %_6, i25* align 512 %_7, i25* align 512 %_8, i25* align 512 %_9, i25* align 512 %_10, i25* align 512 %_11, i25* align 512 %_12, i25* align 512 %_13, i25* align 512 %_14, i25* align 512 %_15, i25* align 512 %_16, i25* align 512 %_17, i25* align 512 %_18, i25* align 512 %_19, i25* align 512 %_20, i25* align 512 %_21, i25* align 512 %_22, i25* align 512 %_23, i25* align 512 %_24, i25* align 512 %_25, i25* align 512 %_26, i25* align 512 %_27, i25* align 512 %_28, i25* align 512 %_29, i25* align 512 %_30, i25* align 512 %_31, i25* align 512 %_32, i25* align 512 %_33, i25* align 512 %_34, i25* align 512 %_35, i25* align 512 %_36, i25* align 512 %_37, i25* align 512 %_38, i25* align 512 %_39, i25* align 512 %_40, i25* align 512 %_41, i25* align 512 %_42, i25* align 512 %_43, i25* align 512 %_44, i25* align 512 %_45, i25* align 512 %_46, i25* align 512 %_47, i25* align 512 %_48, i25* align 512 %_49, i25* align 512 %_50, i25* align 512 %_51, i25* align 512 %_52, i25* align 512 %_53, i25* align 512 %_54, i25* align 512 %_55, i25* align 512 %_56, i25* align 512 %_57, i25* align 512 %_58, i25* align 512 %_59, i25* align 512 %_60, i25* align 512 %_61, i25* align 512 %_62, i25* align 512 %_63, i25* align 512 %_64, i25* align 512 %_65, i25* align 512 %_66, i25* align 512 %_67, i25* align 512 %_68, i25* align 512 %_69, i25* align 512 %_70, i25* align 512 %_71, i25* align 512 %_72, i25* align 512 %_73, i25* align 512 %_74, i25* align 512 %_75, i25* align 512 %_76, i25* align 512 %_77, i25* align 512 %_78, i25* align 512 %_79, i25* align 512 %_80, i25* align 512 %_81, i25* align 512 %_82, i25* align 512 %_83, i25* align 512 %_84, i25* align 512 %_85, i25* align 512 %_86, i25* align 512 %_87, i25* align 512 %_88, i25* align 512 %_89, i25* align 512 %_90, i25* align 512 %_91, i25* align 512 %_92, i25* align 512 %_93, i25* align 512 %_94, i25* align 512 %_95, i25* align 512 %_96, i25* align 512 %_97, i25* align 512 %_98, i25* align 512 %_99, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %2)
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>.20"([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* "orig.arg.no"="0" "unpacked"="0" %dst, i1200* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0" %src, i64 %src_shift, i64 "orig.arg.no"="2" "unpacked"="2" %num) #1 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %1 = mul i64 12, %for.loop.idx2
  %2 = add i64 %src_shift, %1
  %dst.addr.0.0.06 = getelementptr [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"], [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %dst, i64 0, i64 %for.loop.idx2, i32 0, i32 0, i32 0
  %3 = load i1200, i1200* %src, align 256
  %4 = zext i64 %2 to i1200
  %5 = lshr i1200 %3, %4
  %6 = trunc i1200 %5 to i12
  store i12 %6, i12* %dst.addr.0.0.06, align 2
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>.17"([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0" %dst, i1200* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0" %src) #3 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>.20"([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* nonnull %dst, i1200* %src, i64 0, i64 100)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_out([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0", i1200* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0", [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="2" "unpacked"="2", i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.0" %_0, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.1" %_1, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.2" %_2, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.3" %_3, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.4" %_4, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.5" %_5, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.6" %_6, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.7" %_7, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.8" %_8, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.9" %_9, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.10" %_10, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.11" %_11, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.12" %_12, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.13" %_13, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.14" %_14, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.15" %_15, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.16" %_16, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.17" %_17, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.18" %_18, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.19" %_19, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.20" %_20, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.21" %_21, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.22" %_22, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.23" %_23, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.24" %_24, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.25" %_25, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.26" %_26, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.27" %_27, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.28" %_28, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.29" %_29, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.30" %_30, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.31" %_31, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.32" %_32, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.33" %_33, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.34" %_34, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.35" %_35, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.36" %_36, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.37" %_37, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.38" %_38, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.39" %_39, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.40" %_40, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.41" %_41, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.42" %_42, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.43" %_43, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.44" %_44, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.45" %_45, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.46" %_46, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.47" %_47, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.48" %_48, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.49" %_49, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.50" %_50, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.51" %_51, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.52" %_52, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.53" %_53, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.54" %_54, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.55" %_55, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.56" %_56, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.57" %_57, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.58" %_58, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.59" %_59, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.60" %_60, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.61" %_61, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.62" %_62, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.63" %_63, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.64" %_64, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.65" %_65, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.66" %_66, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.67" %_67, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.68" %_68, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.69" %_69, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.70" %_70, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.71" %_71, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.72" %_72, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.73" %_73, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.74" %_74, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.75" %_75, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.76" %_76, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.77" %_77, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.78" %_78, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.79" %_79, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.80" %_80, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.81" %_81, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.82" %_82, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.83" %_83, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.84" %_84, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.85" %_85, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.86" %_86, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.87" %_87, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.88" %_88, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.89" %_89, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.90" %_90, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.91" %_91, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.92" %_92, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.93" %_93, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.94" %_94, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.95" %_95, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.96" %_96, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.97" %_97, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.98" %_98, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.99" %_99) #5 {
entry:
  call void @"onebyonecpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>.17"([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %0, i1200* align 512 %1)
  call void @"onebyonecpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.44.47"([100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %2, i25* align 512 %_0, i25* align 512 %_1, i25* align 512 %_2, i25* align 512 %_3, i25* align 512 %_4, i25* align 512 %_5, i25* align 512 %_6, i25* align 512 %_7, i25* align 512 %_8, i25* align 512 %_9, i25* align 512 %_10, i25* align 512 %_11, i25* align 512 %_12, i25* align 512 %_13, i25* align 512 %_14, i25* align 512 %_15, i25* align 512 %_16, i25* align 512 %_17, i25* align 512 %_18, i25* align 512 %_19, i25* align 512 %_20, i25* align 512 %_21, i25* align 512 %_22, i25* align 512 %_23, i25* align 512 %_24, i25* align 512 %_25, i25* align 512 %_26, i25* align 512 %_27, i25* align 512 %_28, i25* align 512 %_29, i25* align 512 %_30, i25* align 512 %_31, i25* align 512 %_32, i25* align 512 %_33, i25* align 512 %_34, i25* align 512 %_35, i25* align 512 %_36, i25* align 512 %_37, i25* align 512 %_38, i25* align 512 %_39, i25* align 512 %_40, i25* align 512 %_41, i25* align 512 %_42, i25* align 512 %_43, i25* align 512 %_44, i25* align 512 %_45, i25* align 512 %_46, i25* align 512 %_47, i25* align 512 %_48, i25* align 512 %_49, i25* align 512 %_50, i25* align 512 %_51, i25* align 512 %_52, i25* align 512 %_53, i25* align 512 %_54, i25* align 512 %_55, i25* align 512 %_56, i25* align 512 %_57, i25* align 512 %_58, i25* align 512 %_59, i25* align 512 %_60, i25* align 512 %_61, i25* align 512 %_62, i25* align 512 %_63, i25* align 512 %_64, i25* align 512 %_65, i25* align 512 %_66, i25* align 512 %_67, i25* align 512 %_68, i25* align 512 %_69, i25* align 512 %_70, i25* align 512 %_71, i25* align 512 %_72, i25* align 512 %_73, i25* align 512 %_74, i25* align 512 %_75, i25* align 512 %_76, i25* align 512 %_77, i25* align 512 %_78, i25* align 512 %_79, i25* align 512 %_80, i25* align 512 %_81, i25* align 512 %_82, i25* align 512 %_83, i25* align 512 %_84, i25* align 512 %_85, i25* align 512 %_86, i25* align 512 %_87, i25* align 512 %_88, i25* align 512 %_89, i25* align 512 %_90, i25* align 512 %_91, i25* align 512 %_92, i25* align 512 %_93, i25* align 512 %_94, i25* align 512 %_95, i25* align 512 %_96, i25* align 512 %_97, i25* align 512 %_98, i25* align 512 %_99)
  ret void
}

declare void @apatb_model_test_hw(i1200*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*)

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_back([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0", i1200* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0", [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="2" "unpacked"="2", i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.0" %_0, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.1" %_1, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.2" %_2, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.3" %_3, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.4" %_4, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.5" %_5, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.6" %_6, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.7" %_7, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.8" %_8, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.9" %_9, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.10" %_10, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.11" %_11, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.12" %_12, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.13" %_13, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.14" %_14, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.15" %_15, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.16" %_16, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.17" %_17, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.18" %_18, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.19" %_19, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.20" %_20, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.21" %_21, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.22" %_22, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.23" %_23, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.24" %_24, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.25" %_25, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.26" %_26, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.27" %_27, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.28" %_28, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.29" %_29, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.30" %_30, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.31" %_31, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.32" %_32, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.33" %_33, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.34" %_34, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.35" %_35, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.36" %_36, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.37" %_37, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.38" %_38, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.39" %_39, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.40" %_40, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.41" %_41, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.42" %_42, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.43" %_43, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.44" %_44, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.45" %_45, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.46" %_46, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.47" %_47, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.48" %_48, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.49" %_49, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.50" %_50, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.51" %_51, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.52" %_52, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.53" %_53, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.54" %_54, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.55" %_55, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.56" %_56, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.57" %_57, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.58" %_58, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.59" %_59, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.60" %_60, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.61" %_61, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.62" %_62, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.63" %_63, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.64" %_64, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.65" %_65, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.66" %_66, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.67" %_67, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.68" %_68, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.69" %_69, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.70" %_70, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.71" %_71, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.72" %_72, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.73" %_73, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.74" %_74, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.75" %_75, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.76" %_76, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.77" %_77, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.78" %_78, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.79" %_79, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.80" %_80, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.81" %_81, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.82" %_82, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.83" %_83, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.84" %_84, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.85" %_85, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.86" %_86, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.87" %_87, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.88" %_88, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.89" %_89, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.90" %_90, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.91" %_91, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.92" %_92, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.93" %_93, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.94" %_94, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.95" %_95, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.96" %_96, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.97" %_97, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.98" %_98, i25* noalias readonly align 512 "orig.arg.no"="3" "unpacked"="3.99" %_99) #5 {
entry:
  call void @"onebyonecpy_hls.p0a100struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.44.47"([100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %2, i25* align 512 %_0, i25* align 512 %_1, i25* align 512 %_2, i25* align 512 %_3, i25* align 512 %_4, i25* align 512 %_5, i25* align 512 %_6, i25* align 512 %_7, i25* align 512 %_8, i25* align 512 %_9, i25* align 512 %_10, i25* align 512 %_11, i25* align 512 %_12, i25* align 512 %_13, i25* align 512 %_14, i25* align 512 %_15, i25* align 512 %_16, i25* align 512 %_17, i25* align 512 %_18, i25* align 512 %_19, i25* align 512 %_20, i25* align 512 %_21, i25* align 512 %_22, i25* align 512 %_23, i25* align 512 %_24, i25* align 512 %_25, i25* align 512 %_26, i25* align 512 %_27, i25* align 512 %_28, i25* align 512 %_29, i25* align 512 %_30, i25* align 512 %_31, i25* align 512 %_32, i25* align 512 %_33, i25* align 512 %_34, i25* align 512 %_35, i25* align 512 %_36, i25* align 512 %_37, i25* align 512 %_38, i25* align 512 %_39, i25* align 512 %_40, i25* align 512 %_41, i25* align 512 %_42, i25* align 512 %_43, i25* align 512 %_44, i25* align 512 %_45, i25* align 512 %_46, i25* align 512 %_47, i25* align 512 %_48, i25* align 512 %_49, i25* align 512 %_50, i25* align 512 %_51, i25* align 512 %_52, i25* align 512 %_53, i25* align 512 %_54, i25* align 512 %_55, i25* align 512 %_56, i25* align 512 %_57, i25* align 512 %_58, i25* align 512 %_59, i25* align 512 %_60, i25* align 512 %_61, i25* align 512 %_62, i25* align 512 %_63, i25* align 512 %_64, i25* align 512 %_65, i25* align 512 %_66, i25* align 512 %_67, i25* align 512 %_68, i25* align 512 %_69, i25* align 512 %_70, i25* align 512 %_71, i25* align 512 %_72, i25* align 512 %_73, i25* align 512 %_74, i25* align 512 %_75, i25* align 512 %_76, i25* align 512 %_77, i25* align 512 %_78, i25* align 512 %_79, i25* align 512 %_80, i25* align 512 %_81, i25* align 512 %_82, i25* align 512 %_83, i25* align 512 %_84, i25* align 512 %_85, i25* align 512 %_86, i25* align 512 %_87, i25* align 512 %_88, i25* align 512 %_89, i25* align 512 %_90, i25* align 512 %_91, i25* align 512 %_92, i25* align 512 %_93, i25* align 512 %_94, i25* align 512 %_95, i25* align 512 %_96, i25* align 512 %_97, i25* align 512 %_98, i25* align 512 %_99)
  ret void
}

define void @model_test_hw_stub_wrapper(i1200*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*) #6 {
entry:
  %101 = alloca [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]
  %102 = alloca [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]
  call void @copy_out([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %101, i1200* %0, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %102, i25* %1, i25* %2, i25* %3, i25* %4, i25* %5, i25* %6, i25* %7, i25* %8, i25* %9, i25* %10, i25* %11, i25* %12, i25* %13, i25* %14, i25* %15, i25* %16, i25* %17, i25* %18, i25* %19, i25* %20, i25* %21, i25* %22, i25* %23, i25* %24, i25* %25, i25* %26, i25* %27, i25* %28, i25* %29, i25* %30, i25* %31, i25* %32, i25* %33, i25* %34, i25* %35, i25* %36, i25* %37, i25* %38, i25* %39, i25* %40, i25* %41, i25* %42, i25* %43, i25* %44, i25* %45, i25* %46, i25* %47, i25* %48, i25* %49, i25* %50, i25* %51, i25* %52, i25* %53, i25* %54, i25* %55, i25* %56, i25* %57, i25* %58, i25* %59, i25* %60, i25* %61, i25* %62, i25* %63, i25* %64, i25* %65, i25* %66, i25* %67, i25* %68, i25* %69, i25* %70, i25* %71, i25* %72, i25* %73, i25* %74, i25* %75, i25* %76, i25* %77, i25* %78, i25* %79, i25* %80, i25* %81, i25* %82, i25* %83, i25* %84, i25* %85, i25* %86, i25* %87, i25* %88, i25* %89, i25* %90, i25* %91, i25* %92, i25* %93, i25* %94, i25* %95, i25* %96, i25* %97, i25* %98, i25* %99, i25* %100)
  %103 = bitcast [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %101 to %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"*
  %104 = bitcast [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %102 to %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"*
  call void @model_test_hw_stub(%"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"* %103, %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* %104)
  call void @copy_in([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %101, i1200* %0, [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %102, i25* %1, i25* %2, i25* %3, i25* %4, i25* %5, i25* %6, i25* %7, i25* %8, i25* %9, i25* %10, i25* %11, i25* %12, i25* %13, i25* %14, i25* %15, i25* %16, i25* %17, i25* %18, i25* %19, i25* %20, i25* %21, i25* %22, i25* %23, i25* %24, i25* %25, i25* %26, i25* %27, i25* %28, i25* %29, i25* %30, i25* %31, i25* %32, i25* %33, i25* %34, i25* %35, i25* %36, i25* %37, i25* %38, i25* %39, i25* %40, i25* %41, i25* %42, i25* %43, i25* %44, i25* %45, i25* %46, i25* %47, i25* %48, i25* %49, i25* %50, i25* %51, i25* %52, i25* %53, i25* %54, i25* %55, i25* %56, i25* %57, i25* %58, i25* %59, i25* %60, i25* %61, i25* %62, i25* %63, i25* %64, i25* %65, i25* %66, i25* %67, i25* %68, i25* %69, i25* %70, i25* %71, i25* %72, i25* %73, i25* %74, i25* %75, i25* %76, i25* %77, i25* %78, i25* %79, i25* %80, i25* %81, i25* %82, i25* %83, i25* %84, i25* %85, i25* %86, i25* %87, i25* %88, i25* %89, i25* %90, i25* %91, i25* %92, i25* %93, i25* %94, i25* %95, i25* %96, i25* %97, i25* %98, i25* %99, i25* %100)
  ret void
}

declare void @model_test_hw_stub(%"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"*, %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"*)

attributes #0 = { noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline norecurse "fpga.wrapper.func"="arraycpy_hls" }
attributes #2 = { nounwind }
attributes #3 = { argmemonly noinline norecurse "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #4 = { argmemonly noinline norecurse "fpga.wrapper.func"="copyin" }
attributes #5 = { argmemonly noinline norecurse "fpga.wrapper.func"="copyout" }
attributes #6 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}
!datalayout.transforms.on.top = !{!5}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
!5 = !{!6, !8, !10}
!6 = !{!7}
!7 = !{!"1", [100 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* null}
!8 = !{!9}
!9 = !{!"array_partition", !"type=Complete", !"dim=1"}
!10 = !{!11, !12, !13, !14, !15, !16, !17, !18, !19, !20, !21, !22, !23, !24, !25, !26, !27, !28, !29, !30, !31, !32, !33, !34, !35, !36, !37, !38, !39, !40, !41, !42, !43, !44, !45, !46, !47, !48, !49, !50, !51, !52, !53, !54, !55, !56, !57, !58, !59, !60, !61, !62, !63, !64, !65, !66, !67, !68, !69, !70, !71, !72, !73, !74, !75, !76, !77, !78, !79, !80, !81, !82, !83, !84, !85, !86, !87, !88, !89, !90, !91, !92, !93, !94, !95, !96, !97, !98, !99, !100, !101, !102, !103, !104, !105, !106, !107, !108, !109, !110}
!11 = !{!"1.0", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!12 = !{!"1.1", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!13 = !{!"1.2", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!14 = !{!"1.3", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!15 = !{!"1.4", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!16 = !{!"1.5", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!17 = !{!"1.6", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!18 = !{!"1.7", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!19 = !{!"1.8", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!20 = !{!"1.9", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!21 = !{!"1.10", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!22 = !{!"1.11", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!23 = !{!"1.12", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!24 = !{!"1.13", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!25 = !{!"1.14", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!26 = !{!"1.15", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!27 = !{!"1.16", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!28 = !{!"1.17", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!29 = !{!"1.18", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!30 = !{!"1.19", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!31 = !{!"1.20", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!32 = !{!"1.21", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!33 = !{!"1.22", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!34 = !{!"1.23", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!35 = !{!"1.24", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!36 = !{!"1.25", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!37 = !{!"1.26", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!38 = !{!"1.27", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!39 = !{!"1.28", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!40 = !{!"1.29", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!41 = !{!"1.30", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!42 = !{!"1.31", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!43 = !{!"1.32", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!44 = !{!"1.33", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!45 = !{!"1.34", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!46 = !{!"1.35", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!47 = !{!"1.36", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!48 = !{!"1.37", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!49 = !{!"1.38", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!50 = !{!"1.39", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!51 = !{!"1.40", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!52 = !{!"1.41", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!53 = !{!"1.42", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!54 = !{!"1.43", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!55 = !{!"1.44", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!56 = !{!"1.45", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!57 = !{!"1.46", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!58 = !{!"1.47", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!59 = !{!"1.48", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!60 = !{!"1.49", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!61 = !{!"1.50", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!62 = !{!"1.51", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!63 = !{!"1.52", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!64 = !{!"1.53", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!65 = !{!"1.54", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!66 = !{!"1.55", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!67 = !{!"1.56", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!68 = !{!"1.57", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!69 = !{!"1.58", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!70 = !{!"1.59", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!71 = !{!"1.60", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!72 = !{!"1.61", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!73 = !{!"1.62", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!74 = !{!"1.63", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!75 = !{!"1.64", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!76 = !{!"1.65", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!77 = !{!"1.66", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!78 = !{!"1.67", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!79 = !{!"1.68", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!80 = !{!"1.69", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!81 = !{!"1.70", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!82 = !{!"1.71", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!83 = !{!"1.72", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!84 = !{!"1.73", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!85 = !{!"1.74", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!86 = !{!"1.75", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!87 = !{!"1.76", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!88 = !{!"1.77", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!89 = !{!"1.78", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!90 = !{!"1.79", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!91 = !{!"1.80", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!92 = !{!"1.81", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!93 = !{!"1.82", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!94 = !{!"1.83", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!95 = !{!"1.84", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!96 = !{!"1.85", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!97 = !{!"1.86", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!98 = !{!"1.87", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!99 = !{!"1.88", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!100 = !{!"1.89", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!101 = !{!"1.90", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!102 = !{!"1.91", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!103 = !{!"1.92", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!104 = !{!"1.93", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!105 = !{!"1.94", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!106 = !{!"1.95", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!107 = !{!"1.96", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!108 = !{!"1.97", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!109 = !{!"1.98", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
!110 = !{!"1.99", %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* null}
