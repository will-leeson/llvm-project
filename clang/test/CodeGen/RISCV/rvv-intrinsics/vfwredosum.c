// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv32 -target-feature +f -target-feature +d -target-feature +experimental-v \
// RUN:   -disable-O0-optnone -emit-llvm %s -o - | opt -S -mem2reg | FileCheck --check-prefix=CHECK-RV32 %s
// RUN: %clang_cc1 -triple riscv64 -target-feature +f -target-feature +d -target-feature +experimental-v \
// RUN:   -disable-O0-optnone -emit-llvm %s -o - | opt -S -mem2reg | FileCheck --check-prefix=CHECK-RV64 %s
// RUN: %clang_cc1 -triple riscv64 -target-feature +m -target-feature +f -target-feature +d -target-feature +experimental-v \
// RUN:   -Werror -Wall -o - %s -S >/dev/null 2>&1 | FileCheck --check-prefix=ASM --allow-empty %s

// ASM-NOT: warning
#include <riscv_vector.h>

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32mf2_f64m1(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv1f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 1 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32mf2_f64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv1f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 1 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1(vfloat64m1_t dst,
                                             vfloat32mf2_t vector,
                                             vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32mf2_f64m1(dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32m1_f64m1(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv2f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 2 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32m1_f64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv2f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 2 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1(vfloat64m1_t dst,
                                            vfloat32m1_t vector,
                                            vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32m1_f64m1(dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32m2_f64m1(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv4f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 4 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32m2_f64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv4f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 4 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1(vfloat64m1_t dst,
                                            vfloat32m2_t vector,
                                            vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32m2_f64m1(dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32m4_f64m1(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv8f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 8 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32m4_f64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv8f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 8 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1(vfloat64m1_t dst,
                                            vfloat32m4_t vector,
                                            vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32m4_f64m1(dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32m8_f64m1(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv16f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 16 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32m8_f64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.nxv1f64.nxv16f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 16 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1(vfloat64m1_t dst,
                                            vfloat32m8_t vector,
                                            vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32m8_f64m1(dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32mf2_f64m1_m(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv1f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 1 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32mf2_f64m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv1f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 1 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_m(vbool64_t mask, vfloat64m1_t dst,
                                               vfloat32mf2_t vector,
                                               vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32mf2_f64m1_m(mask, dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32m1_f64m1_m(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv2f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 2 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32m1_f64m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv2f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 2 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_m(vbool32_t mask, vfloat64m1_t dst,
                                              vfloat32m1_t vector,
                                              vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32m1_f64m1_m(mask, dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32m2_f64m1_m(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv4f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 4 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32m2_f64m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv4f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 4 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_m(vbool16_t mask, vfloat64m1_t dst,
                                              vfloat32m2_t vector,
                                              vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32m2_f64m1_m(mask, dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32m4_f64m1_m(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv8f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 8 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32m4_f64m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv8f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 8 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_m(vbool8_t mask, vfloat64m1_t dst,
                                              vfloat32m4_t vector,
                                              vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32m4_f64m1_m(mask, dst, vector, scalar, vl);
}

// CHECK-RV32-LABEL: @test_vfwredosum_vs_f32m8_f64m1_m(
// CHECK-RV32-NEXT:  entry:
// CHECK-RV32-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv16f32.i32(<vscale x 1 x double> [[DST:%.*]], <vscale x 16 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i32 [[VL:%.*]])
// CHECK-RV32-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
// CHECK-RV64-LABEL: @test_vfwredosum_vs_f32m8_f64m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfwredosum.mask.nxv1f64.nxv16f32.i64(<vscale x 1 x double> [[DST:%.*]], <vscale x 16 x float> [[VECTOR:%.*]], <vscale x 1 x double> [[SCALAR:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_m(vbool4_t mask, vfloat64m1_t dst,
                                              vfloat32m8_t vector,
                                              vfloat64m1_t scalar, size_t vl) {
  return vfwredosum_vs_f32m8_f64m1_m(mask, dst, vector, scalar, vl);
}