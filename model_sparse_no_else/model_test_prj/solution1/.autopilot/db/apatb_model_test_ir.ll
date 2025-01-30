; ModuleID = '/home/coder/sparse/model_sparse_no_else/model_test_prj/solution1/.autopilot/db/a.g.ld.5.gdce.bc'
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
define void @apatb_model_test_ir(%"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"* noalias nocapture nonnull readonly "fpga.decayed.dim.hint"="100" %x_in, %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* noalias nocapture nonnull "fpga.decayed.dim.hint"="10" "partition" %layer2_out) local_unnamed_addr #0 {
entry:
  %x_in_copy5 = alloca i1200, align 512
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
  %0 = bitcast %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"* %x_in to [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]*
  %1 = bitcast %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* %layer2_out to [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]*
  call void @copy_in([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* nonnull %0, i1200* nonnull align 512 %x_in_copy5, [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* nonnull %1, i25* nonnull align 512 %layer2_out_copy_0, i25* nonnull align 512 %layer2_out_copy_1, i25* nonnull align 512 %layer2_out_copy_2, i25* nonnull align 512 %layer2_out_copy_3, i25* nonnull align 512 %layer2_out_copy_4, i25* nonnull align 512 %layer2_out_copy_5, i25* nonnull align 512 %layer2_out_copy_6, i25* nonnull align 512 %layer2_out_copy_7, i25* nonnull align 512 %layer2_out_copy_8, i25* nonnull align 512 %layer2_out_copy_9)
  call void @apatb_model_test_hw(i1200* %x_in_copy5, i25* %layer2_out_copy_0, i25* %layer2_out_copy_1, i25* %layer2_out_copy_2, i25* %layer2_out_copy_3, i25* %layer2_out_copy_4, i25* %layer2_out_copy_5, i25* %layer2_out_copy_6, i25* %layer2_out_copy_7, i25* %layer2_out_copy_8, i25* %layer2_out_copy_9)
  call void @copy_back([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %0, i1200* %x_in_copy5, [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %1, i25* %layer2_out_copy_0, i25* %layer2_out_copy_1, i25* %layer2_out_copy_2, i25* %layer2_out_copy_3, i25* %layer2_out_copy_4, i25* %layer2_out_copy_5, i25* %layer2_out_copy_6, i25* %layer2_out_copy_7, i25* %layer2_out_copy_8, i25* %layer2_out_copy_9)
  ret void
}

; Function Attrs: nounwind
declare void @llvm.assume(i1) #1

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"(i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.0" %dst_0, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.1" %dst_1, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.2" %dst_2, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.3" %dst_3, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.4" %dst_4, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.5" %dst_5, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.6" %dst_6, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.7" %dst_7, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.8" %dst_8, i25* nocapture "orig.arg.no"="0" "unpacked"="0.0.9" %dst_9, [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* readonly "orig.arg.no"="1" "unpacked"="1" %src, i64 "orig.arg.no"="2" "unpacked"="2" %num) #2 {
entry:
  %0 = icmp eq [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %dst.addr.0.0.06.exit, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %dst.addr.0.0.06.exit ]
  %1 = trunc i64 %for.loop.idx2 to i4
  %src.addr.0.0.05 = getelementptr [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"], [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %src, i64 0, i64 %for.loop.idx2, i32 0, i32 0, i32 0
  %2 = bitcast i25* %src.addr.0.0.05 to i32*
  %3 = load i32, i32* %2
  %4 = trunc i32 %3 to i25
  switch i4 %1, label %dst.addr.0.0.06.case.9 [
    i4 0, label %dst.addr.0.0.06.case.0
    i4 1, label %dst.addr.0.0.06.case.1
    i4 2, label %dst.addr.0.0.06.case.2
    i4 3, label %dst.addr.0.0.06.case.3
    i4 4, label %dst.addr.0.0.06.case.4
    i4 5, label %dst.addr.0.0.06.case.5
    i4 6, label %dst.addr.0.0.06.case.6
    i4 7, label %dst.addr.0.0.06.case.7
    i4 -8, label %dst.addr.0.0.06.case.8
  ]

dst.addr.0.0.06.case.0:                           ; preds = %for.loop
  store i25 %4, i25* %dst_0, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.1:                           ; preds = %for.loop
  store i25 %4, i25* %dst_1, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.2:                           ; preds = %for.loop
  store i25 %4, i25* %dst_2, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.3:                           ; preds = %for.loop
  store i25 %4, i25* %dst_3, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.4:                           ; preds = %for.loop
  store i25 %4, i25* %dst_4, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.5:                           ; preds = %for.loop
  store i25 %4, i25* %dst_5, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.6:                           ; preds = %for.loop
  store i25 %4, i25* %dst_6, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.7:                           ; preds = %for.loop
  store i25 %4, i25* %dst_7, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.8:                           ; preds = %for.loop
  store i25 %4, i25* %dst_8, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.9:                           ; preds = %for.loop
  %5 = icmp eq i4 %1, -7
  call void @llvm.assume(i1 %5)
  store i25 %4, i25* %dst_9, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.exit:                             ; preds = %dst.addr.0.0.06.case.9, %dst.addr.0.0.06.case.8, %dst.addr.0.0.06.case.7, %dst.addr.0.0.06.case.6, %dst.addr.0.0.06.case.5, %dst.addr.0.0.06.case.4, %dst.addr.0.0.06.case.3, %dst.addr.0.0.06.case.2, %dst.addr.0.0.06.case.1, %dst.addr.0.0.06.case.0
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %dst.addr.0.0.06.exit, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"(i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.0" %dst_0, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.1" %dst_1, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.2" %dst_2, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.3" %dst_3, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.4" %dst_4, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.5" %dst_5, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.6" %dst_6, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.7" %dst_7, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.8" %dst_8, i25* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.9" %dst_9, [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias readonly "orig.arg.no"="1" "unpacked"="1" %src) #3 {
entry:
  %0 = icmp eq [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"(i25* %dst_0, i25* %dst_1, i25* %dst_2, i25* %dst_3, i25* %dst_4, i25* %dst_5, i25* %dst_6, i25* %dst_7, i25* %dst_8, i25* %dst_9, [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* nonnull %src, i64 10)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.15"([10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* "orig.arg.no"="0" "unpacked"="0" %dst, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.0" %src_0, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.1" %src_1, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.2" %src_2, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.3" %src_3, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.4" %src_4, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.5" %src_5, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.6" %src_6, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.7" %src_7, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.8" %src_8, i25* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.9" %src_9, i64 "orig.arg.no"="2" "unpacked"="2" %num) #2 {
entry:
  %0 = icmp eq [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %src.addr.0.0.05.exit, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %src.addr.0.0.05.exit ]
  %1 = trunc i64 %for.loop.idx2 to i4
  %dst.addr.0.0.06 = getelementptr [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"], [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %dst, i64 0, i64 %for.loop.idx2, i32 0, i32 0, i32 0
  switch i4 %1, label %src.addr.0.0.05.case.9 [
    i4 0, label %src.addr.0.0.05.case.0
    i4 1, label %src.addr.0.0.05.case.1
    i4 2, label %src.addr.0.0.05.case.2
    i4 3, label %src.addr.0.0.05.case.3
    i4 4, label %src.addr.0.0.05.case.4
    i4 5, label %src.addr.0.0.05.case.5
    i4 6, label %src.addr.0.0.05.case.6
    i4 7, label %src.addr.0.0.05.case.7
    i4 -8, label %src.addr.0.0.05.case.8
  ]

src.addr.0.0.05.case.0:                           ; preds = %for.loop
  %2 = bitcast i25* %src_0 to i32*
  %3 = load i32, i32* %2
  %4 = trunc i32 %3 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.1:                           ; preds = %for.loop
  %5 = bitcast i25* %src_1 to i32*
  %6 = load i32, i32* %5
  %7 = trunc i32 %6 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.2:                           ; preds = %for.loop
  %8 = bitcast i25* %src_2 to i32*
  %9 = load i32, i32* %8
  %10 = trunc i32 %9 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.3:                           ; preds = %for.loop
  %11 = bitcast i25* %src_3 to i32*
  %12 = load i32, i32* %11
  %13 = trunc i32 %12 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.4:                           ; preds = %for.loop
  %14 = bitcast i25* %src_4 to i32*
  %15 = load i32, i32* %14
  %16 = trunc i32 %15 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.5:                           ; preds = %for.loop
  %17 = bitcast i25* %src_5 to i32*
  %18 = load i32, i32* %17
  %19 = trunc i32 %18 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.6:                           ; preds = %for.loop
  %20 = bitcast i25* %src_6 to i32*
  %21 = load i32, i32* %20
  %22 = trunc i32 %21 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.7:                           ; preds = %for.loop
  %23 = bitcast i25* %src_7 to i32*
  %24 = load i32, i32* %23
  %25 = trunc i32 %24 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.8:                           ; preds = %for.loop
  %26 = bitcast i25* %src_8 to i32*
  %27 = load i32, i32* %26
  %28 = trunc i32 %27 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.9:                           ; preds = %for.loop
  %29 = icmp eq i4 %1, -7
  call void @llvm.assume(i1 %29)
  %30 = bitcast i25* %src_9 to i32*
  %31 = load i32, i32* %30
  %32 = trunc i32 %31 to i25
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.exit:                             ; preds = %src.addr.0.0.05.case.9, %src.addr.0.0.05.case.8, %src.addr.0.0.05.case.7, %src.addr.0.0.05.case.6, %src.addr.0.0.05.case.5, %src.addr.0.0.05.case.4, %src.addr.0.0.05.case.3, %src.addr.0.0.05.case.2, %src.addr.0.0.05.case.1, %src.addr.0.0.05.case.0
  %33 = phi i25 [ %4, %src.addr.0.0.05.case.0 ], [ %7, %src.addr.0.0.05.case.1 ], [ %10, %src.addr.0.0.05.case.2 ], [ %13, %src.addr.0.0.05.case.3 ], [ %16, %src.addr.0.0.05.case.4 ], [ %19, %src.addr.0.0.05.case.5 ], [ %22, %src.addr.0.0.05.case.6 ], [ %25, %src.addr.0.0.05.case.7 ], [ %28, %src.addr.0.0.05.case.8 ], [ %32, %src.addr.0.0.05.case.9 ]
  store i25 %33, i25* %dst.addr.0.0.06, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %src.addr.0.0.05.exit, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.12"([10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0" %dst, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.0" %src_0, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.1" %src_1, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.2" %src_2, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.3" %src_3, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.4" %src_4, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.5" %src_5, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.6" %src_6, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.7" %src_7, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.8" %src_8, i25* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.9" %src_9) #3 {
entry:
  %0 = icmp eq [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.15"([10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* nonnull %dst, i25* %src_0, i25* %src_1, i25* %src_2, i25* %src_3, i25* %src_4, i25* %src_5, i25* %src_6, i25* %src_7, i25* %src_8, i25* %src_9, i64 10)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>.25"(i1200* nocapture "orig.arg.no"="0" "unpacked"="0.0" %dst, i64 %dst_shift, [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* readonly "orig.arg.no"="1" "unpacked"="1" %src, i64 "orig.arg.no"="2" "unpacked"="2" %num) #2 {
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
define internal void @"onebyonecpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>.22"(i1200* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0" %dst, [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias readonly "orig.arg.no"="1" "unpacked"="1" %src) #3 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>.25"(i1200* %dst, i64 0, [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* nonnull %src, i64 100)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_in([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias readonly "orig.arg.no"="0" "unpacked"="0", i1200* noalias nocapture align 512 "orig.arg.no"="1" "unpacked"="1.0", [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias readonly "orig.arg.no"="2" "unpacked"="2", i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.0" %_0, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.1" %_1, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.2" %_2, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.3" %_3, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.4" %_4, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.5" %_5, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.6" %_6, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.7" %_7, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.8" %_8, i25* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.9" %_9) #4 {
entry:
  call void @"onebyonecpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>.22"(i1200* align 512 %1, [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %0)
  call void @"onebyonecpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"(i25* align 512 %_0, i25* align 512 %_1, i25* align 512 %_2, i25* align 512 %_3, i25* align 512 %_4, i25* align 512 %_5, i25* align 512 %_6, i25* align 512 %_7, i25* align 512 %_8, i25* align 512 %_9, [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %2)
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* "orig.arg.no"="0" "unpacked"="0" %dst, i1200* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0" %src, i64 %src_shift, i64 "orig.arg.no"="2" "unpacked"="2" %num) #2 {
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
define internal void @"onebyonecpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0" %dst, i1200* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0" %src) #3 {
entry:
  %0 = icmp eq [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* nonnull %dst, i1200* %src, i64 0, i64 100)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_out([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0", i1200* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0", [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="2" "unpacked"="2", i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.0" %_0, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.1" %_1, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.2" %_2, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.3" %_3, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.4" %_4, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.5" %_5, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.6" %_6, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.7" %_7, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.8" %_8, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.9" %_9) #5 {
entry:
  call void @"onebyonecpy_hls.p0a100struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %0, i1200* align 512 %1)
  call void @"onebyonecpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.12"([10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %2, i25* align 512 %_0, i25* align 512 %_1, i25* align 512 %_2, i25* align 512 %_3, i25* align 512 %_4, i25* align 512 %_5, i25* align 512 %_6, i25* align 512 %_7, i25* align 512 %_8, i25* align 512 %_9)
  ret void
}

declare void @apatb_model_test_hw(i1200*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*)

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_back([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0", i1200* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0", [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="2" "unpacked"="2", i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.0" %_0, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.1" %_1, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.2" %_2, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.3" %_3, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.4" %_4, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.5" %_5, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.6" %_6, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.7" %_7, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.8" %_8, i25* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.9" %_9) #5 {
entry:
  call void @"onebyonecpy_hls.p0a10struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>.12"([10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %2, i25* align 512 %_0, i25* align 512 %_1, i25* align 512 %_2, i25* align 512 %_3, i25* align 512 %_4, i25* align 512 %_5, i25* align 512 %_6, i25* align 512 %_7, i25* align 512 %_8, i25* align 512 %_9)
  ret void
}

define void @model_test_hw_stub_wrapper(i1200*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*, i25*) #6 {
entry:
  %11 = alloca [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]
  %12 = alloca [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]
  call void @copy_out([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %11, i1200* %0, [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %12, i25* %1, i25* %2, i25* %3, i25* %4, i25* %5, i25* %6, i25* %7, i25* %8, i25* %9, i25* %10)
  %13 = bitcast [100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %11 to %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"*
  %14 = bitcast [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %12 to %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"*
  call void @model_test_hw_stub(%"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"* %13, %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"* %14)
  call void @copy_in([100 x %"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"]* %11, i1200* %0, [10 x %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"]* %12, i25* %1, i25* %2, i25* %3, i25* %4, i25* %5, i25* %6, i25* %7, i25* %8, i25* %9, i25* %10)
  ret void
}

declare void @model_test_hw_stub(%"struct.ap_fixed<12, 4, AP_RND, AP_SAT, 0>"*, %"struct.ap_fixed<25, 10, AP_TRN, AP_WRAP, 0>"*)

attributes #0 = { noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { nounwind }
attributes #2 = { argmemonly noinline norecurse "fpga.wrapper.func"="arraycpy_hls" }
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
!7 = !{!"1.0", [10 x i25]* null}
!8 = !{!9}
!9 = !{!"array_partition", !"type=Complete", !"dim=1"}
!10 = !{!11, !12, !13, !14, !15, !16, !17, !18, !19, !20}
!11 = !{!"1.0.0", i25* null}
!12 = !{!"1.0.1", i25* null}
!13 = !{!"1.0.2", i25* null}
!14 = !{!"1.0.3", i25* null}
!15 = !{!"1.0.4", i25* null}
!16 = !{!"1.0.5", i25* null}
!17 = !{!"1.0.6", i25* null}
!18 = !{!"1.0.7", i25* null}
!19 = !{!"1.0.8", i25* null}
!20 = !{!"1.0.9", i25* null}
