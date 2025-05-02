#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821D1CCC"))) PPC_WEAK_FUNC(sub_821D1CCC);
PPC_FUNC_IMPL(__imp__sub_821D1CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D1CD0"))) PPC_WEAK_FUNC(sub_821D1CD0);
PPC_FUNC_IMPL(__imp__sub_821D1CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,12332
	ctx.r9.s64 = ctx.r11.s64 + 12332;
	// stw r10,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D1CE8"))) PPC_WEAK_FUNC(sub_821D1CE8);
PPC_FUNC_IMPL(__imp__sub_821D1CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r9,r10,12332
	ctx.r9.s64 = ctx.r10.s64 + 12332;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r11.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stw r11,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r11.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D1D2C"))) PPC_WEAK_FUNC(sub_821D1D2C);
PPC_FUNC_IMPL(__imp__sub_821D1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D1D30"))) PPC_WEAK_FUNC(sub_821D1D30);
PPC_FUNC_IMPL(__imp__sub_821D1D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12512);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f5,f9,f9
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f4,f8,f8
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f3,f7,f7
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f2,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f10,f6,f9
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fadds f9,f4,f5
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f8,f3,f4
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f7,f3,f5
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fsubs f4,f1,f11
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f6,f2,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f3,f11,f1
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f3,32(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fadds f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f2,24(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f12,f13,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D1DDC"))) PPC_WEAK_FUNC(sub_821D1DDC);
PPC_FUNC_IMPL(__imp__sub_821D1DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D1DE0"))) PPC_WEAK_FUNC(sub_821D1DE0);
PPC_FUNC_IMPL(__imp__sub_821D1DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lfs f13,3732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3732);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lfs f12,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,14880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14880);
	ctx.f0.f64 = double(temp.f32);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// fnmsubs f7,f11,f13,f12
	ctx.f7.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,-8(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f3,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f10,f1,f4
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fnmsubs f9,f2,f13,f12
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,-8(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fnmsubs f13,f4,f13,f12
	ctx.f13.f64 = double(float(-(ctx.f4.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v61,r0,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,-12(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,-8(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v60,r0,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D1EFC"))) PPC_WEAK_FUNC(sub_821D1EFC);
PPC_FUNC_IMPL(__imp__sub_821D1EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D1F00"))) PPC_WEAK_FUNC(sub_821D1F00);
PPC_FUNC_IMPL(__imp__sub_821D1F00) {
	PPC_FUNC_PROLOGUE();
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,32
	ctx.r11.s64 = 32;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v61,r4,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r4,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D1F30"))) PPC_WEAK_FUNC(sub_821D1F30);
PPC_FUNC_IMPL(__imp__sub_821D1F30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821ba038
	sub_821BA038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D1F40"))) PPC_WEAK_FUNC(sub_821D1F40);
PPC_FUNC_IMPL(__imp__sub_821D1F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D1F48;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821ba038
	ctx.lr = 0x821D1F6C;
	sub_821BA038(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ba038
	ctx.lr = 0x821D1F78;
	sub_821BA038(ctx, base);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f12,f7,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f3,f6,f11,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f2,f5,f10,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x821d1fd8
	if (!ctx.cr6.lt) goto loc_821D1FD8;
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_821D1FD8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d5a68
	ctx.lr = 0x821D1FEC;
	sub_821D5A68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1d30
	ctx.lr = 0x821D1FF8;
	sub_821D1D30(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v63,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v0,r30,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r29,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v12,v62,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v12,v13,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2028"))) PPC_WEAK_FUNC(sub_821D2028);
PPC_FUNC_IMPL(__imp__sub_821D2028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-28924
	ctx.r10.s64 = ctx.r11.s64 + -28924;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2038"))) PPC_WEAK_FUNC(sub_821D2038);
PPC_FUNC_IMPL(__imp__sub_821D2038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D2040;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2772
	ctx.r4.s64 = ctx.r11.s64 + 2772;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821c8fe0
	ctx.lr = 0x821D2060;
	sub_821C8FE0(ctx, base);
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821e1750
	ctx.lr = 0x821D2078;
	sub_821E1750(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d2098
	if (!ctx.cr6.eq) goto loc_821D2098;
	// bl 0x821c9030
	ctx.lr = 0x821D208C;
	sub_821C9030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_821D2098:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821c9030
	ctx.lr = 0x821D20A4;
	sub_821C9030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D20B0"))) PPC_WEAK_FUNC(sub_821D20B0);
PPC_FUNC_IMPL(__imp__sub_821D20B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d2104
	if (ctx.cr6.eq) goto loc_821D2104;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2772
	ctx.r4.s64 = ctx.r11.s64 + 2772;
	// bl 0x821c8fe0
	ctx.lr = 0x821D20E4;
	sub_821C8FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x821D20EC;
	sub_82130000(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// subf r4,r10,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r10.s64;
	// bl 0x821e1bf0
	ctx.lr = 0x821D20FC;
	sub_821E1BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D2104;
	sub_821C9030(ctx, base);
loc_821D2104:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D211C"))) PPC_WEAK_FUNC(sub_821D211C);
PPC_FUNC_IMPL(__imp__sub_821D211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2120"))) PPC_WEAK_FUNC(sub_821D2120);
PPC_FUNC_IMPL(__imp__sub_821D2120) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821d2134
	if (!ctx.cr6.eq) goto loc_821D2134;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_821D2134:
	// clrlwi r10,r4,28
	ctx.r10.u64 = ctx.r4.u32 & 0xF;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2148"))) PPC_WEAK_FUNC(sub_821D2148);
PPC_FUNC_IMPL(__imp__sub_821D2148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2158"))) PPC_WEAK_FUNC(sub_821D2158);
PPC_FUNC_IMPL(__imp__sub_821D2158) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x821e2250
	sub_821E2250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2160"))) PPC_WEAK_FUNC(sub_821D2160);
PPC_FUNC_IMPL(__imp__sub_821D2160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821d2180
	if (ctx.cr6.lt) goto loc_821D2180;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821d2184
	if (ctx.cr6.lt) goto loc_821D2184;
loc_821D2180:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D2184:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D218C"))) PPC_WEAK_FUNC(sub_821D218C);
PPC_FUNC_IMPL(__imp__sub_821D218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2190"))) PPC_WEAK_FUNC(sub_821D2190);
PPC_FUNC_IMPL(__imp__sub_821D2190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d21e8
	if (ctx.cr6.eq) goto loc_821D21E8;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2772
	ctx.r4.s64 = ctx.r11.s64 + 2772;
	// bl 0x821c8fe0
	ctx.lr = 0x821D21C4;
	sub_821C8FE0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// subf r4,r10,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r10.s64;
	// bl 0x821e21d8
	ctx.lr = 0x821D21D4;
	sub_821E21D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D21E0;
	sub_821C9030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821d21ec
	goto loc_821D21EC;
loc_821D21E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D21EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2204"))) PPC_WEAK_FUNC(sub_821D2204);
PPC_FUNC_IMPL(__imp__sub_821D2204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2208"))) PPC_WEAK_FUNC(sub_821D2208);
PPC_FUNC_IMPL(__imp__sub_821D2208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x821D2210;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r10,r11,12524
	ctx.r10.s64 = ctx.r11.s64 + 12524;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x821d2250
	if (!ctx.cr6.eq) goto loc_821D2250;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,5576
	ctx.r3.s64 = ctx.r11.s64 + 5576;
	// bl 0x821bd618
	ctx.lr = 0x821D2250;
	sub_821BD618(ctx, base);
loc_821D2250:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x821e1678
	ctx.lr = 0x821D2268;
	sub_821E1678(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bbf50
	ctx.lr = 0x821D2278;
	sub_821BBF50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2284"))) PPC_WEAK_FUNC(sub_821D2284);
PPC_FUNC_IMPL(__imp__sub_821D2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2288"))) PPC_WEAK_FUNC(sub_821D2288);
PPC_FUNC_IMPL(__imp__sub_821D2288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,12524
	ctx.r10.s64 = ctx.r11.s64 + 12524;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821bbe30
	ctx.lr = 0x821D22B4;
	sub_821BBE30(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d22cc
	if (ctx.cr6.eq) goto loc_821D22CC;
	// bl 0x82130588
	ctx.lr = 0x821D22C8;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D22CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D22E4"))) PPC_WEAK_FUNC(sub_821D22E4);
PPC_FUNC_IMPL(__imp__sub_821D22E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D22E8"))) PPC_WEAK_FUNC(sub_821D22E8);
PPC_FUNC_IMPL(__imp__sub_821D22E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32122
	ctx.r10.s64 = -2105147392;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r11,2804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2804);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r3,2804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2804, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2308"))) PPC_WEAK_FUNC(sub_821D2308);
PPC_FUNC_IMPL(__imp__sub_821D2308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// lwz r8,2804(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2804);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821d2358
	if (ctx.cr6.eq) goto loc_821D2358;
loc_821D2318:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821D2320:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x821d2344
	if (ctx.cr6.eq) goto loc_821D2344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d2320
	if (ctx.cr6.eq) goto loc_821D2320;
loc_821D2344:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d2360
	if (ctx.cr6.eq) goto loc_821D2360;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821d2318
	if (!ctx.cr6.eq) goto loc_821D2318;
loc_821D2358:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D2360:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2378"))) PPC_WEAK_FUNC(sub_821D2378);
PPC_FUNC_IMPL(__imp__sub_821D2378) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r3,r10,12648
	ctx.r3.s64 = ctx.r10.s64 + 12648;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x821bd618
	sub_821BD618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2394"))) PPC_WEAK_FUNC(sub_821D2394);
PPC_FUNC_IMPL(__imp__sub_821D2394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2398"))) PPC_WEAK_FUNC(sub_821D2398);
PPC_FUNC_IMPL(__imp__sub_821D2398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d23bc
	if (!ctx.cr6.lt) goto loc_821D23BC;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x821d23d0
	goto loc_821D23D0;
loc_821D23BC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821d23cc
	if (!ctx.cr6.gt) goto loc_821D23CC;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// b 0x821d23d0
	goto loc_821D23D0;
loc_821D23CC:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_821D23D0:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d23e4
	if (!ctx.cr6.lt) goto loc_821D23E4;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x821d23f8
	goto loc_821D23F8;
loc_821D23E4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821d23f4
	if (!ctx.cr6.gt) goto loc_821D23F4;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x821d23f8
	goto loc_821D23F8;
loc_821D23F4:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_821D23F8:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821d2418
	if (ctx.cr6.lt) goto loc_821D2418;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821d2414
	if (!ctx.cr6.gt) goto loc_821D2414;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821d2418
	goto loc_821D2418;
loc_821D2414:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821D2418:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lfs f0,15360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15360);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r10,r7,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// or r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwimi r8,r5,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D246C"))) PPC_WEAK_FUNC(sub_821D246C);
PPC_FUNC_IMPL(__imp__sub_821D246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2470"))) PPC_WEAK_FUNC(sub_821D2470);
PPC_FUNC_IMPL(__imp__sub_821D2470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d2494
	if (!ctx.cr6.lt) goto loc_821D2494;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// b 0x821d24a8
	goto loc_821D24A8;
loc_821D2494:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x821d24a4
	if (!ctx.cr6.gt) goto loc_821D24A4;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// b 0x821d24a8
	goto loc_821D24A8;
loc_821D24A4:
	// fmr f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64;
loc_821D24A8:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d24bc
	if (!ctx.cr6.lt) goto loc_821D24BC;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x821d24d0
	goto loc_821D24D0;
loc_821D24BC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x821d24cc
	if (!ctx.cr6.gt) goto loc_821D24CC;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x821d24d0
	goto loc_821D24D0;
loc_821D24CC:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_821D24D0:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d24e4
	if (!ctx.cr6.lt) goto loc_821D24E4;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x821d24f8
	goto loc_821D24F8;
loc_821D24E4:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x821d24f4
	if (!ctx.cr6.gt) goto loc_821D24F4;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x821d24f8
	goto loc_821D24F8;
loc_821D24F4:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_821D24F8:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821d2518
	if (ctx.cr6.lt) goto loc_821D2518;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x821d2514
	if (!ctx.cr6.gt) goto loc_821D2514;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x821d2518
	goto loc_821D2518;
loc_821D2514:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821D2518:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,15360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15360);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// fctiwz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f5.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r7,-4(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwimi r10,r6,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r9,r10,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2578"))) PPC_WEAK_FUNC(sub_821D2578);
PPC_FUNC_IMPL(__imp__sub_821D2578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r6,r11,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r5,r11,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r4,r11,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfs f0,15364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15364);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D25F8"))) PPC_WEAK_FUNC(sub_821D25F8);
PPC_FUNC_IMPL(__imp__sub_821D25F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x821D2600;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,28
	ctx.r26.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D2628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d266c
	if (ctx.cr6.eq) goto loc_821D266C;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_821D2640:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D2658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821d2640
	if (ctx.cr6.lt) goto loc_821D2640;
loc_821D266C:
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D2684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821d26e4
	if (!ctx.cr6.lt) goto loc_821D26E4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_821D26B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D26C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821d26b0
	if (ctx.cr6.lt) goto loc_821D26B0;
loc_821D26E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D26EC"))) PPC_WEAK_FUNC(sub_821D26EC);
PPC_FUNC_IMPL(__imp__sub_821D26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D26F0"))) PPC_WEAK_FUNC(sub_821D26F0);
PPC_FUNC_IMPL(__imp__sub_821D26F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x821D26F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x821d2790
	if (ctx.cr0.eq) goto loc_821D2790;
	// clrlwi r27,r5,24
	ctx.r27.u64 = ctx.r5.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
loc_821D2734:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821d275c
	if (ctx.cr6.eq) goto loc_821D275C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D275C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D275C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r10,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// subfic r5,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r5.s64 = 31 - ctx.r6.s64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// bne 0x821d2734
	if (!ctx.cr0.eq) goto loc_821D2734;
loc_821D2790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2798"))) PPC_WEAK_FUNC(sub_821D2798);
PPC_FUNC_IMPL(__imp__sub_821D2798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add. r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// li r7,4096
	ctx.r7.s64 = 4096;
loc_821D27C8:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r5,r6,0,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r6,r8,27
	ctx.r6.u64 = ctx.r8.u32 & 0x1F;
	// slw r5,r7,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x821d27c8
	if (!ctx.cr0.eq) goto loc_821D27C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D280C"))) PPC_WEAK_FUNC(sub_821D280C);
PPC_FUNC_IMPL(__imp__sub_821D280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2810"))) PPC_WEAK_FUNC(sub_821D2810);
PPC_FUNC_IMPL(__imp__sub_821D2810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,12708
	ctx.r10.s64 = ctx.r11.s64 + 12708;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d2864
	if (ctx.cr6.eq) goto loc_821D2864;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x821d2798
	ctx.lr = 0x821D2854;
	sub_821D2798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82130588
	ctx.lr = 0x821D285C;
	sub_82130588(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d25f8
	ctx.lr = 0x821D2864;
	sub_821D25F8(ctx, base);
loc_821D2864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x821D286C;
	sub_821D2028(ctx, base);
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2884"))) PPC_WEAK_FUNC(sub_821D2884);
PPC_FUNC_IMPL(__imp__sub_821D2884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2888"))) PPC_WEAK_FUNC(sub_821D2888);
PPC_FUNC_IMPL(__imp__sub_821D2888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,60
	ctx.r8.s64 = 60;
	// addi r7,r10,12724
	ctx.r7.s64 = ctx.r10.s64 + 12724;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r10,r4,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// ble cr6,0x821d28d8
	if (!ctx.cr6.gt) goto loc_821D28D8;
	// li r8,2
	ctx.r8.s64 = 2;
loc_821D28D8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821D28EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x821d28ec
	if (!ctx.cr0.eq) goto loc_821D28EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2908"))) PPC_WEAK_FUNC(sub_821D2908);
PPC_FUNC_IMPL(__imp__sub_821D2908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,12724
	ctx.r10.s64 = ctx.r11.s64 + 12724;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x821d2798
	ctx.lr = 0x821D2940;
	sub_821D2798(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d25f8
	ctx.lr = 0x821D2948;
	sub_821D25F8(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2810
	ctx.lr = 0x821D2954;
	sub_821D2810(ctx, base);
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D296C"))) PPC_WEAK_FUNC(sub_821D296C);
PPC_FUNC_IMPL(__imp__sub_821D296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2970"))) PPC_WEAK_FUNC(sub_821D2970);
PPC_FUNC_IMPL(__imp__sub_821D2970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,12708
	ctx.r10.s64 = ctx.r11.s64 + 12708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821b5a60
	ctx.lr = 0x821D29A0;
	sub_821B5A60(ctx, base);
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,60
	ctx.r8.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d29d4
	if (ctx.cr6.eq) goto loc_821D29D4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d29d4
	if (ctx.cr6.eq) goto loc_821D29D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821d26f0
	ctx.lr = 0x821D29D0;
	sub_821D26F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D29D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D29EC"))) PPC_WEAK_FUNC(sub_821D29EC);
PPC_FUNC_IMPL(__imp__sub_821D29EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D29F0"))) PPC_WEAK_FUNC(sub_821D29F0);
PPC_FUNC_IMPL(__imp__sub_821D29F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D29F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,12724
	ctx.r10.s64 = ctx.r11.s64 + 12724;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821d2798
	ctx.lr = 0x821D2A24;
	sub_821D2798(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d25f8
	ctx.lr = 0x821D2A2C;
	sub_821D25F8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2810
	ctx.lr = 0x821D2A38;
	sub_821D2810(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d2a50
	if (ctx.cr6.eq) goto loc_821D2A50;
	// bl 0x82130588
	ctx.lr = 0x821D2A4C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D2A50:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2A58"))) PPC_WEAK_FUNC(sub_821D2A58);
PPC_FUNC_IMPL(__imp__sub_821D2A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821378b8
	ctx.lr = 0x821D2A78;
	sub_821378B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x821D2A84;
	sub_82130588(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2AA0"))) PPC_WEAK_FUNC(sub_821D2AA0);
PPC_FUNC_IMPL(__imp__sub_821D2AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2AA8"))) PPC_WEAK_FUNC(sub_821D2AA8);
PPC_FUNC_IMPL(__imp__sub_821D2AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d2adc
	if (ctx.cr6.eq) goto loc_821D2ADC;
	// bl 0x8217d890
	ctx.lr = 0x821D2AD0;
	sub_8217D890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821D2ADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D2AF4"))) PPC_WEAK_FUNC(sub_821D2AF4);
PPC_FUNC_IMPL(__imp__sub_821D2AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2AF8"))) PPC_WEAK_FUNC(sub_821D2AF8);
PPC_FUNC_IMPL(__imp__sub_821D2AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c4
	ctx.lr = 0x821D2B00;
	__savegprlr_15(ctx, base);
	// addi r31,r1,-1248
	ctx.r31.s64 = ctx.r1.s64 + -1248;
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821d2b2c
	if (!ctx.cr6.eq) goto loc_821D2B2C;
loc_821D2B20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,1248
	ctx.r1.s64 = ctx.r31.s64 + 1248;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
loc_821D2B2C:
	// cmplwi cr6,r18,512
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 512, ctx.xer);
	// beq cr6,0x821d2b4c
	if (ctx.cr6.eq) goto loc_821D2B4C;
	// cmplwi cr6,r18,1024
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1024, ctx.xer);
	// beq cr6,0x821d2b4c
	if (ctx.cr6.eq) goto loc_821D2B4C;
	// cmplwi cr6,r18,2048
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 2048, ctx.xer);
	// beq cr6,0x821d2b4c
	if (ctx.cr6.eq) goto loc_821D2B4C;
	// cmplwi cr6,r18,4096
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 4096, ctx.xer);
	// bne cr6,0x821d2b20
	if (!ctx.cr6.eq) goto loc_821D2B20;
loc_821D2B4C:
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// add r17,r15,r4
	ctx.r17.u64 = ctx.r15.u64 + ctx.r4.u64;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x821D2B64;
	sub_823DBFF4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// addi r11,r15,2
	ctx.r11.s64 = ctx.r15.s64 + 2;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// bl 0x823d9890
	ctx.lr = 0x821D2B94;
	sub_823D9890(ctx, base);
	// lbz r8,2(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lbz r7,1(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// beq cr6,0x821d2de4
	if (ctx.cr6.eq) goto loc_821D2DE4;
	// addi r22,r24,1
	ctx.r22.s64 = ctx.r24.s64 + 1;
	// addi r21,r24,2
	ctx.r21.s64 = ctx.r24.s64 + 2;
	// li r20,-1
	ctx.r20.s64 = -1;
loc_821D2BBC:
	// cmplw cr6,r24,r17
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x821d2de4
	if (!ctx.cr6.lt) goto loc_821D2DE4;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r8,r27,-2
	ctx.r8.s64 = ctx.r27.s64 + -2;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// lhzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// bge cr6,0x821d2c68
	if (!ctx.cr6.lt) goto loc_821D2C68;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821d2c68
	if (ctx.cr6.eq) goto loc_821D2C68;
loc_821D2BF0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d2c58
	if (!ctx.cr6.eq) goto loc_821D2C58;
	// addi r8,r30,3
	ctx.r8.s64 = ctx.r30.s64 + 3;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x821d2c44
	if (!ctx.cr6.lt) goto loc_821D2C44;
loc_821D2C14:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bge cr6,0x821d2c44
	if (!ctx.cr6.lt) goto loc_821D2C44;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r5,r7,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821d2c44
	if (!ctx.cr6.eq) goto loc_821D2C44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821d2c14
	if (ctx.cr6.lt) goto loc_821D2C14;
loc_821D2C44:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x821d2c58
	if (!ctx.cr6.gt) goto loc_821D2C58;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
loc_821D2C58:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d2bf0
	if (!ctx.cr6.eq) goto loc_821D2BF0;
loc_821D2C68:
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x821d2cb8
	if (ctx.cr6.eq) goto loc_821D2CB8;
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r17.u32, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x821d2b20
	if (!ctx.cr6.lt) goto loc_821D2B20;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r23,253
	ctx.r9.s64 = ctx.r23.s64 + 253;
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r10,r21,1
	ctx.r10.s64 = ctx.r21.s64 + 1;
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// stb r7,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r7.u8);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// stb r8,1(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1, ctx.r8.u8);
	// addi r21,r10,1
	ctx.r21.s64 = ctx.r10.s64 + 1;
	// addi r22,r9,1
	ctx.r22.s64 = ctx.r9.s64 + 1;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// b 0x821d2cd4
	goto loc_821D2CD4;
loc_821D2CB8:
	// ori r19,r19,1
	ctx.r19.u64 = ctx.r19.u64 | 1;
	// cmplw cr6,r22,r17
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x821d2b20
	if (!ctx.cr6.lt) goto loc_821D2B20;
	// stb r26,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r26.u8);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_821D2CD4:
	// rlwinm r11,r19,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d2d00
	if (ctx.cr6.eq) goto loc_821D2D00;
	// cmplw cr6,r22,r17
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r17.u32, ctx.xer);
	// stb r19,0(r16)
	PPC_STORE_U8(ctx.r16.u32 + 0, ctx.r19.u8);
	// bge cr6,0x821d2b20
	if (!ctx.cr6.lt) goto loc_821D2B20;
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// li r19,1
	ctx.r19.s64 = 1;
loc_821D2D00:
	// add r11,r30,r25
	ctx.r11.u64 = ctx.r30.u64 + ctx.r25.u64;
	// addi r6,r18,-1
	ctx.r6.s64 = ctx.r18.s64 + -1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// subfic r3,r18,-2
	ctx.xer.ca = ctx.r18.u32 <= 4294967294;
	ctx.r3.s64 = -2 - ctx.r18.s64;
	// addi r5,r25,-2
	ctx.r5.s64 = ctx.r25.s64 + -2;
loc_821D2D18:
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x821d2d44
	if (ctx.cr6.lt) goto loc_821D2D44;
	// lbzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lhz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sthx r7,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u16);
loc_821D2D44:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// bne cr6,0x821d2d68
	if (!ctx.cr6.eq) goto loc_821D2D68;
	// addi r7,r31,82
	ctx.r7.s64 = ctx.r31.s64 + 82;
	// sthx r29,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u16);
	// sthx r29,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r29.u16);
	// b 0x821d2d84
	goto loc_821D2D84;
loc_821D2D68:
	// addi r9,r31,82
	ctx.r9.s64 = ctx.r31.s64 + 82;
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sthx r29,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u16);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r29,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r29.u16);
loc_821D2D84:
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// add r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + ctx.r28.u64;
	// and r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 & ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r4,r9,r28
	PPC_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r4.u16);
	// clrlwi r26,r4,24
	ctx.r26.u64 = ctx.r4.u32 & 0xFF;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// sth r20,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r20.u16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r4,r4,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x821d2dd4
	if (!ctx.cr6.lt) goto loc_821D2DD4;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
loc_821D2DD4:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x821d2d18
	if (!ctx.cr0.eq) goto loc_821D2D18;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821d2bbc
	if (ctx.cr6.lt) goto loc_821D2BBC;
loc_821D2DE4:
	// rlwinm r11,r19,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d2e00
	if (!ctx.cr6.eq) goto loc_821D2E00;
loc_821D2DF0:
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r19,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d2df0
	if (ctx.cr6.eq) goto loc_821D2DF0;
loc_821D2E00:
	// subf r11,r15,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r15.s64;
	// stb r19,0(r16)
	PPC_STORE_U8(ctx.r16.u32 + 0, ctx.r19.u8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// stb r11,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r11.u8);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// stb r9,1(r15)
	PPC_STORE_U8(ctx.r15.u32 + 1, ctx.r9.u8);
	// addi r1,r31,1248
	ctx.r1.s64 = ctx.r31.s64 + 1248;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2E24"))) PPC_WEAK_FUNC(sub_821D2E24);
PPC_FUNC_IMPL(__imp__sub_821D2E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D2E28"))) PPC_WEAK_FUNC(sub_821D2E28);
PPC_FUNC_IMPL(__imp__sub_821D2E28) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D2E30;
	__savegprlr_29(ctx, base);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x821d2e68
	if (ctx.cr6.eq) goto loc_821D2E68;
loc_821D2E60:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_821D2E68:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821d2f50
	if (!ctx.cr6.lt) goto loc_821D2F50;
loc_821D2E70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821d2f50
	if (!ctx.cr6.lt) goto loc_821D2F50;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_821D2E88:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// bge cr6,0x821d2f48
	if (!ctx.cr6.lt) goto loc_821D2F48;
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d2ec0
	if (ctx.cr6.eq) goto loc_821D2EC0;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821d2e60
	if (!ctx.cr6.lt) goto loc_821D2E60;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x821d2f30
	goto loc_821D2F30;
loc_821D2EC0:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821d2e60
	if (!ctx.cr6.lt) goto loc_821D2E60;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rlwinm r30,r10,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rotlwi r29,r9,4
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// or r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 | ctx.r29.u64;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821d2e60
	if (ctx.cr6.lt) goto loc_821D2E60;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x821d2e60
	if (ctx.cr6.gt) goto loc_821D2E60;
loc_821D2F10:
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x821d2f10
	if (!ctx.cr6.eq) goto loc_821D2F10;
loc_821D2F30:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r10,r4,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFE;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821d2e88
	if (ctx.cr6.lt) goto loc_821D2E88;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_821D2F48:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821d2e70
	if (ctx.cr6.lt) goto loc_821D2E70;
loc_821D2F50:
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2F58"))) PPC_WEAK_FUNC(sub_821D2F58);
PPC_FUNC_IMPL(__imp__sub_821D2F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,12740
	ctx.r10.s64 = ctx.r11.s64 + 12740;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821bbe30
	sub_821BBE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D2F68"))) PPC_WEAK_FUNC(sub_821D2F68);
PPC_FUNC_IMPL(__imp__sub_821D2F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821d2f98
	if (!ctx.cr6.eq) goto loc_821D2F98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821D2F98:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x821d2fa8
	if (ctx.cr6.gt) goto loc_821D2FA8;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x821d2fb4
	goto loc_821D2FB4;
loc_821D2FA8:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bgt cr6,0x821d2fb4
	if (ctx.cr6.gt) goto loc_821D2FB4;
	// li r5,8
	ctx.r5.s64 = 8;
loc_821D2FB4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andc r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x821d2ff8
	if (!ctx.cr6.gt) goto loc_821D2FF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,12864
	ctx.r3.s64 = ctx.r11.s64 + 12864;
	// bl 0x821bd618
	ctx.lr = 0x821D2FF8;
	sub_821BD618(ctx, base);
loc_821D2FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D3010"))) PPC_WEAK_FUNC(sub_821D3010);
PPC_FUNC_IMPL(__imp__sub_821D3010) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821d3040
	if (ctx.cr6.lt) goto loc_821D3040;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_821D3040:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D3054"))) PPC_WEAK_FUNC(sub_821D3054);
PPC_FUNC_IMPL(__imp__sub_821D3054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D3058"))) PPC_WEAK_FUNC(sub_821D3058);
PPC_FUNC_IMPL(__imp__sub_821D3058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D306C"))) PPC_WEAK_FUNC(sub_821D306C);
PPC_FUNC_IMPL(__imp__sub_821D306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D3070"))) PPC_WEAK_FUNC(sub_821D3070);
PPC_FUNC_IMPL(__imp__sub_821D3070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r13)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D30B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D30E4"))) PPC_WEAK_FUNC(sub_821D30E4);
PPC_FUNC_IMPL(__imp__sub_821D30E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D30E8"))) PPC_WEAK_FUNC(sub_821D30E8);
PPC_FUNC_IMPL(__imp__sub_821D30E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r13)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r5,r9,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821D3134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r10,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D316C"))) PPC_WEAK_FUNC(sub_821D316C);
PPC_FUNC_IMPL(__imp__sub_821D316C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D3170"))) PPC_WEAK_FUNC(sub_821D3170);
PPC_FUNC_IMPL(__imp__sub_821D3170) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D3188"))) PPC_WEAK_FUNC(sub_821D3188);
PPC_FUNC_IMPL(__imp__sub_821D3188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D31B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r4,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D31F8"))) PPC_WEAK_FUNC(sub_821D31F8);
PPC_FUNC_IMPL(__imp__sub_821D31F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,12740
	ctx.r9.s64 = ctx.r10.s64 + 12740;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D3218"))) PPC_WEAK_FUNC(sub_821D3218);
PPC_FUNC_IMPL(__imp__sub_821D3218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,12740
	ctx.r10.s64 = ctx.r11.s64 + 12740;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821bbe30
	ctx.lr = 0x821D3244;
	sub_821BBE30(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d325c
	if (ctx.cr6.eq) goto loc_821D325C;
	// bl 0x82130588
	ctx.lr = 0x821D3258;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D325C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D3274"))) PPC_WEAK_FUNC(sub_821D3274);
PPC_FUNC_IMPL(__imp__sub_821D3274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D3278"))) PPC_WEAK_FUNC(sub_821D3278);
PPC_FUNC_IMPL(__imp__sub_821D3278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32122
	ctx.r31.s64 = -2105147392;
	// lwz r3,3072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d32ac
	if (ctx.cr6.eq) goto loc_821D32AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D32AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D32AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D32C8"))) PPC_WEAK_FUNC(sub_821D32C8);
PPC_FUNC_IMPL(__imp__sub_821D32C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bc550
	ctx.lr = 0x821D32E8;
	sub_821BC550(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x821bc568
	ctx.lr = 0x821D3308;
	sub_821BC568(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,13200(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f1,f12,f6
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D3350"))) PPC_WEAK_FUNC(sub_821D3350);
PPC_FUNC_IMPL(__imp__sub_821D3350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e2480
	ctx.lr = 0x821D3368;
	sub_821E2480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d338c
	if (ctx.cr6.eq) goto loc_821D338C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821D338C:
	// lhz r11,6220(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D33B0"))) PPC_WEAK_FUNC(sub_821D33B0);
PPC_FUNC_IMPL(__imp__sub_821D33B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,6260
	ctx.r4.s64 = ctx.r31.s64 + 6260;
	// bl 0x821c8fe0
	ctx.lr = 0x821D33D4;
	sub_821C8FE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r7,6220(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f31,29500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29500);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821d3490
	if (ctx.cr6.eq) goto loc_821D3490;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x821d3458
	if (ctx.cr6.lt) goto loc_821D3458;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_821D340C:
	// lfs f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821d341c
	if (!ctx.cr6.lt) goto loc_821D341C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821D341C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821d342c
	if (!ctx.cr6.lt) goto loc_821D342C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821D342C:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821d343c
	if (!ctx.cr6.lt) goto loc_821D343C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821D343C:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821d344c
	if (!ctx.cr6.lt) goto loc_821D344C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821D344C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bne 0x821d340c
	if (!ctx.cr0.eq) goto loc_821D340C;
loc_821D3458:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821d3490
	if (!ctx.cr6.lt) goto loc_821D3490;
	// lwz r10,6216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_821D3474:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821d3484
	if (!ctx.cr6.lt) goto loc_821D3484;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821D3484:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x821d3474
	if (!ctx.cr0.eq) goto loc_821D3474;
loc_821D3490:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D3498;
	sub_821C9030(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D34B4"))) PPC_WEAK_FUNC(sub_821D34B4);
PPC_FUNC_IMPL(__imp__sub_821D34B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D34B8"))) PPC_WEAK_FUNC(sub_821D34B8);
PPC_FUNC_IMPL(__imp__sub_821D34B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x821D34C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,6260
	ctx.r4.s64 = ctx.r31.s64 + 6260;
	// bl 0x821c8fe0
	ctx.lr = 0x821D34D4;
	sub_821C8FE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r9,6220(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addic. r28,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r28.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f0,-31400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// blt 0x821d3544
	if (ctx.cr0.lt) goto loc_821D3544;
	// rlwinm r29,r28,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
loc_821D34F8:
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,2,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d3538
	if (!ctx.cr6.eq) goto loc_821D3538;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821d3538
	if (ctx.cr6.eq) goto loc_821D3538;
	// bl 0x821d32c8
	ctx.lr = 0x821D3524;
	sub_821D32C8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821d3538
	if (!ctx.cr6.lt) goto loc_821D3538;
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_821D3538:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// bge 0x821d34f8
	if (!ctx.cr0.lt) goto loc_821D34F8;
loc_821D3544:
	// lwz r11,6256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6256, ctx.r11.u32);
	// bl 0x821e24b8
	ctx.lr = 0x821D3558;
	sub_821E24B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d3570
	if (!ctx.cr6.eq) goto loc_821D3570;
	// lwz r11,6256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6256);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,6256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6256, ctx.r11.u32);
loc_821D3570:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D3578;
	sub_821C9030(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D3580"))) PPC_WEAK_FUNC(sub_821D3580);
PPC_FUNC_IMPL(__imp__sub_821D3580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D3588;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r30,6260
	ctx.r4.s64 = ctx.r30.s64 + 6260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c8fe0
	ctx.lr = 0x821D35A0;
	sub_821C8FE0(ctx, base);
	// lhz r11,6220(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6220);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821d35d0
	if (ctx.cr0.lt) goto loc_821D35D0;
	// lwz r11,6216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6216);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821D35B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821d35e4
	if (ctx.cr6.eq) goto loc_821D35E4;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bge 0x821d35b8
	if (!ctx.cr0.lt) goto loc_821D35B8;
loc_821D35D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D35D8;
	sub_821C9030(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_821D35E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D35EC;
	sub_821C9030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D35F8"))) PPC_WEAK_FUNC(sub_821D35F8);
PPC_FUNC_IMPL(__imp__sub_821D35F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D3600;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r30,6260
	ctx.r4.s64 = ctx.r30.s64 + 6260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c8fe0
	ctx.lr = 0x821D3618;
	sub_821C8FE0(ctx, base);
	// lhz r11,6228(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6228);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821d3650
	if (ctx.cr0.lt) goto loc_821D3650;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,6224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6224);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821D3638:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821d3664
	if (ctx.cr6.eq) goto loc_821D3664;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// bge 0x821d3638
	if (!ctx.cr0.lt) goto loc_821D3638;
loc_821D3650:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D3658;
	sub_821C9030(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_821D3664:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D366C;
	sub_821C9030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D3678"))) PPC_WEAK_FUNC(sub_821D3678);
PPC_FUNC_IMPL(__imp__sub_821D3678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,6260
	ctx.r4.s64 = ctx.r31.s64 + 6260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c8fe0
	ctx.lr = 0x821D36A0;
	sub_821C8FE0(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e2808
	ctx.lr = 0x821D36AC;
	sub_821E2808(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,6232
	ctx.r11.s64 = ctx.r31.s64 + 6232;
	// stw r10,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r10.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,6248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6248);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6248, ctx.r10.u32);
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r9,6256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6256);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x821d36e4
	if (!ctx.cr6.lt) goto loc_821D36E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d34b8
	ctx.lr = 0x821D36E4;
	sub_821D34B8(ctx, base);
loc_821D36E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D36EC;
	sub_821C9030(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D3704"))) PPC_WEAK_FUNC(sub_821D3704);
PPC_FUNC_IMPL(__imp__sub_821D3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D3708"))) PPC_WEAK_FUNC(sub_821D3708);
PPC_FUNC_IMPL(__imp__sub_821D3708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D3710;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r31,6260
	ctx.r4.s64 = ctx.r31.s64 + 6260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c8fe0
	ctx.lr = 0x821D3728;
	sub_821C8FE0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2630
	ctx.lr = 0x821D3734;
	sub_821E2630(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d35f8
	ctx.lr = 0x821D3740;
	sub_821D35F8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x821d37a0
	if (ctx.cr6.eq) goto loc_821D37A0;
	// lhz r9,6228(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6228);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,15,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// sth r11,6228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6228, ctx.r11.u16);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r31,6224
	ctx.r11.s64 = ctx.r31.s64 + 6224;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
loc_821D37A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3580
	ctx.lr = 0x821D37AC;
	sub_821D3580(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821d37fc
	if (ctx.cr6.eq) goto loc_821D37FC;
	// lhz r9,6220(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r31,6216
	ctx.r10.s64 = ctx.r31.s64 + 6216;
	// rlwinm r10,r6,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFF0;
	// sth r6,6220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6220, ctx.r6.u16);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
loc_821D37FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D3804;
	sub_821C9030(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D380C"))) PPC_WEAK_FUNC(sub_821D380C);
PPC_FUNC_IMPL(__imp__sub_821D380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D3810"))) PPC_WEAK_FUNC(sub_821D3810);
PPC_FUNC_IMPL(__imp__sub_821D3810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x821D3818;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,6260
	ctx.r4.s64 = ctx.r31.s64 + 6260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x821c8fe0
	ctx.lr = 0x821D3840;
	sub_821C8FE0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// rlwinm r9,r10,0,2,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821d38a4
	if (ctx.cr6.eq) goto loc_821D38A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3580
	ctx.lr = 0x821D3860;
	sub_821D3580(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821d3894
	if (!ctx.cr6.eq) goto loc_821D3894;
	// lhz r11,6220(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// addi r10,r31,6216
	ctx.r10.s64 = ctx.r31.s64 + 6216;
	// lwz r10,6216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,6220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6220, ctx.r8.u16);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// b 0x821d38a0
	goto loc_821D38A0;
loc_821D3894:
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821D38A0:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821D38A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d35f8
	ctx.lr = 0x821D38B0;
	sub_821D35F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821d390c
	if (ctx.cr6.eq) goto loc_821D390C;
	// lhz r9,6228(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6228);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// sth r11,6228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6228, ctx.r11.u16);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r31,6224
	ctx.r11.s64 = ctx.r31.s64 + 6224;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r3,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
loc_821D390C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D3914;
	sub_821C9030(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D3920"))) PPC_WEAK_FUNC(sub_821D3920);
PPC_FUNC_IMPL(__imp__sub_821D3920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x821D3928;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,6260
	ctx.r4.s64 = ctx.r31.s64 + 6260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x821c8fe0
	ctx.lr = 0x821D394C;
	sub_821C8FE0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d3a54
	if (!ctx.cr6.eq) goto loc_821D3A54;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e23b8
	ctx.lr = 0x821D3974;
	sub_821E23B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3580
	ctx.lr = 0x821D3980;
	sub_821D3580(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821d39d4
	if (ctx.cr6.eq) goto loc_821D39D4;
	// lhz r9,6220(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r31,6216
	ctx.r10.s64 = ctx.r31.s64 + 6216;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r10,r6,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFF0;
	// sth r6,6220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6220, ctx.r6.u16);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
loc_821D39D4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,2,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d3a54
	if (ctx.cr6.eq) goto loc_821D3A54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d35f8
	ctx.lr = 0x821D39F0;
	sub_821D35F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821d3a54
	if (!ctx.cr6.eq) goto loc_821D3A54;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,2,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821d3a20
	if (ctx.cr6.eq) goto loc_821D3A20;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821d3a20
	if (ctx.cr6.eq) goto loc_821D3A20;
	// lwz r8,6252(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6252);
	// b 0x821d3a24
	goto loc_821D3A24;
loc_821D3A20:
	// li r8,0
	ctx.r8.s64 = 0;
loc_821D3A24:
	// lhz r11,6228(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6228);
	// addi r10,r31,6224
	ctx.r10.s64 = ctx.r31.s64 + 6224;
	// lwz r10,6224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r7,6228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6228, ctx.r7.u16);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_821D3A54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9030
	ctx.lr = 0x821D3A5C;
	sub_821C9030(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D3A64"))) PPC_WEAK_FUNC(sub_821D3A64);
PPC_FUNC_IMPL(__imp__sub_821D3A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D3A68"))) PPC_WEAK_FUNC(sub_821D3A68);
PPC_FUNC_IMPL(__imp__sub_821D3A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x821D3A70;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,6260
	ctx.r4.s64 = ctx.r31.s64 + 6260;
	// bl 0x821c8fe0
	ctx.lr = 0x821D3A8C;
	sub_821C8FE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r22,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r22.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,-31400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// beq cr6,0x821d3ab8
	if (ctx.cr6.eq) goto loc_821D3AB8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-31068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821D3AB8:
	// lwz r11,6248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6248);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r21,8192
	ctx.r21.s64 = 536870912;
	// ori r25,r10,65535
	ctx.r25.u64 = ctx.r10.u64 | 65535;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d3d00
	if (!ctx.cr6.gt) goto loc_821D3D00;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// addi r26,r31,6232
	ctx.r26.s64 = ctx.r31.s64 + 6232;
	// addi r24,r11,2816
	ctx.r24.s64 = ctx.r11.s64 + 2816;
loc_821D3AE0:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821d3580
	ctx.lr = 0x821D3AF0;
	sub_821D3580(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x821d3cec
	if (ctx.cr6.eq) goto loc_821D3CEC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,0,2,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x821d3cec
	if (!ctx.cr6.eq) goto loc_821D3CEC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d35f8
	ctx.lr = 0x821D3B18;
	sub_821D35F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821d3c10
	if (!ctx.cr6.eq) goto loc_821D3C10;
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// rlwinm r30,r27,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d3ca4
	if (ctx.cr6.eq) goto loc_821D3CA4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e28e8
	ctx.lr = 0x821D3B40;
	sub_821E28E8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// li r8,255
	ctx.r8.s64 = 255;
loc_821D3B48:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d3bd8
	if (ctx.cr6.eq) goto loc_821D3BD8;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d3bbc
	if (ctx.cr6.eq) goto loc_821D3BBC;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d3bc4
	if (ctx.cr6.eq) goto loc_821D3BC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d3bcc
	if (ctx.cr6.eq) goto loc_821D3BCC;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d3bd4
	if (ctx.cr6.eq) goto loc_821D3BD4;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// addic. r8,r8,-5
	ctx.xer.ca = ctx.r8.u32 > 4;
	ctx.r8.s64 = ctx.r8.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// bgt 0x821d3b48
	if (ctx.cr0.gt) goto loc_821D3B48;
	// b 0x821d3bd8
	goto loc_821D3BD8;
loc_821D3BBC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821d3bd8
	goto loc_821D3BD8;
loc_821D3BC4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x821d3bd8
	goto loc_821D3BD8;
loc_821D3BCC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x821d3bd8
	goto loc_821D3BD8;
loc_821D3BD4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821D3BD8:
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r10,r10,1540
	ctx.r10.s64 = ctx.r10.s64 * 1540;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D3C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d3ca4
	goto loc_821D3CA4;
loc_821D3C10:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r31,6224
	ctx.r30.s64 = ctx.r31.s64 + 6224;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,6224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3c98
	if (ctx.cr6.eq) goto loc_821D3C98;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// mulli r10,r9,1540
	ctx.r10.s64 = ctx.r9.s64 * 1540;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D3C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r6,r7,r25
	ctx.r6.u64 = ctx.r7.u64 + ctx.r25.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r9,r10,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x821d3ca4
	goto loc_821D3CA4;
loc_821D3C98:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e2808
	ctx.lr = 0x821D3CA4;
	sub_821E2808(ctx, base);
loc_821D3CA4:
	// lhz r9,6220(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r31,6216
	ctx.r10.s64 = ctx.r31.s64 + 6216;
	// rlwinm r10,r6,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFF0;
	// sth r6,6220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6220, ctx.r6.u16);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
loc_821D3CEC:
	// lwz r11,6248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6248);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d3ae0
	if (ctx.cr6.lt) goto loc_821D3AE0;
loc_821D3D00:
	// lhz r11,6220(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// stw r22,6248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6248, ctx.r22.u32);
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x821d3d90
	if (ctx.cr0.lt) goto loc_821D3D90;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r30,r27,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r26,12288
	ctx.r26.s64 = 805306368;
	// lfs f31,13200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13200);
	ctx.f31.f64 = double(temp.f32);
loc_821D3D20:
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r28,r30,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,2,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d3e24
	if (ctx.cr6.eq) goto loc_821D3E24;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x821d3d84
	if (!ctx.cr6.eq) goto loc_821D3D84;
loc_821D3D44:
	// lhz r10,6220(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6220);
	// lwz r11,6216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r10,r7,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFF0;
	// sth r7,6220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6220, ctx.r7.u16);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r5,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
loc_821D3D84:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// bge 0x821d3d20
	if (!ctx.cr0.lt) goto loc_821D3D20;
loc_821D3D90:
	// lhz r11,6228(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6228);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821d3f18
	if (ctx.cr0.lt) goto loc_821D3F18;
	// lis r29,4096
	ctx.r29.s64 = 268435456;
loc_821D3DA0:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,6224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x821d3f10
	if (ctx.cr6.gt) goto loc_821D3F10;
	// lwz r11,6224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,2,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x821d3f10
	if (ctx.cr6.eq) goto loc_821D3F10;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d3ea8
	if (ctx.cr6.eq) goto loc_821D3EA8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,0,2,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x821d3e98
	if (!ctx.cr6.eq) goto loc_821D3E98;
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// mulli r11,r11,1540
	ctx.r11.s64 = ctx.r11.s64 * 1540;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D3E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d3eb0
	goto loc_821D3EB0;
loc_821D3E24:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821d3d44
	if (ctx.cr6.eq) goto loc_821D3D44;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bc550
	ctx.lr = 0x821D3E38;
	sub_821BC550(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x821bc568
	ctx.lr = 0x821D3E58;
	sub_821BC568(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f12,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f30.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fadds f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x821d3d84
	if (!ctx.cr6.lt) goto loc_821D3D84;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// b 0x821d3d84
	goto loc_821D3D84;
loc_821D3E98:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D3EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d3eb0
	goto loc_821D3EB0;
loc_821D3EA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e2808
	ctx.lr = 0x821D3EB0;
	sub_821E2808(ctx, base);
loc_821D3EB0:
	// lhz r11,6228(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6228);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821d3ec4
	if (!ctx.cr6.gt) goto loc_821D3EC4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821D3EC4:
	// lhz r9,6228(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6228);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// sth r11,6228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6228, ctx.r11.u16);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r3,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
loc_821D3F10:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x821d3da0
	if (!ctx.cr0.lt) goto loc_821D3DA0;
loc_821D3F18:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6256, ctx.r11.u32);
	// bl 0x821e24b8
	ctx.lr = 0x821D3F28;
	sub_821E24B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d3f3c
	if (!ctx.cr6.eq) goto loc_821D3F3C;
	// stw r22,6256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6256, ctx.r22.u32);
loc_821D3F3C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c9030
	ctx.lr = 0x821D3F44;
	sub_821C9030(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D3F58"))) PPC_WEAK_FUNC(sub_821D3F58);
PPC_FUNC_IMPL(__imp__sub_821D3F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D3F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e2668
	ctx.lr = 0x821D3F70;
	sub_821E2668(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,13208
	ctx.r10.s64 = ctx.r11.s64 + 13208;
	// addi r3,r31,6260
	ctx.r3.s64 = ctx.r31.s64 + 6260;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,6216
	ctx.r11.s64 = ctx.r31.s64 + 6216;
	// stw r30,6216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6216, ctx.r30.u32);
	// addi r11,r31,6224
	ctx.r11.s64 = ctx.r31.s64 + 6224;
	// sth r30,6220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6220, ctx.r30.u16);
	// sth r30,6222(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6222, ctx.r30.u16);
	// stw r30,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r30.u32);
	// sth r30,6228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6228, ctx.r30.u16);
	// sth r30,6230(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6230, ctx.r30.u16);
	// stw r30,6248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6248, ctx.r30.u32);
	// bl 0x821c8ed8
	ctx.lr = 0x821D3FAC;
	sub_821C8ED8(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r9,6252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6252, ctx.r9.u32);
	// ori r3,r3,40960
	ctx.r3.u64 = ctx.r3.u64 | 40960;
	// bl 0x82130528
	ctx.lr = 0x821D3FC0;
	sub_82130528(ctx, base);
	// li r29,2560
	ctx.r29.s64 = 2560;
	// stw r3,6216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6216, ctx.r3.u32);
	// li r3,30720
	ctx.r3.s64 = 30720;
	// sth r29,6222(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6222, ctx.r29.u16);
	// bl 0x82130528
	ctx.lr = 0x821D3FD4;
	sub_82130528(ctx, base);
	// stw r3,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r3.u32);
	// sth r29,6230(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6230, ctx.r29.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,6256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6256, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D3FEC"))) PPC_WEAK_FUNC(sub_821D3FEC);
PPC_FUNC_IMPL(__imp__sub_821D3FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D3FF0"))) PPC_WEAK_FUNC(sub_821D3FF0);
PPC_FUNC_IMPL(__imp__sub_821D3FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,6260
	ctx.r3.s64 = ctx.r3.s64 + 6260;
	// b 0x821c8f08
	sub_821C8F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D3FF8"))) PPC_WEAK_FUNC(sub_821D3FF8);
PPC_FUNC_IMPL(__imp__sub_821D3FF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,6260
	ctx.r3.s64 = ctx.r3.s64 + 6260;
	// b 0x821c8f70
	sub_821C8F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D4000"))) PPC_WEAK_FUNC(sub_821D4000);
PPC_FUNC_IMPL(__imp__sub_821D4000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,6260
	ctx.r3.s64 = ctx.r31.s64 + 6260;
	// addi r10,r11,13208
	ctx.r10.s64 = ctx.r11.s64 + 13208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82130000
	ctx.lr = 0x821D4030;
	sub_82130000(ctx, base);
	// lhz r9,6230(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6230);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d4044
	if (ctx.cr6.eq) goto loc_821D4044;
	// lwz r3,6224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// bl 0x82130588
	ctx.lr = 0x821D4044;
	sub_82130588(ctx, base);
loc_821D4044:
	// lhz r11,6222(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6222);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4058
	if (ctx.cr6.eq) goto loc_821D4058;
	// lwz r3,6216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// bl 0x82130588
	ctx.lr = 0x821D4058;
	sub_82130588(ctx, base);
loc_821D4058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e22b0
	ctx.lr = 0x821D4060;
	sub_821E22B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4078
	if (ctx.cr6.eq) goto loc_821D4078;
	// bl 0x82130588
	ctx.lr = 0x821D4074;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D4078:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4090"))) PPC_WEAK_FUNC(sub_821D4090);
PPC_FUNC_IMPL(__imp__sub_821D4090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6292
	ctx.r3.s64 = 6292;
	// bl 0x82130528
	ctx.lr = 0x821D40A4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d40c8
	if (ctx.cr6.eq) goto loc_821D40C8;
	// bl 0x821d3f58
	ctx.lr = 0x821D40B0;
	sub_821D3F58(ctx, base);
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// stw r3,3072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821D40C8:
	// lis r10,-32122
	ctx.r10.s64 = -2105147392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3072, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D40E4"))) PPC_WEAK_FUNC(sub_821D40E4);
PPC_FUNC_IMPL(__imp__sub_821D40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D40E8"))) PPC_WEAK_FUNC(sub_821D40E8);
PPC_FUNC_IMPL(__imp__sub_821D40E8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D40FC"))) PPC_WEAK_FUNC(sub_821D40FC);
PPC_FUNC_IMPL(__imp__sub_821D40FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4100"))) PPC_WEAK_FUNC(sub_821D4100);
PPC_FUNC_IMPL(__imp__sub_821D4100) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// rlwinm r10,r4,16,6,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0x3FF0000;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// sth r5,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4118"))) PPC_WEAK_FUNC(sub_821D4118);
PPC_FUNC_IMPL(__imp__sub_821D4118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,6
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d418c
	if (ctx.cr6.eq) goto loc_821D418C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_821D4160:
	// cmpwi cr6,r9,46
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 46, ctx.xer);
	// bne cr6,0x821d4174
	if (!ctx.cr6.eq) goto loc_821D4174;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// b 0x821d4178
	goto loc_821D4178;
loc_821D4174:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_821D4178:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821d4160
	if (!ctx.cr6.eq) goto loc_821D4160;
loc_821D418C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823dd7f0
	ctx.lr = 0x821D4194;
	sub_823DD7F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r10,16,6,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFC00FFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823dd7f0
	ctx.lr = 0x821D41AC;
	sub_823DD7F0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D41D0"))) PPC_WEAK_FUNC(sub_821D41D0);
PPC_FUNC_IMPL(__imp__sub_821D41D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r10,r11,0,6,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFC000000);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r8,r9,0,16,5
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFC00FFFF) | (ctx.r8.u64 & 0x3FF0000);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// sth r7,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D41FC"))) PPC_WEAK_FUNC(sub_821D41FC);
PPC_FUNC_IMPL(__imp__sub_821D41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4200"))) PPC_WEAK_FUNC(sub_821D4200);
PPC_FUNC_IMPL(__imp__sub_821D4200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,16,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d4224
	if (!ctx.cr6.eq) goto loc_821D4224;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d4224
	if (!ctx.cr6.eq) goto loc_821D4224;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_821D4224:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r10,16,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3FF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821d423c
	if (ctx.cr6.eq) goto loc_821D423C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D423C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821d4254
	if (!ctx.cr6.gt) goto loc_821D4254;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821D4254:
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4264"))) PPC_WEAK_FUNC(sub_821D4264);
PPC_FUNC_IMPL(__imp__sub_821D4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4268"))) PPC_WEAK_FUNC(sub_821D4268);
PPC_FUNC_IMPL(__imp__sub_821D4268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d42d4
	if (ctx.cr6.eq) goto loc_821D42D4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x823da950
	ctx.lr = 0x821D42A0;
	sub_823DA950(ctx, base);
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bge cr6,0x821d42b8
	if (!ctx.cr6.lt) goto loc_821D42B8;
	// subfic r5,r30,8
	ctx.xer.ca = ctx.r30.u32 <= 8;
	ctx.r5.s64 = 8 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x823d9890
	ctx.lr = 0x821D42B8;
	sub_823D9890(ctx, base);
loc_821D42B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D42BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821D42D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x821d42bc
	goto loc_821D42BC;
}

__attribute__((alias("__imp__sub_821D42E4"))) PPC_WEAK_FUNC(sub_821D42E4);
PPC_FUNC_IMPL(__imp__sub_821D42E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D42E8"))) PPC_WEAK_FUNC(sub_821D42E8);
PPC_FUNC_IMPL(__imp__sub_821D42E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d4320
	if (!ctx.cr6.eq) goto loc_821D4320;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821d4320
	if (!ctx.cr6.eq) goto loc_821D4320;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_821D4320:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821d4334
	if (ctx.cr6.eq) goto loc_821D4334;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D4334:
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_821D4338:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821d4358
	if (!ctx.cr0.eq) goto loc_821D4358;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821d4338
	if (!ctx.cr6.eq) goto loc_821D4338;
loc_821D4358:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4364"))) PPC_WEAK_FUNC(sub_821D4364);
PPC_FUNC_IMPL(__imp__sub_821D4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4368"))) PPC_WEAK_FUNC(sub_821D4368);
PPC_FUNC_IMPL(__imp__sub_821D4368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821e2b30
	ctx.lr = 0x821D4388;
	sub_821E2B30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d43a0
	if (ctx.cr6.eq) goto loc_821D43A0;
	// bl 0x82130588
	ctx.lr = 0x821D439C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D43A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D43B8"))) PPC_WEAK_FUNC(sub_821D43B8);
PPC_FUNC_IMPL(__imp__sub_821D43B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821e2c98
	ctx.lr = 0x821D43D8;
	sub_821E2C98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d43f0
	if (ctx.cr6.eq) goto loc_821D43F0;
	// bl 0x82130588
	ctx.lr = 0x821D43EC;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D43F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4408"))) PPC_WEAK_FUNC(sub_821D4408);
PPC_FUNC_IMPL(__imp__sub_821D4408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821e3928
	ctx.lr = 0x821D4428;
	sub_821E3928(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4440
	if (ctx.cr6.eq) goto loc_821D4440;
	// bl 0x82130588
	ctx.lr = 0x821D443C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D4440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4458"))) PPC_WEAK_FUNC(sub_821D4458);
PPC_FUNC_IMPL(__imp__sub_821D4458) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4464"))) PPC_WEAK_FUNC(sub_821D4464);
PPC_FUNC_IMPL(__imp__sub_821D4464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4468"))) PPC_WEAK_FUNC(sub_821D4468);
PPC_FUNC_IMPL(__imp__sub_821D4468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821e3ad8
	ctx.lr = 0x821D4488;
	sub_821E3AD8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d44a0
	if (ctx.cr6.eq) goto loc_821D44A0;
	// bl 0x82130588
	ctx.lr = 0x821D449C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D44A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D44B8"))) PPC_WEAK_FUNC(sub_821D44B8);
PPC_FUNC_IMPL(__imp__sub_821D44B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,13540
	ctx.r9.s64 = ctx.r11.s64 + 13540;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821d44ec
	if (ctx.cr6.eq) goto loc_821D44EC;
	// bl 0x82130588
	ctx.lr = 0x821D44E8;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D44EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4500"))) PPC_WEAK_FUNC(sub_821D4500);
PPC_FUNC_IMPL(__imp__sub_821D4500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x821d4648
	if (ctx.cr6.gt) goto loc_821D4648;
	// beq cr6,0x821d4628
	if (ctx.cr6.eq) goto loc_821D4628;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x821d4a90
	if (ctx.cr6.gt) goto loc_821D4A90;
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,17740
	ctx.r12.s64 = ctx.r12.s64 + 17740;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821D4580;
	case 1:
		goto loc_821D4580;
	case 2:
		goto loc_821D4580;
	case 3:
		goto loc_821D4580;
	case 4:
		goto loc_821D4580;
	case 5:
		goto loc_821D4580;
	case 6:
		goto loc_821D4580;
	case 7:
		goto loc_821D4580;
	case 8:
		goto loc_821D45B0;
	case 9:
		goto loc_821D45B0;
	case 10:
		goto loc_821D45B0;
	case 11:
		goto loc_821D4600;
	case 12:
		goto loc_821D45D8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,17792(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17792);
	// lwz r16,17792(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17792);
	// lwz r16,17792(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17792);
	// lwz r16,17792(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17792);
	// lwz r16,17792(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17792);
	// lwz r16,17792(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17792);
	// lwz r16,17792(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17792);
	// lwz r16,17792(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17792);
	// lwz r16,17840(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17840);
	// lwz r16,17840(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17840);
	// lwz r16,17840(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17840);
	// lwz r16,17920(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17920);
	// lwz r16,17880(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17880);
loc_821D4580:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x821D4588;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d45a8
	if (ctx.cr6.eq) goto loc_821D45A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13844
	ctx.r10.s64 = ctx.r11.s64 + 13844;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d4a90
	goto loc_821D4A90;
loc_821D45A8:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821d4a90
	goto loc_821D4A90;
loc_821D45B0:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x821D45B8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d45a8
	if (ctx.cr6.eq) goto loc_821D45A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13792
	ctx.r10.s64 = ctx.r11.s64 + 13792;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d4a90
	goto loc_821D4A90;
loc_821D45D8:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x821D45E0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d45a8
	if (ctx.cr6.eq) goto loc_821D45A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13740
	ctx.r10.s64 = ctx.r11.s64 + 13740;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d4a90
	goto loc_821D4A90;
loc_821D4600:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x821D4608;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d45a8
	if (ctx.cr6.eq) goto loc_821D45A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13688
	ctx.r10.s64 = ctx.r11.s64 + 13688;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d4a90
	goto loc_821D4A90;
loc_821D4628:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82130528
	ctx.lr = 0x821D4630;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d45a8
	if (ctx.cr6.eq) goto loc_821D45A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e3d40
	ctx.lr = 0x821D4640;
	sub_821E3D40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d4a90
	goto loc_821D4A90;
loc_821D4648:
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
	// cmplwi cr6,r11,241
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 241, ctx.xer);
	// bgt cr6,0x821d4a90
	if (ctx.cr6.gt) goto loc_821D4A90;
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,18028
	ctx.r12.s64 = ctx.r12.s64 + 18028;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821D4A5C;
	case 1:
		goto loc_821D4A34;
	case 2:
		goto loc_821D4A34;
	case 3:
		goto loc_821D4A90;
	case 4:
		goto loc_821D4A90;
	case 5:
		goto loc_821D4A90;
	case 6:
		goto loc_821D4A90;
	case 7:
		goto loc_821D4A90;
	case 8:
		goto loc_821D4A90;
	case 9:
		goto loc_821D4A90;
	case 10:
		goto loc_821D4A90;
	case 11:
		goto loc_821D4A90;
	case 12:
		goto loc_821D4A90;
	case 13:
		goto loc_821D4A90;
	case 14:
		goto loc_821D4A90;
	case 15:
		goto loc_821D4A90;
	case 16:
		goto loc_821D4A90;
	case 17:
		goto loc_821D4A90;
	case 18:
		goto loc_821D4A90;
	case 19:
		goto loc_821D4A90;
	case 20:
		goto loc_821D4A90;
	case 21:
		goto loc_821D4A90;
	case 22:
		goto loc_821D4A90;
	case 23:
		goto loc_821D4A90;
	case 24:
		goto loc_821D4A90;
	case 25:
		goto loc_821D4A90;
	case 26:
		goto loc_821D4A90;
	case 27:
		goto loc_821D4A90;
	case 28:
		goto loc_821D4A90;
	case 29:
		goto loc_821D4A90;
	case 30:
		goto loc_821D4A90;
	case 31:
		goto loc_821D4A90;
	case 32:
		goto loc_821D4A90;
	case 33:
		goto loc_821D4A90;
	case 34:
		goto loc_821D4A90;
	case 35:
		goto loc_821D4A90;
	case 36:
		goto loc_821D4A90;
	case 37:
		goto loc_821D4A90;
	case 38:
		goto loc_821D4A90;
	case 39:
		goto loc_821D4A90;
	case 40:
		goto loc_821D4A90;
	case 41:
		goto loc_821D4A90;
	case 42:
		goto loc_821D4A90;
	case 43:
		goto loc_821D4A90;
	case 44:
		goto loc_821D4A90;
	case 45:
		goto loc_821D4A90;
	case 46:
		goto loc_821D4A90;
	case 47:
		goto loc_821D4A90;
	case 48:
		goto loc_821D4A90;
	case 49:
		goto loc_821D4A90;
	case 50:
		goto loc_821D4A90;
	case 51:
		goto loc_821D4A90;
	case 52:
		goto loc_821D4A90;
	case 53:
		goto loc_821D4A90;
	case 54:
		goto loc_821D4A90;
	case 55:
		goto loc_821D4A90;
	case 56:
		goto loc_821D4A90;
	case 57:
		goto loc_821D4A90;
	case 58:
		goto loc_821D4A90;
	case 59:
		goto loc_821D4A90;
	case 60:
		goto loc_821D4A90;
	case 61:
		goto loc_821D4A90;
	case 62:
		goto loc_821D4A90;
	case 63:
		goto loc_821D4A90;
	case 64:
		goto loc_821D4A90;
	case 65:
		goto loc_821D4A90;
	case 66:
		goto loc_821D4A90;
	case 67:
		goto loc_821D4A90;
	case 68:
		goto loc_821D4A90;
	case 69:
		goto loc_821D4A90;
	case 70:
		goto loc_821D4A90;
	case 71:
		goto loc_821D4A90;
	case 72:
		goto loc_821D4A90;
	case 73:
		goto loc_821D4A90;
	case 74:
		goto loc_821D4A90;
	case 75:
		goto loc_821D4A90;
	case 76:
		goto loc_821D4A90;
	case 77:
		goto loc_821D4A90;
	case 78:
		goto loc_821D4A90;
	case 79:
		goto loc_821D4A90;
	case 80:
		goto loc_821D4A90;
	case 81:
		goto loc_821D4A90;
	case 82:
		goto loc_821D4A90;
	case 83:
		goto loc_821D4A90;
	case 84:
		goto loc_821D4A90;
	case 85:
		goto loc_821D4A90;
	case 86:
		goto loc_821D4A90;
	case 87:
		goto loc_821D4A90;
	case 88:
		goto loc_821D4A90;
	case 89:
		goto loc_821D4A90;
	case 90:
		goto loc_821D4A90;
	case 91:
		goto loc_821D4A90;
	case 92:
		goto loc_821D4A90;
	case 93:
		goto loc_821D4A90;
	case 94:
		goto loc_821D4A90;
	case 95:
		goto loc_821D4A90;
	case 96:
		goto loc_821D4A90;
	case 97:
		goto loc_821D4A90;
	case 98:
		goto loc_821D4A90;
	case 99:
		goto loc_821D4A90;
	case 100:
		goto loc_821D4A90;
	case 101:
		goto loc_821D4A90;
	case 102:
		goto loc_821D4A90;
	case 103:
		goto loc_821D4A90;
	case 104:
		goto loc_821D4A90;
	case 105:
		goto loc_821D4A90;
	case 106:
		goto loc_821D4A90;
	case 107:
		goto loc_821D4A90;
	case 108:
		goto loc_821D4A90;
	case 109:
		goto loc_821D4A90;
	case 110:
		goto loc_821D4A90;
	case 111:
		goto loc_821D4A90;
	case 112:
		goto loc_821D4A90;
	case 113:
		goto loc_821D4A90;
	case 114:
		goto loc_821D4A90;
	case 115:
		goto loc_821D4A90;
	case 116:
		goto loc_821D4A90;
	case 117:
		goto loc_821D4A90;
	case 118:
		goto loc_821D4A90;
	case 119:
		goto loc_821D4A90;
	case 120:
		goto loc_821D4A90;
	case 121:
		goto loc_821D4A90;
	case 122:
		goto loc_821D4A90;
	case 123:
		goto loc_821D4A90;
	case 124:
		goto loc_821D4A90;
	case 125:
		goto loc_821D4A90;
	case 126:
		goto loc_821D4A90;
	case 127:
		goto loc_821D4A90;
	case 128:
		goto loc_821D4A90;
	case 129:
		goto loc_821D4A90;
	case 130:
		goto loc_821D4A90;
	case 131:
		goto loc_821D4A90;
	case 132:
		goto loc_821D4A90;
	case 133:
		goto loc_821D4A90;
	case 134:
		goto loc_821D4A90;
	case 135:
		goto loc_821D4A90;
	case 136:
		goto loc_821D4A90;
	case 137:
		goto loc_821D4A90;
	case 138:
		goto loc_821D4A90;
	case 139:
		goto loc_821D4A90;
	case 140:
		goto loc_821D4A90;
	case 141:
		goto loc_821D4A90;
	case 142:
		goto loc_821D4A90;
	case 143:
		goto loc_821D4A90;
	case 144:
		goto loc_821D4A90;
	case 145:
		goto loc_821D4A90;
	case 146:
		goto loc_821D4A90;
	case 147:
		goto loc_821D4A90;
	case 148:
		goto loc_821D4A90;
	case 149:
		goto loc_821D4A90;
	case 150:
		goto loc_821D4A90;
	case 151:
		goto loc_821D4A90;
	case 152:
		goto loc_821D4A90;
	case 153:
		goto loc_821D4A90;
	case 154:
		goto loc_821D4A90;
	case 155:
		goto loc_821D4A90;
	case 156:
		goto loc_821D4A90;
	case 157:
		goto loc_821D4A90;
	case 158:
		goto loc_821D4A90;
	case 159:
		goto loc_821D4A90;
	case 160:
		goto loc_821D4A90;
	case 161:
		goto loc_821D4A90;
	case 162:
		goto loc_821D4A90;
	case 163:
		goto loc_821D4A90;
	case 164:
		goto loc_821D4A90;
	case 165:
		goto loc_821D4A90;
	case 166:
		goto loc_821D4A90;
	case 167:
		goto loc_821D4A90;
	case 168:
		goto loc_821D4A90;
	case 169:
		goto loc_821D4A90;
	case 170:
		goto loc_821D4A90;
	case 171:
		goto loc_821D4A90;
	case 172:
		goto loc_821D4A90;
	case 173:
		goto loc_821D4A90;
	case 174:
		goto loc_821D4A90;
	case 175:
		goto loc_821D4A90;
	case 176:
		goto loc_821D4A90;
	case 177:
		goto loc_821D4A90;
	case 178:
		goto loc_821D4A90;
	case 179:
		goto loc_821D4A90;
	case 180:
		goto loc_821D4A90;
	case 181:
		goto loc_821D4A90;
	case 182:
		goto loc_821D4A90;
	case 183:
		goto loc_821D4A90;
	case 184:
		goto loc_821D4A90;
	case 185:
		goto loc_821D4A90;
	case 186:
		goto loc_821D4A90;
	case 187:
		goto loc_821D4A90;
	case 188:
		goto loc_821D4A90;
	case 189:
		goto loc_821D4A90;
	case 190:
		goto loc_821D4A90;
	case 191:
		goto loc_821D4A90;
	case 192:
		goto loc_821D4A90;
	case 193:
		goto loc_821D4A90;
	case 194:
		goto loc_821D4A90;
	case 195:
		goto loc_821D4A90;
	case 196:
		goto loc_821D4A90;
	case 197:
		goto loc_821D4A90;
	case 198:
		goto loc_821D4A90;
	case 199:
		goto loc_821D4A90;
	case 200:
		goto loc_821D4A90;
	case 201:
		goto loc_821D4A90;
	case 202:
		goto loc_821D4A90;
	case 203:
		goto loc_821D4A90;
	case 204:
		goto loc_821D4A90;
	case 205:
		goto loc_821D4A90;
	case 206:
		goto loc_821D4A90;
	case 207:
		goto loc_821D4A90;
	case 208:
		goto loc_821D4A90;
	case 209:
		goto loc_821D4A90;
	case 210:
		goto loc_821D4A90;
	case 211:
		goto loc_821D4A90;
	case 212:
		goto loc_821D4A90;
	case 213:
		goto loc_821D4A90;
	case 214:
		goto loc_821D4A90;
	case 215:
		goto loc_821D4A90;
	case 216:
		goto loc_821D4A90;
	case 217:
		goto loc_821D4A90;
	case 218:
		goto loc_821D4A90;
	case 219:
		goto loc_821D4A90;
	case 220:
		goto loc_821D4A90;
	case 221:
		goto loc_821D4A90;
	case 222:
		goto loc_821D4A90;
	case 223:
		goto loc_821D4A90;
	case 224:
		goto loc_821D4A90;
	case 225:
		goto loc_821D4A90;
	case 226:
		goto loc_821D4A90;
	case 227:
		goto loc_821D4A90;
	case 228:
		goto loc_821D4A90;
	case 229:
		goto loc_821D4A90;
	case 230:
		goto loc_821D4A90;
	case 231:
		goto loc_821D4A90;
	case 232:
		goto loc_821D4A90;
	case 233:
		goto loc_821D4A90;
	case 234:
		goto loc_821D4A90;
	case 235:
		goto loc_821D4A90;
	case 236:
		goto loc_821D4A90;
	case 237:
		goto loc_821D4A90;
	case 238:
		goto loc_821D4A90;
	case 239:
		goto loc_821D4A90;
	case 240:
		goto loc_821D4A90;
	case 241:
		goto loc_821D4A84;
	default:
		__builtin_unreachable();
	}
	// lwz r16,19036(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19036);
	// lwz r16,18996(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18996);
	// lwz r16,18996(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18996);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19088(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19088);
	// lwz r16,19076(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19076);
loc_821D4A34:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x821D4A3C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d45a8
	if (ctx.cr6.eq) goto loc_821D45A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13636
	ctx.r10.s64 = ctx.r11.s64 + 13636;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d4a90
	goto loc_821D4A90;
loc_821D4A5C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x821D4A64;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d45a8
	if (ctx.cr6.eq) goto loc_821D45A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13584
	ctx.r10.s64 = ctx.r11.s64 + 13584;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d4a90
	goto loc_821D4A90;
loc_821D4A84:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,13892
	ctx.r3.s64 = ctx.r11.s64 + 13892;
	// bl 0x821bd618
	ctx.lr = 0x821D4A90;
	sub_821BD618(ctx, base);
loc_821D4A90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4AAC"))) PPC_WEAK_FUNC(sub_821D4AAC);
PPC_FUNC_IMPL(__imp__sub_821D4AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4AB0"))) PPC_WEAK_FUNC(sub_821D4AB0);
PPC_FUNC_IMPL(__imp__sub_821D4AB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
loc_821D4AC0:
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stwx r5,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r7.u32);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d4ac0
	if (!ctx.cr6.eq) goto loc_821D4AC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4B00"))) PPC_WEAK_FUNC(sub_821D4B00);
PPC_FUNC_IMPL(__imp__sub_821D4B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D4B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4b38
	if (ctx.cr6.eq) goto loc_821D4B38;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821D4B24:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d4b24
	if (!ctx.cr6.eq) goto loc_821D4B24;
loc_821D4B38:
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d4b50
	if (ctx.cr6.eq) goto loc_821D4B50;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x821D4B4C;
	sub_82130528(ctx, base);
	// b 0x821d4b54
	goto loc_821D4B54;
loc_821D4B50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4B54:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4ba4
	if (ctx.cr6.eq) goto loc_821D4BA4;
loc_821D4B70:
	// bl 0x821d4500
	ctx.lr = 0x821D4B74;
	sub_821D4500(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// stwx r3,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwzx r3,r8,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d4b70
	if (!ctx.cr6.eq) goto loc_821D4B70;
loc_821D4BA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D4BAC"))) PPC_WEAK_FUNC(sub_821D4BAC);
PPC_FUNC_IMPL(__imp__sub_821D4BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4BB0"))) PPC_WEAK_FUNC(sub_821D4BB0);
PPC_FUNC_IMPL(__imp__sub_821D4BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x821d4be4
	if (ctx.cr6.eq) goto loc_821D4BE4;
	// bctrl 
	ctx.lr = 0x821D4BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d4be8
	goto loc_821D4BE8;
loc_821D4BE4:
	// bctrl 
	ctx.lr = 0x821D4BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D4BE8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d4c0c
	if (!ctx.cr6.eq) goto loc_821D4C0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,13916
	ctx.r3.s64 = ctx.r11.s64 + 13916;
	// bl 0x82130000
	ctx.lr = 0x821D4C04;
	sub_82130000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d4c34
	goto loc_821D4C34;
loc_821D4C0C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r3,2828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d4c30
	if (ctx.cr6.eq) goto loc_821D4C30;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821beec0
	ctx.lr = 0x821D4C30;
	sub_821BEEC0(ctx, base);
loc_821D4C30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821D4C34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D4C4C"))) PPC_WEAK_FUNC(sub_821D4C4C);
PPC_FUNC_IMPL(__imp__sub_821D4C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4C50"))) PPC_WEAK_FUNC(sub_821D4C50);
PPC_FUNC_IMPL(__imp__sub_821D4C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x821D4C58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,2828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// lhz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// beq cr6,0x821d4d08
	if (ctx.cr6.eq) goto loc_821D4D08;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D4C8C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D4CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821d4cc4
	if (ctx.cr6.eq) goto loc_821D4CC4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823db730
	ctx.lr = 0x821D4CBC;
	sub_823DB730(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x821d4cec
	goto loc_821D4CEC;
loc_821D4CC4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821D4CC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821d4cec
	if (ctx.cr6.eq) goto loc_821D4CEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d4cc8
	if (ctx.cr6.eq) goto loc_821D4CC8;
loc_821D4CEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d4d14
	if (ctx.cr6.eq) goto loc_821D4D14;
	// lhz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d4c8c
	if (ctx.cr6.lt) goto loc_821D4C8C;
loc_821D4D08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D4D14:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D4D28"))) PPC_WEAK_FUNC(sub_821D4D28);
PPC_FUNC_IMPL(__imp__sub_821D4D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x821D4D30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x821c9790
	ctx.lr = 0x821D4D58;
	sub_821C9790(ctx, base);
	// lhz r5,56(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 56);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d4de0
	if (ctx.cr6.eq) goto loc_821D4DE0;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r7,r11,10896
	ctx.r7.s64 = ctx.r11.s64 + 10896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de288
	ctx.lr = 0x821D4D80;
	sub_823DE288(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4de0
	if (ctx.cr6.eq) goto loc_821D4DE0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4de0
	if (ctx.cr6.eq) goto loc_821D4DE0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4de0
	if (ctx.cr6.eq) goto loc_821D4DE0;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x821d4dcc
	if (ctx.cr6.eq) goto loc_821D4DCC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d4de0
	goto loc_821D4DE0;
loc_821D4DCC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D4DE0:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4e04
	if (ctx.cr6.eq) goto loc_821D4E04;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821d4d28
	ctx.lr = 0x821D4E04;
	sub_821D4D28(ctx, base);
loc_821D4E04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D4E0C"))) PPC_WEAK_FUNC(sub_821D4E0C);
PPC_FUNC_IMPL(__imp__sub_821D4E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4E10"))) PPC_WEAK_FUNC(sub_821D4E10);
PPC_FUNC_IMPL(__imp__sub_821D4E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D4E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c9790
	ctx.lr = 0x821D4E34;
	sub_821C9790(ctx, base);
	// lhz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d4ea4
	if (ctx.cr6.eq) goto loc_821D4EA4;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r7,r11,10896
	ctx.r7.s64 = ctx.r11.s64 + 10896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de288
	ctx.lr = 0x821D4E5C;
	sub_823DE288(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4ea4
	if (ctx.cr6.eq) goto loc_821D4EA4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4ea4
	if (ctx.cr6.eq) goto loc_821D4EA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4ea4
	if (ctx.cr6.eq) goto loc_821D4EA4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x821d4e9c
	if (ctx.cr6.eq) goto loc_821D4E9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d4ea4
	goto loc_821D4EA4;
loc_821D4E9C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D4EA4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4ebc
	if (ctx.cr6.eq) goto loc_821D4EBC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821d4e10
	ctx.lr = 0x821D4EBC;
	sub_821D4E10(ctx, base);
loc_821D4EBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D4EC4"))) PPC_WEAK_FUNC(sub_821D4EC4);
PPC_FUNC_IMPL(__imp__sub_821D4EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D4EC8"))) PPC_WEAK_FUNC(sub_821D4EC8);
PPC_FUNC_IMPL(__imp__sub_821D4EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x821D4ED0;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lis r28,-32125
	ctx.r28.s64 = -2105344000;
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r24,28
	ctx.r30.s64 = ctx.r24.s64 + 28;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lhz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 28);
	// clrlwi r10,r11,22
	ctx.r10.u64 = ctx.r11.u32 & 0x3FF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d4f60
	if (ctx.cr6.eq) goto loc_821D4F60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x821D4F0C;
	sub_82130000(ctx, base);
	// lwz r11,2828(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2828);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d4f60
	if (ctx.cr6.eq) goto loc_821D4F60;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d4200
	ctx.lr = 0x821D4F30;
	sub_821D4200(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x821d4f60
	if (ctx.cr6.eq) goto loc_821D4F60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r10,14072
	ctx.r3.s64 = ctx.r10.s64 + 14072;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r11,16,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r5,r9,16,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3FF;
	// bl 0x82130000
	ctx.lr = 0x821D4F60;
	sub_82130000(ctx, base);
loc_821D4F60:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-13244
	ctx.r5.s64 = ctx.r11.s64 + -13244;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821d6e80
	ctx.lr = 0x821D4F78;
	sub_821D6E80(ctx, base);
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r15,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r15.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r15,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r15.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821d4ab0
	ctx.lr = 0x821D4F94;
	sub_821D4AB0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x821d52bc
	if (ctx.cr6.eq) goto loc_821D52BC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,2828(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2828);
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r11,r10,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r22,r10,16,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4ffc
	if (ctx.cr6.eq) goto loc_821D4FFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d4ffc
	if (ctx.cr6.eq) goto loc_821D4FFC;
loc_821D4FD8:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821d4fd8
	if (!ctx.cr6.eq) goto loc_821D4FD8;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_821D4FFC:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt 0x821d5270
	if (ctx.cr0.lt) goto loc_821D5270;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r19,r11,4820
	ctx.r19.s64 = ctx.r11.s64 + 4820;
	// addi r18,r10,5124
	ctx.r18.s64 = ctx.r10.s64 + 5124;
	// addi r16,r9,14024
	ctx.r16.s64 = ctx.r9.s64 + 14024;
	// addi r21,r8,14016
	ctx.r21.s64 = ctx.r8.s64 + 14016;
	// addi r20,r7,14008
	ctx.r20.s64 = ctx.r7.s64 + 14008;
loc_821D5040:
	// lwz r25,68(r17)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + 68);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// lwz r27,0(r17)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lhz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5258
	if (ctx.cr6.eq) goto loc_821D5258;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
loc_821D505C:
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// lwzx r30,r26,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_821D5074:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821d508c
	if (ctx.cr6.eq) goto loc_821D508C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821d51a4
	if (ctx.cr6.eq) goto loc_821D51A4;
loc_821D508C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D50A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r22,24
	ctx.r9.u64 = ctx.r22.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d50c8
	if (ctx.cr6.eq) goto loc_821D50C8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823db730
	ctx.lr = 0x821D50C0;
	sub_823DB730(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x821d50f0
	goto loc_821D50F0;
loc_821D50C8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821D50CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821d50f0
	if (ctx.cr6.eq) goto loc_821D50F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d50cc
	if (ctx.cr6.eq) goto loc_821D50CC;
loc_821D50F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d511c
	if (ctx.cr6.eq) goto loc_821D511C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c81e0
	ctx.lr = 0x821D5108;
	sub_821C81E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// b 0x821d5074
	goto loc_821D5074;
loc_821D511C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D5130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r31,r3,r27
	ctx.r31.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821d4d28
	ctx.lr = 0x821D5150;
	sub_821D4D28(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D516C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821d4d28
	ctx.lr = 0x821D5188;
	sub_821D4D28(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x821d51a0
	if (ctx.cr6.eq) goto loc_821D51A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_821D51A0:
	// li r28,1
	ctx.r28.s64 = 1;
loc_821D51A4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821c81e0
	ctx.lr = 0x821D51B4;
	sub_821C81E0(ctx, base);
	// clrlwi r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d5240
	if (!ctx.cr6.eq) goto loc_821D5240;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,2828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r8,r9,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821d5200
	if (ctx.cr6.eq) goto loc_821D5200;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D51F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82130000
	ctx.lr = 0x821D5200;
	sub_82130000(ctx, base);
loc_821D5200:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d5240
	if (!ctx.cr6.eq) goto loc_821D5240;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,2828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r8,r9,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821d5240
	if (ctx.cr6.eq) goto loc_821D5240;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821d63a8
	ctx.lr = 0x821D5228;
	sub_821D63A8(ctx, base);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821d8050
	ctx.lr = 0x821D523C;
	sub_821D8050(ctx, base);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
loc_821D5240:
	// lhz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 24);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d505c
	if (ctx.cr6.lt) goto loc_821D505C;
	// lwz r26,452(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
loc_821D5258:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r17,r17,-4
	ctx.r17.s64 = ctx.r17.s64 + -4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge 0x821d5040
	if (!ctx.cr0.lt) goto loc_821D5040;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_821D5270:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x821d52bc
	if (ctx.cr6.eq) goto loc_821D52BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d52bc
	if (ctx.cr6.eq) goto loc_821D52BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,13956
	ctx.r30.s64 = ctx.r11.s64 + 13956;
loc_821D528C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d52ac
	if (!ctx.cr6.eq) goto loc_821D52AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130000
	ctx.lr = 0x821D52AC;
	sub_82130000(ctx, base);
loc_821D52AC:
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d528c
	if (!ctx.cr6.eq) goto loc_821D528C;
loc_821D52BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,3520
	ctx.r5.s64 = ctx.r11.s64 + 3520;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821d4e10
	ctx.lr = 0x821D52D0;
	sub_821D4E10(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D52D8"))) PPC_WEAK_FUNC(sub_821D52D8);
PPC_FUNC_IMPL(__imp__sub_821D52D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D52E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,14164
	ctx.r9.s64 = ctx.r11.s64 + 14164;
	// lhz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d5340
	if (ctx.cr6.eq) goto loc_821D5340;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D5308:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d532c
	if (ctx.cr6.eq) goto loc_821D532C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D532C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D532C:
	// lhz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d5308
	if (ctx.cr6.lt) goto loc_821D5308;
loc_821D5340:
	// lhz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 56);
	// addi r30,r29,48
	ctx.r30.s64 = ctx.r29.s64 + 48;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5358
	if (!ctx.cr6.eq) goto loc_821D5358;
loc_821D5354:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D5358:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821d536c
	if (!ctx.cr6.eq) goto loc_821D536C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821d5370
	if (ctx.cr6.eq) goto loc_821D5370;
loc_821D536C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D5370:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d53a8
	if (ctx.cr6.eq) goto loc_821D53A8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82130588
	ctx.lr = 0x821D5390;
	sub_82130588(ctx, base);
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821d5358
	if (ctx.cr6.lt) goto loc_821D5358;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821d5354
	goto loc_821D5354;
loc_821D53A8:
	// lhz r11,58(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d53bc
	if (ctx.cr6.eq) goto loc_821D53BC;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82130588
	ctx.lr = 0x821D53BC;
	sub_82130588(ctx, base);
loc_821D53BC:
	// lhz r11,26(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d53d0
	if (ctx.cr6.eq) goto loc_821D53D0;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82130588
	ctx.lr = 0x821D53D0;
	sub_82130588(ctx, base);
loc_821D53D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D53D8"))) PPC_WEAK_FUNC(sub_821D53D8);
PPC_FUNC_IMPL(__imp__sub_821D53D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d53f8
	if (ctx.cr6.eq) goto loc_821D53F8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821D53F8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D5404"))) PPC_WEAK_FUNC(sub_821D5404);
PPC_FUNC_IMPL(__imp__sub_821D5404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5408"))) PPC_WEAK_FUNC(sub_821D5408);
PPC_FUNC_IMPL(__imp__sub_821D5408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,14164
	ctx.r10.s64 = ctx.r11.s64 + 14164;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// sth r30,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r30.u16);
	// sth r30,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r30.u16);
	// bl 0x821d40e8
	ctx.lr = 0x821D5450;
	sub_821D40E8(ctx, base);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r6,r9,23744
	ctx.r6.s64 = ctx.r9.s64 + 23744;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r5,r8,23744
	ctx.r5.s64 = ctx.r8.s64 + 23744;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// sth r30,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r30.u16);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// sth r30,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r30.u16);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stb r7,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D54BC"))) PPC_WEAK_FUNC(sub_821D54BC);
PPC_FUNC_IMPL(__imp__sub_821D54BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D54C0"))) PPC_WEAK_FUNC(sub_821D54C0);
PPC_FUNC_IMPL(__imp__sub_821D54C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821d52d8
	ctx.lr = 0x821D54E0;
	sub_821D52D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d54f8
	if (ctx.cr6.eq) goto loc_821D54F8;
	// bl 0x82130588
	ctx.lr = 0x821D54F4;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D54F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D5510"))) PPC_WEAK_FUNC(sub_821D5510);
PPC_FUNC_IMPL(__imp__sub_821D5510) {
	PPC_FUNC_PROLOGUE();
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r11,r3,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
loc_821D5524:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d5534
	if (ctx.cr6.eq) goto loc_821D5534;
	// dcbf r0,r11
	// b 0x821d5538
	goto loc_821D5538;
loc_821D5534:
	// dcbst r0,r11
loc_821D5538:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821d5524
	if (!ctx.cr6.gt) goto loc_821D5524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D5548"))) PPC_WEAK_FUNC(sub_821D5548);
PPC_FUNC_IMPL(__imp__sub_821D5548) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x821D5550;
	__savegprlr_20(ctx, base);
	// rlwinm r10,r3,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r3,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r8,14176
	ctx.r11.s64 = ctx.r8.s64 + 14176;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// beq cr6,0x821d55bc
	if (ctx.cr6.eq) goto loc_821D55BC;
loc_821D5584:
	// clrlwi r9,r4,30
	ctx.r9.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d55bc
	if (ctx.cr6.eq) goto loc_821D55BC;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r10,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// xor r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// bne 0x821d5584
	if (!ctx.cr0.eq) goto loc_821D5584;
loc_821D55BC:
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// blt cr6,0x821d5818
	if (ctx.cr6.lt) goto loc_821D5818;
	// rlwinm r8,r5,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
loc_821D55CC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// addi r4,r11,7168
	ctx.r4.s64 = ctx.r11.s64 + 7168;
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r30,r11,6144
	ctx.r30.s64 = ctx.r11.s64 + 6144;
	// xor r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// rlwinm r29,r10,18,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FC;
	// rlwinm r28,r10,26,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// lwz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r26,r10,10,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FC;
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// addi r24,r11,7168
	ctx.r24.s64 = ctx.r11.s64 + 7168;
	// lwzx r7,r29,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// addi r29,r11,4096
	ctx.r29.s64 = ctx.r11.s64 + 4096;
	// lwzx r6,r28,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// addi r28,r11,6144
	ctx.r28.s64 = ctx.r11.s64 + 6144;
	// lwzx r4,r26,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r4.u32);
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// lwzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// xor r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// xor r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// addi r4,r11,4096
	ctx.r4.s64 = ctx.r11.s64 + 4096;
	// xor r9,r6,r27
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r27.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r9,18,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FC;
	// rlwinm r6,r9,26,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FC;
	// rlwinm r27,r9,10,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FC;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r22,r11,6144
	ctx.r22.s64 = ctx.r11.s64 + 6144;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r30,r11,5120
	ctx.r30.s64 = ctx.r11.s64 + 5120;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// lwzx r27,r27,r24
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// addi r24,r11,4096
	ctx.r24.s64 = ctx.r11.s64 + 4096;
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// lwzx r6,r9,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r9,r7,r27
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// xor r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// addi r9,r11,5120
	ctx.r9.s64 = ctx.r11.s64 + 5120;
	// xor r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r25.u64;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r11,7168
	ctx.r27.s64 = ctx.r11.s64 + 7168;
	// rlwinm r25,r6,18,22,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC;
	// rlwinm r21,r6,26,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FC;
	// rlwinm r20,r6,10,22,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FC;
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lwzx r28,r25,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// lwzx r26,r21,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r26.u32);
	// lwzx r3,r20,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r3.u32);
	// xor r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r26.u64;
	// lwzx r6,r6,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// xor r4,r28,r3
	ctx.r4.u64 = ctx.r28.u64 ^ ctx.r3.u64;
	// xor r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// xor r6,r3,r23
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r23.u64;
	// rlwinm r4,r6,18,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC;
	// rlwinm r3,r6,26,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FC;
	// rlwinm r28,r6,10,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FC;
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lwzx r4,r4,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lwzx r31,r28,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// xor r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// lwzx r3,r6,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// xor r6,r4,r31
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// xor r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r29.u64;
	// rlwinm r6,r3,18,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// rlwinm r4,r3,26,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FC;
	// rlwinm r31,r3,10,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x3FC;
	// lwzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r6,r3,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// lwzx r9,r31,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// addi r4,r11,6144
	ctx.r4.s64 = ctx.r11.s64 + 6144;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// lwzx r7,r6,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r30,r3,26,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FC;
	// rlwinm r9,r3,18,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// rlwinm r29,r3,10,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x3FC;
	// rlwinm r3,r3,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r11,6144
	ctx.r27.s64 = ctx.r11.s64 + 6144;
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r30,r11,7168
	ctx.r30.s64 = ctx.r11.s64 + 7168;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r4,r11,5120
	ctx.r4.s64 = ctx.r11.s64 + 5120;
	// lwzx r31,r29,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r29,r11,4096
	ctx.r29.s64 = ctx.r11.s64 + 4096;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// lwzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// xor r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// addi r31,r11,5120
	ctx.r31.s64 = ctx.r11.s64 + 5120;
	// xor r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// addi r26,r11,7168
	ctx.r26.s64 = ctx.r11.s64 + 7168;
	// xor r9,r7,r28
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// rlwinm r28,r9,18,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FC;
	// rlwinm r25,r9,26,22,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FC;
	// rlwinm r24,r9,10,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FC;
	// rlwinm r23,r9,2,22,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwzx r28,r28,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r4,r25,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r4.u32);
	// addi r5,r5,-32
	ctx.r5.s64 = ctx.r5.s64 + -32;
	// lwzx r10,r24,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r30.u32);
	// xor r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 ^ ctx.r4.u64;
	// lwzx r30,r23,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r29.u32);
	// xor r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// xor r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// xor r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r6,r10,18,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FC;
	// rlwinm r4,r10,26,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// rlwinm r30,r10,10,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FC;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lwzx r6,r6,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r3,r30,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// lwzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// xor r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// bne 0x821d55cc
	if (!ctx.cr0.eq) goto loc_821D55CC;
loc_821D5818:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x821d5878
	if (ctx.cr6.lt) goto loc_821D5878;
	// rlwinm r8,r5,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
loc_821D5824:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// addi r4,r11,7168
	ctx.r4.s64 = ctx.r11.s64 + 7168;
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// xor r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// rlwinm r31,r10,18,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FC;
	// rlwinm r30,r10,26,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// rlwinm r29,r10,10,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FC;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lwzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwzx r4,r29,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// lwzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// bne 0x821d5824
	if (!ctx.cr0.eq) goto loc_821D5824;
loc_821D5878:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d58b0
	if (ctx.cr6.eq) goto loc_821D58B0;
loc_821D5884:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// xor r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// addi r6,r11,4096
	ctx.r6.s64 = ctx.r11.s64 + 4096;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// xor r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// bne 0x821d5884
	if (!ctx.cr0.eq) goto loc_821D5884;
loc_821D58B0:
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// rlwinm r10,r8,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r8,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D58D8"))) PPC_WEAK_FUNC(sub_821D58D8);
PPC_FUNC_IMPL(__imp__sub_821D58D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821d58e8
	if (!ctx.cr6.eq) goto loc_821D58E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D58E8:
	// b 0x821d5548
	sub_821D5548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D58EC"))) PPC_WEAK_FUNC(sub_821D58EC);
PPC_FUNC_IMPL(__imp__sub_821D58EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D58F0"))) PPC_WEAK_FUNC(sub_821D58F0);
PPC_FUNC_IMPL(__imp__sub_821D58F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f12.f64));
	// fnmsubs f4,f9,f8,f5
	ctx.f4.f64 = double(float(-(ctx.f9.f64 * ctx.f8.f64 - ctx.f5.f64)));
	// fnmsubs f3,f7,f6,f4
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f6.f64 - ctx.f4.f64)));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f7,f2,f1,f8
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fmadds f6,f0,f13,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fnmsubs f5,f12,f11,f6
	ctx.f5.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f6.f64)));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f4,f3,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f8,f2,f1,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fnmsubs f7,f0,f13,f8
	ctx.f7.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f8.f64)));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f11,f6,f5,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f10,f4,f3,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fnmsubs f9,f2,f1,f10
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f1.f64 - ctx.f10.f64)));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D59C4"))) PPC_WEAK_FUNC(sub_821D59C4);
PPC_FUNC_IMPL(__imp__sub_821D59C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D59C8"))) PPC_WEAK_FUNC(sub_821D59C8);
PPC_FUNC_IMPL(__imp__sub_821D59C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,14192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f7,f6,f4
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821d5a4c
	if (!ctx.cr6.gt) goto loc_821D5A4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821d5a4c
	if (!ctx.cr6.lt) goto loc_821D5A4C;
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x823dcb30
	ctx.lr = 0x821D5A2C;
	sub_823DCB30(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,3732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3732);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821D5A4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D5A64"))) PPC_WEAK_FUNC(sub_821D5A64);
PPC_FUNC_IMPL(__imp__sub_821D5A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5A68"))) PPC_WEAK_FUNC(sub_821D5A68);
PPC_FUNC_IMPL(__imp__sub_821D5A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D5A70;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823db9d8
	ctx.lr = 0x821D5A78;
	sub_823DB9D8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d59c8
	ctx.lr = 0x821D5A98;
	sub_821D59C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dbae8
	ctx.lr = 0x821D5AAC;
	sub_823DBAE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x821d5bd0
	if (ctx.cr6.eq) goto loc_821D5BD0;
	// fmuls f29,f31,f29
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f1,f31,f29
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// bl 0x823dbae8
	ctx.lr = 0x821D5AD8;
	sub_823DBAE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmuls f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x823dbae8
	ctx.lr = 0x821D5AE8;
	sub_823DBAE8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,32224(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32224);
	// lfd f13,21560(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 21560);
	// fmuls f9,f12,f28
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f7,f10,f31,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f3,f6,f9,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f4.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f2,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f8,f2,f9,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f6,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f7,f1,f1
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmadds f12,f6,f9,f3
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f2,f10,f10,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmadds f9,f5,f5,f2
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// frsqrte f7,f8
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmul f4,f7,f7
	ctx.f4.f64 = ctx.f7.f64 * ctx.f7.f64;
	// fmul f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 * ctx.f0.f64;
	// fnmsub f2,f4,f8,f13
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f8.f64 - ctx.f13.f64);
	// fmadd f12,f2,f3,f7
	ctx.f12.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64;
	// fmul f9,f12,f12
	ctx.f9.f64 = ctx.f12.f64 * ctx.f12.f64;
	// fmul f7,f12,f0
	ctx.f7.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f4,f9,f8,f13
	ctx.f4.f64 = -(ctx.f9.f64 * ctx.f8.f64 - ctx.f13.f64);
	// fmadd f3,f4,f7,f12
	ctx.f3.f64 = ctx.f4.f64 * ctx.f7.f64 + ctx.f12.f64;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fsel f0,f6,f30,f2
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f30.f64 : ctx.f2.f64;
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823dba24
	ctx.lr = 0x821D5BCC;
	__restfpr_28(ctx, base);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_821D5BD0:
	// lvx128 v63,r0,r30
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823dba24
	ctx.lr = 0x821D5BE4;
	__restfpr_28(ctx, base);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D5BE8"))) PPC_WEAK_FUNC(sub_821D5BE8);
PPC_FUNC_IMPL(__imp__sub_821D5BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823db9d8
	ctx.lr = 0x821D5C00;
	sub_823DB9D8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821d59c8
	ctx.lr = 0x821D5C18;
	sub_821D59C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dbae8
	ctx.lr = 0x821D5C2C;
	sub_823DBAE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x821d5d40
	if (ctx.cr6.eq) goto loc_821D5D40;
	// fmuls f29,f31,f29
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f1,f31,f29
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// bl 0x823dbae8
	ctx.lr = 0x821D5C58;
	sub_823DBAE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmuls f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x823dbae8
	ctx.lr = 0x821D5C68;
	sub_823DBAE8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,32224(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32224);
	// fmuls f3,f13,f28
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lfd f13,21560(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 21560);
	// fmadds f2,f6,f3,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f1,f3,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f9.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f3,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f3,f4
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f7,f2
	ctx.f7.f64 = ctx.f2.f64;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmadds f2,f5,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f1,f8,f8,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f12,f7,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f1.f64));
	// frsqrte f11,f12
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmul f6,f11,f11
	ctx.f6.f64 = ctx.f11.f64 * ctx.f11.f64;
	// fmul f5,f11,f0
	ctx.f5.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fnmsub f4,f6,f12,f13
	ctx.f4.f64 = -(ctx.f6.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f2,f4,f5,f11
	ctx.f2.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f11.f64;
	// fmul f1,f2,f2
	ctx.f1.f64 = ctx.f2.f64 * ctx.f2.f64;
	// fmul f0,f2,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f0.f64;
	// fnmsub f13,f1,f12,f13
	ctx.f13.f64 = -(ctx.f1.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f12,f13,f0,f2
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f2.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsel f10,f10,f30,f11
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f11.f64;
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f4,f3,f10
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_821D5D40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823dba24
	ctx.lr = 0x821D5D4C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D5D60"))) PPC_WEAK_FUNC(sub_821D5D60);
PPC_FUNC_IMPL(__imp__sub_821D5D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8244ff98
	ctx.lr = 0x821D5D98;
	sub_8244FF98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821d5dac
	if (!ctx.cr6.lt) goto loc_821D5DAC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// bl 0x821bd618
	ctx.lr = 0x821D5DAC;
	sub_821BD618(ctx, base);
loc_821D5DAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D5DBC"))) PPC_WEAK_FUNC(sub_821D5DBC);
PPC_FUNC_IMPL(__imp__sub_821D5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5DC0"))) PPC_WEAK_FUNC(sub_821D5DC0);
PPC_FUNC_IMPL(__imp__sub_821D5DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D5DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8244fef8
	ctx.lr = 0x821D5DE0;
	sub_8244FEF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D5E0C"))) PPC_WEAK_FUNC(sub_821D5E0C);
PPC_FUNC_IMPL(__imp__sub_821D5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5E10"))) PPC_WEAK_FUNC(sub_821D5E10);
PPC_FUNC_IMPL(__imp__sub_821D5E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d5e7c
	if (!ctx.cr6.eq) goto loc_821D5E7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,4085
	ctx.r10.s64 = 267714560;
	// ori r9,r10,4847
	ctx.r9.u64 = ctx.r10.u64 | 4847;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821d5e5c
	if (ctx.cr6.eq) goto loc_821D5E5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22484
	ctx.r3.s64 = ctx.r11.s64 + 22484;
	// bl 0x821bd618
	ctx.lr = 0x821D5E5C;
	sub_821BD618(ctx, base);
loc_821D5E5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_821D5E7C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// ble cr6,0x821d5ea4
	if (!ctx.cr6.gt) goto loc_821D5EA4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821D5EA4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8244ff20
	ctx.lr = 0x821D5EBC;
	sub_8244FF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821d5ee4
	if (!ctx.cr6.lt) goto loc_821D5EE4;
	// lis r11,-32290
	ctx.r11.s64 = -2116157440;
	// ori r10,r11,8193
	ctx.r10.u64 = ctx.r11.u64 | 8193;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821d5ee4
	if (ctx.cr6.eq) goto loc_821D5EE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// bl 0x821bd618
	ctx.lr = 0x821D5EE4;
	sub_821BD618(ctx, base);
loc_821D5EE4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r6,r10,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r10.s64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D5F4C"))) PPC_WEAK_FUNC(sub_821D5F4C);
PPC_FUNC_IMPL(__imp__sub_821D5F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5F50"))) PPC_WEAK_FUNC(sub_821D5F50);
PPC_FUNC_IMPL(__imp__sub_821D5F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8244ff48
	sub_8244FF48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D5F58"))) PPC_WEAK_FUNC(sub_821D5F58);
PPC_FUNC_IMPL(__imp__sub_821D5F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// addi r3,r11,-30668
	ctx.r3.s64 = ctx.r11.s64 + -30668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D5F64"))) PPC_WEAK_FUNC(sub_821D5F64);
PPC_FUNC_IMPL(__imp__sub_821D5F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5F68"))) PPC_WEAK_FUNC(sub_821D5F68);
PPC_FUNC_IMPL(__imp__sub_821D5F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x821e44a0
	sub_821E44A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D5F6C"))) PPC_WEAK_FUNC(sub_821D5F6C);
PPC_FUNC_IMPL(__imp__sub_821D5F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5F70"))) PPC_WEAK_FUNC(sub_821D5F70);
PPC_FUNC_IMPL(__imp__sub_821D5F70) {
	PPC_FUNC_PROLOGUE();
	// b 0x821e4568
	sub_821E4568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D5F74"))) PPC_WEAK_FUNC(sub_821D5F74);
PPC_FUNC_IMPL(__imp__sub_821D5F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5F78"))) PPC_WEAK_FUNC(sub_821D5F78);
PPC_FUNC_IMPL(__imp__sub_821D5F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D5F8C"))) PPC_WEAK_FUNC(sub_821D5F8C);
PPC_FUNC_IMPL(__imp__sub_821D5F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D5F90"))) PPC_WEAK_FUNC(sub_821D5F90);
PPC_FUNC_IMPL(__imp__sub_821D5F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8244a408
	ctx.lr = 0x821D5FB4;
	sub_8244A408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x821d5fd0
	if (!ctx.cr6.eq) goto loc_821D5FD0;
	// bl 0x8244a480
	ctx.lr = 0x821D5FC4;
	sub_8244A480(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821d5fd4
	if (ctx.cr6.eq) goto loc_821D5FD4;
loc_821D5FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D5FD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D5FE8"))) PPC_WEAK_FUNC(sub_821D5FE8);
PPC_FUNC_IMPL(__imp__sub_821D5FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8244a330
	sub_8244A330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D5FF0"))) PPC_WEAK_FUNC(sub_821D5FF0);
PPC_FUNC_IMPL(__imp__sub_821D5FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// bne cr6,0x821d6030
	if (!ctx.cr6.eq) goto loc_821D6030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r11,11872(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11872);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_821D6030:
	// bl 0x8244a478
	ctx.lr = 0x821D6034;
	sub_8244A478(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821d6054
	if (ctx.cr6.eq) goto loc_821D6054;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821d6058
	goto loc_821D6058;
loc_821D6054:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821D6058:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d609c
	if (ctx.cr6.eq) goto loc_821D609C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8244a318
	ctx.lr = 0x821D6074;
	sub_8244A318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x821d609c
	if (ctx.cr6.eq) goto loc_821D609C;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8244a3a8
	ctx.lr = 0x821D608C;
	sub_8244A3A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x821d60a0
	if (!ctx.cr6.lt) goto loc_821D60A0;
	// bl 0x8244a330
	ctx.lr = 0x821D609C;
	sub_8244A330(ctx, base);
loc_821D609C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821D60A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D60B8"))) PPC_WEAK_FUNC(sub_821D60B8);
PPC_FUNC_IMPL(__imp__sub_821D60B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8244a318
	ctx.lr = 0x821D60F4;
	sub_8244A318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x821d6130
	if (ctx.cr6.eq) goto loc_821D6130;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8244a390
	ctx.lr = 0x821D610C;
	sub_8244A390(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821d612c
	if (ctx.cr6.eq) goto loc_821D612C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8244a3c0
	ctx.lr = 0x821D6120;
	sub_8244A3C0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821d6134
	if (!ctx.cr6.eq) goto loc_821D6134;
loc_821D612C:
	// bl 0x8244a330
	ctx.lr = 0x821D6130;
	sub_8244A330(ctx, base);
loc_821D6130:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821D6134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D614C"))) PPC_WEAK_FUNC(sub_821D614C);
PPC_FUNC_IMPL(__imp__sub_821D614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D6150"))) PPC_WEAK_FUNC(sub_821D6150);
PPC_FUNC_IMPL(__imp__sub_821D6150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8244a378
	ctx.lr = 0x821D6178;
	sub_8244A378(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244a3d0
	ctx.lr = 0x821D6188;
	sub_8244A3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D619C"))) PPC_WEAK_FUNC(sub_821D619C);
PPC_FUNC_IMPL(__imp__sub_821D619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D61A0"))) PPC_WEAK_FUNC(sub_821D61A0);
PPC_FUNC_IMPL(__imp__sub_821D61A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8244a440
	ctx.lr = 0x821D61C4;
	sub_8244A440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x821d61e0
	if (!ctx.cr6.eq) goto loc_821D61E0;
	// bl 0x8244a480
	ctx.lr = 0x821D61D4;
	sub_8244A480(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821d61e4
	if (ctx.cr6.eq) goto loc_821D61E4;
loc_821D61E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D61E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D61F8"))) PPC_WEAK_FUNC(sub_821D61F8);
PPC_FUNC_IMPL(__imp__sub_821D61F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,8300
	ctx.r9.s64 = ctx.r11.s64 + 8300;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821d622c
	if (ctx.cr6.eq) goto loc_821D622C;
	// bl 0x82130588
	ctx.lr = 0x821D6228;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D622C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D6240"))) PPC_WEAK_FUNC(sub_821D6240);
PPC_FUNC_IMPL(__imp__sub_821D6240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D6248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,10776
	ctx.r4.s64 = ctx.r11.s64 + 10776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dd800
	ctx.lr = 0x821D6268;
	sub_823DD800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d627c
	if (ctx.cr6.eq) goto loc_821D627C;
loc_821D6270:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_821D627C:
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d62c4
	if (ctx.cr6.eq) goto loc_821D62C4;
loc_821D6294:
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x821d62c4
	if (ctx.cr6.eq) goto loc_821D62C4;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r31,r9,-48
	ctx.r31.s64 = ctx.r9.s64 + -48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d6294
	if (!ctx.cr6.eq) goto loc_821D6294;
loc_821D62C4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6270
	if (ctx.cr6.eq) goto loc_821D6270;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,22692
	ctx.r4.s64 = ctx.r11.s64 + 22692;
	// bl 0x823db730
	ctx.lr = 0x821D62E4;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821d6334
	if (!ctx.cr6.eq) goto loc_821D6334;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d60b8
	ctx.lr = 0x821D62FC;
	sub_821D60B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x821d6270
	if (ctx.cr6.eq) goto loc_821D6270;
	// bl 0x821d6150
	ctx.lr = 0x821D630C;
	sub_821D6150(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_821D6334:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5ff0
	ctx.lr = 0x821D6340;
	sub_821D5FF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D6348"))) PPC_WEAK_FUNC(sub_821D6348);
PPC_FUNC_IMPL(__imp__sub_821D6348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// addi r10,r11,3076
	ctx.r10.s64 = ctx.r11.s64 + 3076;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d638c
	if (!ctx.cr6.eq) goto loc_821D638C;
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,22700
	ctx.r4.s64 = ctx.r10.s64 + 22700;
	// lwz r3,22996(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22996);
	// bl 0x823dd800
	ctx.lr = 0x821D6380;
	sub_823DD800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821d6390
	if (!ctx.cr6.eq) goto loc_821D6390;
loc_821D638C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D6390:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D63A4"))) PPC_WEAK_FUNC(sub_821D63A4);
PPC_FUNC_IMPL(__imp__sub_821D63A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D63A8"))) PPC_WEAK_FUNC(sub_821D63A8);
PPC_FUNC_IMPL(__imp__sub_821D63A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,4820
	ctx.r8.s64 = ctx.r10.s64 + 4820;
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// sth r9,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r9.u16);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D63CC"))) PPC_WEAK_FUNC(sub_821D63CC);
PPC_FUNC_IMPL(__imp__sub_821D63CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D63D0"))) PPC_WEAK_FUNC(sub_821D63D0);
PPC_FUNC_IMPL(__imp__sub_821D63D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D63D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D63F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d6420
	if (ctx.cr6.eq) goto loc_821D6420;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D6420:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D643C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D6444"))) PPC_WEAK_FUNC(sub_821D6444);
PPC_FUNC_IMPL(__imp__sub_821D6444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D6448"))) PPC_WEAK_FUNC(sub_821D6448);
PPC_FUNC_IMPL(__imp__sub_821D6448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D6458"))) PPC_WEAK_FUNC(sub_821D6458);
PPC_FUNC_IMPL(__imp__sub_821D6458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D6468"))) PPC_WEAK_FUNC(sub_821D6468);
PPC_FUNC_IMPL(__imp__sub_821D6468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D6478"))) PPC_WEAK_FUNC(sub_821D6478);
PPC_FUNC_IMPL(__imp__sub_821D6478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D64A8"))) PPC_WEAK_FUNC(sub_821D64A8);
PPC_FUNC_IMPL(__imp__sub_821D64A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d64d0
	if (ctx.cr6.eq) goto loc_821D64D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D64D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D64D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D64E4"))) PPC_WEAK_FUNC(sub_821D64E4);
PPC_FUNC_IMPL(__imp__sub_821D64E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D64E8"))) PPC_WEAK_FUNC(sub_821D64E8);
PPC_FUNC_IMPL(__imp__sub_821D64E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D6504"))) PPC_WEAK_FUNC(sub_821D6504);
PPC_FUNC_IMPL(__imp__sub_821D6504) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D6508"))) PPC_WEAK_FUNC(sub_821D6508);
PPC_FUNC_IMPL(__imp__sub_821D6508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D651C"))) PPC_WEAK_FUNC(sub_821D651C);
PPC_FUNC_IMPL(__imp__sub_821D651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D6520"))) PPC_WEAK_FUNC(sub_821D6520);
PPC_FUNC_IMPL(__imp__sub_821D6520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D6550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D6560"))) PPC_WEAK_FUNC(sub_821D6560);
PPC_FUNC_IMPL(__imp__sub_821D6560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D6578"))) PPC_WEAK_FUNC(sub_821D6578);
PPC_FUNC_IMPL(__imp__sub_821D6578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D65AC"))) PPC_WEAK_FUNC(sub_821D65AC);
PPC_FUNC_IMPL(__imp__sub_821D65AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D65B0"))) PPC_WEAK_FUNC(sub_821D65B0);
PPC_FUNC_IMPL(__imp__sub_821D65B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D65D0"))) PPC_WEAK_FUNC(sub_821D65D0);
PPC_FUNC_IMPL(__imp__sub_821D65D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D65F0"))) PPC_WEAK_FUNC(sub_821D65F0);
PPC_FUNC_IMPL(__imp__sub_821D65F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x821D65F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D661C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821d6e74
	if (ctx.cr6.eq) goto loc_821D6E74;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x821d6e70
	if (ctx.cr6.gt) goto loc_821D6E70;
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,26220
	ctx.r12.s64 = ctx.r12.s64 + 26220;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_821D66B0;
	case 1:
		goto loc_821D66EC;
	case 2:
		goto loc_821D6728;
	case 3:
		goto loc_821D6764;
	case 4:
		goto loc_821D67A0;
	case 5:
		goto loc_821D67DC;
	case 6:
		goto loc_821D6818;
	case 7:
		goto loc_821D6854;
	case 8:
		goto loc_821D6890;
	case 9:
		goto loc_821D68CC;
	case 10:
		goto loc_821D6908;
	case 11:
		goto loc_821D69BC;
	case 12:
		goto loc_821D6B30;
	case 13:
		goto loc_821D6CD8;
	case 14:
		goto loc_821D6AF4;
	case 15:
		goto loc_821D6944;
	case 16:
		goto loc_821D6980;
	default:
		__builtin_unreachable();
	}
	// lwz r16,26288(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26288);
	// lwz r16,26348(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26348);
	// lwz r16,26408(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26408);
	// lwz r16,26468(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26468);
	// lwz r16,26528(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26528);
	// lwz r16,26588(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26588);
	// lwz r16,26648(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26648);
	// lwz r16,26708(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26708);
	// lwz r16,26768(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26768);
	// lwz r16,26828(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26828);
	// lwz r16,26888(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26888);
	// lwz r16,27068(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// lwz r16,27440(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27440);
	// lwz r16,27864(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27864);
	// lwz r16,27380(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27380);
	// lwz r16,26948(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26948);
	// lwz r16,27008(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27008);
loc_821D66B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D66C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D66E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D66EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D671C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6728:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D673C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6764:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D67A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D67B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D67D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D67DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D67F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D680C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6818:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D682C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6854:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6890:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D68A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D68C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D68CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D68E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D68FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6908:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D691C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6944:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6980:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D69B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D69BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D69D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821d6e70
	if (ctx.cr6.gt) goto loc_821D6E70;
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,27124
	ctx.r12.s64 = ctx.r12.s64 + 27124;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821D6A7C;
	case 1:
		goto loc_821D6AB8;
	case 2:
		goto loc_821D6A40;
	case 3:
		goto loc_821D6A04;
	default:
		__builtin_unreachable();
	}
	// lwz r16,27260(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27260);
	// lwz r16,27320(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27320);
	// lwz r16,27200(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27200);
	// lwz r16,27140(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27140);
loc_821D6A04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6A40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6A7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6AB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6AF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6B30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821d6e70
	if (ctx.cr6.gt) goto loc_821D6E70;
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,27496
	ctx.r12.s64 = ctx.r12.s64 + 27496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821D6B7C;
	case 1:
		goto loc_821D6C9C;
	case 2:
		goto loc_821D6C9C;
	case 3:
		goto loc_821D6C04;
	case 4:
		goto loc_821D6C04;
	default:
		__builtin_unreachable();
	}
	// lwz r16,27516(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27516);
	// lwz r16,27804(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27804);
	// lwz r16,27804(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27804);
	// lwz r16,27652(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27652);
	// lwz r16,27652(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27652);
loc_821D6B7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e34b0
	ctx.lr = 0x821D6B88;
	sub_821E34B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d6bdc
	if (ctx.cr6.eq) goto loc_821D6BDC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3440
	ctx.lr = 0x821D6BC4;
	sub_821E3440(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D6BDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6C04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821d6c74
	if (ctx.cr6.eq) goto loc_821D6C74;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d6c74
	if (ctx.cr6.eq) goto loc_821D6C74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821e3440
	ctx.lr = 0x821D6C5C;
	sub_821E3440(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D6C74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6C9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6CD8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3e90
	ctx.lr = 0x821D6CEC;
	sub_821E3E90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r27,r3,r29
	ctx.r27.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D6D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x821d6d48
	if (!ctx.cr6.eq) goto loc_821D6D48;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d6d60
	goto loc_821D6D60;
loc_821D6D48:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D6D60:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6e0c
	if (ctx.cr6.eq) goto loc_821D6E0C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6e0c
	if (ctx.cr6.eq) goto loc_821D6E0C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lbz r26,10(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r25,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r25.u8);
	// ble cr6,0x821d6e08
	if (!ctx.cr6.gt) goto loc_821D6E08;
loc_821D6D90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r5,r10,r28
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// bl 0x821e3d88
	ctx.lr = 0x821D6DA8;
	sub_821E3D88(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821D6DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,144(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d6e08
	if (!ctx.cr6.eq) goto loc_821D6E08;
	// lbz r11,11(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d6e08
	if (!ctx.cr6.eq) goto loc_821D6E08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d6d90
	if (ctx.cr6.lt) goto loc_821D6D90;
loc_821D6E08:
	// stb r26,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r26.u8);
loc_821D6E0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x821d6e58
	if (!ctx.cr6.eq) goto loc_821D6E58;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_821D6E58:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D6E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D6E70:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
loc_821D6E74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D6E7C"))) PPC_WEAK_FUNC(sub_821D6E7C);
PPC_FUNC_IMPL(__imp__sub_821D6E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D6E80"))) PPC_WEAK_FUNC(sub_821D6E80);
PPC_FUNC_IMPL(__imp__sub_821D6E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x821D6E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821c9790
	ctx.lr = 0x821D6EA8;
	sub_821C9790(ctx, base);
	// lhz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 56);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d6f20
	if (ctx.cr6.eq) goto loc_821D6F20;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r7,r11,10896
	ctx.r7.s64 = ctx.r11.s64 + 10896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de288
	ctx.lr = 0x821D6ED0;
	sub_823DE288(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d6f20
	if (ctx.cr6.eq) goto loc_821D6F20;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6f20
	if (ctx.cr6.eq) goto loc_821D6F20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6f20
	if (ctx.cr6.eq) goto loc_821D6F20;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x821d6f14
	if (ctx.cr6.eq) goto loc_821D6F14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d6f20
	goto loc_821D6F20;
loc_821D6F14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D6F20:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d6f3c
	if (ctx.cr6.eq) goto loc_821D6F3C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821d6e80
	ctx.lr = 0x821D6F3C;
	sub_821D6E80(ctx, base);
loc_821D6F3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D6F44"))) PPC_WEAK_FUNC(sub_821D6F44);
PPC_FUNC_IMPL(__imp__sub_821D6F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D6F48"))) PPC_WEAK_FUNC(sub_821D6F48);
PPC_FUNC_IMPL(__imp__sub_821D6F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// beq cr6,0x821d6f70
	if (ctx.cr6.eq) goto loc_821D6F70;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_821D6F70:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D6F84"))) PPC_WEAK_FUNC(sub_821D6F84);
PPC_FUNC_IMPL(__imp__sub_821D6F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D6F88"))) PPC_WEAK_FUNC(sub_821D6F88);
PPC_FUNC_IMPL(__imp__sub_821D6F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x821D6F90;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,22736
	ctx.r28.s64 = ctx.r11.s64 + 22736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x821D6FB4;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x821f21f0
	ctx.lr = 0x821D6FC4;
	sub_821F21F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6fec
	if (ctx.cr6.eq) goto loc_821D6FEC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d6e80
	ctx.lr = 0x821D6FE4;
	sub_821D6E80(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
loc_821D6FEC:
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821d4ab0
	ctx.lr = 0x821D7008;
	sub_821D4AB0(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addic. r25,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r25.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lbz r23,10(r29)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// stb r24,10(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10, ctx.r24.u8);
	// blt 0x821d70ac
	if (ctx.cr0.lt) goto loc_821D70AC;
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_821D7020:
	// lbz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d70ac
	if (!ctx.cr6.eq) goto loc_821D70AC;
	// lbz r11,11(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d70ac
	if (!ctx.cr6.eq) goto loc_821D70AC;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwzx r28,r26,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lhz r27,24(r28)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r28.u32 + 24);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x821d70a0
	if (!ctx.cr6.gt) goto loc_821D70A0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_821D7054:
	// lbz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d70a0
	if (!ctx.cr6.eq) goto loc_821D70A0;
	// lbz r11,11(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d70a0
	if (!ctx.cr6.eq) goto loc_821D70A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,144(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lwzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwzx r4,r26,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D7090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821d7054
	if (ctx.cr6.lt) goto loc_821D7054;
loc_821D70A0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,-4
	ctx.r26.s64 = ctx.r26.s64 + -4;
	// bge 0x821d7020
	if (!ctx.cr0.lt) goto loc_821D7020;
loc_821D70AC:
	// stb r23,10(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10, ctx.r23.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D70B8"))) PPC_WEAK_FUNC(sub_821D70B8);
PPC_FUNC_IMPL(__imp__sub_821D70B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D70C8"))) PPC_WEAK_FUNC(sub_821D70C8);
PPC_FUNC_IMPL(__imp__sub_821D70C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D70F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821d7108
	if (ctx.cr6.eq) goto loc_821D7108;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// ble cr6,0x821d7114
	if (!ctx.cr6.gt) goto loc_821D7114;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bgt cr6,0x821d7114
	if (ctx.cr6.gt) goto loc_821D7114;
loc_821D7108:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_821D7114:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D7128"))) PPC_WEAK_FUNC(sub_821D7128);
PPC_FUNC_IMPL(__imp__sub_821D7128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x821c8830
	ctx.lr = 0x821D7154;
	sub_821C8830(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D7160;
	sub_821C7F10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D717C"))) PPC_WEAK_FUNC(sub_821D717C);
PPC_FUNC_IMPL(__imp__sub_821D717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7180"))) PPC_WEAK_FUNC(sub_821D7180);
PPC_FUNC_IMPL(__imp__sub_821D7180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821c87c0
	ctx.lr = 0x821D71AC;
	sub_821C87C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D71B8;
	sub_821C7F10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D71D4"))) PPC_WEAK_FUNC(sub_821D71D4);
PPC_FUNC_IMPL(__imp__sub_821D71D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D71D8"))) PPC_WEAK_FUNC(sub_821D71D8);
PPC_FUNC_IMPL(__imp__sub_821D71D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c8748
	ctx.lr = 0x821D7204;
	sub_821C8748(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D7210;
	sub_821C7F10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D722C"))) PPC_WEAK_FUNC(sub_821D722C);
PPC_FUNC_IMPL(__imp__sub_821D722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7230"))) PPC_WEAK_FUNC(sub_821D7230);
PPC_FUNC_IMPL(__imp__sub_821D7230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x821D7238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D725C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x821d7460
	if (ctx.cr6.gt) goto loc_821D7460;
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,29308
	ctx.r12.s64 = ctx.r12.s64 + 29308;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_821D729C;
	case 1:
		goto loc_821D72CC;
	case 2:
		goto loc_821D730C;
	case 3:
		goto loc_821D7348;
	case 4:
		goto loc_821D7388;
	case 5:
		goto loc_821D73C4;
	case 6:
		goto loc_821D73F4;
	case 7:
		goto loc_821D7430;
	default:
		__builtin_unreachable();
	}
	// lwz r16,29340(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29340);
	// lwz r16,29388(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29388);
	// lwz r16,29452(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29452);
	// lwz r16,29512(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29512);
	// lwz r16,29576(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29576);
	// lwz r16,29636(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29636);
	// lwz r16,29684(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29684);
	// lwz r16,29744(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29744);
loc_821D729C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D72B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d7128
	ctx.lr = 0x821D72C4;
	sub_821D7128(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D72CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D72F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d7180
	ctx.lr = 0x821D7304;
	sub_821D7180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D730C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D732C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d7180
	ctx.lr = 0x821D7340;
	sub_821D7180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D7348:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D736C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d7180
	ctx.lr = 0x821D7380;
	sub_821D7180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D7388:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D73A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d7180
	ctx.lr = 0x821D73BC;
	sub_821D7180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D73C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D73D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d7180
	ctx.lr = 0x821D73EC;
	sub_821D7180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D73F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D7414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d7180
	ctx.lr = 0x821D7428;
	sub_821D7180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D7430:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d71d8
	ctx.lr = 0x821D7458;
	sub_821D71D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D7460:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22768
	ctx.r3.s64 = ctx.r11.s64 + 22768;
	// bl 0x821bd618
	ctx.lr = 0x821D746C;
	sub_821BD618(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D7474"))) PPC_WEAK_FUNC(sub_821D7474);
PPC_FUNC_IMPL(__imp__sub_821D7474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7478"))) PPC_WEAK_FUNC(sub_821D7478);
PPC_FUNC_IMPL(__imp__sub_821D7478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D74A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821c8988
	ctx.lr = 0x821D74B8;
	sub_821C8988(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D74C0;
	sub_821C7F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D74D8"))) PPC_WEAK_FUNC(sub_821D74D8);
PPC_FUNC_IMPL(__imp__sub_821D74D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821c8a10
	ctx.lr = 0x821D7518;
	sub_821C8A10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D7520;
	sub_821C7F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D7538"))) PPC_WEAK_FUNC(sub_821D7538);
PPC_FUNC_IMPL(__imp__sub_821D7538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821c8ab0
	ctx.lr = 0x821D7578;
	sub_821C8AB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D7580;
	sub_821C7F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D7598"))) PPC_WEAK_FUNC(sub_821D7598);
PPC_FUNC_IMPL(__imp__sub_821D7598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D75C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821c8b68
	ctx.lr = 0x821D75D8;
	sub_821C8B68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D75E0;
	sub_821C7F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D75F8"))) PPC_WEAK_FUNC(sub_821D75F8);
PPC_FUNC_IMPL(__imp__sub_821D75F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821c8c70
	ctx.lr = 0x821D7638;
	sub_821C8C70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D7640;
	sub_821C7F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D7658"))) PPC_WEAK_FUNC(sub_821D7658);
PPC_FUNC_IMPL(__imp__sub_821D7658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D7660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D768C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x821c88a0
	ctx.lr = 0x821D769C;
	sub_821C88A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D76A4;
	sub_821C7F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D76AC"))) PPC_WEAK_FUNC(sub_821D76AC);
PPC_FUNC_IMPL(__imp__sub_821D76AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D76B0"))) PPC_WEAK_FUNC(sub_821D76B0);
PPC_FUNC_IMPL(__imp__sub_821D76B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D76E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821c88a0
	ctx.lr = 0x821D76F0;
	sub_821C88A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c7f10
	ctx.lr = 0x821D76F8;
	sub_821C7F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D7710"))) PPC_WEAK_FUNC(sub_821D7710);
PPC_FUNC_IMPL(__imp__sub_821D7710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D7718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,3512
	ctx.r5.s64 = ctx.r11.s64 + 3512;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821d4e10
	ctx.lr = 0x821D7738;
	sub_821D4E10(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d6f88
	ctx.lr = 0x821D7748;
	sub_821D6F88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r10,-13256
	ctx.r5.s64 = ctx.r10.s64 + -13256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d6e80
	ctx.lr = 0x821D7760;
	sub_821D6E80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D7768"))) PPC_WEAK_FUNC(sub_821D7768);
PPC_FUNC_IMPL(__imp__sub_821D7768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x821D7770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82130528
	ctx.lr = 0x821D7788;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d779c
	if (ctx.cr6.eq) goto loc_821D779C;
	// bl 0x82197a00
	ctx.lr = 0x821D7794;
	sub_82197A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d77a0
	goto loc_821D77A0;
loc_821D779C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D77A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D77B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821c6a20
	ctx.lr = 0x821D77C4;
	sub_821C6A20(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D77D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r7,22800
	ctx.r4.s64 = ctx.r7.s64 + 22800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x821c7000
	ctx.lr = 0x821D77F4;
	sub_821C7000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x821c7f10
	ctx.lr = 0x821D7800;
	sub_821C7F10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D7808"))) PPC_WEAK_FUNC(sub_821D7808);
PPC_FUNC_IMPL(__imp__sub_821D7808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x821D7810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82130528
	ctx.lr = 0x821D7828;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d783c
	if (ctx.cr6.eq) goto loc_821D783C;
	// bl 0x82197a00
	ctx.lr = 0x821D7834;
	sub_82197A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d7840
	goto loc_821D7840;
loc_821D783C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D7840:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821c6a20
	ctx.lr = 0x821D7864;
	sub_821C6A20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e3440
	ctx.lr = 0x821D7870;
	sub_821E3440(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x821d41d0
	ctx.lr = 0x821D7888;
	sub_821D41D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x821c7f10
	ctx.lr = 0x821D7894;
	sub_821C7F10(ctx, base);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D78A4"))) PPC_WEAK_FUNC(sub_821D78A4);
PPC_FUNC_IMPL(__imp__sub_821D78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D78A8"))) PPC_WEAK_FUNC(sub_821D78A8);
PPC_FUNC_IMPL(__imp__sub_821D78A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x821D78B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82130528
	ctx.lr = 0x821D78C8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d78dc
	if (ctx.cr6.eq) goto loc_821D78DC;
	// bl 0x82197a00
	ctx.lr = 0x821D78D4;
	sub_82197A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d78e0
	goto loc_821D78E0;
loc_821D78DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D78E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D78F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821c6a20
	ctx.lr = 0x821D7904;
	sub_821C6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x821c7f10
	ctx.lr = 0x821D7910;
	sub_821C7F10(ctx, base);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d794c
	if (!ctx.cr6.eq) goto loc_821D794C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,17404
	ctx.r5.s64 = ctx.r11.s64 + 17404;
	// addi r4,r10,-13284
	ctx.r4.s64 = ctx.r10.s64 + -13284;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D7940;
	sub_821C7000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_821D794C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x821d79ac
	if (!ctx.cr6.eq) goto loc_821D79AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821e3440
	ctx.lr = 0x821D7978;
	sub_821E3440(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821d41d0
	ctx.lr = 0x821D7990;
	sub_821D41D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r10,-13284
	ctx.r4.s64 = ctx.r10.s64 + -13284;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D79AC;
	sub_821C7000(ctx, base);
loc_821D79AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D79B8"))) PPC_WEAK_FUNC(sub_821D79B8);
PPC_FUNC_IMPL(__imp__sub_821D79B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x821D79C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82130528
	ctx.lr = 0x821D79DC;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d79f0
	if (ctx.cr6.eq) goto loc_821D79F0;
	// bl 0x82197a00
	ctx.lr = 0x821D79E8;
	sub_82197A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d79f4
	goto loc_821D79F4;
loc_821D79F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D79F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821c6a20
	ctx.lr = 0x821D7A18;
	sub_821C6A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x821c7f10
	ctx.lr = 0x821D7A24;
	sub_821C7F10(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D7A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bgt cr6,0x821d7ca0
	if (ctx.cr6.gt) goto loc_821D7CA0;
	// beq cr6,0x821d7c94
	if (ctx.cr6.eq) goto loc_821D7C94;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x821d7ca0
	if (ctx.cr6.gt) goto loc_821D7CA0;
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,31332
	ctx.r12.s64 = ctx.r12.s64 + 31332;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_821D7C84;
	case 1:
		goto loc_821D7AEC;
	case 2:
		goto loc_821D7AEC;
	case 3:
		goto loc_821D7B30;
	case 4:
		goto loc_821D7B30;
	case 5:
		goto loc_821D7AA8;
	case 6:
		goto loc_821D7AA8;
	case 7:
		goto loc_821D7B74;
	case 8:
		goto loc_821D7BB8;
	case 9:
		goto loc_821D7BFC;
	case 10:
		goto loc_821D7C40;
	case 11:
		goto loc_821D7C84;
	case 12:
		goto loc_821D7C84;
	case 13:
		goto loc_821D7C84;
	case 14:
		goto loc_821D7C84;
	case 15:
		goto loc_821D7C84;
	case 16:
		goto loc_821D7C84;
	default:
		__builtin_unreachable();
	}
	// lwz r16,31876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31876);
	// lwz r16,31468(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31468);
	// lwz r16,31468(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31468);
	// lwz r16,31536(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31536);
	// lwz r16,31536(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31536);
	// lwz r16,31400(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31400);
	// lwz r16,31400(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31400);
	// lwz r16,31604(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31604);
	// lwz r16,31672(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31672);
	// lwz r16,31740(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31740);
	// lwz r16,31808(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31808);
	// lwz r16,31876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31876);
	// lwz r16,31876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31876);
	// lwz r16,31876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31876);
	// lwz r16,31876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31876);
	// lwz r16,31876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31876);
	// lwz r16,31876(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31876);
loc_821D7AA8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,22880
	ctx.r5.s64 = ctx.r11.s64 + 22880;
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D7AC8;
	sub_821C7000(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mullw r5,r8,r28
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// bl 0x821967c0
	ctx.lr = 0x821D7AE0;
	sub_821967C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D7AEC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,22868
	ctx.r5.s64 = ctx.r11.s64 + 22868;
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D7B0C;
	sub_821C7000(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mullw r5,r8,r28
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// bl 0x821967c0
	ctx.lr = 0x821D7B24;
	sub_821967C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D7B30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,22856
	ctx.r5.s64 = ctx.r11.s64 + 22856;
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D7B50;
	sub_821C7000(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mullw r5,r8,r28
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// bl 0x821967c0
	ctx.lr = 0x821D7B68;
	sub_821967C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D7B74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,22844
	ctx.r5.s64 = ctx.r11.s64 + 22844;
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D7B94;
	sub_821C7000(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mullw r5,r8,r28
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// bl 0x821967c0
	ctx.lr = 0x821D7BAC;
	sub_821967C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D7BB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,22828
	ctx.r5.s64 = ctx.r11.s64 + 22828;
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D7BD8;
	sub_821C7000(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mullw r5,r8,r28
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// bl 0x821967c0
	ctx.lr = 0x821D7BF0;
	sub_821967C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D7BFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,10152
	ctx.r5.s64 = ctx.r11.s64 + 10152;
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D7C1C;
	sub_821C7000(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mullw r5,r8,r28
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// bl 0x821967c0
	ctx.lr = 0x821D7C34;
	sub_821967C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D7C40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,-7176
	ctx.r5.s64 = ctx.r11.s64 + -7176;
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c7000
	ctx.lr = 0x821D7C60;
	sub_821C7000(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mullw r5,r8,r28
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// bl 0x821967c0
	ctx.lr = 0x821D7C78;
	sub_821967C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D7C84:
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D7C94:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22804
	ctx.r3.s64 = ctx.r11.s64 + 22804;
	// bl 0x821bd618
	ctx.lr = 0x821D7CA0;
	sub_821BD618(ctx, base);
loc_821D7CA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D7CAC"))) PPC_WEAK_FUNC(sub_821D7CAC);
PPC_FUNC_IMPL(__imp__sub_821D7CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7CB0"))) PPC_WEAK_FUNC(sub_821D7CB0);
PPC_FUNC_IMPL(__imp__sub_821D7CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82130528
	ctx.lr = 0x821D7CD4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d7ce4
	if (ctx.cr6.eq) goto loc_821D7CE4;
	// bl 0x82197a00
	ctx.lr = 0x821D7CE0;
	sub_82197A00(ctx, base);
	// b 0x821d7ce8
	goto loc_821D7CE8;
loc_821D7CE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D7CE8:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821c6a20
	ctx.lr = 0x821D7CF8;
	sub_821C6A20(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x821d41d0
	ctx.lr = 0x821D7D10;
	sub_821D41D0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D7D34"))) PPC_WEAK_FUNC(sub_821D7D34);
PPC_FUNC_IMPL(__imp__sub_821D7D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D7D38"))) PPC_WEAK_FUNC(sub_821D7D38);
PPC_FUNC_IMPL(__imp__sub_821D7D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x821d7e7c
	if (ctx.cr6.gt) goto loc_821D7E7C;
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// addi r12,r12,32136
	ctx.r12.s64 = ctx.r12.s64 + 32136;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_821D7E50;
	case 1:
		goto loc_821D7DB8;
	case 2:
		goto loc_821D7DD4;
	case 3:
		goto loc_821D7DF0;
	case 4:
		goto loc_821D7E0C;
	case 5:
		goto loc_821D7E28;
	case 6:
		goto loc_821D7E3C;
	case 7:
		goto loc_821D7DA8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,32336(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32336);
	// lwz r16,32184(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32184);
	// lwz r16,32212(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32212);
	// lwz r16,32240(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32240);
	// lwz r16,32268(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32268);
	// lwz r16,32296(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32296);
	// lwz r16,32316(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32316);
	// lwz r16,32168(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32168);
loc_821D7DA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x821d7e88
	goto loc_821D7E88;
loc_821D7DB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x821d7e88
	goto loc_821D7E88;
loc_821D7DD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x821d7e88
	goto loc_821D7E88;
loc_821D7DF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// b 0x821d7e88
	goto loc_821D7E88;
loc_821D7E0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// b 0x821d7e88
	goto loc_821D7E88;
loc_821D7E28:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f13.u32);
	// b 0x821d7e88
	goto loc_821D7E88;
loc_821D7E3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f13.u32);
	// b 0x821d7e88
	goto loc_821D7E88;
loc_821D7E50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,8884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8884);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821d7e74
	if (ctx.cr6.gt) goto loc_821D7E74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D7E74:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x821d7e88
	goto loc_821D7E88;
loc_821D7E7C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22768
	ctx.r3.s64 = ctx.r11.s64 + 22768;
	// bl 0x821bd618
	ctx.lr = 0x821D7E88;
	sub_821BD618(ctx, base);
loc_821D7E88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D7EA0"))) PPC_WEAK_FUNC(sub_821D7EA0);
PPC_FUNC_IMPL(__imp__sub_821D7EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D7ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// beq cr6,0x821d7fbc
	if (ctx.cr6.eq) goto loc_821D7FBC;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x821d7ef8
	if (ctx.cr6.eq) goto loc_821D7EF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22912
	ctx.r3.s64 = ctx.r11.s64 + 22912;
	// bl 0x821bd618
	ctx.lr = 0x821D7EF4;
	sub_821BD618(ctx, base);
	// b 0x821d8020
	goto loc_821D8020;
loc_821D7EF8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r4,48
	ctx.r4.s64 = 48;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x821d8020
	goto loc_821D8020;
loc_821D7FBC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
loc_821D8020:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D8040"))) PPC_WEAK_FUNC(sub_821D8040);
PPC_FUNC_IMPL(__imp__sub_821D8040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D8050"))) PPC_WEAK_FUNC(sub_821D8050);
PPC_FUNC_IMPL(__imp__sub_821D8050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x821D8058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D807C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,30,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821d809c
	if (!ctx.cr6.eq) goto loc_821D809C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d65f0
	ctx.lr = 0x821D809C;
	sub_821D65F0(ctx, base);
loc_821D809C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D80A4"))) PPC_WEAK_FUNC(sub_821D80A4);
PPC_FUNC_IMPL(__imp__sub_821D80A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D80A8"))) PPC_WEAK_FUNC(sub_821D80A8);
PPC_FUNC_IMPL(__imp__sub_821D80A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D80D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x821d8148
	if (ctx.cr6.eq) goto loc_821D8148;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x821d8128
	if (ctx.cr6.eq) goto loc_821D8128;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x821d8100
	if (ctx.cr6.eq) goto loc_821D8100;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22944
	ctx.r3.s64 = ctx.r11.s64 + 22944;
	// bl 0x821bd618
	ctx.lr = 0x821D80FC;
	sub_821BD618(ctx, base);
	// b 0x821d815c
	goto loc_821D815C;
loc_821D8100:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x821d815c
	goto loc_821D815C;
loc_821D8128:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x821d815c
	goto loc_821D815C;
loc_821D8148:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_821D815C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D8174"))) PPC_WEAK_FUNC(sub_821D8174);
PPC_FUNC_IMPL(__imp__sub_821D8174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D8178"))) PPC_WEAK_FUNC(sub_821D8178);
PPC_FUNC_IMPL(__imp__sub_821D8178) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D819C"))) PPC_WEAK_FUNC(sub_821D819C);
PPC_FUNC_IMPL(__imp__sub_821D819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D81A0"))) PPC_WEAK_FUNC(sub_821D81A0);
PPC_FUNC_IMPL(__imp__sub_821D81A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D81BC"))) PPC_WEAK_FUNC(sub_821D81BC);
PPC_FUNC_IMPL(__imp__sub_821D81BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D81C0"))) PPC_WEAK_FUNC(sub_821D81C0);
PPC_FUNC_IMPL(__imp__sub_821D81C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// lwz r11,2828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2828);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// stb r8,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r8.u8);
	// lwz r11,2828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2828);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r6,r7,14,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D81F4"))) PPC_WEAK_FUNC(sub_821D81F4);
PPC_FUNC_IMPL(__imp__sub_821D81F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D81F8"))) PPC_WEAK_FUNC(sub_821D81F8);
PPC_FUNC_IMPL(__imp__sub_821D81F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821e45a0
	ctx.lr = 0x821D8218;
	sub_821E45A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8230
	if (ctx.cr6.eq) goto loc_821D8230;
	// bl 0x82130588
	ctx.lr = 0x821D822C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D8230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D8248"))) PPC_WEAK_FUNC(sub_821D8248);
PPC_FUNC_IMPL(__imp__sub_821D8248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D826C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821D8280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D82AC"))) PPC_WEAK_FUNC(sub_821D82AC);
PPC_FUNC_IMPL(__imp__sub_821D82AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D82B0"))) PPC_WEAK_FUNC(sub_821D82B0);
PPC_FUNC_IMPL(__imp__sub_821D82B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,23272
	ctx.r4.s64 = ctx.r11.s64 + 23272;
	// b 0x821be3d8
	sub_821BE3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D82C4"))) PPC_WEAK_FUNC(sub_821D82C4);
PPC_FUNC_IMPL(__imp__sub_821D82C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D82C8"))) PPC_WEAK_FUNC(sub_821D82C8);
PPC_FUNC_IMPL(__imp__sub_821D82C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8328
	if (ctx.cr6.eq) goto loc_821D8328;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821bdcf8
	ctx.lr = 0x821D82F4;
	sub_821BDCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821be568
	ctx.lr = 0x821D8304;
	sub_821BE568(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bl 0x821be7e8
	ctx.lr = 0x821D8314;
	sub_821BE7E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821be568
	ctx.lr = 0x821D8320;
	sub_821BE568(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
loc_821D8328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D8340"))) PPC_WEAK_FUNC(sub_821D8340);
PPC_FUNC_IMPL(__imp__sub_821D8340) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r6,11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 11, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,-31896
	ctx.r12.s64 = ctx.r12.s64 + -31896;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u64) {
	case 0:
		// ERROR: 0x821D8398
		return;
	case 1:
		// ERROR: 0x821D8398
		return;
	case 2:
		// ERROR: 0x821D83A0
		return;
	case 3:
		// ERROR: 0x821D8398
		return;
	case 4:
		// ERROR: 0x821D8398
		return;
	case 5:
		// ERROR: 0x821D83AC
		return;
	case 6:
		// ERROR: 0x821D83B8
		return;
	case 7:
		// ERROR: 0x821D83C0
		return;
	case 8:
		// ERROR: 0x821D83CC
		return;
	case 9:
		// ERROR: 0x821D83D8
		return;
	case 10:
		// ERROR: 0x821D83E4
		return;
	case 11:
		// ERROR: 0x821D83F0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821D8368"))) PPC_WEAK_FUNC(sub_821D8368);
PPC_FUNC_IMPL(__imp__sub_821D8368) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-31848(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31848);
	// lwz r16,-31848(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31848);
	// lwz r16,-31840(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31840);
	// lwz r16,-31848(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31848);
	// lwz r16,-31848(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31848);
	// lwz r16,-31828(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31828);
	// lwz r16,-31816(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31816);
	// lwz r16,-31808(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31808);
	// lwz r16,-31796(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31796);
	// lwz r16,-31784(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31784);
	// lwz r16,-31772(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31772);
	// lwz r16,-31760(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31760);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x821be3d8
	sub_821BE3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83A0"))) PPC_WEAK_FUNC(sub_821D83A0);
PPC_FUNC_IMPL(__imp__sub_821D83A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x821be780
	sub_821BE780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83AC"))) PPC_WEAK_FUNC(sub_821D83AC);
PPC_FUNC_IMPL(__imp__sub_821D83AC) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x821be7e8
	sub_821BE7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83B8"))) PPC_WEAK_FUNC(sub_821D83B8);
PPC_FUNC_IMPL(__imp__sub_821D83B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x821be3d8
	sub_821BE3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83C0"))) PPC_WEAK_FUNC(sub_821D83C0);
PPC_FUNC_IMPL(__imp__sub_821D83C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x821be780
	sub_821BE780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83CC"))) PPC_WEAK_FUNC(sub_821D83CC);
PPC_FUNC_IMPL(__imp__sub_821D83CC) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x821be7e8
	sub_821BE7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83D8"))) PPC_WEAK_FUNC(sub_821D83D8);
PPC_FUNC_IMPL(__imp__sub_821D83D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x821be7e8
	sub_821BE7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83E4"))) PPC_WEAK_FUNC(sub_821D83E4);
PPC_FUNC_IMPL(__imp__sub_821D83E4) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x821be7e8
	sub_821BE7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83F0"))) PPC_WEAK_FUNC(sub_821D83F0);
PPC_FUNC_IMPL(__imp__sub_821D83F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x821be7e8
	sub_821BE7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D83FC"))) PPC_WEAK_FUNC(sub_821D83FC);
PPC_FUNC_IMPL(__imp__sub_821D83FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D8400"))) PPC_WEAK_FUNC(sub_821D8400);
PPC_FUNC_IMPL(__imp__sub_821D8400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x821D8408;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821d842c
	if (!ctx.cr6.eq) goto loc_821D842C;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821D842C:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x821d849c
	if (!ctx.cr6.lt) goto loc_821D849C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x821d846c
	if (!ctx.cr6.eq) goto loc_821D846C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d84a4
	if (ctx.cr6.eq) goto loc_821D84A4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821D844C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d844c
	if (!ctx.cr6.eq) goto loc_821D844C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// b 0x821d849c
	goto loc_821D849C;
loc_821D846C:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x821d8490
	if (!ctx.cr6.eq) goto loc_821D8490;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d84a4
	if (ctx.cr6.eq) goto loc_821D84A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de3a8
	ctx.lr = 0x821D8484;
	sub_823DE3A8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// b 0x821d849c
	goto loc_821D849C;
loc_821D8490:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// bl 0x821bd618
	ctx.lr = 0x821D849C;
	sub_821BD618(ctx, base);
loc_821D849C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d84a8
	if (!ctx.cr6.eq) goto loc_821D84A8;
loc_821D84A4:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
loc_821D84A8:
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d8558
	if (!ctx.cr6.eq) goto loc_821D8558;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d8504
	if (ctx.cr6.eq) goto loc_821D8504;
	// li r11,-3
	ctx.r11.s64 = -3;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821be780
	ctx.lr = 0x821D84D8;
	sub_821BE780(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821be7e8
	ctx.lr = 0x821D84E8;
	sub_821BE7E8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8340
	ctx.lr = 0x821D84FC;
	sub_821D8340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_821D8504:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d8558
	if (!ctx.cr6.eq) goto loc_821D8558;
	// li r11,-3
	ctx.r11.s64 = -3;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821be780
	ctx.lr = 0x821D8524;
	sub_821BE780(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821bdcf8
	ctx.lr = 0x821D852C;
	sub_821BDCF8(ctx, base);
	// lis r10,-12851
	ctx.r10.s64 = -842203136;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r9,r10,52685
	ctx.r9.u64 = ctx.r10.u64 | 52685;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x821be7e8
	ctx.lr = 0x821D854C;
	sub_821BE7E8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stb r8,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r8.u8);
loc_821D8558:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8340
	ctx.lr = 0x821D856C;
	sub_821D8340(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821D8584"))) PPC_WEAK_FUNC(sub_821D8584);
PPC_FUNC_IMPL(__imp__sub_821D8584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D8588"))) PPC_WEAK_FUNC(sub_821D8588);
PPC_FUNC_IMPL(__imp__sub_821D8588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821d82c8
	ctx.lr = 0x821D85A0;
	sub_821D82C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821be780
	ctx.lr = 0x821D85B8;
	sub_821BE780(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D85D4"))) PPC_WEAK_FUNC(sub_821D85D4);
PPC_FUNC_IMPL(__imp__sub_821D85D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D85D8"))) PPC_WEAK_FUNC(sub_821D85D8);
PPC_FUNC_IMPL(__imp__sub_821D85D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x821D85E0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stwu r11,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x821be710
	ctx.lr = 0x821D8608;
	sub_821BE710(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8650
	if (ctx.cr6.eq) goto loc_821D8650;
	// addi r28,r30,60
	ctx.r28.s64 = ctx.r30.s64 + 60;
loc_821D8618:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// blt cr6,0x821d8630
	if (ctx.cr6.lt) goto loc_821D8630;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821D8630:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821be250
	ctx.lr = 0x821D8640;
	sub_821BE250(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne 0x821d8618
	if (!ctx.cr0.eq) goto loc_821D8618;
loc_821D8650:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

