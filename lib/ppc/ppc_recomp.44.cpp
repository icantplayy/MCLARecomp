#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822B13E0"))) PPC_WEAK_FUNC(sub_822B13E0);
PPC_FUNC_IMPL(__imp__sub_822B13E0) {
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
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B13F8;
	sub_8271EB28(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B1414"))) PPC_WEAK_FUNC(sub_822B1414);
PPC_FUNC_IMPL(__imp__sub_822B1414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B1418"))) PPC_WEAK_FUNC(sub_822B1418);
PPC_FUNC_IMPL(__imp__sub_822B1418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-6148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1458
	if (ctx.cr6.eq) goto loc_822B1458;
	// lbz r11,157(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 157);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1458
	if (ctx.cr6.eq) goto loc_822B1458;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r8,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r8.u32);
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8271e930
	sub_8271E930(ctx, base);
	return;
loc_822B1458:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f1,-15468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15468);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822b0f10
	sub_822B0F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B1468"))) PPC_WEAK_FUNC(sub_822B1468);
PPC_FUNC_IMPL(__imp__sub_822B1468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,-6148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6148);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-10992
	ctx.r9.s64 = ctx.r9.s64 + -10992;
	// stw r9,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r9.u32);
	// lwz r4,128(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8271e930
	sub_8271E930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B148C"))) PPC_WEAK_FUNC(sub_822B148C);
PPC_FUNC_IMPL(__imp__sub_822B148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B1490"))) PPC_WEAK_FUNC(sub_822B1490);
PPC_FUNC_IMPL(__imp__sub_822B1490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1584
	if (ctx.cr6.eq) goto loc_822B1584;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stb r9,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r9.u8);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822b159c
	if (ctx.cr6.eq) goto loc_822B159C;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r10,-17936(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17936);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r9,-8092(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8092);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,29976(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 29976);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r10,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f0,29972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 29972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 196, temp.u32);
	// lwz r8,124(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f0,29968(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 29968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r7,124(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f0,29964(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r6,124(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f0,3796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r4,124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8271e930
	ctx.lr = 0x822B1570;
	sub_8271E930(ctx, base);
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
loc_822B1584:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f1,-32032(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32032);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b0f10
	ctx.lr = 0x822B159C;
	sub_822B0F10(ctx, base);
loc_822B159C:
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

__attribute__((alias("__imp__sub_822B15B0"))) PPC_WEAK_FUNC(sub_822B15B0);
PPC_FUNC_IMPL(__imp__sub_822B15B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r10,23088
	ctx.r6.s64 = ctx.r10.s64 + 23088;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lfs f1,-32032(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32032);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r3,144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 144, ctx.r3.u32);
	// ld r7,23088(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23088);
	// ld r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8271e9a0
	ctx.lr = 0x822B160C;
	sub_8271E9A0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822abca8
	ctx.lr = 0x822B1624;
	sub_822ABCA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a93a8
	ctx.lr = 0x822B1630;
	sub_822A93A8(ctx, base);
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

__attribute__((alias("__imp__sub_822B1644"))) PPC_WEAK_FUNC(sub_822B1644);
PPC_FUNC_IMPL(__imp__sub_822B1644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B1648"))) PPC_WEAK_FUNC(sub_822B1648);
PPC_FUNC_IMPL(__imp__sub_822B1648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x822B1650;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x822a8d98
	ctx.lr = 0x822B1674;
	sub_822A8D98(ctx, base);
	// bl 0x82396408
	ctx.lr = 0x822B1678;
	sub_82396408(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r26,48(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,-12120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12120);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r7,-25924
	ctx.r6.s64 = ctx.r7.s64 + -25924;
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// lwz r5,24(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r4,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// bl 0x822a8d98
	ctx.lr = 0x822B16B4;
	sub_822A8D98(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,30092
	ctx.r5.s64 = ctx.r11.s64 + 30092;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x822B16CC;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B16E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 172, temp.u32);
	// lwz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822a8d98
	ctx.lr = 0x822B1708;
	sub_822A8D98(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r7,30084
	ctx.r5.s64 = ctx.r7.s64 + 30084;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x822B1720;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,76(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822B1738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f30,17032(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17032);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,172(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lwz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a8d98
	ctx.lr = 0x822B175C;
	sub_822A8D98(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,30072
	ctx.r5.s64 = ctx.r10.s64 + 30072;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x822B1774;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r9,76(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B178C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,172(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 172, temp.u32);
	// lwz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,0(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822a8d98
	ctx.lr = 0x822B17AC;
	sub_822A8D98(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r5,30060
	ctx.r5.s64 = ctx.r5.s64 + 30060;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x822B17C4;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B17DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,172(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 172, temp.u32);
	// lwz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,0(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822a8d98
	ctx.lr = 0x822B17FC;
	sub_822A8D98(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,30048
	ctx.r5.s64 = ctx.r8.s64 + 30048;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x822B1814;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,76(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822B182C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,172(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 172, temp.u32);
	// lwz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,0(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x822a8d98
	ctx.lr = 0x822B184C;
	sub_822A8D98(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r4,30036
	ctx.r5.s64 = ctx.r4.s64 + 30036;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x822B1864;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B187C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,240(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	// stfs f0,172(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 172, temp.u32);
	// lfs f31,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,128(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 128, temp.u32);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x822a8d98
	ctx.lr = 0x822B18AC;
	sub_822A8D98(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r5,30020
	ctx.r5.s64 = ctx.r5.s64 + 30020;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x822B18C4;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B18DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r5,r10,30008
	ctx.r5.s64 = ctx.r10.s64 + 30008;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,172(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 172, temp.u32);
	// lwz r25,48(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82137a08
	ctx.lr = 0x822B190C;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,76(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822B1924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f30,488(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// stfs f30,496(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// lfs f29,7444(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7444);
	ctx.f29.f64 = double(temp.f32);
	// lfs f13,3732(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3732);
	ctx.f13.f64 = double(temp.f32);
	// stfs f29,500(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stfs f13,504(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// lfs f12,14884(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14884);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,472(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// stfs f12,476(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b19a8
	if (ctx.cr6.eq) goto loc_822B19A8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8232c638
	ctx.lr = 0x822B1980;
	sub_8232C638(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-13148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v61,r3,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v63,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// b 0x822b19b0
	goto loc_822B19B0;
loc_822B19A8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_822B19B0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,240
	ctx.r10.s64 = 240;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r9,29996
	ctx.r5.s64 = ctx.r9.s64 + 29996;
	// li r4,64
	ctx.r4.s64 = 64;
	// stvx128 v63,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r26,48(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r27,0(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82137a08
	ctx.lr = 0x822B19E0;
	sub_82137A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r7,76(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822B19F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,172(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 172, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,-32032(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32032);
	ctx.f13.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stfs f13,160(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 160, temp.u32);
	// stw r27,256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 256, ctx.r27.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f12,-11624(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -11624);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,744(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 744, temp.u32);
	// lfs f11,31304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 31304);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,748(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 748, temp.u32);
	// stfs f31,736(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 736, temp.u32);
	// lfs f10,-6172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6172);
	ctx.f10.f64 = double(temp.f32);
	// stfs f31,740(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 740, temp.u32);
	// stfs f10,468(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 468, temp.u32);
	// stfs f0,472(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 472, temp.u32);
	// stb r10,184(r8)
	PPC_STORE_U8(ctx.r8.u32 + 184, ctx.r10.u8);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822B1A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,25088(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 25088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,756(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 756, temp.u32);
	// stfs f29,760(r9)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 760, temp.u32);
	// stfs f13,172(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 172, temp.u32);
	// stw r10,240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 240, ctx.r10.u32);
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lfs f12,29992(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 29992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-1684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1684);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,252(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 252, temp.u32);
	// stfs f11,256(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 256, temp.u32);
	// bl 0x822a8d98
	ctx.lr = 0x822B1AB8;
	sub_822A8D98(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r5,29980
	ctx.r5.s64 = ctx.r5.s64 + 29980;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x822B1AD0;
	sub_82137A08(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82317f60
	ctx.lr = 0x822B1AEC;
	sub_82317F60(ctx, base);
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,172(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B1B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lfs f0,31308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 172, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b1b44
	if (ctx.cr6.eq) goto loc_822B1B44;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x82337a48
	ctx.lr = 0x822B1B34;
	sub_82337A48(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822b1b44
	if (!ctx.cr6.eq) goto loc_822B1B44;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r27,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r27.u32);
loc_822B1B44:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B1B58"))) PPC_WEAK_FUNC(sub_822B1B58);
PPC_FUNC_IMPL(__imp__sub_822B1B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x822B1B60;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823db9cc
	ctx.lr = 0x822B1B68;
	sub_823DB9CC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,30128
	ctx.r10.s64 = ctx.r11.s64 + 30128;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r26,136(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82388580
	ctx.lr = 0x822B1B90;
	sub_82388580(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822b1ba8
	if (ctx.cr6.lt) goto loc_822B1BA8;
	// bl 0x82387ba0
	ctx.lr = 0x822B1BA0;
	sub_82387BA0(ctx, base);
	// bl 0x82618670
	ctx.lr = 0x822B1BA4;
	sub_82618670(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_822B1BA8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82388580
	ctx.lr = 0x822B1BB0;
	sub_82388580(ctx, base);
	// bl 0x82398698
	ctx.lr = 0x822B1BB4;
	sub_82398698(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,672
	ctx.r3.s64 = 672;
	// stb r29,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r29.u8);
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// lfs f31,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// stb r29,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r29.u8);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r29,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r29.u8);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r29,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r29.u8);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stb r29,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r29.u8);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1BF0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1c04
	if (ctx.cr6.eq) goto loc_822B1C04;
	// bl 0x823216f8
	ctx.lr = 0x822B1BFC;
	sub_823216F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b1c08
	goto loc_822B1C08;
loc_822B1C04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B1C08:
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,768
	ctx.r28.s64 = 768;
	// stb r27,668(r11)
	PPC_STORE_U8(ctx.r11.u32 + 668, ctx.r27.u8);
	// li r3,672
	ctx.r3.s64 = 672;
	// stw r28,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r28.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1C24;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1c38
	if (ctx.cr6.eq) goto loc_822B1C38;
	// bl 0x823216f8
	ctx.lr = 0x822B1C30;
	sub_823216F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b1c3c
	goto loc_822B1C3C;
loc_822B1C38:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B1C3C:
	// stb r27,668(r11)
	PPC_STORE_U8(ctx.r11.u32 + 668, ctx.r27.u8);
	// li r3,672
	ctx.r3.s64 = 672;
	// stw r28,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r28.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1C50;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1c64
	if (ctx.cr6.eq) goto loc_822B1C64;
	// bl 0x823216f8
	ctx.lr = 0x822B1C5C;
	sub_823216F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b1c68
	goto loc_822B1C68;
loc_822B1C64:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B1C68:
	// stw r28,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r28.u32);
	// li r3,672
	ctx.r3.s64 = 672;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1C78;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1c8c
	if (ctx.cr6.eq) goto loc_822B1C8C;
	// bl 0x823216f8
	ctx.lr = 0x822B1C84;
	sub_823216F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b1c90
	goto loc_822B1C90;
loc_822B1C8C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B1C90:
	// stw r28,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r28.u32);
	// li r3,672
	ctx.r3.s64 = 672;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1CA0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1cb4
	if (ctx.cr6.eq) goto loc_822B1CB4;
	// bl 0x823216f8
	ctx.lr = 0x822B1CAC;
	sub_823216F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b1cb8
	goto loc_822B1CB8;
loc_822B1CB4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B1CB8:
	// stw r28,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r28.u32);
	// li r3,672
	ctx.r3.s64 = 672;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1CC8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1cdc
	if (ctx.cr6.eq) goto loc_822B1CDC;
	// bl 0x823216f8
	ctx.lr = 0x822B1CD4;
	sub_823216F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822b1ce0
	goto loc_822B1CE0;
loc_822B1CDC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822B1CE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B1CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r3,736
	ctx.r3.s64 = 736;
	// bl 0x82130528
	ctx.lr = 0x822B1D08;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1d18
	if (ctx.cr6.eq) goto loc_822B1D18;
	// bl 0x82319e78
	ctx.lr = 0x822B1D14;
	sub_82319E78(ctx, base);
	// b 0x822b1d1c
	goto loc_822B1D1C;
loc_822B1D18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B1D1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-31384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31384);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f28,7444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7444);
	ctx.f28.f64 = double(temp.f32);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r28,200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 200, ctx.r28.u32);
	// lfs f12,-31376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31376);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f29,14988(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14988);
	ctx.f29.f64 = double(temp.f32);
	// stb r27,184(r6)
	PPC_STORE_U8(ctx.r6.u32 + 184, ctx.r27.u8);
	// lfs f0,31304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31304);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f0,168(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 168, temp.u32);
	// lfs f30,27640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f13,-28872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28872);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stfs f13,244(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f31,240(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f31,248(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f31,448(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-17876(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17876);
	ctx.f0.f64 = double(temp.f32);
	// li r3,2848
	ctx.r3.s64 = 2848;
	// stfs f28,452(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// stfs f0,456(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// lfs f27,27632(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 27632);
	ctx.f27.f64 = double(temp.f32);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f12,304(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 304, temp.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f29,300(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// lfs f11,-13148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13148);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f27,268(r9)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r9.u32 + 268, temp.u32);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f31,492(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 492, temp.u32);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f30,496(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 496, temp.u32);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f29,488(r6)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + 488, temp.u32);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f30,508(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 508, temp.u32);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f29,512(r4)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r4.u32 + 512, temp.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f13,-6176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6176);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,212(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f11,216(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 216, temp.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1E0C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1e1c
	if (ctx.cr6.eq) goto loc_822B1E1C;
	// bl 0x82315728
	ctx.lr = 0x822B1E18;
	sub_82315728(ctx, base);
	// b 0x822b1e20
	goto loc_822B1E20;
loc_822B1E1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B1E20:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stw r28,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r28.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f0,3732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,476(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 476, temp.u32);
	// stb r29,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r29.u8);
	// stb r29,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r29.u8);
	// stb r29,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r29.u8);
	// bl 0x82130528
	ctx.lr = 0x822B1E4C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1e5c
	if (ctx.cr6.eq) goto loc_822B1E5C;
	// bl 0x82317da0
	ctx.lr = 0x822B1E58;
	sub_82317DA0(ctx, base);
	// b 0x822b1e60
	goto loc_822B1E60;
loc_822B1E5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B1E60:
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// li r3,784
	ctx.r3.s64 = 784;
	// bl 0x82130528
	ctx.lr = 0x822B1E6C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1e7c
	if (ctx.cr6.eq) goto loc_822B1E7C;
	// bl 0x8231aa58
	ctx.lr = 0x822B1E78;
	sub_8231AA58(ctx, base);
	// b 0x822b1e80
	goto loc_822B1E80;
loc_822B1E7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B1E80:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r28,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r28.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r3,736
	ctx.r3.s64 = 736;
	// lfs f0,-19928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19928);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,-30580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30580);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,11360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11360);
	ctx.f25.f64 = double(temp.f32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stfs f0,244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// stfs f31,248(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// stfs f31,240(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stfs f31,448(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// stfs f28,452(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// stfs f30,456(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stfs f26,476(r8)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r8.u32 + 476, temp.u32);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stfs f25,468(r7)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r7.u32 + 468, temp.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1ED8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1ee8
	if (ctx.cr6.eq) goto loc_822B1EE8;
	// bl 0x82319e78
	ctx.lr = 0x822B1EE4;
	sub_82319E78(ctx, base);
	// b 0x822b1eec
	goto loc_822B1EEC;
loc_822B1EE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B1EEC:
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// stw r28,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r28.u32);
	// li r3,240
	ctx.r3.s64 = 240;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1F08;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1f1c
	if (ctx.cr6.eq) goto loc_822B1F1C;
	// bl 0x8271fa20
	ctx.lr = 0x822B1F14;
	sub_8271FA20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b1f20
	goto loc_822B1F20;
loc_822B1F1C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B1F20:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stfs f31,200(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f31,212(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// stw r29,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r29.u32);
	// li r3,272
	ctx.r3.s64 = 272;
	// stb r29,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r29.u8);
	// lfs f0,27636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,30116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f13,196(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// stfs f12,204(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1F64;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1f78
	if (ctx.cr6.eq) goto loc_822B1F78;
	// bl 0x823192c0
	ctx.lr = 0x822B1F70;
	sub_823192C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b1f7c
	goto loc_822B1F7C;
loc_822B1F78:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B1F7C:
	// li r10,2832
	ctx.r10.s64 = 2832;
	// stfs f26,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stb r29,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r29.u8);
	// li r3,240
	ctx.r3.s64 = 240;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82130528
	ctx.lr = 0x822B1F98;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1fac
	if (ctx.cr6.eq) goto loc_822B1FAC;
	// bl 0x8271fa20
	ctx.lr = 0x822B1FA4;
	sub_8271FA20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822b1fb0
	goto loc_822B1FB0;
loc_822B1FAC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B1FB0:
	// stfs f29,196(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// stw r27,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r27.u32);
	// stfs f27,168(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stb r29,227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 227, ctx.r29.u8);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82130528
	ctx.lr = 0x822B1FCC;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1fe0
	if (ctx.cr6.eq) goto loc_822B1FE0;
	// bl 0x82319218
	ctx.lr = 0x822B1FD8;
	sub_82319218(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822b1fe4
	goto loc_822B1FE4;
loc_822B1FE0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822B1FE4:
	// stfs f28,192(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 192, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-20156
	ctx.r4.s64 = ctx.r11.s64 + -20156;
	// bl 0x822ebb00
	ctx.lr = 0x822B1FF8;
	sub_822EBB00(ctx, base);
	// stb r27,225(r30)
	PPC_STORE_U8(ctx.r30.u32 + 225, ctx.r27.u8);
	// stb r27,224(r30)
	PPC_STORE_U8(ctx.r30.u32 + 224, ctx.r27.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r27,226(r30)
	PPC_STORE_U8(ctx.r30.u32 + 226, ctx.r27.u8);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// bl 0x82388580
	ctx.lr = 0x822B2020;
	sub_82388580(ctx, base);
	// bl 0x82398628
	ctx.lr = 0x822B2024;
	sub_82398628(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822b2038
	if (ctx.cr6.eq) goto loc_822B2038;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x822b203c
	if (!ctx.cr6.eq) goto loc_822B203C;
loc_822B2038:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822B203C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822b2054
	if (ctx.cr6.eq) goto loc_822B2054;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x822b2058
	if (!ctx.cr6.eq) goto loc_822B2058;
loc_822B2054:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822B2058:
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// bl 0x82388580
	ctx.lr = 0x822B2068;
	sub_82388580(ctx, base);
	// bl 0x82398660
	ctx.lr = 0x822B206C;
	sub_82398660(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r3,96
	ctx.r3.s64 = 96;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r8.u8);
	// bl 0x82130528
	ctx.lr = 0x822B2084;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2094
	if (ctx.cr6.eq) goto loc_822B2094;
	// bl 0x8271e858
	ctx.lr = 0x822B2090;
	sub_8271E858(ctx, base);
	// b 0x822b2098
	goto loc_822B2098;
loc_822B2094:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B2098:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82130528
	ctx.lr = 0x822B20A4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b20b4
	if (ctx.cr6.eq) goto loc_822B20B4;
	// bl 0x8271f0a8
	ctx.lr = 0x822B20B0;
	sub_8271F0A8(ctx, base);
	// b 0x822b20b8
	goto loc_822B20B8;
loc_822B20B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B20B8:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stb r27,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r27.u8);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271e918
	ctx.lr = 0x822B20CC;
	sub_8271E918(ctx, base);
	// li r3,1216
	ctx.r3.s64 = 1216;
	// bl 0x82130528
	ctx.lr = 0x822B20D4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b20e4
	if (ctx.cr6.eq) goto loc_822B20E4;
	// bl 0x82314c30
	ctx.lr = 0x822B20E0;
	sub_82314C30(ctx, base);
	// b 0x822b20e8
	goto loc_822B20E8;
loc_822B20E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822B20E8:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stfs f25,516(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stfs f25,740(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 740, temp.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B210C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// bl 0x8271e930
	ctx.lr = 0x822B2124;
	sub_8271E930(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// bl 0x822afb10
	ctx.lr = 0x822B2138;
	sub_822AFB10(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r6,30104
	ctx.r3.s64 = ctx.r6.s64 + 30104;
	// bl 0x825f1ff8
	ctx.lr = 0x822B2148;
	sub_825F1FF8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823dba18
	ctx.lr = 0x822B215C;
	__restfpr_25(ctx, base);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B2160"))) PPC_WEAK_FUNC(sub_822B2160);
PPC_FUNC_IMPL(__imp__sub_822B2160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x822B2168;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,30128
	ctx.r10.s64 = ctx.r11.s64 + 30128;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// li r29,5
	ctx.r29.s64 = 5;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_822B2198:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b21b8
	if (ctx.cr6.eq) goto loc_822B21B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B21B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B21B8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822b2198
	if (!ctx.cr0.eq) goto loc_822B2198;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b21e4
	if (ctx.cr6.eq) goto loc_822B21E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B21E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B21E4:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2204
	if (ctx.cr6.eq) goto loc_822B2204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2204:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2224
	if (ctx.cr6.eq) goto loc_822B2224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2224:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2244
	if (ctx.cr6.eq) goto loc_822B2244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2244:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2264
	if (ctx.cr6.eq) goto loc_822B2264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2264:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2284
	if (ctx.cr6.eq) goto loc_822B2284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2284:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b22a4
	if (ctx.cr6.eq) goto loc_822B22A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B22A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B22A4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b22c4
	if (ctx.cr6.eq) goto loc_822B22C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B22C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B22C4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b22e4
	if (ctx.cr6.eq) goto loc_822B22E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B22E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B22E4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2304
	if (ctx.cr6.eq) goto loc_822B2304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2304:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2324
	if (ctx.cr6.eq) goto loc_822B2324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2324:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2344
	if (ctx.cr6.eq) goto loc_822B2344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2344:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2364
	if (ctx.cr6.eq) goto loc_822B2364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2364:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2378
	if (ctx.cr6.eq) goto loc_822B2378;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8213c218
	ctx.lr = 0x822B2378;
	sub_8213C218(ctx, base);
loc_822B2378:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b238c
	if (ctx.cr6.eq) goto loc_822B238C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8213c218
	ctx.lr = 0x822B238C;
	sub_8213C218(ctx, base);
loc_822B238C:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b23a0
	if (ctx.cr6.eq) goto loc_822B23A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8213c218
	ctx.lr = 0x822B23A0;
	sub_8213C218(ctx, base);
loc_822B23A0:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b23c0
	if (ctx.cr6.eq) goto loc_822B23C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217cb48
	ctx.lr = 0x822B23B4;
	sub_8217CB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82130588
	ctx.lr = 0x822B23BC;
	sub_82130588(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_822B23C0:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x825f1de0
	ctx.lr = 0x822B23C8;
	sub_825F1DE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B23D0"))) PPC_WEAK_FUNC(sub_822B23D0);
PPC_FUNC_IMPL(__imp__sub_822B23D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B2400;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b28a4
	if (!ctx.cr6.eq) goto loc_822B28A4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8271eb28
	ctx.lr = 0x822B2414;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b242c
	if (ctx.cr6.eq) goto loc_822B242C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x822b28a4
	if (ctx.cr6.eq) goto loc_822B28A4;
loc_822B242C:
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B2438;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b2450
	if (ctx.cr6.eq) goto loc_822B2450;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x822b28a4
	if (ctx.cr6.eq) goto loc_822B28A4;
loc_822B2450:
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B245C;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b28a4
	if (!ctx.cr6.eq) goto loc_822B28A4;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B2470;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b2488
	if (ctx.cr6.eq) goto loc_822B2488;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bge cr6,0x822b28a4
	if (!ctx.cr6.lt) goto loc_822B28A4;
loc_822B2488:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B249C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b28a4
	if (ctx.cr6.eq) goto loc_822B28A4;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x822b28a4
	if (!ctx.cr6.lt) goto loc_822B28A4;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b26ac
	if (ctx.cr6.eq) goto loc_822B26AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b2624
	if (ctx.cr6.eq) goto loc_822B2624;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822b2624
	if (ctx.cr6.eq) goto loc_822B2624;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8271eb28
	ctx.lr = 0x822B24DC;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b28a4
	if (!ctx.cr6.eq) goto loc_822B28A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lfs f31,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,14192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14192);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x822b25d8
	if (!ctx.cr6.eq) goto loc_822B25D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x822b25d8
	if (!ctx.cr6.gt) goto loc_822B25D8;
	// lis r8,-32122
	ctx.r8.s64 = -2105147392;
	// lis r7,23772
	ctx.r7.s64 = 1557921792;
	// addi r6,r8,2176
	ctx.r6.s64 = ctx.r8.s64 + 2176;
	// ori r11,r7,64167
	ctx.r11.u64 = ctx.r7.u64 | 64167;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,2176(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2176);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulld r10,r7,r4
	ctx.r10.s64 = ctx.r7.s64 * ctx.r4.s64;
	// lfs f0,7444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// mulld r10,r10,r3
	ctx.r10.s64 = ctx.r10.s64 * ctx.r3.s64;
	// lfs f13,12120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12120);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// clrlwi r9,r10,9
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfs f12,30136(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 30136);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rldicl r10,r10,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r11,2176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2176, ctx.r11.u32);
	// lfs f11,30132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30132);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// fmsubs f6,f8,f13,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f0.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fsel f4,f6,f0,f30
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// fmadds f3,f5,f12,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// stfs f2,452(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 452, temp.u32);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stfs f31,456(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 456, temp.u32);
	// b 0x822b25e8
	goto loc_822B25E8;
loc_822B25D8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stfs f31,452(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stfs f31,456(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 456, temp.u32);
loc_822B25E8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B25FC;
	sub_822AFCD0(ctx, base);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271e930
	ctx.lr = 0x822B2608;
	sub_8271E930(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,11360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,17032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17032);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82207ef0
	ctx.lr = 0x822B2620;
	sub_82207EF0(ctx, base);
	// b 0x822b28a4
	goto loc_822B28A4;
loc_822B2624:
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B2640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b28a4
	if (!ctx.cr6.eq) goto loc_822B28A4;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B2670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,40(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822B2690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,11360(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,17032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17032);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82207ef0
	ctx.lr = 0x822B26A8;
	sub_82207EF0(ctx, base);
	// b 0x822b28a4
	goto loc_822B28A4;
loc_822B26AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b2708
	if (ctx.cr6.eq) goto loc_822B2708;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822b2708
	if (!ctx.cr6.eq) goto loc_822B2708;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B26D8;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b2708
	if (ctx.cr6.eq) goto loc_822B2708;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271e930
	ctx.lr = 0x822B26EC;
	sub_8271E930(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,11360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,17032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17032);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82207ef0
	ctx.lr = 0x822B2704;
	sub_82207EF0(ctx, base);
	// b 0x822b28a4
	goto loc_822B28A4;
loc_822B2708:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b27ac
	if (ctx.cr6.eq) goto loc_822B27AC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822b27ac
	if (ctx.cr6.eq) goto loc_822B27AC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8271eb28
	ctx.lr = 0x822B2728;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b28a4
	if (ctx.cr6.eq) goto loc_822B28A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,452(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 452, temp.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stfs f0,456(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 456, temp.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// bl 0x8271e930
	ctx.lr = 0x822B2760;
	sub_8271E930(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f3,11360(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,17032(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17032);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82207ef0
	ctx.lr = 0x822B2778;
	sub_82207EF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,988
	ctx.r3.s64 = ctx.r11.s64 + 988;
	// bl 0x822eb078
	ctx.lr = 0x822B2784;
	sub_822EB078(ctx, base);
	// lis r4,-32121
	ctx.r4.s64 = -2105081856;
	// lwz r3,-12252(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12252);
	// lwz r11,1740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b28a4
	if (ctx.cr6.eq) goto loc_822B28A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ec468
	ctx.lr = 0x822B27A8;
	sub_821EC468(ctx, base);
	// b 0x822b28a4
	goto loc_822B28A4;
loc_822B27AC:
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B27C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822b28a4
	if (ctx.cr6.eq) goto loc_822B28A4;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B27F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f3,11360(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,17032(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17032);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82207ef0
	ctx.lr = 0x822B2810;
	sub_82207EF0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r5,-32130
	ctx.r5.s64 = -2105671680;
	// addi r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 + 11;
	// lis r4,-32130
	ctx.r4.s64 = -2105671680;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r5,-172
	ctx.r6.s64 = ctx.r5.s64 + -172;
	// addi r5,r4,-228
	ctx.r5.s64 = ctx.r4.s64 + -228;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x823dedd8
	ctx.lr = 0x822B283C;
	sub_823DEDD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2854
	if (ctx.cr6.eq) goto loc_822B2854;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,452(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// stfs f0,456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
loc_822B2854:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,988
	ctx.r3.s64 = ctx.r11.s64 + 988;
	// bl 0x822eb078
	ctx.lr = 0x822B2860;
	sub_822EB078(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-12252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	// lwz r10,1740(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b2884
	if (ctx.cr6.eq) goto loc_822B2884;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ec468
	ctx.lr = 0x822B2884;
	sub_821EC468(ctx, base);
loc_822B2884:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B28A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B28A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_822B28C4"))) PPC_WEAK_FUNC(sub_822B28C4);
PPC_FUNC_IMPL(__imp__sub_822B28C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B28C8"))) PPC_WEAK_FUNC(sub_822B28C8);
PPC_FUNC_IMPL(__imp__sub_822B28C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-6148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6148);
	// lbz r10,157(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 157);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b2a9c
	if (ctx.cr6.eq) goto loc_822B2A9C;
	// lbz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b2a9c
	if (!ctx.cr6.eq) goto loc_822B2A9C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a8108
	ctx.lr = 0x822B2904;
	sub_822A8108(ctx, base);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,3732(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x822a8108
	ctx.lr = 0x822B2930;
	sub_822A8108(ctx, base);
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32122
	ctx.r8.s64 = -2105147392;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r10,r8,2256
	ctx.r10.s64 = ctx.r8.s64 + 2256;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r3,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stvx128 v62,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,11368(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 11368);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f0,3796(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r5,-32114
	ctx.r5.s64 = -2104623104;
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// sth r8,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r8.u16);
	// lvx128 v60,r0,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// sth r11,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r11.u16);
	// stvx128 v61,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r11.u8);
	// stvx128 v60,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// sth r11,210(r1)
	PPC_STORE_U16(ctx.r1.u32 + 210, ctx.r11.u16);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,-23452(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23452);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,2048
	ctx.r7.s64 = 2048;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r6,128(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// bl 0x82574418
	ctx.lr = 0x822B2A04;
	sub_82574418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b2a68
	if (ctx.cr6.eq) goto loc_822B2A68;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afab0
	ctx.lr = 0x822B2A20;
	sub_822AFAB0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822B2A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,14192(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b0f10
	ctx.lr = 0x822B2A54;
	sub_822B0F10(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822B2A68:
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B2A74;
	sub_8271EB28(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b2a9c
	if (!ctx.cr6.eq) goto loc_822B2A9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b15b0
	ctx.lr = 0x822B2A94;
	sub_822B15B0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_822B2A9C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B2AB0"))) PPC_WEAK_FUNC(sub_822B2AB0);
PPC_FUNC_IMPL(__imp__sub_822B2AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x822B2AB8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823db9c8
	ctx.lr = 0x822B2AC0;
	sub_823DB9C8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b32bc
	if (ctx.cr6.eq) goto loc_822B32BC;
	// lwz r11,656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822b32bc
	if (!ctx.cr6.eq) goto loc_822B32BC;
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r27,r31,108
	ctx.r27.s64 = ctx.r31.s64 + 108;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82388580
	ctx.lr = 0x822B2B04;
	sub_82388580(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822b2b18
	if (!ctx.cr6.eq) goto loc_822B2B18;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822B2B18:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8271eb28
	ctx.lr = 0x822B2B30;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b2b58
	if (!ctx.cr6.eq) goto loc_822B2B58;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B2B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2B58:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8271eb28
	ctx.lr = 0x822B2B64;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b2b80
	if (!ctx.cr6.eq) goto loc_822B2B80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B2B80:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8271eb28
	ctx.lr = 0x822B2B8C;
	sub_8271EB28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f31,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x822b2bf0
	if (!ctx.cr6.eq) goto loc_822B2BF0;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B2BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822B2BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stfs f31,672(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 672, temp.u32);
	// stw r26,668(r5)
	PPC_STORE_U32(ctx.r5.u32 + 668, ctx.r26.u32);
	// stb r26,156(r5)
	PPC_STORE_U8(ctx.r5.u32 + 156, ctx.r26.u8);
loc_822B2BF0:
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r28,r11,-140
	ctx.r28.s64 = ctx.r11.s64 + -140;
	// addi r30,r10,-252
	ctx.r30.s64 = ctx.r10.s64 + -252;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x822B2C18;
	sub_823DEDD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822b2c44
	if (ctx.cr6.eq) goto loc_822B2C44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b2c44
	if (!ctx.cr6.eq) goto loc_822B2C44;
	// stfs f31,512(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 512, temp.u32);
loc_822B2C44:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x822B2C5C;
	sub_823DEDD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822b2ca8
	if (ctx.cr6.eq) goto loc_822B2CA8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b2ca4
	if (ctx.cr6.eq) goto loc_822B2CA4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f0,7444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f13,224(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822b2ca8
	if (!ctx.cr6.gt) goto loc_822B2CA8;
loc_822B2CA4:
	// stfs f31,512(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 512, temp.u32);
loc_822B2CA8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// addi r6,r10,-172
	ctx.r6.s64 = ctx.r10.s64 + -172;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x823dedd8
	ctx.lr = 0x822B2CD0;
	sub_823DEDD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822b30ec
	if (ctx.cr6.eq) goto loc_822B30EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B2CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b30ec
	if (!ctx.cr6.eq) goto loc_822B30EC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b2d2c
	if (ctx.cr6.eq) goto loc_822B2D2C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x822b2d2c
	if (ctx.cr6.eq) goto loc_822B2D2C;
	// bl 0x822a5578
	ctx.lr = 0x822B2D28;
	sub_822A5578(ctx, base);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
loc_822B2D2C:
	// fmr f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f31.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// beq cr6,0x822b308c
	if (ctx.cr6.eq) goto loc_822B308C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f30,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f26.f64 = double(temp.f32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822b2d70
	if (!ctx.cr6.eq) goto loc_822B2D70;
	// lfs f30,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f26.f64 = double(temp.f32);
	// b 0x822b2d88
	goto loc_822B2D88;
loc_822B2D70:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b2d88
	if (!ctx.cr6.eq) goto loc_822B2D88;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f30,30280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30280);
	ctx.f30.f64 = double(temp.f32);
	// fmr f26,f30
	ctx.f26.f64 = ctx.f30.f64;
loc_822B2D88:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lfs f29,-12084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12084);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x822b2e00
	if (ctx.cr6.eq) goto loc_822B2E00;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b2e00
	if (ctx.cr6.eq) goto loc_822B2E00;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b2e00
	if (ctx.cr6.eq) goto loc_822B2E00;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822b2dd4
	if (!ctx.cr6.eq) goto loc_822B2DD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82332098
	ctx.lr = 0x822B2DC8;
	sub_82332098(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b2e00
	if (ctx.cr6.eq) goto loc_822B2E00;
loc_822B2DD4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b2e4c
	if (!ctx.cr6.eq) goto loc_822B2E4C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82332098
	ctx.lr = 0x822B2DF4;
	sub_82332098(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b2e4c
	if (!ctx.cr6.eq) goto loc_822B2E4C;
loc_822B2E00:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a4bb8
	ctx.lr = 0x822B2E0C;
	sub_822A4BB8(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x822a4bb8
	ctx.lr = 0x822B2E1C;
	sub_822A4BB8(ctx, base);
	// fsubs f1,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f27.f64 - ctx.f1.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x8260c5c8
	ctx.lr = 0x822B2E28;
	sub_8260C5C8(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x822b2e48
	if (ctx.cr6.eq) goto loc_822B2E48;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822b2e44
	if (!ctx.cr6.gt) goto loc_822B2E44;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// b 0x822b2e48
	goto loc_822B2E48;
loc_822B2E44:
	// fmuls f0,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
loc_822B2E48:
	// fmr f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f0.f64;
loc_822B2E4C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b2ee8
	if (ctx.cr6.eq) goto loc_822B2EE8;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b2ec8
	if (!ctx.cr6.eq) goto loc_822B2EC8;
	// bl 0x822a4bb8
	ctx.lr = 0x822B2E78;
	sub_822A4BB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,31308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31308);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8260c5c8
	ctx.lr = 0x822B2E84;
	sub_8260C5C8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x822b2ee8
	if (!ctx.cr6.gt) goto loc_822B2EE8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fneg f28,f13
	ctx.f28.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f25,f9
	ctx.f25.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsubs f8,f28,f11
	ctx.f8.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fsel f7,f8,f28,f11
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f28.f64 : ctx.f11.f64;
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsel f5,f6,f12,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// stfs f5,116(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// b 0x822b2ee8
	goto loc_822B2EE8;
loc_822B2EC8:
	// bl 0x822a4bb8
	ctx.lr = 0x822B2ECC;
	sub_822A4BB8(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x8260c5c8
	ctx.lr = 0x822B2ED4;
	sub_8260C5C8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x822b2ee8
	if (!ctx.cr6.gt) goto loc_822B2EE8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f0,f1
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_822B2EE8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822b3030
	if (!ctx.cr6.eq) goto loc_822B3030;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82332098
	ctx.lr = 0x822B2F10;
	sub_82332098(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b3030
	if (!ctx.cr6.eq) goto loc_822B3030;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// rlwinm r29,r30,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r30,r11,21384
	ctx.r30.s64 = ctx.r11.s64 + 21384;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x822b3030
	if (ctx.cr6.eq) goto loc_822B3030;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a5578
	ctx.lr = 0x822B2F40;
	sub_822A5578(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f13,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822b3030
	if (!ctx.cr6.gt) goto loc_822B3030;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f13,588(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 588);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822b3030
	if (!ctx.cr6.gt) goto loc_822B3030;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// bne cr6,0x822b3030
	if (!ctx.cr6.eq) goto loc_822B3030;
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bne cr6,0x822b3030
	if (!ctx.cr6.eq) goto loc_822B3030;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221cba0
	ctx.lr = 0x822B2F88;
	sub_8221CBA0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-29232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29232);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8260c5c8
	ctx.lr = 0x822B2F98;
	sub_8260C5C8(ctx, base);
	// fneg f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r10,29952
	ctx.r29.s64 = ctx.r10.s64 + 29952;
	// fneg f10,f26
	ctx.f10.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,-31384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f8,f9,f13,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsel f6,f7,f8,f10
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// fsubs f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f30.f64));
	// fsel f4,f5,f30,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f30.f64 : ctx.f6.f64;
	// stfs f4,0(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// bl 0x8221cbf8
	ctx.lr = 0x822B2FDC;
	sub_8221CBF8(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8260c5c8
	ctx.lr = 0x822B2FE4;
	sub_8260C5C8(ctx, base);
	// fneg f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f0,88(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f2,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// lfs f13,-13148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmadds f0,f1,f13,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f13,76(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsel f7,f8,f13,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// b 0x822b306c
	goto loc_822B306C;
loc_822B3030:
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,29952
	ctx.r30.s64 = ctx.r11.s64 + 29952;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,-31384(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31384);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821ce490
	ctx.lr = 0x822B3050;
	sub_821CE490(ctx, base);
	// lfs f3,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,-13148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13148);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821ce490
	ctx.lr = 0x822B306C;
	sub_821CE490(ctx, base);
loc_822B306C:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f26
	ctx.f13.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// fadds f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// lfs f28,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fsel f27,f9,f30,f10
	ctx.f27.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f10.f64;
loc_822B308C:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f1,452(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 452);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,14980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14980);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2432);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82151fe0
	ctx.lr = 0x822B30AC;
	sub_82151FE0(ctx, base);
	// fsubs f0,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f1.f64));
	// fmadds f13,f0,f31,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f1.f64));
	// stfs f13,452(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 452, temp.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f11,456(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 456);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,460(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 460);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,224(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f25,f12
	ctx.f7.f64 = double(float(ctx.f25.f64 - ctx.f12.f64));
	// fsubs f9,f24,f10
	ctx.f9.f64 = double(float(ctx.f24.f64 - ctx.f10.f64));
	// fsubs f8,f28,f11
	ctx.f8.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fmadds f4,f7,f31,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f4,224(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 224, temp.u32);
	// fmadds f6,f9,f31,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f6,460(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 460, temp.u32);
	// fmadds f5,f8,f31,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f5,456(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 456, temp.u32);
loc_822B30EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B3104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r7,93(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lhz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stb r4,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r4.u8);
	// beq cr6,0x822b3164
	if (ctx.cr6.eq) goto loc_822B3164;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stb r26,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r26.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stb r26,184(r10)
	PPC_STORE_U8(ctx.r10.u32 + 184, ctx.r26.u8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,192(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b3150
	if (ctx.cr6.eq) goto loc_822B3150;
	// stb r26,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r26.u8);
loc_822B3150:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b3164
	if (ctx.cr6.eq) goto loc_822B3164;
	// stb r26,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r26.u8);
loc_822B3164:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B3178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,93(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b31c0
	if (ctx.cr6.eq) goto loc_822B31C0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stb r25,184(r10)
	PPC_STORE_U8(ctx.r10.u32 + 184, ctx.r25.u8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stb r25,184(r9)
	PPC_STORE_U8(ctx.r9.u32 + 184, ctx.r25.u8);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b31ac
	if (ctx.cr6.eq) goto loc_822B31AC;
	// stb r25,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r25.u8);
loc_822B31AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b31c0
	if (ctx.cr6.eq) goto loc_822B31C0;
	// stb r25,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r25.u8);
loc_822B31C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,592(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 592);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r10,r8,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1;
	// beq cr6,0x822b321c
	if (ctx.cr6.eq) goto loc_822B321C;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b321c
	if (ctx.cr6.eq) goto loc_822B321C;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822b3208
	if (!ctx.cr6.eq) goto loc_822B3208;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x822b320c
	if (ctx.cr6.eq) goto loc_822B320C;
loc_822B3208:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822B320C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
loc_822B321C:
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x822b12b0
	ctx.lr = 0x822B3230;
	sub_822B12B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b3268
	if (!ctx.cr6.eq) goto loc_822B3268;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r10,-6148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b326c
	if (ctx.cr6.eq) goto loc_822B326C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lbz r9,-6144(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6144);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b326c
	if (ctx.cr6.eq) goto loc_822B326C;
	// lbz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b326c
	if (ctx.cr6.eq) goto loc_822B326C;
loc_822B3268:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822B326C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b32bc
	if (ctx.cr6.eq) goto loc_822B32BC;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,72
	ctx.r10.s64 = 72;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r29,r11,208
	ctx.r29.s64 = ctx.r11.s64 + 208;
	// bne cr6,0x822b32a4
	if (!ctx.cr6.eq) goto loc_822B32A4;
	// addi r29,r11,144
	ctx.r29.s64 = ctx.r11.s64 + 144;
loc_822B32A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8271f020
	ctx.lr = 0x822B32AC;
	sub_8271F020(ctx, base);
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82315000
	ctx.lr = 0x822B32BC;
	sub_82315000(ctx, base);
loc_822B32BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823dba14
	ctx.lr = 0x822B32C8;
	__restfpr_24(ctx, base);
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B32CC"))) PPC_WEAK_FUNC(sub_822B32CC);
PPC_FUNC_IMPL(__imp__sub_822B32CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B32D0"))) PPC_WEAK_FUNC(sub_822B32D0);
PPC_FUNC_IMPL(__imp__sub_822B32D0) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82388580
	ctx.lr = 0x822B3300;
	sub_82388580(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822b33c8
	if (ctx.cr6.eq) goto loc_822B33C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b05b8
	ctx.lr = 0x822B3314;
	sub_822B05B8(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f31,29940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29940);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B3330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,668(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// rlwinm r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822b33c8
	if (ctx.cr6.eq) goto loc_822B33C8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r30,r10,29952
	ctx.r30.s64 = ctx.r10.s64 + 29952;
	// lfs f29,-28872(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28872);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,29936(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29936);
	ctx.f30.f64 = double(temp.f32);
loc_822B335C:
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x822b33c8
	if (!ctx.cr6.lt) goto loc_822B33C8;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f29,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fsel f9,f10,f11,f31
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// fsel f8,f10,f11,f31
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// fsubs f7,f9,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f30.f64));
	// fsel f6,f7,f30,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// stfs f6,24(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B33B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,668(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// rlwinm r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822b335c
	if (!ctx.cr6.eq) goto loc_822B335C;
loc_822B33C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_822B33EC"))) PPC_WEAK_FUNC(sub_822B33EC);
PPC_FUNC_IMPL(__imp__sub_822B33EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B33F0"))) PPC_WEAK_FUNC(sub_822B33F0);
PPC_FUNC_IMPL(__imp__sub_822B33F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82388580
	ctx.lr = 0x822B3410;
	sub_82388580(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822b349c
	if (ctx.cr6.eq) goto loc_822B349C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822b3450
	if (!ctx.cr6.eq) goto loc_822B3450;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8271f3b0
	ctx.lr = 0x822B3438;
	sub_8271F3B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B3450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B3450:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,14192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b0f10
	ctx.lr = 0x822B3464;
	sub_822B0F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b05b8
	ctx.lr = 0x822B346C;
	sub_822B05B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,988
	ctx.r3.s64 = ctx.r11.s64 + 988;
	// bl 0x822eb078
	ctx.lr = 0x822B3478;
	sub_822EB078(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r3,-12252(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12252);
	// lwz r9,1740(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b349c
	if (ctx.cr6.eq) goto loc_822B349C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ec468
	ctx.lr = 0x822B349C;
	sub_821EC468(ctx, base);
loc_822B349C:
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

__attribute__((alias("__imp__sub_822B34B0"))) PPC_WEAK_FUNC(sub_822B34B0);
PPC_FUNC_IMPL(__imp__sub_822B34B0) {
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
	// bl 0x82387b90
	ctx.lr = 0x822B34CC;
	sub_82387B90(ctx, base);
	// lwz r11,1192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822b34e8
	if (ctx.cr6.eq) goto loc_822B34E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne cr6,0x822b34ec
	if (!ctx.cr6.eq) goto loc_822B34EC;
loc_822B34E8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822B34EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822b3504
	if (ctx.cr6.eq) goto loc_822B3504;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne cr6,0x822b3508
	if (!ctx.cr6.eq) goto loc_822B3508;
loc_822B3504:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822B3508:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r9,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r9.u8);
	// stb r9,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r9.u8);
	// stb r9,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r9.u8);
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// lfs f13,27640(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27640);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,3796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lwz r3,136(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 136);
	// bl 0x82388580
	ctx.lr = 0x822B3548;
	sub_82388580(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822b3560
	if (ctx.cr6.lt) goto loc_822B3560;
	// bl 0x82387ba0
	ctx.lr = 0x822B3558;
	sub_82387BA0(ctx, base);
	// bl 0x82618670
	ctx.lr = 0x822B355C;
	sub_82618670(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_822B3560:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,14192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822afcd0
	ctx.lr = 0x822B357C;
	sub_822AFCD0(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82318168
	ctx.lr = 0x822B3584;
	sub_82318168(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b23d0
	ctx.lr = 0x822B3590;
	sub_822B23D0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822b0f10
	ctx.lr = 0x822B35A0;
	sub_822B0F10(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82314790
	ctx.lr = 0x822B35A8;
	sub_82314790(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B35BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82316148
	ctx.lr = 0x822B35C8;
	sub_82316148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b05b8
	ctx.lr = 0x822B35D0;
	sub_822B05B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B35E8"))) PPC_WEAK_FUNC(sub_822B35E8);
PPC_FUNC_IMPL(__imp__sub_822B35E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x822B35F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b3b90
	if (ctx.cr6.eq) goto loc_822B3B90;
	// bl 0x822a5578
	ctx.lr = 0x822B360C;
	sub_822A5578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b3b90
	if (ctx.cr6.eq) goto loc_822B3B90;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b3b90
	if (!ctx.cr6.eq) goto loc_822B3B90;
	// bl 0x822a5578
	ctx.lr = 0x822B3628;
	sub_822A5578(ctx, base);
	// lwz r28,116(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822b3b90
	if (ctx.cr6.eq) goto loc_822B3B90;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b3654
	if (ctx.cr6.eq) goto loc_822B3654;
	// bl 0x82209150
	ctx.lr = 0x822B3648;
	sub_82209150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b3b90
	if (!ctx.cr6.eq) goto loc_822B3B90;
loc_822B3654:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10008);
	// bl 0x823cdc90
	ctx.lr = 0x822B3660;
	sub_823CDC90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b3b90
	if (!ctx.cr6.eq) goto loc_822B3B90;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b3698
	if (ctx.cr6.eq) goto loc_822B3698;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B368C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b3b90
	if (!ctx.cr6.eq) goto loc_822B3B90;
loc_822B3698:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b12b0
	ctx.lr = 0x822B36A0;
	sub_822B12B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b36e0
	if (ctx.cr6.eq) goto loc_822B36E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82388598
	ctx.lr = 0x822B36B8;
	sub_82388598(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r9,21384
	ctx.r11.s64 = ctx.r9.s64 + 21384;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823170c8
	ctx.lr = 0x822B36D8;
	sub_823170C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_822B36E0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x822b3b90
	if (ctx.cr6.eq) goto loc_822B3B90;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-12640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12640);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b3720
	if (ctx.cr6.eq) goto loc_822B3720;
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822b3724
	if (ctx.cr6.eq) goto loc_822B3724;
loc_822B3720:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822B3724:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b3b90
	if (!ctx.cr6.eq) goto loc_822B3B90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B3740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b3b90
	if (ctx.cr6.eq) goto loc_822B3B90;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lbz r10,-6144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b3770
	if (ctx.cr6.eq) goto loc_822B3770;
	// lwz r11,-6148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6148);
	// lbz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b3780
	if (ctx.cr6.eq) goto loc_822B3780;
loc_822B3770:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lbz r10,-6734(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6734);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b38e0
	if (ctx.cr6.eq) goto loc_822B38E0;
loc_822B3780:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4ce0
	ctx.lr = 0x822B378C;
	sub_822A4CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b37b0
	if (!ctx.cr6.eq) goto loc_822B37B0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4ce0
	ctx.lr = 0x822B37A4;
	sub_822A4CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b3b2c
	if (ctx.cr6.eq) goto loc_822B3B2C;
loc_822B37B0:
	// lwz r11,-6148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,157(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 157);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b37f4
	if (ctx.cr6.eq) goto loc_822B37F4;
	// stb r29,157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 157, ctx.r29.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822afab0
	ctx.lr = 0x822B37D0;
	sub_822AFAB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b0f10
	ctx.lr = 0x822B37E4;
	sub_822B0F10(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-12252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	// bl 0x821ec4e8
	ctx.lr = 0x822B37F0;
	sub_821EC4E8(ctx, base);
	// b 0x822b3b2c
	goto loc_822B3B2C;
loc_822B37F4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,-6148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6148);
	// bge 0x822b382c
	if (!ctx.cr0.lt) goto loc_822B382C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// bl 0x822b15b0
	ctx.lr = 0x822B3814;
	sub_822B15B0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lwz r3,-12252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	// bl 0x821ec4e8
	ctx.lr = 0x822B3828;
	sub_821EC4E8(ctx, base);
	// b 0x822b3b2c
	goto loc_822B3B2C;
loc_822B382C:
	// stb r29,157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 157, ctx.r29.u8);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822afab0
	ctx.lr = 0x822B383C;
	sub_822AFAB0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822b3864
	if (ctx.cr6.eq) goto loc_822B3864;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x822b3864
	if (ctx.cr6.eq) goto loc_822B3864;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b3864
	if (ctx.cr6.eq) goto loc_822B3864;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r30,3
	ctx.r30.s64 = 3;
	// bne cr6,0x822b3868
	if (!ctx.cr6.eq) goto loc_822B3868;
loc_822B3864:
	// li r30,4
	ctx.r30.s64 = 4;
loc_822B3868:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B3888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,14192(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b0f10
	ctx.lr = 0x822B389C;
	sub_822B0F10(ctx, base);
	// lis r6,-32121
	ctx.r6.s64 = -2105081856;
	// addi r5,r6,17840
	ctx.r5.s64 = ctx.r6.s64 + 17840;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b38d0
	if (!ctx.cr6.eq) goto loc_822B38D0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x822b38d0
	if (!ctx.cr6.eq) goto loc_822B38D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f3,11360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-29232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29232);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82207ef0
	ctx.lr = 0x822B38D0;
	sub_82207EF0(ctx, base);
loc_822B38D0:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-12252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	// bl 0x821ec4e8
	ctx.lr = 0x822B38DC;
	sub_821EC4E8(ctx, base);
	// b 0x822b3b2c
	goto loc_822B3B2C;
loc_822B38E0:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4ce0
	ctx.lr = 0x822B38EC;
	sub_822A4CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b39c8
	if (ctx.cr6.eq) goto loc_822B39C8;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3904;
	sub_8271EB28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822b394c
	if (!ctx.cr6.gt) goto loc_822B394C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822b394c
	if (ctx.cr6.eq) goto loc_822B394C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x822b394c
	if (ctx.cr6.eq) goto loc_822B394C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x822b394c
	if (ctx.cr6.eq) goto loc_822B394C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,31308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31308);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822afcd0
	ctx.lr = 0x822B3948;
	sub_822AFCD0(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822B394C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B3964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B397C;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3990;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B39A4;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822b3a80
	if (ctx.cr6.eq) goto loc_822B3A80;
	// addic. r4,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r4.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// b 0x822b3a6c
	goto loc_822B3A6C;
loc_822B39C8:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4ce0
	ctx.lr = 0x822B39D4;
	sub_822A4CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b3b2c
	if (ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B39F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3A10;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3A24;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3A38;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8271eef0
	ctx.lr = 0x822B3A4C;
	sub_8271EEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x822b3a68
	if (!ctx.cr6.eq) goto loc_822B3A68;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822b3a84
	goto loc_822B3A84;
loc_822B3A68:
	// addic. r4,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r4.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
loc_822B3A6C:
	// bge 0x822b3a78
	if (!ctx.cr0.lt) goto loc_822B3A78;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x822b3a84
	goto loc_822B3A84;
loc_822B3A78:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// ble cr6,0x822b3a84
	if (!ctx.cr6.gt) goto loc_822B3A84;
loc_822B3A80:
	// li r4,4
	ctx.r4.s64 = 4;
loc_822B3A84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afab0
	ctx.lr = 0x822B3A8C;
	sub_822AFAB0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822b3ab4
	if (ctx.cr6.eq) goto loc_822B3AB4;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x822b3ab4
	if (ctx.cr6.eq) goto loc_822B3AB4;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b3ab4
	if (ctx.cr6.eq) goto loc_822B3AB4;
	// li r30,3
	ctx.r30.s64 = 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b3ab8
	if (!ctx.cr6.eq) goto loc_822B3AB8;
loc_822B3AB4:
	// li r30,4
	ctx.r30.s64 = 4;
loc_822B3AB8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B3AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,14192(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b0f10
	ctx.lr = 0x822B3AEC;
	sub_822B0F10(ctx, base);
	// lis r6,-32121
	ctx.r6.s64 = -2105081856;
	// lwz r3,-12252(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -12252);
	// bl 0x821ec4e8
	ctx.lr = 0x822B3AF8;
	sub_821EC4E8(ctx, base);
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// addi r4,r5,17840
	ctx.r4.s64 = ctx.r5.s64 + 17840;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x822b3b2c
	if (!ctx.cr6.eq) goto loc_822B3B2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f3,11360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-29232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29232);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82207ef0
	ctx.lr = 0x822B3B2C;
	sub_82207EF0(ctx, base);
loc_822B3B2C:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,17268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17268);
	// lwz r11,568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b3b5c
	if (ctx.cr6.eq) goto loc_822B3B5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B3B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B3B5C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b3b84
	if (ctx.cr6.eq) goto loc_822B3B84;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B3B74;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b3b88
	if (!ctx.cr6.eq) goto loc_822B3B88;
loc_822B3B84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822B3B88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b23d0
	ctx.lr = 0x822B3B90;
	sub_822B23D0(ctx, base);
loc_822B3B90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B3B98"))) PPC_WEAK_FUNC(sub_822B3B98);
PPC_FUNC_IMPL(__imp__sub_822B3B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x822b1648
	sub_822B1648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B3BA0"))) PPC_WEAK_FUNC(sub_822B3BA0);
PPC_FUNC_IMPL(__imp__sub_822B3BA0) {
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
	// bl 0x822b2160
	ctx.lr = 0x822B3BC0;
	sub_822B2160(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b3bd8
	if (ctx.cr6.eq) goto loc_822B3BD8;
	// bl 0x82130588
	ctx.lr = 0x822B3BD4;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B3BD8:
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

__attribute__((alias("__imp__sub_822B3BF0"))) PPC_WEAK_FUNC(sub_822B3BF0);
PPC_FUNC_IMPL(__imp__sub_822B3BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x822B3BF8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823db9d0
	ctx.lr = 0x822B3C00;
	sub_823DB9D0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B3C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b4c88
	if (ctx.cr6.eq) goto loc_822B4C88;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3C34;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4c88
	if (!ctx.cr6.eq) goto loc_822B4C88;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// bl 0x822a5578
	ctx.lr = 0x822B3C4C;
	sub_822A5578(ctx, base);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x822b3c9c
	if (ctx.cr6.eq) goto loc_822B3C9C;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r11,-12640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12640);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b3c80
	if (ctx.cr6.eq) goto loc_822B3C80;
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq cr6,0x822b3c84
	if (ctx.cr6.eq) goto loc_822B3C84;
loc_822B3C80:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_822B3C84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b3c9c
	if (!ctx.cr6.eq) goto loc_822B3C9C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a5578
	ctx.lr = 0x822B3C98;
	sub_822A5578(ctx, base);
	// lwz r22,116(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
loc_822B3C9C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x8271eb28
	ctx.lr = 0x822B3CA8;
	sub_8271EB28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f29,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x822b3d24
	if (ctx.cr6.eq) goto loc_822B3D24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82332098
	ctx.lr = 0x822B3CC4;
	sub_82332098(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b3d24
	if (!ctx.cr6.eq) goto loc_822B3D24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,592(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 592);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822b3d24
	if (ctx.cr6.eq) goto loc_822B3D24;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x822b3d24
	if (ctx.cr6.gt) goto loc_822B3D24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,14192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822afcd0
	ctx.lr = 0x822B3D14;
	sub_822AFCD0(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823dba1c
	ctx.lr = 0x822B3D20;
	__restfpr_26(ctx, base);
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
loc_822B3D24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b12b0
	ctx.lr = 0x822B3D2C;
	sub_822B12B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4c88
	if (!ctx.cr6.eq) goto loc_822B4C88;
	// bl 0x823bbf80
	ctx.lr = 0x822B3D3C;
	sub_823BBF80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4c88
	if (!ctx.cr6.eq) goto loc_822B4C88;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3D54;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4c88
	if (!ctx.cr6.eq) goto loc_822B4C88;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3D68;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4c88
	if (!ctx.cr6.eq) goto loc_822B4C88;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B3D7C;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4c88
	if (!ctx.cr6.eq) goto loc_822B4C88;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,2256
	ctx.r8.s64 = ctx.r11.s64 + 2256;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f29,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f29,244(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// sth r5,252(r1)
	PPC_STORE_U16(ctx.r1.u32 + 252, ctx.r5.u16);
	// sth r25,254(r1)
	PPC_STORE_U16(ctx.r1.u32 + 254, ctx.r25.u16);
	// stb r25,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r25.u8);
	// sth r25,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r25.u16);
	// stw r25,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r25.u32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x8271eb28
	ctx.lr = 0x822B3DE4;
	sub_8271EB28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f27,7444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f27.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r21,48
	ctx.r21.s64 = 48;
	// lfs f26,-13148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13148);
	ctx.f26.f64 = double(temp.f32);
	// li r23,400
	ctx.r23.s64 = 400;
	// lfs f28,14884(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14884);
	ctx.f28.f64 = double(temp.f32);
	// li r24,16
	ctx.r24.s64 = 16;
	// lfs f30,14192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14192);
	ctx.f30.f64 = double(temp.f32);
	// lis r26,-32114
	ctx.r26.s64 = -2104623104;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4420
	if (!ctx.cr6.eq) goto loc_822B4420;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822b4420
	if (!ctx.cr6.eq) goto loc_822B4420;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8271eef0
	ctx.lr = 0x822B3E38;
	sub_8271EEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4420
	if (!ctx.cr6.eq) goto loc_822B4420;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4420
	if (ctx.cr6.eq) goto loc_822B4420;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822b4420
	if (ctx.cr6.eq) goto loc_822B4420;
	// lbz r11,101(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 101);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4420
	if (!ctx.cr6.eq) goto loc_822B4420;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-6148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6148);
	// lbz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b4420
	if (!ctx.cr6.eq) goto loc_822B4420;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,668(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// lbz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b3edc
	if (ctx.cr6.eq) goto loc_822B3EDC;
	// bl 0x82345dd0
	ctx.lr = 0x822B3E94;
	sub_82345DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b3edc
	if (ctx.cr6.eq) goto loc_822B3EDC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822b3edc
	if (!ctx.cr6.eq) goto loc_822B3EDC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f0,820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822b3edc
	if (!ctx.cr6.gt) goto loc_822B3EDC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lhz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b3edc
	if (!ctx.cr6.eq) goto loc_822B3EDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B3EDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,664(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 664);
	// lbz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b3f44
	if (ctx.cr6.eq) goto loc_822B3F44;
	// bl 0x82345638
	ctx.lr = 0x822B3EFC;
	sub_82345638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b3f44
	if (ctx.cr6.eq) goto loc_822B3F44;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822b3f44
	if (!ctx.cr6.eq) goto loc_822B3F44;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f0,932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822b3f44
	if (!ctx.cr6.gt) goto loc_822B3F44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lhz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b3f44
	if (!ctx.cr6.eq) goto loc_822B3F44;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B3F44:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82332098
	ctx.lr = 0x822B3F50;
	sub_82332098(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,14988(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14988);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x822b3fa4
	if (ctx.cr6.eq) goto loc_822B3FA4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b3fa4
	if (ctx.cr6.eq) goto loc_822B3FA4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x822b3fa4
	if (!ctx.cr6.eq) goto loc_822B3FA4;
	// lfs f0,224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822b3fa4
	if (!ctx.cr6.gt) goto loc_822B3FA4;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B3FA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b3fe8
	if (!ctx.cr6.gt) goto loc_822B3FE8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// lbz r9,529(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 529);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b3fe8
	if (!ctx.cr6.eq) goto loc_822B3FE8;
	// lfs f0,224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822b3fe8
	if (!ctx.cr6.gt) goto loc_822B3FE8;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B3FE8:
	// bl 0x82332098
	ctx.lr = 0x822B3FEC;
	sub_82332098(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b4038
	if (ctx.cr6.eq) goto loc_822B4038;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// blt cr6,0x822b4038
	if (ctx.cr6.lt) goto loc_822B4038;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// lbz r9,529(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 529);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b4038
	if (!ctx.cr6.eq) goto loc_822B4038;
	// lfs f0,224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822b4038
	if (!ctx.cr6.gt) goto loc_822B4038;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B4038:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822b4084
	if (!ctx.cr6.gt) goto loc_822B4084;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,128(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lfs f0,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x822b4084
	if (!ctx.cr6.gt) goto loc_822B4084;
	// lfs f0,580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x822b4084
	if (ctx.cr6.lt) goto loc_822B4084;
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B4084:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b40e0
	if (ctx.cr6.eq) goto loc_822B40E0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b40e0
	if (ctx.cr6.eq) goto loc_822B40E0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822b40e0
	if (ctx.cr6.eq) goto loc_822B40E0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4ce0
	ctx.lr = 0x822B40B4;
	sub_822A4CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b40d8
	if (!ctx.cr6.eq) goto loc_822B40D8;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4ce0
	ctx.lr = 0x822B40CC;
	sub_822A4CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b40e0
	if (ctx.cr6.eq) goto loc_822B40E0;
loc_822B40D8:
	// li r5,11
	ctx.r5.s64 = 11;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B40E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,672(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 672);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b412c
	if (ctx.cr6.eq) goto loc_822B412C;
	// bl 0x8234fdf0
	ctx.lr = 0x822B40FC;
	sub_8234FDF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b412c
	if (ctx.cr6.eq) goto loc_822B412C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,672(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 672);
	// lbz r7,13(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 13);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822b412c
	if (ctx.cr6.eq) goto loc_822B412C;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B412C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82332098
	ctx.lr = 0x822B4138;
	sub_82332098(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b4184
	if (!ctx.cr6.eq) goto loc_822B4184;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lhz r8,18(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b4184
	if (ctx.cr6.eq) goto loc_822B4184;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822b417c
	if (!ctx.cr6.eq) goto loc_822B417C;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x822b441c
	goto loc_822B441C;
loc_822B417C:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x822b441c
	goto loc_822B441C;
loc_822B4184:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82332098
	ctx.lr = 0x822B4190;
	sub_82332098(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b41e0
	if (ctx.cr6.eq) goto loc_822B41E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b41e0
	if (ctx.cr6.eq) goto loc_822B41E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// ble cr6,0x822b41e0
	if (!ctx.cr6.gt) goto loc_822B41E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822b41e0
	if (!ctx.cr6.gt) goto loc_822B41E0;
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B41E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B41FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,17032(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17032);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822b4360
	if (!ctx.cr6.gt) goto loc_822B4360;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,668(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b4360
	if (!ctx.cr6.eq) goto loc_822B4360;
	// lwz r10,664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b4360
	if (!ctx.cr6.eq) goto loc_822B4360;
	// lwz r30,0(r13)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,72
	ctx.r29.s64 = 72;
	// lbzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4254
	if (ctx.cr6.eq) goto loc_822B4254;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// b 0x822b4258
	goto loc_822B4258;
loc_822B4254:
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
loc_822B4258:
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lwz r3,-23452(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23452);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lfs f31,3732(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3732);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82574ca0
	ctx.lr = 0x822B428C;
	sub_82574CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4420
	if (!ctx.cr6.eq) goto loc_822B4420;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r9,r11,208
	ctx.r9.s64 = ctx.r11.s64 + 208;
	// bne cr6,0x822b42b0
	if (!ctx.cr6.eq) goto loc_822B42B0;
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
loc_822B42B0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvx128 v0,r9,r21
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// bne cr6,0x822b42c4
	if (!ctx.cr6.eq) goto loc_822B42C4;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
loc_822B42C4:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r11,r23
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r10,r24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v61,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// lfs f0,-1684(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -1684);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v11,v62,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lvx128 v10,r0,r7
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,-23452(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23452);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vmaddfp v9,v10,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82574418
	ctx.lr = 0x822B4350;
	sub_82574418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4420
	if (!ctx.cr6.eq) goto loc_822B4420;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B4360:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82332098
	ctx.lr = 0x822B436C;
	sub_82332098(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b43b4
	if (ctx.cr6.eq) goto loc_822B43B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822b43b4
	if (!ctx.cr6.eq) goto loc_822B43B4;
	// lfs f0,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x822b43b4
	if (ctx.cr6.eq) goto loc_822B43B4;
	// lfs f0,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822b43b4
	if (!ctx.cr6.gt) goto loc_822B43B4;
	// li r5,10
	ctx.r5.s64 = 10;
	// b 0x822b4410
	goto loc_822B4410;
loc_822B43B4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822b4420
	if (!ctx.cr6.gt) goto loc_822B4420;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a5578
	ctx.lr = 0x822B43CC;
	sub_822A5578(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b4420
	if (ctx.cr6.lt) goto loc_822B4420;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B4400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b4420
	if (!ctx.cr6.eq) goto loc_822B4420;
	// li r5,13
	ctx.r5.s64 = 13;
loc_822B4410:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
loc_822B441C:
	// bl 0x822afcd0
	ctx.lr = 0x822B4420;
	sub_822AFCD0(ctx, base);
loc_822B4420:
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,784(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 784);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x822b44f8
	if (ctx.cr6.eq) goto loc_822B44F8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822b4458
	if (!ctx.cr6.eq) goto loc_822B4458;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lhz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b4458
	if (ctx.cr6.eq) goto loc_822B4458;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x822b44e8
	goto loc_822B44E8;
loc_822B4458:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,668(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// lbz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 40);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b44a4
	if (ctx.cr6.eq) goto loc_822B44A4;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r6,18(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822b44a4
	if (!ctx.cr6.eq) goto loc_822B44A4;
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x822b44a4
	if (!ctx.cr6.eq) goto loc_822B44A4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b44a4
	if (ctx.cr6.eq) goto loc_822B44A4;
	// lfs f0,820(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x822b44e4
	if (ctx.cr6.gt) goto loc_822B44E4;
loc_822B44A4:
	// lwz r10,664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// lbz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822b44f8
	if (ctx.cr6.eq) goto loc_822B44F8;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b44f8
	if (!ctx.cr6.eq) goto loc_822B44F8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822b44f8
	if (!ctx.cr6.eq) goto loc_822B44F8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x822b44f8
	if (ctx.cr6.eq) goto loc_822B44F8;
	// lfs f0,932(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822b44f8
	if (!ctx.cr6.gt) goto loc_822B44F8;
loc_822B44E4:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_822B44E8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B44F8;
	sub_822AFCD0(ctx, base);
loc_822B44F8:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x822b4c30
	if (ctx.cr6.gt) goto loc_822B4C30;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,17696
	ctx.r12.s64 = ctx.r12.s64 + 17696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822B4688;
	case 1:
		goto loc_822B46B4;
	case 2:
		goto loc_822B4770;
	case 3:
		goto loc_822B47AC;
	case 4:
		goto loc_822B47CC;
	case 5:
		goto loc_822B4844;
	case 6:
		goto loc_822B4844;
	case 7:
		goto loc_822B47F8;
	case 8:
		goto loc_822B4588;
	case 9:
		goto loc_822B4894;
	case 10:
		goto loc_822B48F0;
	case 11:
		goto loc_822B4BC0;
	case 12:
		goto loc_822B4914;
	case 13:
		goto loc_822B4A60;
	case 14:
		goto loc_822B4C30;
	case 15:
		goto loc_822B4C30;
	case 16:
		goto loc_822B4C30;
	case 17:
		goto loc_822B4568;
	default:
		__builtin_unreachable();
	}
	// lwz r17,18056(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18056);
	// lwz r17,18100(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18100);
	// lwz r17,18288(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18288);
	// lwz r17,18348(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18348);
	// lwz r17,18380(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18380);
	// lwz r17,18500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18500);
	// lwz r17,18500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18500);
	// lwz r17,18424(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18424);
	// lwz r17,17800(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17800);
	// lwz r17,18580(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18580);
	// lwz r17,18672(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18672);
	// lwz r17,19392(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19392);
	// lwz r17,18708(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18708);
	// lwz r17,19040(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19040);
	// lwz r17,19504(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19504);
	// lwz r17,19504(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19504);
	// lwz r17,19504(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19504);
	// lwz r17,17768(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17768);
loc_822B4568:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,592(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 592);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822b4c30
	if (!ctx.cr6.eq) goto loc_822B4C30;
	// b 0x822b4c1c
	goto loc_822B4C1C;
loc_822B4588:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,72
	ctx.r10.s64 = 72;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// bne cr6,0x822b45ac
	if (!ctx.cr6.eq) goto loc_822B45AC;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
loc_822B45AC:
	// lvx128 v0,r10,r21
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// bne cr6,0x822b45c0
	if (!ctx.cr6.eq) goto loc_822B45C0;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
loc_822B45C0:
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r10,r24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v60,r11,r23
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
	// lwz r3,-23452(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -23452);
	// li r10,1
	ctx.r10.s64 = 1;
	// stvx128 v60,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lvlx128 v59,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// vspltw128 v12,v59,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v58,r0,r7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// vmaddfp v11,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vaddfp128 v57,v58,v11
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82574418
	ctx.lr = 0x822B4634;
	sub_82574418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b4c30
	if (ctx.cr6.eq) goto loc_822B4C30;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B4658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x822b4c1c
	if (ctx.cr6.gt) goto loc_822B4C1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B467C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x822b4c30
	if (ctx.cr6.gt) goto loc_822B4C30;
	// b 0x822b4c1c
	goto loc_822B4C1C;
loc_822B4688:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,668(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b4c1c
	if (ctx.cr6.eq) goto loc_822B4C1C;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x822b4c18
	goto loc_822B4C18;
loc_822B46B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,664(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b46e0
	if (ctx.cr6.eq) goto loc_822B46E0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b46f4
	if (ctx.cr6.eq) goto loc_822B46F4;
loc_822B46E0:
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B46F4;
	sub_822AFCD0(ctx, base);
loc_822B46F4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4c30
	if (ctx.cr6.eq) goto loc_822B4C30;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b4c30
	if (ctx.cr6.eq) goto loc_822B4C30;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822b474c
	if (!ctx.cr6.eq) goto loc_822B474C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8271f3b0
	ctx.lr = 0x822B472C;
	sub_8271F3B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B4744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x822b4754
	goto loc_822B4754;
loc_822B474C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,31308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31308);
	ctx.f1.f64 = double(temp.f32);
loc_822B4754:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B4764;
	sub_822AFCD0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r25,2817(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2817, ctx.r25.u8);
	// b 0x822b4c30
	goto loc_822B4C30;
loc_822B4770:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b4c1c
	if (ctx.cr6.eq) goto loc_822B4C1C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x822b4c1c
	if (ctx.cr6.gt) goto loc_822B4C1C;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x822b4c18
	goto loc_822B4C18;
loc_822B47AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lhz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x822b4c30
	if (ctx.cr6.gt) goto loc_822B4C30;
	// b 0x822b4c1c
	goto loc_822B4C1C;
loc_822B47CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x822b4c30
	if (!ctx.cr6.lt) goto loc_822B4C30;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// lbz r9,529(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 529);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// b 0x822b4c18
	goto loc_822B4C18;
loc_822B47F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x822b4c1c
	if (ctx.cr6.eq) goto loc_822B4C1C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x822b4c1c
	if (ctx.cr6.lt) goto loc_822B4C1C;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822b4c30
	if (!ctx.cr6.lt) goto loc_822B4C30;
	// b 0x822b4c1c
	goto loc_822B4C1C;
loc_822B4844:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lhz r7,18(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 18);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4c1c
	if (ctx.cr6.eq) goto loc_822B4C1C;
	// lfs f0,240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x822b4c30
	if (ctx.cr6.eq) goto loc_822B4C30;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fsel f12,f13,f29,f27
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f27.f64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsel f11,f0,f12,f30
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// b 0x822b4c18
	goto loc_822B4C18;
loc_822B4894:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b4c1c
	if (ctx.cr6.eq) goto loc_822B4C1C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// blt cr6,0x822b4c1c
	if (ctx.cr6.lt) goto loc_822B4C1C;
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// bgt cr6,0x822b4c1c
	if (ctx.cr6.gt) goto loc_822B4C1C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x822b4c1c
	if (ctx.cr6.gt) goto loc_822B4C1C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x822b4c18
	goto loc_822B4C18;
loc_822B48F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f0,11360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11360);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f13,144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822b4c30
	if (!ctx.cr6.lt) goto loc_822B4C30;
	// b 0x822b4c1c
	goto loc_822B4C1C;
loc_822B4914:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4938
	if (ctx.cr6.eq) goto loc_822B4938;
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b494c
	if (!ctx.cr6.eq) goto loc_822B494C;
loc_822B4938:
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B494C;
	sub_822AFCD0(ctx, base);
loc_822B494C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822b4c30
	if (ctx.cr6.eq) goto loc_822B4C30;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4960;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4a40
	if (!ctx.cr6.eq) goto loc_822B4A40;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4978;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4a40
	if (!ctx.cr6.eq) goto loc_822B4A40;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4990;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4a40
	if (!ctx.cr6.eq) goto loc_822B4A40;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B49A8;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4a40
	if (!ctx.cr6.eq) goto loc_822B4A40;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B49C0;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4a40
	if (!ctx.cr6.eq) goto loc_822B4A40;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B49D8;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4a40
	if (!ctx.cr6.eq) goto loc_822B4A40;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B49F0;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4a40
	if (!ctx.cr6.eq) goto loc_822B4A40;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4bb8
	ctx.lr = 0x822B4A08;
	sub_822A4BB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,31308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31308);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x822b4a40
	if (ctx.cr6.gt) goto loc_822B4A40;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4bb8
	ctx.lr = 0x822B4A24;
	sub_822A4BB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x822b4a40
	if (ctx.cr6.gt) goto loc_822B4A40;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4bb8
	ctx.lr = 0x822B4A38;
	sub_822A4BB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x822b4c30
	if (!ctx.cr6.gt) goto loc_822B4C30;
loc_822B4A40:
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B4A54;
	sub_822AFCD0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r25,2828(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2828, ctx.r25.u8);
	// b 0x822b4c30
	goto loc_822B4C30;
loc_822B4A60:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a5578
	ctx.lr = 0x822B4A68;
	sub_822A5578(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lfs f30,-17424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17424);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x822b4a90
	if (!ctx.cr6.eq) goto loc_822B4A90;
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B4A90;
	sub_822AFCD0(ctx, base);
loc_822B4A90:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822b4c30
	if (ctx.cr6.eq) goto loc_822B4C30;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4AA4;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4b9c
	if (!ctx.cr6.eq) goto loc_822B4B9C;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4ABC;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4b9c
	if (!ctx.cr6.eq) goto loc_822B4B9C;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4AD4;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4b9c
	if (!ctx.cr6.eq) goto loc_822B4B9C;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4AEC;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4b9c
	if (!ctx.cr6.eq) goto loc_822B4B9C;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4B04;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4b9c
	if (!ctx.cr6.eq) goto loc_822B4B9C;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4B1C;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4b9c
	if (!ctx.cr6.eq) goto loc_822B4B9C;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4B34;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4b9c
	if (!ctx.cr6.eq) goto loc_822B4B9C;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B4B4C;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4b9c
	if (!ctx.cr6.eq) goto loc_822B4B9C;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4bb8
	ctx.lr = 0x822B4B64;
	sub_822A4BB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,31308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31308);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x822b4b9c
	if (ctx.cr6.gt) goto loc_822B4B9C;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4bb8
	ctx.lr = 0x822B4B80;
	sub_822A4BB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x822b4b9c
	if (ctx.cr6.gt) goto loc_822B4B9C;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4bb8
	ctx.lr = 0x822B4B94;
	sub_822A4BB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x822b4c30
	if (!ctx.cr6.gt) goto loc_822B4C30;
loc_822B4B9C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B4BB0;
	sub_822AFCD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a5578
	ctx.lr = 0x822B4BB8;
	sub_822A5578(ctx, base);
	// stfs f29,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// b 0x822b4c30
	goto loc_822B4C30;
loc_822B4BC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,676(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4c1c
	if (ctx.cr6.eq) goto loc_822B4C1C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4c1c
	if (ctx.cr6.eq) goto loc_822B4C1C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822b4c30
	if (ctx.cr6.eq) goto loc_822B4C30;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4ce0
	ctx.lr = 0x822B4BF8;
	sub_822A4CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4c1c
	if (!ctx.cr6.eq) goto loc_822B4C1C;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a4ce0
	ctx.lr = 0x822B4C10;
	sub_822A4CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_822B4C18:
	// beq cr6,0x822b4c30
	if (ctx.cr6.eq) goto loc_822B4C30;
loc_822B4C1C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822afcd0
	ctx.lr = 0x822B4C30;
	sub_822AFCD0(ctx, base);
loc_822B4C30:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4c54
	if (ctx.cr6.eq) goto loc_822B4C54;
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4c5c
	if (!ctx.cr6.eq) goto loc_822B4C5C;
loc_822B4C54:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r20,2828(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2828, ctx.r20.u8);
loc_822B4C5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,664(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4c80
	if (ctx.cr6.eq) goto loc_822B4C80;
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4c88
	if (!ctx.cr6.eq) goto loc_822B4C88;
loc_822B4C80:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r20,2817(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2817, ctx.r20.u8);
loc_822B4C88:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823dba1c
	ctx.lr = 0x822B4C94;
	__restfpr_26(ctx, base);
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B4C98"))) PPC_WEAK_FUNC(sub_822B4C98);
PPC_FUNC_IMPL(__imp__sub_822B4C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x822B4CA0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823db9c8
	ctx.lr = 0x822B4CA8;
	sub_823DB9C8(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b58e0
	if (ctx.cr6.eq) goto loc_822B58E0;
	// lwz r11,656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822b58e0
	if (!ctx.cr6.eq) goto loc_822B58E0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x822b12b0
	ctx.lr = 0x822B4CD8;
	sub_822B12B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b4d4c
	if (ctx.cr6.eq) goto loc_822B4D4C;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x823189d0
	ctx.lr = 0x822B4CF0;
	sub_823189D0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822b4d0c
	if (ctx.cr6.lt) goto loc_822B4D0C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// blt cr6,0x822b4d10
	if (ctx.cr6.lt) goto loc_822B4D10;
loc_822B4D0C:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_822B4D10:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b4d20
	if (!ctx.cr6.eq) goto loc_822B4D20;
	// li r10,2
	ctx.r10.s64 = 2;
loc_822B4D20:
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822b4d3c
	if (ctx.cr6.lt) goto loc_822B4D3C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x822b4d40
	if (ctx.cr6.lt) goto loc_822B4D40;
loc_822B4D3C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822B4D40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_822B4D4C:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b4d60
	if (!ctx.cr6.eq) goto loc_822B4D60;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r26,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r26.u8);
loc_822B4D60:
	// lis r27,-32121
	ctx.r27.s64 = -2105081856;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,-6148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6148);
	// lfs f25,14884(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14884);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,3732(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3732);
	ctx.f26.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,7444(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,3796(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x822b4dc4
	if (ctx.cr6.eq) goto loc_822B4DC4;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lbz r9,-6144(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6144);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b4dc4
	if (ctx.cr6.eq) goto loc_822B4DC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b28c8
	ctx.lr = 0x822B4DA8;
	sub_822B28C8(ctx, base);
	// lwz r11,-6148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6148);
	// lbz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b543c
	if (ctx.cr6.eq) goto loc_822B543C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b0370
	ctx.lr = 0x822B4DC0;
	sub_822B0370(ctx, base);
	// b 0x822b543c
	goto loc_822B543C;
loc_822B4DC4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,592(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 592);
	// rlwinm r7,r8,0,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3C;
	// rlwinm r7,r7,0,29,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822b4e0c
	if (ctx.cr6.eq) goto loc_822B4E0C;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B4DF8;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aff10
	ctx.lr = 0x822B4E08;
	sub_822AFF10(ctx, base);
	// b 0x822b543c
	goto loc_822B543C;
loc_822B4E0C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4eb0
	if (ctx.cr6.eq) goto loc_822B4EB0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822b4eb0
	if (ctx.cr6.eq) goto loc_822B4EB0;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822b4eb0
	if (!ctx.cr6.eq) goto loc_822B4EB0;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B4E3C;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4eb0
	if (!ctx.cr6.eq) goto loc_822B4EB0;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B4E50;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4eb0
	if (!ctx.cr6.eq) goto loc_822B4EB0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b543c
	if (ctx.cr6.eq) goto loc_822B543C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r9,r10,23088
	ctx.r9.s64 = ctx.r10.s64 + 23088;
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ld r7,23088(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23088);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lfs f1,796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 796);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8271e9a0
	ctx.lr = 0x822B4EA0;
	sub_8271E9A0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82316148
	ctx.lr = 0x822B4EAC;
	sub_82316148(ctx, base);
	// b 0x822b543c
	goto loc_822B543C;
loc_822B4EB0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b4f6c
	if (ctx.cr6.eq) goto loc_822B4F6C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822b4f6c
	if (ctx.cr6.eq) goto loc_822B4F6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x822b4f6c
	if (ctx.cr6.eq) goto loc_822B4F6C;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B4EE8;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b4f6c
	if (ctx.cr6.eq) goto loc_822B4F6C;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271eb28
	ctx.lr = 0x822B4EFC;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4f6c
	if (!ctx.cr6.eq) goto loc_822B4F6C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8271eb28
	ctx.lr = 0x822B4F1C;
	sub_8271EB28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r8,r9,23088
	ctx.r8.s64 = ctx.r9.s64 + 23088;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r7,23088(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23088);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lfs f1,800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 800);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8271e9a0
	ctx.lr = 0x822B4F68;
	sub_8271E9A0(ctx, base);
	// b 0x822b543c
	goto loc_822B543C;
loc_822B4F6C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x822b4fc4
	if (ctx.cr6.eq) goto loc_822B4FC4;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r11,-12640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12640);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4fac
	if (ctx.cr6.eq) goto loc_822B4FAC;
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x822b4fb0
	if (ctx.cr6.eq) goto loc_822B4FB0;
loc_822B4FAC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822B4FB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4fc4
	if (!ctx.cr6.eq) goto loc_822B4FC4;
	// bl 0x822a5578
	ctx.lr = 0x822B4FC0;
	sub_822A5578(ctx, base);
	// lwz r29,116(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
loc_822B4FC4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b5048
	if (!ctx.cr6.eq) goto loc_822B5048;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B4FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8271e930
	ctx.lr = 0x822B5008;
	sub_8271E930(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a93a8
	ctx.lr = 0x822B5014;
	sub_822A93A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,988
	ctx.r3.s64 = ctx.r11.s64 + 988;
	// bl 0x822eb078
	ctx.lr = 0x822B5020;
	sub_822EB078(ctx, base);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// lwz r3,-12252(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12252);
	// lwz r6,1740(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// rlwinm r5,r6,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b543c
	if (ctx.cr6.eq) goto loc_822B543C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ec468
	ctx.lr = 0x822B5044;
	sub_821EC468(ctx, base);
	// b 0x822b543c
	goto loc_822B543C;
loc_822B5048:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b536c
	if (!ctx.cr6.eq) goto loc_822B536C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f30.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f27,14192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x822b50a4
	if (ctx.cr6.eq) goto loc_822B50A4;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B5074;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5088
	if (ctx.cr6.eq) goto loc_822B5088;
	// fmr f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f27.f64;
	// b 0x822b50a4
	goto loc_822B50A4;
loc_822B5088:
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B5094;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b50a4
	if (ctx.cr6.eq) goto loc_822B50A4;
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
loc_822B50A4:
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r10,29952
	ctx.r30.s64 = ctx.r10.s64 + 29952;
	// lfs f13,452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmadds f11,f12,f26,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f13.f64));
	// stfs f11,452(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// beq cr6,0x822b510c
	if (ctx.cr6.eq) goto loc_822B510C;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B50DC;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b50f0
	if (ctx.cr6.eq) goto loc_822B50F0;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x822b510c
	goto loc_822B510C;
loc_822B50F0:
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B50FC;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b510c
	if (ctx.cr6.eq) goto loc_822B510C;
	// fmr f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f27.f64;
loc_822B510C:
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f11,456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-28872(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28872);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29936(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29936);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f13,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsel f9,f10,f10,f30
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f30.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// stfs f7,456(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// bl 0x82387a18
	ctx.lr = 0x822B5144;
	sub_82387A18(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,988
	ctx.r30.s64 = ctx.r11.s64 + 988;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B5170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,-29232(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822b5318
	if (!ctx.cr6.gt) goto loc_822B5318;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f0,452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x822b51a8
	if (!ctx.cr6.eq) goto loc_822B51A8;
	// lfs f0,456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x822b543c
	if (ctx.cr6.eq) goto loc_822B543C;
loc_822B51A8:
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// lwz r7,0(r13)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,2256
	ctx.r8.s64 = ctx.r11.s64 + 2256;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r3,72
	ctx.r3.s64 = 72;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f30,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lbzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// sth r4,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r4.u16);
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// sth r28,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r28.u16);
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r28.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r28,210(r1)
	PPC_STORE_U16(ctx.r1.u32 + 210, ctx.r28.u16);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r8,r11,208
	ctx.r8.s64 = ctx.r11.s64 + 208;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bne cr6,0x822b5218
	if (!ctx.cr6.eq) goto loc_822B5218;
	// addi r8,r11,144
	ctx.r8.s64 = ctx.r11.s64 + 144;
loc_822B5218:
	// li r7,48
	ctx.r7.s64 = 48;
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// lvx128 v0,r8,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x822b5234
	if (!ctx.cr6.eq) goto loc_822B5234;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
loc_822B5234:
	// li r9,400
	ctx.r9.s64 = 400;
	// stfs f26,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f25,100(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lvx128 v63,r11,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,16
	ctx.r3.s64 = 16;
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r1,240
	ctx.r25.s64 = ctx.r1.s64 + 240;
	// lvlx128 v61,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v61,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v12,r10,r3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v11,v62,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// lfs f0,-1684(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1684);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v10,r0,r5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r7,-32114
	ctx.r7.s64 = -2104623104;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,-23452(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -23452);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// vmaddfp v9,v10,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82574418
	ctx.lr = 0x822B52C8;
	sub_82574418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eb400
	ctx.lr = 0x822B52D8;
	sub_822EB400(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-12252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	// lwz r10,1740(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// addi r8,r11,0
	ctx.r8.s64 = ctx.r11.s64 + 0;
	// addi r7,r10,0
	ctx.r7.s64 = ctx.r10.s64 + 0;
	// addi r6,r6,0
	ctx.r6.s64 = ctx.r6.s64 + 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ed368
	ctx.lr = 0x822B5314;
	sub_821ED368(ctx, base);
	// b 0x822b543c
	goto loc_822B543C;
loc_822B5318:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B5334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x822b543c
	if (ctx.cr6.gt) goto loc_822B543C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eb078
	ctx.lr = 0x822B5344;
	sub_822EB078(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-12252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	// lwz r10,1740(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b543c
	if (ctx.cr6.eq) goto loc_822B543C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ec468
	ctx.lr = 0x822B5368;
	sub_821EC468(ctx, base);
	// b 0x822b543c
	goto loc_822B543C;
loc_822B536C:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b53ac
	if (!ctx.cr6.eq) goto loc_822B53AC;
	// lwz r11,784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x822b53ac
	if (!ctx.cr6.eq) goto loc_822B53AC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822b53ac
	if (ctx.cr6.eq) goto loc_822B53AC;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B5398;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b53ac
	if (ctx.cr6.eq) goto loc_822B53AC;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x822b53d8
	goto loc_822B53D8;
loc_822B53AC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// lwz r11,784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822b543c
	if (!ctx.cr6.eq) goto loc_822B543C;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822b5418
	if (ctx.cr6.eq) goto loc_822B5418;
loc_822B53D8:
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B53E4;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b53fc
	if (ctx.cr6.eq) goto loc_822B53FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,14192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f29.f64 = double(temp.f32);
	// b 0x822b5418
	goto loc_822B5418;
loc_822B53FC:
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4db0
	ctx.lr = 0x822B5408;
	sub_822A4DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5418
	if (ctx.cr6.eq) goto loc_822B5418;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
loc_822B5418:
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,29952
	ctx.r9.s64 = ctx.r11.s64 + 29952;
	// lwz r11,576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f26,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f13.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_822B543C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,89(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lfs f27,17032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17032);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,-12084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12084);
	ctx.f24.f64 = double(temp.f32);
	// bne cr6,0x822b55ec
	if (!ctx.cr6.eq) goto loc_822B55EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f29,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x8232c638
	ctx.lr = 0x822B546C;
	sub_8232C638(ctx, base);
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-7912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r5,100(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// fdivs f10,f29,f11
	ctx.f10.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsel f8,f10,f10,f30
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f30.f64;
	// fsubs f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fsel f12,f7,f31,f8
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x822b54ec
	if (!ctx.cr6.gt) goto loc_822B54EC;
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bgt cr6,0x822b54cc
	if (ctx.cr6.gt) goto loc_822B54CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,11360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11360);
	ctx.f11.f64 = double(temp.f32);
loc_822B54CC:
	// fsubs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f13,f0,f0,f30
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsel f10,f12,f31,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fdivs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x822b54ec
	if (!ctx.cr6.gt) goto loc_822B54EC;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_822B54EC:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// fmuls f29,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B5508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// ble cr6,0x822b5514
	if (!ctx.cr6.gt) goto loc_822B5514;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
loc_822B5514:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B5530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b5540
	if (!ctx.cr6.eq) goto loc_822B5540;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
loc_822B5540:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822b5568
	if (!ctx.cr6.eq) goto loc_822B5568;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x822b556c
	if (ctx.cr6.eq) goto loc_822B556C;
loc_822B5568:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822B556C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5598
	if (ctx.cr6.eq) goto loc_822B5598;
	// lfs f0,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f0,30712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822b5598
	if (!ctx.cr6.gt) goto loc_822B5598;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_822B5598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b12b0
	ctx.lr = 0x822B55A0;
	sub_822B12B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b55ec
	if (!ctx.cr6.eq) goto loc_822B55EC;
	// lwz r11,-6148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b55ec
	if (ctx.cr6.eq) goto loc_822B55EC;
	// lbz r11,157(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 157);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b55ec
	if (!ctx.cr6.eq) goto loc_822B55EC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b55dc
	if (ctx.cr6.eq) goto loc_822B55DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b55e0
	if (!ctx.cr6.eq) goto loc_822B55E0;
loc_822B55DC:
	// fmuls f1,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f24.f64));
loc_822B55E0:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823147c0
	ctx.lr = 0x822B55EC;
	sub_823147C0(ctx, base);
loc_822B55EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,89(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lfs f28,31308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31308);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x822b56a4
	if (!ctx.cr6.eq) goto loc_822B56A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,578(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 578);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b5624
	if (!ctx.cr6.gt) goto loc_822B5624;
	// lfs f29,580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	ctx.f29.f64 = double(temp.f32);
loc_822B5624:
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x822b5640
	if (!ctx.cr6.gt) goto loc_822B5640;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822b5640
	if (!ctx.cr6.gt) goto loc_822B5640;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_822B5640:
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b5658
	if (ctx.cr6.eq) goto loc_822B5658;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x822b565c
	goto loc_822B565C;
loc_822B5658:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_822B565C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822b5668
	if (!ctx.cr6.gt) goto loc_822B5668;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_822B5668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b12b0
	ctx.lr = 0x822B5670;
	sub_822B12B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b56a4
	if (!ctx.cr6.eq) goto loc_822B56A4;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b5694
	if (ctx.cr6.eq) goto loc_822B5694;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b5698
	if (!ctx.cr6.eq) goto loc_822B5698;
loc_822B5694:
	// fmuls f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
loc_822B5698:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823147c0
	ctx.lr = 0x822B56A4;
	sub_823147C0(ctx, base);
loc_822B56A4:
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822b5870
	if (!ctx.cr6.eq) goto loc_822B5870;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f12,11368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11368);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f13,224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822b581c
	if (!ctx.cr6.gt) goto loc_822B581C;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x822b57a0
	if (ctx.cr6.lt) goto loc_822B57A0;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r6,r10,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
loc_822B5704:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// lfs f11,520(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 520);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f25
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f25.f64));
	// lfs f9,520(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 520);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f25
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f25.f64));
	// lfs f7,520(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 520);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f25
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f25.f64));
	// lfs f5,520(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 520);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f25
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f25.f64));
	// fmuls f3,f10,f26
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fmuls f2,f8,f26
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// fmuls f1,f6,f26
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// fmuls f11,f4,f26
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fsel f10,f3,f3,f30
	ctx.f10.f64 = ctx.f3.f64 >= 0.0 ? ctx.f3.f64 : ctx.f30.f64;
	// fsel f9,f2,f2,f30
	ctx.f9.f64 = ctx.f2.f64 >= 0.0 ? ctx.f2.f64 : ctx.f30.f64;
	// fsel f8,f1,f1,f30
	ctx.f8.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f30.f64;
	// fsel f7,f11,f11,f30
	ctx.f7.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f30.f64;
	// fsubs f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsubs f5,f9,f31
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fsubs f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fsubs f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fsel f2,f6,f31,f10
	ctx.f2.f64 = ctx.f6.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fsel f1,f5,f31,f9
	ctx.f1.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fsel f11,f4,f31,f8
	ctx.f11.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fsel f10,f3,f31,f7
	ctx.f10.f64 = ctx.f3.f64 >= 0.0 ? ctx.f31.f64 : ctx.f7.f64;
	// fsubs f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsel f8,f9,f0,f2
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fsubs f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fsel f6,f7,f8,f1
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f1.f64;
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsel f4,f5,f6,f11
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f6.f64 : ctx.f11.f64;
	// fsubs f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsel f0,f3,f4,f10
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : ctx.f10.f64;
	// bne 0x822b5704
	if (!ctx.cr0.eq) goto loc_822B5704;
loc_822B57A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822b57f0
	if (ctx.cr6.lt) goto loc_822B57F0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,28(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822B57C0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f11,520(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 520);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f25
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f25.f64));
	// fmuls f9,f10,f26
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fsel f8,f9,f9,f30
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f30.f64;
	// fsubs f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsel f0,f5,f0,f6
	ctx.f0.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// bge 0x822b57c0
	if (!ctx.cr0.lt) goto loc_822B57C0;
loc_822B57F0:
	// fmuls f11,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,14988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14988);
	ctx.f13.f64 = double(temp.f32);
	// fsel f10,f11,f11,f30
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f30.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsel f30,f9,f31,f10
	ctx.f30.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// bge cr6,0x822b581c
	if (!ctx.cr6.lt) goto loc_822B581C;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f30,f0,f27
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_822B581C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b5830
	if (ctx.cr6.eq) goto loc_822B5830;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b5834
	if (!ctx.cr6.eq) goto loc_822B5834;
loc_822B5830:
	// fmuls f30,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
loc_822B5834:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b12b0
	ctx.lr = 0x822B583C;
	sub_822B12B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b5870
	if (!ctx.cr6.eq) goto loc_822B5870;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b5860
	if (ctx.cr6.eq) goto loc_822B5860;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b5864
	if (!ctx.cr6.eq) goto loc_822B5864;
loc_822B5860:
	// fmuls f1,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f24.f64));
loc_822B5864:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823147c0
	ctx.lr = 0x822B5870;
	sub_823147C0(ctx, base);
loc_822B5870:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b5884
	if (ctx.cr6.eq) goto loc_822B5884;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b58b8
	if (!ctx.cr6.eq) goto loc_822B58B8;
loc_822B5884:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r5,72(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// lfs f0,224(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,228(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 228, temp.u32);
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,224(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 224, temp.u32);
loc_822B58B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b3bf0
	ctx.lr = 0x822B58C0;
	sub_822B3BF0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r26,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r26.u8);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r7.u8);
loc_822B58E0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823dba14
	ctx.lr = 0x822B58EC;
	__restfpr_24(ctx, base);
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B58F0"))) PPC_WEAK_FUNC(sub_822B58F0);
PPC_FUNC_IMPL(__imp__sub_822B58F0) {
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
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-6148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b593c
	if (ctx.cr6.eq) goto loc_822B593C;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lbz r9,-6144(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -6144);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b593c
	if (ctx.cr6.eq) goto loc_822B593C;
	// lbz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b593c
	if (ctx.cr6.eq) goto loc_822B593C;
	// bl 0x822b0370
	ctx.lr = 0x822B5938;
	sub_822B0370(ctx, base);
	// b 0x822b598c
	goto loc_822B598C;
loc_822B593C:
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5954
	if (ctx.cr6.eq) goto loc_822B5954;
	// bl 0x822b0660
	ctx.lr = 0x822B5950;
	sub_822B0660(ctx, base);
	// b 0x822b598c
	goto loc_822B598C;
loc_822B5954:
	// bl 0x822b12b0
	ctx.lr = 0x822B5958;
	sub_822B12B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b598c
	if (ctx.cr6.eq) goto loc_822B598C;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lbz r11,37(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5988
	if (ctx.cr6.eq) goto loc_822B5988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b4c98
	ctx.lr = 0x822B597C;
	sub_822B4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2ab0
	ctx.lr = 0x822B5984;
	sub_822B2AB0(ctx, base);
	// b 0x822b598c
	goto loc_822B598C;
loc_822B5988:
	// bl 0x82318978
	ctx.lr = 0x822B598C;
	sub_82318978(ctx, base);
loc_822B598C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5a14
	if (ctx.cr6.eq) goto loc_822B5A14;
	// lbz r10,101(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 101);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822b59e4
	if (ctx.cr6.eq) goto loc_822B59E4;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822b59e4
	if (ctx.cr6.eq) goto loc_822B59E4;
	// lwz r11,-6148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5a14
	if (ctx.cr6.eq) goto loc_822B5A14;
	// lbz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5a14
	if (ctx.cr6.eq) goto loc_822B5A14;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B59E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822b5a14
	goto loc_822B5A14;
loc_822B59E4:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B59F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822b5a14
	if (!ctx.cr6.eq) goto loc_822B5A14;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x8271f438
	ctx.lr = 0x822B5A14;
	sub_8271F438(ctx, base);
loc_822B5A14:
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

__attribute__((alias("__imp__sub_822B5A2C"))) PPC_WEAK_FUNC(sub_822B5A2C);
PPC_FUNC_IMPL(__imp__sub_822B5A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5A30"))) PPC_WEAK_FUNC(sub_822B5A30);
PPC_FUNC_IMPL(__imp__sub_822B5A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,17892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r3,900(r11)
	PPC_STORE_U8(ctx.r11.u32 + 900, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5A48"))) PPC_WEAK_FUNC(sub_822B5A48);
PPC_FUNC_IMPL(__imp__sub_822B5A48) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,202
	ctx.r11.s64 = ctx.r4.s64 + 202;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5A58"))) PPC_WEAK_FUNC(sub_822B5A58);
PPC_FUNC_IMPL(__imp__sub_822B5A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x822B5A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,-32119
	ctx.r28.s64 = -2104950784;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r31.u32);
	// stw r31,804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 804, ctx.r31.u32);
	// lwz r3,-17944(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17944);
	// bl 0x82305870
	ctx.lr = 0x822B5A84;
	sub_82305870(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r30,808
	ctx.r30.s64 = ctx.r30.s64 + 808;
	// addi r29,r11,30524
	ctx.r29.s64 = ctx.r11.s64 + 30524;
loc_822B5A90:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x822B5AA4;
	sub_82137A08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82723808
	ctx.lr = 0x822B5AAC;
	sub_82723808(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 19, ctx.xer);
	// blt cr6,0x822b5a90
	if (ctx.cr6.lt) goto loc_822B5A90;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-17944(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17944);
	// bl 0x823058f8
	ctx.lr = 0x822B5ACC;
	sub_823058F8(ctx, base);
	// bl 0x822a91c8
	ctx.lr = 0x822B5AD0;
	sub_822A91C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B5AD8"))) PPC_WEAK_FUNC(sub_822B5AD8);
PPC_FUNC_IMPL(__imp__sub_822B5AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x822B5AE0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823db9d4
	ctx.lr = 0x822B5AE8;
	sub_823DB9D4(ctx, base);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r8,112
	ctx.r8.s64 = 112;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,-17936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17936);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r10,-8092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8092);
	// addi r6,r11,45
	ctx.r6.s64 = ctx.r11.s64 + 45;
	// lwz r3,-10220(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10220);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lvx128 v63,r4,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x822b5b7c
	if (ctx.cr6.eq) goto loc_822B5B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B5B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b5b7c
	if (ctx.cr6.eq) goto loc_822B5B7C;
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lwz r3,17268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17268);
	// bl 0x822a39c0
	ctx.lr = 0x822B5B54;
	sub_822A39C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5b7c
	if (ctx.cr6.eq) goto loc_822B5B7C;
	// lwz r3,17268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17268);
	// bl 0x822a39c8
	ctx.lr = 0x822B5B68;
	sub_822A39C8(ctx, base);
	// bl 0x822a8108
	ctx.lr = 0x822B5B6C;
	sub_822A8108(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r3,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_822B5B7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,400(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 400);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r22,8
	ctx.r22.s64 = 8;
	// stw r28,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r28.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f27,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f27.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822b5d38
	if (!ctx.cr6.gt) goto loc_822B5D38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lfs f28,29500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29500);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,14192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14192);
	ctx.f31.f64 = double(temp.f32);
loc_822B5BC0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b5d24
	if (ctx.cr6.eq) goto loc_822B5D24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B5BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b5bf0
	if (ctx.cr6.eq) goto loc_822B5BF0;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// b 0x822b5d24
	goto loc_822B5D24;
loc_822B5BF0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a8108
	ctx.lr = 0x822B5BF8;
	sub_822A8108(ctx, base);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,656(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 656);
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// lwz r10,660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f0,f9
	ctx.f0.f64 = double(float(sqrt(ctx.f9.f64)));
	// beq cr6,0x822b5c40
	if (ctx.cr6.eq) goto loc_822B5C40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b5c40
	if (ctx.cr6.eq) goto loc_822B5C40;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x822b5c78
	goto loc_822B5C78;
loc_822B5C40:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822b5c50
	if (!ctx.cr6.eq) goto loc_822B5C50;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x822b5c78
	goto loc_822B5C78;
loc_822B5C50:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822b5c60
	if (!ctx.cr6.eq) goto loc_822B5C60;
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x822b5c78
	goto loc_822B5C78;
loc_822B5C60:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822b5c78
	if (!ctx.cr6.eq) goto loc_822B5C78;
	// lfs f13,896(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 896);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f0,f11,f27,f12
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f27.f64 : ctx.f12.f64;
loc_822B5C78:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822b5ca4
	if (!ctx.cr6.gt) goto loc_822B5CA4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_822B5C88:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b5ca4
	if (ctx.cr6.lt) goto loc_822B5CA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822b5c88
	if (ctx.cr6.lt) goto loc_822B5C88;
loc_822B5CA4:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822b5cf4
	if (!ctx.cr6.gt) goto loc_822B5CF4;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_822B5CCC:
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// bne 0x822b5ccc
	if (!ctx.cr0.eq) goto loc_822B5CCC;
	// lwz r28,1296(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
loc_822B5CF4:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r5.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r30,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r30.u32);
	// lwz r28,1296(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
loc_822B5D24:
	// lwz r11,400(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 400);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b5bc0
	if (ctx.cr6.lt) goto loc_822B5BC0;
loc_822B5D38:
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3652);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11364);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822b5d58
	if (!ctx.cr6.lt) goto loc_822B5D58;
	// lfs f31,884(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 884);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822b5d5c
	goto loc_822B5D5C;
loc_822B5D58:
	// lfs f31,888(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 888);
	ctx.f31.f64 = double(temp.f32);
loc_822B5D5C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822b5e74
	if (!ctx.cr6.gt) goto loc_822B5E74;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// addi r25,r11,30576
	ctx.r25.s64 = ctx.r11.s64 + 30576;
	// addi r26,r10,30540
	ctx.r26.s64 = ctx.r10.s64 + 30540;
loc_822B5D7C:
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// blt cr6,0x822b5e1c
	if (ctx.cr6.lt) goto loc_822B5E1C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822b5da4
	if (!ctx.cr6.lt) goto loc_822B5DA4;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x822b5e1c
	if (ctx.cr6.lt) goto loc_822B5E1C;
loc_822B5DA4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822b5e64
	if (!ctx.cr6.eq) goto loc_822B5E64;
	// lbz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5dd0
	if (ctx.cr6.eq) goto loc_822B5DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B5DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822b5e64
	goto loc_822B5E64;
loc_822B5DD0:
	// lfs f13,892(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 892);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822b5de4
	if (ctx.cr6.gt) goto loc_822B5DE4;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x822b5e64
	if (ctx.cr6.lt) goto loc_822B5E64;
loc_822B5DE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8d98
	ctx.lr = 0x822B5DEC;
	sub_822A8D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82130000
	ctx.lr = 0x822B5DFC;
	sub_82130000(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e10
	ctx.lr = 0x822B5E08;
	sub_822A8E10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e18
	ctx.lr = 0x822B5E14;
	sub_822A8E18(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x822b5e64
	goto loc_822B5E64;
loc_822B5E1C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b5e64
	if (!ctx.cr6.eq) goto loc_822B5E64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822b5e64
	if (!ctx.cr6.eq) goto loc_822B5E64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8d98
	ctx.lr = 0x822B5E34;
	sub_822A8D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82130000
	ctx.lr = 0x822B5E48;
	sub_82130000(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e18
	ctx.lr = 0x822B5E54;
	sub_822A8E18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e10
	ctx.lr = 0x822B5E60;
	sub_822A8E10(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_822B5E64:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822b5d7c
	if (ctx.cr6.lt) goto loc_822B5D7C;
loc_822B5E74:
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823dba20
	ctx.lr = 0x822B5E80;
	__restfpr_27(ctx, base);
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B5E84"))) PPC_WEAK_FUNC(sub_822B5E84);
PPC_FUNC_IMPL(__imp__sub_822B5E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5E88"))) PPC_WEAK_FUNC(sub_822B5E88);
PPC_FUNC_IMPL(__imp__sub_822B5E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,17892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17892);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r10,900(r11)
	PPC_STORE_U8(ctx.r11.u32 + 900, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5EB4"))) PPC_WEAK_FUNC(sub_822B5EB4);
PPC_FUNC_IMPL(__imp__sub_822B5EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5EB8"))) PPC_WEAK_FUNC(sub_822B5EB8);
PPC_FUNC_IMPL(__imp__sub_822B5EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,17892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5edc
	if (ctx.cr6.eq) goto loc_822B5EDC;
	// lbz r11,900(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 900);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822B5EDC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5EF0"))) PPC_WEAK_FUNC(sub_822B5EF0);
PPC_FUNC_IMPL(__imp__sub_822B5EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5F00"))) PPC_WEAK_FUNC(sub_822B5F00);
PPC_FUNC_IMPL(__imp__sub_822B5F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x822B5F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,400(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b5fd4
	if (!ctx.cr6.gt) goto loc_822B5FD4;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r10,-12656
	ctx.r29.s64 = ctx.r10.s64 + -12656;
	// addi r28,r11,-12632
	ctx.r28.s64 = ctx.r11.s64 + -12632;
loc_822B5F34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b5fc0
	if (ctx.cr6.eq) goto loc_822B5FC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B5F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b5f8c
	if (ctx.cr6.eq) goto loc_822B5F8C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x822B5F74;
	sub_823DEDD8(ctx, base);
	// lwz r11,1220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b5f8c
	if (ctx.cr6.eq) goto loc_822B5F8C;
	// lbz r11,278(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 278);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b5fc0
	if (!ctx.cr6.eq) goto loc_822B5FC0;
loc_822B5F8C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822b5fc0
	if (ctx.cr6.lt) goto loc_822B5FC0;
	// beq cr6,0x822b5fb4
	if (ctx.cr6.eq) goto loc_822B5FB4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822b5fe0
	if (!ctx.cr6.lt) goto loc_822B5FE0;
	// lwz r11,656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x822b5fbc
	goto loc_822B5FBC;
loc_822B5FB4:
	// lwz r11,656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
loc_822B5FBC:
	// bne cr6,0x822b5fe0
	if (!ctx.cr6.eq) goto loc_822B5FE0;
loc_822B5FC0:
	// lwz r11,400(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 400);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b5f34
	if (ctx.cr6.lt) goto loc_822B5F34;
loc_822B5FD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_822B5FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B5FEC"))) PPC_WEAK_FUNC(sub_822B5FEC);
PPC_FUNC_IMPL(__imp__sub_822B5FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5FF0"))) PPC_WEAK_FUNC(sub_822B5FF0);
PPC_FUNC_IMPL(__imp__sub_822B5FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x822B5FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,400(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822b6080
	if (!ctx.cr6.gt) goto loc_822B6080;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_822B6018:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b609c
	if (ctx.cr6.eq) goto loc_822B609C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B6038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b6070
	if (ctx.cr6.eq) goto loc_822B6070;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B6058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b6070
	if (!ctx.cr6.eq) goto loc_822B6070;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822B6070:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822b6018
	if (ctx.cr6.lt) goto loc_822B6018;
loc_822B6080:
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,400(r28)
	PPC_STORE_U32(ctx.r28.u32 + 400, ctx.r11.u32);
	// stwx r30,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_822B609C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B60AC"))) PPC_WEAK_FUNC(sub_822B60AC);
PPC_FUNC_IMPL(__imp__sub_822B60AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B60B0"))) PPC_WEAK_FUNC(sub_822B60B0);
PPC_FUNC_IMPL(__imp__sub_822B60B0) {
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
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b6118
	if (!ctx.cr6.gt) goto loc_822B6118;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822B60D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b610c
	if (ctx.cr6.eq) goto loc_822B610C;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b610c
	if (ctx.cr6.eq) goto loc_822B610C;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b610c
	if (ctx.cr6.eq) goto loc_822B610C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B610C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B610C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822b60d8
	if (!ctx.cr0.eq) goto loc_822B60D8;
loc_822B6118:
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

__attribute__((alias("__imp__sub_822B6130"))) PPC_WEAK_FUNC(sub_822B6130);
PPC_FUNC_IMPL(__imp__sub_822B6130) {
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
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b6198
	if (!ctx.cr6.gt) goto loc_822B6198;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822B6158:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b618c
	if (ctx.cr6.eq) goto loc_822B618C;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b618c
	if (ctx.cr6.eq) goto loc_822B618C;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b618c
	if (ctx.cr6.eq) goto loc_822B618C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B618C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B618C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822b6158
	if (!ctx.cr0.eq) goto loc_822B6158;
loc_822B6198:
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

__attribute__((alias("__imp__sub_822B61B0"))) PPC_WEAK_FUNC(sub_822B61B0);
PPC_FUNC_IMPL(__imp__sub_822B61B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B61B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-10012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10012);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b61ec
	if (ctx.cr6.eq) goto loc_822B61EC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b61ec
	if (ctx.cr6.eq) goto loc_822B61EC;
	// bl 0x826d5a40
	ctx.lr = 0x822B61E0;
	sub_826D5A40(ctx, base);
	// lwz r3,-10012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10012);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x826d5a40
	ctx.lr = 0x822B61EC;
	sub_826D5A40(ctx, base);
loc_822B61EC:
	// lwz r9,400(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822b621c
	if (!ctx.cr6.gt) goto loc_822B621C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_822B6200:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822b6220
	if (ctx.cr6.eq) goto loc_822B6220;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822b6200
	if (ctx.cr6.lt) goto loc_822B6200;
loc_822B621C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822B6220:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B6234"))) PPC_WEAK_FUNC(sub_822B6234);
PPC_FUNC_IMPL(__imp__sub_822B6234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6238"))) PPC_WEAK_FUNC(sub_822B6238);
PPC_FUNC_IMPL(__imp__sub_822B6238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,72
	ctx.r10.s64 = 72;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b6250
	if (ctx.cr6.eq) goto loc_822B6250;
	// addi r3,r3,404
	ctx.r3.s64 = ctx.r3.s64 + 404;
loc_822B6250:
	// lwz r8,400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b628c
	if (!ctx.cr6.gt) goto loc_822B628C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822B6264:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b627c
	if (ctx.cr6.eq) goto loc_822B627C;
	// lwz r9,140(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822b6294
	if (ctx.cr6.eq) goto loc_822B6294;
loc_822B627C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822b6264
	if (ctx.cr6.lt) goto loc_822B6264;
loc_822B628C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822B6294:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B62A0"))) PPC_WEAK_FUNC(sub_822B62A0);
PPC_FUNC_IMPL(__imp__sub_822B62A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b62b4
	if (!ctx.cr6.eq) goto loc_822B62B4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822B62B4:
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,72
	ctx.r9.s64 = 72;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b62cc
	if (ctx.cr6.eq) goto loc_822B62CC;
	// addi r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 + 404;
loc_822B62CC:
	// lwz r9,400(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822b62f8
	if (!ctx.cr6.gt) goto loc_822B62F8;
loc_822B62DC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822b62fc
	if (ctx.cr6.eq) goto loc_822B62FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822b62dc
	if (ctx.cr6.lt) goto loc_822B62DC;
loc_822B62F8:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_822B62FC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B6304"))) PPC_WEAK_FUNC(sub_822B6304);
PPC_FUNC_IMPL(__imp__sub_822B6304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6308"))) PPC_WEAK_FUNC(sub_822B6308);
PPC_FUNC_IMPL(__imp__sub_822B6308) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822b6374
	if (ctx.cr6.lt) goto loc_822B6374;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,72
	ctx.r10.s64 = 72;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b632c
	if (ctx.cr6.eq) goto loc_822B632C;
	// lwz r11,804(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 804);
	// b 0x822b6330
	goto loc_822B6330;
loc_822B632C:
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
loc_822B6330:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822b6374
	if (!ctx.cr6.lt) goto loc_822B6374;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b635c
	if (ctx.cr6.eq) goto loc_822B635C;
	// addi r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 + 101;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
loc_822B635C:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
loc_822B6374:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B637C"))) PPC_WEAK_FUNC(sub_822B637C);
PPC_FUNC_IMPL(__imp__sub_822B637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6380"))) PPC_WEAK_FUNC(sub_822B6380);
PPC_FUNC_IMPL(__imp__sub_822B6380) {
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
	// lwz r30,400(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r30.u32);
	// ble cr6,0x822b63c8
	if (!ctx.cr6.gt) goto loc_822B63C8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822B63A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
	// beq cr6,0x822b63bc
	if (ctx.cr6.eq) goto loc_822B63BC;
	// bl 0x822a7c58
	ctx.lr = 0x822B63BC;
	sub_822A7C58(ctx, base);
loc_822B63BC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822b63a8
	if (!ctx.cr0.eq) goto loc_822B63A8;
loc_822B63C8:
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

__attribute__((alias("__imp__sub_822B63E0"))) PPC_WEAK_FUNC(sub_822B63E0);
PPC_FUNC_IMPL(__imp__sub_822B63E0) {
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
	// li r3,904
	ctx.r3.s64 = 904;
	// bl 0x82130528
	ctx.lr = 0x822B63F4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6454
	if (ctx.cr6.eq) goto loc_822B6454;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32121
	ctx.r6.s64 = -2105081856;
	// lfs f0,31020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// lfs f13,-12988(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12988);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r11.u32);
	// lfs f12,-1760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1760);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,31016(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31016);
	ctx.f11.f64 = double(temp.f32);
	// stb r11,900(r3)
	PPC_STORE_U8(ctx.r3.u32 + 900, ctx.r11.u8);
	// stfs f0,884(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 884, temp.u32);
	// stfs f13,888(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 888, temp.u32);
	// stfs f12,892(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 892, temp.u32);
	// stfs f11,896(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 896, temp.u32);
	// stw r3,17892(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B6454:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,17892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B6470"))) PPC_WEAK_FUNC(sub_822B6470);
PPC_FUNC_IMPL(__imp__sub_822B6470) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x822b62a0
	ctx.lr = 0x822B6484;
	sub_822B62A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822b64d8
	if (ctx.cr6.lt) goto loc_822B64D8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x822b64d8
	if (ctx.cr6.lt) goto loc_822B64D8;
	// lwz r11,400(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 400);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x822b64c4
	if (ctx.cr6.gt) goto loc_822B64C4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822B64A4:
	// lwz r11,400(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 400);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,400(r7)
	PPC_STORE_U32(ctx.r7.u32 + 400, ctx.r11.u32);
	// stwx r9,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r10,400(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 400);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x822b64a4
	if (!ctx.cr6.gt) goto loc_822B64A4;
loc_822B64C4:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stwx r9,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r4,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
loc_822B64D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B64E8"))) PPC_WEAK_FUNC(sub_822B64E8);
PPC_FUNC_IMPL(__imp__sub_822B64E8) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lwz r3,17892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b650c
	if (ctx.cr6.eq) goto loc_822B650C;
	// bl 0x82130588
	ctx.lr = 0x822B650C;
	sub_82130588(ctx, base);
loc_822B650C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,17892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17892, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822B6528"))) PPC_WEAK_FUNC(sub_822B6528);
PPC_FUNC_IMPL(__imp__sub_822B6528) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,17892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6554
	if (ctx.cr6.eq) goto loc_822B6554;
	// bl 0x822b5f00
	ctx.lr = 0x822B6550;
	sub_822B5F00(ctx, base);
	// b 0x822b6558
	goto loc_822B6558;
loc_822B6554:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822B6558:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822B6578"))) PPC_WEAK_FUNC(sub_822B6578);
PPC_FUNC_IMPL(__imp__sub_822B6578) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,25896
	ctx.r4.s64 = ctx.r11.s64 + 25896;
	// addi r3,r10,30716
	ctx.r3.s64 = ctx.r10.s64 + 30716;
	// bl 0x82554798
	ctx.lr = 0x822B6598;
	sub_82554798(ctx, base);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r4,r9,24200
	ctx.r4.s64 = ctx.r9.s64 + 24200;
	// addi r3,r8,30676
	ctx.r3.s64 = ctx.r8.s64 + 30676;
	// bl 0x82554798
	ctx.lr = 0x822B65AC;
	sub_82554798(ctx, base);
	// lis r7,-32213
	ctx.r7.s64 = -2111111168;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r4,r7,24248
	ctx.r4.s64 = ctx.r7.s64 + 24248;
	// addi r3,r6,30640
	ctx.r3.s64 = ctx.r6.s64 + 30640;
	// bl 0x82554798
	ctx.lr = 0x822B65C0;
	sub_82554798(ctx, base);
	// lis r5,-32213
	ctx.r5.s64 = -2111111168;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r4,r5,24304
	ctx.r4.s64 = ctx.r5.s64 + 24304;
	// addi r3,r3,30596
	ctx.r3.s64 = ctx.r3.s64 + 30596;
	// bl 0x82554798
	ctx.lr = 0x822B65D4;
	sub_82554798(ctx, base);
	// bl 0x822af198
	ctx.lr = 0x822B65D8;
	sub_822AF198(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B65E8"))) PPC_WEAK_FUNC(sub_822B65E8);
PPC_FUNC_IMPL(__imp__sub_822B65E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x822B65F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82350510
	ctx.lr = 0x822B6610;
	sub_82350510(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stb r28,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r28.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r9,r11,22804
	ctx.r9.s64 = ctx.r11.s64 + 22804;
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// stb r10,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r27,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B6640"))) PPC_WEAK_FUNC(sub_822B6640);
PPC_FUNC_IMPL(__imp__sub_822B6640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B6648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// bl 0x82130000
	ctx.lr = 0x822B6668;
	sub_82130000(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B667C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822B6690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x822B6698;
	sub_82130000(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822B66AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B66C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B66D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822B66E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822B66FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B6710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B6724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822B6738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822B674C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B6760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B6774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822B6788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82562c80
	ctx.lr = 0x822B678C;
	sub_82562C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b67bc
	if (ctx.cr6.eq) goto loc_822B67BC;
	// bl 0x82562c80
	ctx.lr = 0x822B6798;
	sub_82562C80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823eaef8
	ctx.lr = 0x822B67A8;
	sub_823EAEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B67BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B67BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B67C4;
	sub_823EAEF8(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x822b67d8
	if (!ctx.cr6.eq) goto loc_822B67D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B67D8:
	// bl 0x82352ef0
	ctx.lr = 0x822B67DC;
	sub_82352EF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B67E4;
	sub_823EAEF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B67F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B67FC;
	sub_823EAEF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B6804"))) PPC_WEAK_FUNC(sub_822B6804);
PPC_FUNC_IMPL(__imp__sub_822B6804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6808"))) PPC_WEAK_FUNC(sub_822B6808);
PPC_FUNC_IMPL(__imp__sub_822B6808) {
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
	// bl 0x823eaef8
	ctx.lr = 0x822B6824;
	sub_823EAEF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8032
	ctx.r3.s64 = 8032;
	// bl 0x82130528
	ctx.lr = 0x822B6830;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b689c
	if (ctx.cr6.eq) goto loc_822B689C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8235af90
	ctx.lr = 0x822B6848;
	sub_8235AF90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x822b685c
	if (!ctx.cr6.eq) goto loc_822B685C;
loc_822B6858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B685C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,593(r31)
	PPC_STORE_U8(ctx.r31.u32 + 593, ctx.r10.u8);
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82357b80
	ctx.lr = 0x822B6874;
	sub_82357B80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x822B687C;
	sub_82130000(ctx, base);
	// li r3,2176
	ctx.r3.s64 = 2176;
	// bl 0x82130528
	ctx.lr = 0x822B6884;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b68a4
	if (ctx.cr6.eq) goto loc_822B68A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233d908
	ctx.lr = 0x822B6894;
	sub_8233D908(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// b 0x822b68ac
	goto loc_822B68AC;
loc_822B689C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822b6858
	goto loc_822B6858;
loc_822B68A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
loc_822B68AC:
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

__attribute__((alias("__imp__sub_822B68C4"))) PPC_WEAK_FUNC(sub_822B68C4);
PPC_FUNC_IMPL(__imp__sub_822B68C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B68C8"))) PPC_WEAK_FUNC(sub_822B68C8);
PPC_FUNC_IMPL(__imp__sub_822B68C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B68D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82388580
	ctx.lr = 0x822B68E0;
	sub_82388580(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822b69a0
	if (ctx.cr6.lt) goto loc_822B69A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B68F4;
	sub_823EAEF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// bl 0x82130528
	ctx.lr = 0x822B6900;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6914
	if (ctx.cr6.eq) goto loc_822B6914;
	// bl 0x82364580
	ctx.lr = 0x822B690C;
	sub_82364580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822b6918
	goto loc_822B6918;
loc_822B6914:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B6918:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82388580
	ctx.lr = 0x822B6920;
	sub_82388580(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822b69a0
	if (ctx.cr6.lt) goto loc_822B69A0;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r9,21384
	ctx.r11.s64 = ctx.r9.s64 + 21384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825ae378
	ctx.lr = 0x822B6944;
	sub_825AE378(ctx, base);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82388580
	ctx.lr = 0x822B694C;
	sub_82388580(ctx, base);
	// bl 0x823985f0
	ctx.lr = 0x822B6950;
	sub_823985F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blt cr6,0x822b6984
	if (ctx.cr6.lt) goto loc_822B6984;
	// bne cr6,0x822b6984
	if (!ctx.cr6.eq) goto loc_822B6984;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B6974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x822B6980;
	sub_82130000(ctx, base);
	// b 0x822b6990
	goto loc_822B6990;
loc_822B6984:
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B6990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B6990:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e32d0
	ctx.lr = 0x822B699C;
	sub_826E32D0(ctx, base);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
loc_822B69A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B69A8"))) PPC_WEAK_FUNC(sub_822B69A8);
PPC_FUNC_IMPL(__imp__sub_822B69A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b69e8
	if (!ctx.cr6.eq) goto loc_822B69E8;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r10,r11,17896
	ctx.r10.s64 = ctx.r11.s64 + 17896;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b69e8
	if (!ctx.cr6.eq) goto loc_822B69E8;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-10432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10432);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822B69E8:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82365298
	sub_82365298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B69F0"))) PPC_WEAK_FUNC(sub_822B69F0);
PPC_FUNC_IMPL(__imp__sub_822B69F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B69F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B6A04;
	sub_823EAEF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82130528
	ctx.lr = 0x822B6A10;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6a24
	if (ctx.cr6.eq) goto loc_822B6A24;
	// bl 0x82562638
	ctx.lr = 0x822B6A1C;
	sub_82562638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822b6a28
	goto loc_822B6A28;
loc_822B6A24:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B6A28:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x826e32d0
	ctx.lr = 0x822B6A3C;
	sub_826E32D0(ctx, base);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B6A48"))) PPC_WEAK_FUNC(sub_822B6A48);
PPC_FUNC_IMPL(__imp__sub_822B6A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B6A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B6A5C;
	sub_823EAEF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82130528
	ctx.lr = 0x822B6A68;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6a7c
	if (ctx.cr6.eq) goto loc_822B6A7C;
	// bl 0x8232afd8
	ctx.lr = 0x822B6A74;
	sub_8232AFD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822b6a80
	goto loc_822B6A80;
loc_822B6A7C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B6A80:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232bb38
	ctx.lr = 0x822B6A90;
	sub_8232BB38(ctx, base);
	// stw r31,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B6A9C"))) PPC_WEAK_FUNC(sub_822B6A9C);
PPC_FUNC_IMPL(__imp__sub_822B6A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6AA0"))) PPC_WEAK_FUNC(sub_822B6AA0);
PPC_FUNC_IMPL(__imp__sub_822B6AA0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,31072
	ctx.r10.s64 = ctx.r11.s64 + 31072;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821d2028
	ctx.lr = 0x822B6ACC;
	sub_821D2028(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b6ae4
	if (ctx.cr6.eq) goto loc_822B6AE4;
	// bl 0x82130588
	ctx.lr = 0x822B6AE0;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B6AE4:
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

__attribute__((alias("__imp__sub_822B6AFC"))) PPC_WEAK_FUNC(sub_822B6AFC);
PPC_FUNC_IMPL(__imp__sub_822B6AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6B00"))) PPC_WEAK_FUNC(sub_822B6B00);
PPC_FUNC_IMPL(__imp__sub_822B6B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x822B6B08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B6B14;
	sub_823EAEF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,832
	ctx.r3.s64 = 832;
	// bl 0x82130528
	ctx.lr = 0x822B6B20;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6b34
	if (ctx.cr6.eq) goto loc_822B6B34;
	// bl 0x8232c238
	ctx.lr = 0x822B6B2C;
	sub_8232C238(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822b6b38
	goto loc_822B6B38;
loc_822B6B34:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B6B38:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x822b6b4c
	if (!ctx.cr6.eq) goto loc_822B6B4C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_822B6B4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x8221cfe8
	ctx.lr = 0x822B6B58;
	sub_8221CFE8(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x82360f90
	ctx.lr = 0x822B6B70;
	sub_82360F90(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x8232ceb0
	ctx.lr = 0x822B6B8C;
	sub_8232CEB0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8232cf88
	ctx.lr = 0x822B6B9C;
	sub_8232CF88(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8232cff0
	ctx.lr = 0x822B6BAC;
	sub_8232CFF0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8255a4e8
	ctx.lr = 0x822B6BBC;
	sub_8255A4E8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8255a490
	ctx.lr = 0x822B6BCC;
	sub_8255A490(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,76(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822b6be4
	if (!ctx.cr6.eq) goto loc_822B6BE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822b6bf8
	goto loc_822B6BF8;
loc_822B6BE4:
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// mulli r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 * 104;
	// lwz r11,-12120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12120);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823964a8
	ctx.lr = 0x822B6BF8;
	sub_823964A8(ctx, base);
loc_822B6BF8:
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,72
	ctx.r9.s64 = 72;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lbzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r10,r6
	ctx.r10.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,264
	ctx.r8.s64 = ctx.r11.s64 + 264;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8232d068
	ctx.lr = 0x822B6C40;
	sub_8232D068(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8255a710
	ctx.lr = 0x822B6C50;
	sub_8255A710(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8232d408
	ctx.lr = 0x822B6C60;
	sub_8232D408(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8232d460
	ctx.lr = 0x822B6C70;
	sub_8232D460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d8c8
	ctx.lr = 0x822B6C78;
	sub_8232D8C8(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82130528
	ctx.lr = 0x822B6C80;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6c94
	if (ctx.cr6.eq) goto loc_822B6C94;
	// bl 0x82345540
	ctx.lr = 0x822B6C8C;
	sub_82345540(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x822b6c98
	goto loc_822B6C98;
loc_822B6C94:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822B6C98:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r6,196(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// bl 0x823455a8
	ctx.lr = 0x822B6CB0;
	sub_823455A8(ctx, base);
	// stw r28,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r28.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r10,165(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 165);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b6cfc
	if (ctx.cr6.eq) goto loc_822B6CFC;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82130528
	ctx.lr = 0x822B6CCC;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6ce0
	if (ctx.cr6.eq) goto loc_822B6CE0;
	// bl 0x82345cc8
	ctx.lr = 0x822B6CD8;
	sub_82345CC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x822b6ce4
	goto loc_822B6CE4;
loc_822B6CE0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822B6CE4:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r6,200(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// bl 0x82345da0
	ctx.lr = 0x822B6CFC;
	sub_82345DA0(ctx, base);
loc_822B6CFC:
	// stw r28,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r28.u32);
	// li r3,832
	ctx.r3.s64 = 832;
	// bl 0x82130528
	ctx.lr = 0x822B6D08;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6d1c
	if (ctx.cr6.eq) goto loc_822B6D1C;
	// bl 0x823380b0
	ctx.lr = 0x822B6D14;
	sub_823380B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x822b6d20
	goto loc_822B6D20;
loc_822B6D1C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822B6D20:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82338fa8
	ctx.lr = 0x822B6D30;
	sub_82338FA8(ctx, base);
	// stw r28,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B6D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B6D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32122
	ctx.r7.s64 = -2105147392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,2256
	ctx.r4.s64 = ctx.r7.s64 + 2256;
	// bl 0x82558290
	ctx.lr = 0x822B6D6C;
	sub_82558290(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r6,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r6.u8);
	// lwz r5,172(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822b6d88
	if (ctx.cr6.eq) goto loc_822B6D88;
	// li r11,-16385
	ctx.r11.s64 = -16385;
loc_822B6D88:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b6dc4
	if (ctx.cr6.eq) goto loc_822B6DC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258e660
	ctx.lr = 0x822B6DAC;
	sub_8258E660(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258e620
	ctx.lr = 0x822B6DBC;
	sub_8258E620(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_822B6DC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B6DCC"))) PPC_WEAK_FUNC(sub_822B6DCC);
PPC_FUNC_IMPL(__imp__sub_822B6DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6DD0"))) PPC_WEAK_FUNC(sub_822B6DD0);
PPC_FUNC_IMPL(__imp__sub_822B6DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B6DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B6DE4;
	sub_823EAEF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82130528
	ctx.lr = 0x822B6DF0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6e04
	if (ctx.cr6.eq) goto loc_822B6E04;
	// bl 0x823430e0
	ctx.lr = 0x822B6DFC;
	sub_823430E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822b6e08
	goto loc_822B6E08;
loc_822B6E04:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B6E08:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8221ed98
	ctx.lr = 0x822B6E1C;
	sub_8221ED98(ctx, base);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B6E28"))) PPC_WEAK_FUNC(sub_822B6E28);
PPC_FUNC_IMPL(__imp__sub_822B6E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B6E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823eaef8
	ctx.lr = 0x822B6E3C;
	sub_823EAEF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82130528
	ctx.lr = 0x822B6E48;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6e5c
	if (ctx.cr6.eq) goto loc_822B6E5C;
	// bl 0x823505e0
	ctx.lr = 0x822B6E54;
	sub_823505E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822b6e60
	goto loc_822B6E60;
loc_822B6E5C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B6E60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,80(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B6E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B6E8C"))) PPC_WEAK_FUNC(sub_822B6E8C);
PPC_FUNC_IMPL(__imp__sub_822B6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6E90"))) PPC_WEAK_FUNC(sub_822B6E90);
PPC_FUNC_IMPL(__imp__sub_822B6E90) {
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
	// bl 0x823eaef8
	ctx.lr = 0x822B6EAC;
	sub_823EAEF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822b6ec8
	if (!ctx.cr6.eq) goto loc_822B6EC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822b6edc
	goto loc_822B6EDC;
loc_822B6EC8:
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// mulli r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 * 104;
	// lwz r11,-12120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12120);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823964a8
	ctx.lr = 0x822B6EDC;
	sub_823964A8(ctx, base);
loc_822B6EDC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b6f28
	if (ctx.cr6.eq) goto loc_822B6F28;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82130528
	ctx.lr = 0x822B6EF0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6f10
	if (ctx.cr6.eq) goto loc_822B6F10;
	// bl 0x82368728
	ctx.lr = 0x822B6EFC;
	sub_82368728(ctx, base);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82562cc8
	ctx.lr = 0x822B6F0C;
	sub_82562CC8(ctx, base);
	// b 0x822b6f58
	goto loc_822B6F58;
loc_822B6F10:
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562cc8
	ctx.lr = 0x822B6F24;
	sub_82562CC8(ctx, base);
	// b 0x822b6f58
	goto loc_822B6F58;
loc_822B6F28:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82130528
	ctx.lr = 0x822B6F30;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6f44
	if (ctx.cr6.eq) goto loc_822B6F44;
	// bl 0x82366238
	ctx.lr = 0x822B6F3C;
	sub_82366238(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822b6f48
	goto loc_822B6F48;
loc_822B6F44:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B6F48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x823662b8
	ctx.lr = 0x822B6F58;
	sub_823662B8(ctx, base);
loc_822B6F58:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r9,r11,24
	ctx.r9.u64 = ctx.r11.u64 | 1572864;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_822B6F88"))) PPC_WEAK_FUNC(sub_822B6F88);
PPC_FUNC_IMPL(__imp__sub_822B6F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x822B6F90;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x82130528
	ctx.lr = 0x822B6FA4;
	sub_82130528(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6fbc
	if (ctx.cr6.eq) goto loc_822B6FBC;
	// bl 0x82330e20
	ctx.lr = 0x822B6FB4;
	sub_82330E20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822b6fc0
	goto loc_822B6FC0;
loc_822B6FBC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822B6FC0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// bl 0x82130528
	ctx.lr = 0x822B6FE0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6ff4
	if (ctx.cr6.eq) goto loc_822B6FF4;
	// bl 0x823318e8
	ctx.lr = 0x822B6FEC;
	sub_823318E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x822b6ff8
	goto loc_822B6FF8;
loc_822B6FF4:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_822B6FF8:
	// stw r31,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r31.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x82130528
	ctx.lr = 0x822B7008;
	sub_82130528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b7040
	if (ctx.cr6.eq) goto loc_822B7040;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r10,r11,31072
	ctx.r10.s64 = ctx.r11.s64 + 31072;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x821b5a60
	ctx.lr = 0x822B7028;
	sub_821B5A60(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r8,r9,31116
	ctx.r8.s64 = ctx.r9.s64 + 31116;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// b 0x822b7044
	goto loc_822B7044;
loc_822B7040:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822B7044:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lfs f31,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r6,88(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r5,84(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// bl 0x822b7240
	ctx.lr = 0x822B7070;
	sub_822B7240(ctx, base);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r6,108(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// lwz r5,104(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x8236c008
	ctx.lr = 0x822B7088;
	sub_8236C008(ctx, base);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r6,116(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// lwz r5,112(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// bl 0x8236b400
	ctx.lr = 0x822B70A0;
	sub_8236B400(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B70B0"))) PPC_WEAK_FUNC(sub_822B70B0);
PPC_FUNC_IMPL(__imp__sub_822B70B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823db9d8
	ctx.lr = 0x822B70C4;
	sub_823DB9D8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8255fe10
	ctx.lr = 0x822B70D0;
	sub_8255FE10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f11,31304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31304);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,14884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14884);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f10,-29232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29232);
	ctx.f10.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f9,11368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11368);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,24920(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24920);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,7444(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,12428(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12428);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f6,3732(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3732);
	ctx.f6.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f5,14988(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14988);
	ctx.f5.f64 = double(temp.f32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lfs f4,17032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17032);
	ctx.f4.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfs f3,-32032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32032);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f2,25088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25088);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lfs f1,-31384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31384);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f28,31304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 31304);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,27640(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 27640);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,31908
	ctx.r10.s64 = ctx.r11.s64 + 31908;
	// lfs f12,31924(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31924);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,27636(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 27636);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,30120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 30120);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f10,112(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f9,116(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f7,80(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f6,88(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f5,96(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f4,100(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f3,104(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f2,108(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f1,44(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f29,60(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f28,68(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823dba24
	ctx.lr = 0x822B71DC;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B71EC"))) PPC_WEAK_FUNC(sub_822B71EC);
PPC_FUNC_IMPL(__imp__sub_822B71EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B71F0"))) PPC_WEAK_FUNC(sub_822B71F0);
PPC_FUNC_IMPL(__imp__sub_822B71F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,17916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17916);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B71FC"))) PPC_WEAK_FUNC(sub_822B71FC);
PPC_FUNC_IMPL(__imp__sub_822B71FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7200"))) PPC_WEAK_FUNC(sub_822B7200);
PPC_FUNC_IMPL(__imp__sub_822B7200) {
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
	// bl 0x8255fe90
	ctx.lr = 0x822B7218;
	sub_8255FE90(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,31908
	ctx.r10.s64 = ctx.r11.s64 + 31908;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822B723C"))) PPC_WEAK_FUNC(sub_822B723C);
PPC_FUNC_IMPL(__imp__sub_822B723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7240"))) PPC_WEAK_FUNC(sub_822B7240);
PPC_FUNC_IMPL(__imp__sub_822B7240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,24(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f1,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f10,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f1,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,112(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,112(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f1,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f3,112(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f2,116(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,116(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmadds f12,f13,f1,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,116(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f4,f5,f1,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f4,36(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f3,76(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,76(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f2,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmadds f13,f0,f1,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f12,80(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f9,f10,f1,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f9,80(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f8,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,72(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f5,f6,f1,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f8.f64));
	// stfs f5,72(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f4,84(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmadds f0,f2,f1,f4
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f13,88(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f1,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f10,88(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f9,92(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,92(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f6,f7,f1,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f9.f64));
	// stfs f6,92(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f5,96(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmadds f2,f3,f1,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f2,96(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,100(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f1,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,100(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f10,104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f1,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f7,104(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f6,108(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,108(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f1,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f3,108(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f2,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmadds f12,f13,f1,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f11,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f7,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f4,f5,f1,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f4,48(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f3,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f2,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmadds f13,f0,f1,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f9,f10,f1,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f8,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f5,f6,f1,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f8.f64));
	// stfs f5,60(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f4,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmadds f0,f2,f1,f4
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f1,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f10,68(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7424"))) PPC_WEAK_FUNC(sub_822B7424);
PPC_FUNC_IMPL(__imp__sub_822B7424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7428"))) PPC_WEAK_FUNC(sub_822B7428);
PPC_FUNC_IMPL(__imp__sub_822B7428) {
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82130528
	ctx.lr = 0x822B743C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b7458
	if (ctx.cr6.eq) goto loc_822B7458;
	// bl 0x822b70b0
	ctx.lr = 0x822B7448;
	sub_822B70B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B7458:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B746C"))) PPC_WEAK_FUNC(sub_822B746C);
PPC_FUNC_IMPL(__imp__sub_822B746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7470"))) PPC_WEAK_FUNC(sub_822B7470);
PPC_FUNC_IMPL(__imp__sub_822B7470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B7478;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r31,r11,17916
	ctx.r31.s64 = ctx.r11.s64 + 17916;
	// lwz r11,17916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b7704
	if (!ctx.cr6.eq) goto loc_822B7704;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82130528
	ctx.lr = 0x822B7498;
	sub_82130528(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b74ac
	if (ctx.cr6.eq) goto loc_822B74AC;
	// bl 0x821d5408
	ctx.lr = 0x822B74A8;
	sub_821D5408(ctx, base);
	// b 0x822b74b0
	goto loc_822B74B0;
loc_822B74AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822B74B0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r7,r10,31928
	ctx.r7.s64 = ctx.r10.s64 + 31928;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r9,r11,25672
	ctx.r9.s64 = ctx.r11.s64 + 25672;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32213
	ctx.r8.s64 = -2111111168;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r4,r8,29736
	ctx.r4.s64 = ctx.r8.s64 + 29736;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r5,r10,-12
	ctx.r5.s64 = ctx.r10.s64 + -12;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// std r7,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// addi r9,r3,-36
	ctx.r9.s64 = ctx.r3.s64 + -36;
	// addi r4,r8,36
	ctx.r4.s64 = ctx.r8.s64 + 36;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,80
	ctx.r10.s64 = 80;
	// std r6,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r6.u64);
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// li r11,76
	ctx.r11.s64 = 76;
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// addi r5,r8,60
	ctx.r5.s64 = ctx.r8.s64 + 60;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// li r11,84
	ctx.r11.s64 = 84;
	// lis r7,-32130
	ctx.r7.s64 = -2105671680;
	// li r9,72
	ctx.r9.s64 = 72;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// li r10,88
	ctx.r10.s64 = 88;
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// addi r4,r7,108
	ctx.r4.s64 = ctx.r7.s64 + 108;
	// addi r6,r3,84
	ctx.r6.s64 = ctx.r3.s64 + 84;
	// addi r5,r8,132
	ctx.r5.s64 = ctx.r8.s64 + 132;
	// li r11,96
	ctx.r11.s64 = 96;
	// lis r7,-32130
	ctx.r7.s64 = -2105671680;
	// li r9,92
	ctx.r9.s64 = 92;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// addi r4,r7,180
	ctx.r4.s64 = ctx.r7.s64 + 180;
	// addi r6,r3,156
	ctx.r6.s64 = ctx.r3.s64 + 156;
	// addi r5,r8,204
	ctx.r5.s64 = ctx.r8.s64 + 204;
	// li r11,108
	ctx.r11.s64 = 108;
	// lis r7,-32130
	ctx.r7.s64 = -2105671680;
	// li r9,104
	ctx.r9.s64 = 104;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// addi r4,r7,252
	ctx.r4.s64 = ctx.r7.s64 + 252;
	// addi r6,r3,228
	ctx.r6.s64 = ctx.r3.s64 + 228;
	// addi r5,r8,276
	ctx.r5.s64 = ctx.r8.s64 + 276;
	// li r11,112
	ctx.r11.s64 = 112;
	// lis r7,-32130
	ctx.r7.s64 = -2105671680;
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// li r10,116
	ctx.r10.s64 = 116;
	// addi r4,r7,300
	ctx.r4.s64 = ctx.r7.s64 + 300;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lis r30,-32114
	ctx.r30.s64 = -2104623104;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lwz r4,-23488(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23488);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r7,r11,348
	ctx.r7.s64 = ctx.r11.s64 + 348;
	// addi r6,r10,372
	ctx.r6.s64 = ctx.r10.s64 + 372;
	// addi r8,r3,324
	ctx.r8.s64 = ctx.r3.s64 + 324;
	// li r11,36
	ctx.r11.s64 = 36;
	// li r10,40
	ctx.r10.s64 = 40;
	// li r9,44
	ctx.r9.s64 = 44;
	// lis r5,-32130
	ctx.r5.s64 = -2105671680;
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lis r29,-32130
	ctx.r29.s64 = -2105671680;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r8,r5,396
	ctx.r8.s64 = ctx.r5.s64 + 396;
	// addi r7,r3,420
	ctx.r7.s64 = ctx.r3.s64 + 420;
	// addi r6,r29,444
	ctx.r6.s64 = ctx.r29.s64 + 444;
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,52
	ctx.r10.s64 = 52;
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lis r5,-32130
	ctx.r5.s64 = -2105671680;
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lis r29,-32130
	ctx.r29.s64 = -2105671680;
	// addi r8,r5,468
	ctx.r8.s64 = ctx.r5.s64 + 468;
	// addi r7,r3,492
	ctx.r7.s64 = ctx.r3.s64 + 492;
	// addi r6,r29,516
	ctx.r6.s64 = ctx.r29.s64 + 516;
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,68
	ctx.r9.s64 = 68;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// bne cr6,0x822b769c
	if (!ctx.cr6.eq) goto loc_822B769C;
	// bl 0x82564488
	ctx.lr = 0x822B7698;
	sub_82564488(ctx, base);
	// lwz r4,-23488(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23488);
loc_822B769C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821d4458
	ctx.lr = 0x822B76A8;
	sub_821D4458(ctx, base);
	// lwz r11,-23488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23488);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r4,r11,16,22,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
	// bl 0x821d4100
	ctx.lr = 0x822B76C0;
	sub_821D4100(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x821d41d0
	ctx.lr = 0x822B76DC;
	sub_821D41D0(ctx, base);
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r8,544
	ctx.r4.s64 = ctx.r8.s64 + 544;
	// bl 0x821d4b00
	ctx.lr = 0x822B76EC;
	sub_821D4B00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32125
	ctx.r7.s64 = -2105344000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,2828(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2828);
	// bl 0x821c0548
	ctx.lr = 0x822B7704;
	sub_821C0548(ctx, base);
loc_822B7704:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B770C"))) PPC_WEAK_FUNC(sub_822B770C);
PPC_FUNC_IMPL(__imp__sub_822B770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7710"))) PPC_WEAK_FUNC(sub_822B7710);
PPC_FUNC_IMPL(__imp__sub_822B7710) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B771C"))) PPC_WEAK_FUNC(sub_822B771C);
PPC_FUNC_IMPL(__imp__sub_822B771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7720"))) PPC_WEAK_FUNC(sub_822B7720);
PPC_FUNC_IMPL(__imp__sub_822B7720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x822B7728;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82256058
	ctx.lr = 0x822B7734;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b782c
	if (ctx.cr6.eq) goto loc_822B782C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f12,32272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32272);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfs f0,-4960(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4960);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// lfs f13,32268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32268);
	ctx.f13.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f11,32264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32264);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-30576(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30576);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,32252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32252);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,32260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32260);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32256(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32256);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r3,3088(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3088);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822b782c
	if (!ctx.cr6.gt) goto loc_822B782C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// lfs f31,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
loc_822B77F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822ae768
	ctx.lr = 0x822B7804;
	sub_822AE768(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a8838
	ctx.lr = 0x822B780C;
	sub_822A8838(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822ab258
	ctx.lr = 0x822B7814;
	sub_822AB258(ctx, base);
	// lwz r11,3080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3080);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b77f4
	if (ctx.cr6.lt) goto loc_822B77F4;
loc_822B782C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B7838"))) PPC_WEAK_FUNC(sub_822B7838);
PPC_FUNC_IMPL(__imp__sub_822B7838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,27644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,188(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B7874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7884"))) PPC_WEAK_FUNC(sub_822B7884);
PPC_FUNC_IMPL(__imp__sub_822B7884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7888"))) PPC_WEAK_FUNC(sub_822B7888);
PPC_FUNC_IMPL(__imp__sub_822B7888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,27644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,184(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B78C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B78D4"))) PPC_WEAK_FUNC(sub_822B78D4);
PPC_FUNC_IMPL(__imp__sub_822B78D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B78D8"))) PPC_WEAK_FUNC(sub_822B78D8);
PPC_FUNC_IMPL(__imp__sub_822B78D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B78E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7934
	if (ctx.cr6.eq) goto loc_822B7934;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B78FC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b7920
	if (ctx.cr6.eq) goto loc_822B7920;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B7920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B7920:
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b78fc
	if (ctx.cr6.lt) goto loc_822B78FC;
loc_822B7934:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B793C"))) PPC_WEAK_FUNC(sub_822B793C);
PPC_FUNC_IMPL(__imp__sub_822B793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7940"))) PPC_WEAK_FUNC(sub_822B7940);
PPC_FUNC_IMPL(__imp__sub_822B7940) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b798c
	if (!ctx.cr6.gt) goto loc_822B798C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_822B7970:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822b79a8
	if (ctx.cr6.eq) goto loc_822B79A8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822b7970
	if (ctx.cr6.lt) goto loc_822B7970;
loc_822B798C:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
loc_822B79A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B79BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,17892(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17892);
	// bl 0x822b5ff0
	ctx.lr = 0x822B79CC;
	sub_822B5FF0(ctx, base);
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

__attribute__((alias("__imp__sub_822B79E0"))) PPC_WEAK_FUNC(sub_822B79E0);
PPC_FUNC_IMPL(__imp__sub_822B79E0) {
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
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-5148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5148);
	// lhz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822b7a3c
	if (!ctx.cr6.gt) goto loc_822B7A3C;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_822B7A14:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822b7a34
	if (ctx.cr6.eq) goto loc_822B7A34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822b7a14
	if (ctx.cr6.lt) goto loc_822B7A14;
	// b 0x822b7a3c
	goto loc_822B7A3C;
loc_822B7A34:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822b7a94
	if (!ctx.cr6.eq) goto loc_822B7A94;
loc_822B7A3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B7A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e38
	ctx.lr = 0x822B7A5C;
	sub_822A8E38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7f10
	ctx.lr = 0x822B7A68;
	sub_822A7F10(ctx, base);
	// lwz r11,-5148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5148);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r7.u16);
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// bl 0x82683820
	ctx.lr = 0x822B7A94;
	sub_82683820(ctx, base);
loc_822B7A94:
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

__attribute__((alias("__imp__sub_822B7AAC"))) PPC_WEAK_FUNC(sub_822B7AAC);
PPC_FUNC_IMPL(__imp__sub_822B7AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7AB0"))) PPC_WEAK_FUNC(sub_822B7AB0);
PPC_FUNC_IMPL(__imp__sub_822B7AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,72
	ctx.r10.s64 = 72;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r11,r11,-5148
	ctx.r11.s64 = ctx.r11.s64 + -5148;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x822b7adc
	if (ctx.cr6.eq) goto loc_822B7ADC;
	// lhz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 20);
	// b 0x822b7ae0
	goto loc_822B7AE0;
loc_822B7ADC:
	// lhz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
loc_822B7AE0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b7b28
	if (!ctx.cr6.gt) goto loc_822B7B28;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822B7AEC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b7afc
	if (ctx.cr6.eq) goto loc_822B7AFC;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x822b7b00
	goto loc_822B7B00;
loc_822B7AFC:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_822B7B00:
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7b18
	if (ctx.cr6.eq) goto loc_822B7B18;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822b7b30
	if (ctx.cr6.eq) goto loc_822B7B30;
loc_822B7B18:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822b7aec
	if (ctx.cr6.lt) goto loc_822B7AEC;
loc_822B7B28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822B7B30:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7B38"))) PPC_WEAK_FUNC(sub_822B7B38);
PPC_FUNC_IMPL(__imp__sub_822B7B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,72
	ctx.r10.s64 = 72;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r11,r11,-5148
	ctx.r11.s64 = ctx.r11.s64 + -5148;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x822b7b64
	if (ctx.cr6.eq) goto loc_822B7B64;
	// lhz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 20);
	// b 0x822b7b68
	goto loc_822B7B68;
loc_822B7B64:
	// lhz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
loc_822B7B68:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b7bbc
	if (!ctx.cr6.gt) goto loc_822B7BBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7B74:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b7b84
	if (ctx.cr6.eq) goto loc_822B7B84;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x822b7b88
	goto loc_822B7B88;
loc_822B7B84:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_822B7B88:
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b7bac
	if (ctx.cr6.eq) goto loc_822B7BAC;
	// lwz r5,660(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x822b7bac
	if (!ctx.cr6.eq) goto loc_822B7BAC;
	// lwz r10,656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822b7bc4
	if (!ctx.cr6.eq) goto loc_822B7BC4;
loc_822B7BAC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822b7b74
	if (ctx.cr6.lt) goto loc_822B7B74;
loc_822B7BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822B7BC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7BCC"))) PPC_WEAK_FUNC(sub_822B7BCC);
PPC_FUNC_IMPL(__imp__sub_822B7BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7BD0"))) PPC_WEAK_FUNC(sub_822B7BD0);
PPC_FUNC_IMPL(__imp__sub_822B7BD0) {
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
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7c3c
	if (ctx.cr6.eq) goto loc_822B7C3C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// twllei r11,0
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b7c3c
	if (ctx.cr6.eq) goto loc_822B7C3C;
loc_822B7C1C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822b7c54
	if (ctx.cr6.eq) goto loc_822B7C54;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b7c1c
	if (!ctx.cr6.eq) goto loc_822B7C1C;
loc_822B7C3C:
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
loc_822B7C54:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82130588
	ctx.lr = 0x822B7C64;
	sub_82130588(ctx, base);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r3,1
	ctx.r3.s64 = 1;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
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

__attribute__((alias("__imp__sub_822B7C8C"))) PPC_WEAK_FUNC(sub_822B7C8C);
PPC_FUNC_IMPL(__imp__sub_822B7C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7C90"))) PPC_WEAK_FUNC(sub_822B7C90);
PPC_FUNC_IMPL(__imp__sub_822B7C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x822B7C98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-12640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12640);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b7cc4
	if (ctx.cr6.eq) goto loc_822B7CC4;
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822b7cc8
	if (ctx.cr6.eq) goto loc_822B7CC8;
loc_822B7CC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7CC8:
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b7d64
	if (ctx.cr6.eq) goto loc_822B7D64;
	// clrlwi r27,r28,24
	ctx.r27.u64 = ctx.r28.u32 & 0xFF;
loc_822B7CE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// twllei r10,0
	// divw r7,r9,r10
	ctx.r7.s32 = ctx.r9.s32 / ctx.r10.s32;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// twlgei r3,-1
	// lwzx r3,r30,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwz r11,656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822b7d34
	if (ctx.cr6.eq) goto loc_822B7D34;
	// lbz r11,467(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 467);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7d34
	if (ctx.cr6.eq) goto loc_822B7D34;
	// bl 0x822b79e0
	ctx.lr = 0x822B7D34;
	sub_822B79E0(ctx, base);
loc_822B7D34:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822b7d54
	if (!ctx.cr6.eq) goto loc_822B7D54;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B7D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B7D54:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b7ce0
	if (ctx.cr6.lt) goto loc_822B7CE0;
loc_822B7D64:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b7db0
	if (!ctx.cr6.eq) goto loc_822B7DB0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7da8
	if (ctx.cr6.eq) goto loc_822B7DA8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// twllei r11,0
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r6,r8,r11
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// twlgei r5,-1
	// b 0x822b7dac
	goto loc_822B7DAC;
loc_822B7DA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7DAC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822B7DB0:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,17892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17892);
	// bl 0x822b5ad8
	ctx.lr = 0x822B7DBC;
	sub_822B5AD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B7DC4"))) PPC_WEAK_FUNC(sub_822B7DC4);
PPC_FUNC_IMPL(__imp__sub_822B7DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7DC8"))) PPC_WEAK_FUNC(sub_822B7DC8);
PPC_FUNC_IMPL(__imp__sub_822B7DC8) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822b7e64
	if (!ctx.cr6.gt) goto loc_822B7E64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822B7E00:
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,467(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 467);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b7e58
	if (ctx.cr6.eq) goto loc_822B7E58;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822b7e40
	if (!ctx.cr6.gt) goto loc_822B7E40;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_822B7E28:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x822b7e28
	if (!ctx.cr0.eq) goto loc_822B7E28;
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
loc_822B7E40:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
loc_822B7E58:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x822b7e00
	if (!ctx.cr0.eq) goto loc_822B7E00;
loc_822B7E64:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822b7e88
	if (!ctx.cr6.gt) goto loc_822B7E88;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_822B7E74:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822b79e0
	ctx.lr = 0x822B7E7C;
	sub_822B79E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822b7e74
	if (!ctx.cr0.eq) goto loc_822B7E74;
loc_822B7E88:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
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

__attribute__((alias("__imp__sub_822B7EA0"))) PPC_WEAK_FUNC(sub_822B7EA0);
PPC_FUNC_IMPL(__imp__sub_822B7EA0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x822B7EC0;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x826bddb0
	ctx.lr = 0x822B7ED0;
	sub_826BDDB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b7ef0
	if (ctx.cr6.eq) goto loc_822B7EF0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
loc_822B7EF0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_822B7F08"))) PPC_WEAK_FUNC(sub_822B7F08);
PPC_FUNC_IMPL(__imp__sub_822B7F08) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c9790
	ctx.lr = 0x822B7F30;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x826bddb0
	ctx.lr = 0x822B7F40;
	sub_826BDDB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b7f58
	if (ctx.cr6.eq) goto loc_822B7F58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// b 0x822b7f68
	goto loc_822B7F68;
loc_822B7F58:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32280
	ctx.r3.s64 = ctx.r11.s64 + 32280;
	// bl 0x82130000
	ctx.lr = 0x822B7F68;
	sub_82130000(ctx, base);
loc_822B7F68:
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

__attribute__((alias("__imp__sub_822B7F80"))) PPC_WEAK_FUNC(sub_822B7F80);
PPC_FUNC_IMPL(__imp__sub_822B7F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822b7940
	sub_822B7940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B7F8C"))) PPC_WEAK_FUNC(sub_822B7F8C);
PPC_FUNC_IMPL(__imp__sub_822B7F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7F90"))) PPC_WEAK_FUNC(sub_822B7F90);
PPC_FUNC_IMPL(__imp__sub_822B7F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822b79e0
	sub_822B79E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B7F9C"))) PPC_WEAK_FUNC(sub_822B7F9C);
PPC_FUNC_IMPL(__imp__sub_822B7F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7FA0"))) PPC_WEAK_FUNC(sub_822B7FA0);
PPC_FUNC_IMPL(__imp__sub_822B7FA0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b7ab0
	ctx.lr = 0x822B7FBC;
	sub_822B7AB0(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7FD4"))) PPC_WEAK_FUNC(sub_822B7FD4);
PPC_FUNC_IMPL(__imp__sub_822B7FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7FD8"))) PPC_WEAK_FUNC(sub_822B7FD8);
PPC_FUNC_IMPL(__imp__sub_822B7FD8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x822b7b38
	ctx.lr = 0x822B7FEC;
	sub_822B7B38(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8008"))) PPC_WEAK_FUNC(sub_822B8008);
PPC_FUNC_IMPL(__imp__sub_822B8008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-5148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822b7720
	sub_822B7720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B801C"))) PPC_WEAK_FUNC(sub_822B801C);
PPC_FUNC_IMPL(__imp__sub_822B801C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8020"))) PPC_WEAK_FUNC(sub_822B8020);
PPC_FUNC_IMPL(__imp__sub_822B8020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-5148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b804c
	if (ctx.cr6.eq) goto loc_822B804C;
	// lhz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822B804C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8060"))) PPC_WEAK_FUNC(sub_822B8060);
PPC_FUNC_IMPL(__imp__sub_822B8060) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,864
	ctx.r9.s64 = 864;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r4.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// beq cr6,0x822b80ac
	if (ctx.cr6.eq) goto loc_822B80AC;
	// mulli r3,r10,864
	ctx.r3.s64 = ctx.r10.s64 * 864;
	// bl 0x82130528
	ctx.lr = 0x822B80A8;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822B80AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x821f10e0
	ctx.lr = 0x822B80BC;
	sub_821F10E0(ctx, base);
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

__attribute__((alias("__imp__sub_822B80D4"))) PPC_WEAK_FUNC(sub_822B80D4);
PPC_FUNC_IMPL(__imp__sub_822B80D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B80D8"))) PPC_WEAK_FUNC(sub_822B80D8);
PPC_FUNC_IMPL(__imp__sub_822B80D8) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,32376
	ctx.r9.s64 = ctx.r10.s64 + 32376;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
	// bl 0x821ce460
	ctx.lr = 0x822B8150;
	sub_821CE460(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ce210
	ctx.lr = 0x822B815C;
	sub_821CE210(ctx, base);
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

__attribute__((alias("__imp__sub_822B8178"))) PPC_WEAK_FUNC(sub_822B8178);
PPC_FUNC_IMPL(__imp__sub_822B8178) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r10,r11,32376
	ctx.r10.s64 = ctx.r11.s64 + 32376;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82608de8
	ctx.lr = 0x822B81A0;
	sub_82608DE8(ctx, base);
	// lhz r9,30(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b81b4
	if (ctx.cr6.eq) goto loc_822B81B4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82130588
	ctx.lr = 0x822B81B4;
	sub_82130588(ctx, base);
loc_822B81B4:
	// lhz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b81c8
	if (ctx.cr6.eq) goto loc_822B81C8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82130588
	ctx.lr = 0x822B81C8;
	sub_82130588(ctx, base);
loc_822B81C8:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b81dc
	if (ctx.cr6.eq) goto loc_822B81DC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82130588
	ctx.lr = 0x822B81DC;
	sub_82130588(ctx, base);
loc_822B81DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x822B81E4;
	sub_821D2028(ctx, base);
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

__attribute__((alias("__imp__sub_822B81F8"))) PPC_WEAK_FUNC(sub_822B81F8);
PPC_FUNC_IMPL(__imp__sub_822B81F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x822B8200;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8248
	if (ctx.cr6.eq) goto loc_822B8248;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B821C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B8234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822b821c
	if (ctx.cr6.lt) goto loc_822B821C;
loc_822B8248:
	// lhz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b83ec
	if (ctx.cr6.eq) goto loc_822B83EC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r27,24
	ctx.r29.s64 = ctx.r27.s64 + 24;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r23,-32121
	ctx.r23.s64 = -2105081856;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
	// lis r25,-32121
	ctx.r25.s64 = -2105081856;
loc_822B8270:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,656(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822b83d0
	if (!ctx.cr6.eq) goto loc_822B83D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B8294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,17892(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17892);
	// lwzx r4,r28,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// bl 0x822b61b0
	ctx.lr = 0x822B82A4;
	sub_822B61B0(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r7,r28,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822b833c
	if (ctx.cr6.eq) goto loc_822B833C;
	// lwz r10,-5148(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -5148);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b833c
	if (!ctx.cr6.gt) goto loc_822B833C;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_822B82D0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822b82f0
	if (ctx.cr6.eq) goto loc_822B82F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822b82d0
	if (ctx.cr6.lt) goto loc_822B82D0;
	// b 0x822b833c
	goto loc_822B833C;
loc_822B82F0:
	// lhz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822b8330
	if (!ctx.cr6.lt) goto loc_822B8330;
loc_822B8304:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lhz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822b8304
	if (ctx.cr6.lt) goto loc_822B8304;
loc_822B8330:
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// sth r10,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
loc_822B833C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,32(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b8380
	if (ctx.cr6.eq) goto loc_822B8380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B8368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r8.u16);
loc_822B8380:
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822b83c0
	if (!ctx.cr6.lt) goto loc_822B83C0;
loc_822B8394:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822b8394
	if (ctx.cr6.lt) goto loc_822B8394;
loc_822B83C0:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// b 0x822b83d8
	goto loc_822B83D8;
loc_822B83D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a7f10
	ctx.lr = 0x822B83D8;
	sub_822A7F10(ctx, base);
loc_822B83D8:
	// lhz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b8270
	if (ctx.cr6.lt) goto loc_822B8270;
loc_822B83EC:
	// lhz r11,22(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 22);
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
	// lhz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b8420
	if (!ctx.cr6.eq) goto loc_822B8420;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// sth r31,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r31.u16);
	// beq cr6,0x822b8418
	if (ctx.cr6.eq) goto loc_822B8418;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x822B8414;
	sub_82130528(ctx, base);
	// b 0x822b841c
	goto loc_822B841C;
loc_822B8418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B841C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_822B8420:
	// sth r31,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r31.u16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b8484
	if (ctx.cr6.eq) goto loc_822B8484;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B8438:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822b8470
	if (ctx.cr6.eq) goto loc_822B8470;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b8470
	if (ctx.cr6.eq) goto loc_822B8470;
	// bl 0x82331648
	ctx.lr = 0x822B8470;
	sub_82331648(ctx, base);
loc_822B8470:
	// lhz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b8438
	if (ctx.cr6.lt) goto loc_822B8438;
loc_822B8484:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B848C"))) PPC_WEAK_FUNC(sub_822B848C);
PPC_FUNC_IMPL(__imp__sub_822B848C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8490"))) PPC_WEAK_FUNC(sub_822B8490);
PPC_FUNC_IMPL(__imp__sub_822B8490) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82237920
	ctx.lr = 0x822B84C8;
	sub_82237920(ctx, base);
	// lis r9,23772
	ctx.r9.s64 = 1557921792;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// ori r7,r9,64167
	ctx.r7.u64 = ctx.r9.u64 | 64167;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r6,42(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// mulld r11,r8,r7
	ctx.r11.s64 = ctx.r8.s64 * ctx.r7.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r6,0
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r5,r11,1
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// rldicl r8,r11,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r3,r5,r6
	ctx.r3.s32 = ctx.r5.s32 / ctx.r6.s32;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// andc r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// twlgei r7,-1
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// beq cr6,0x822b85e8
	if (ctx.cr6.eq) goto loc_822B85E8;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822B852C:
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822b8548
	if (!ctx.cr6.eq) goto loc_822B8548;
	// lbz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b8548
	if (!ctx.cr6.eq) goto loc_822B8548;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822B8548:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822b859c
	if (!ctx.cr6.eq) goto loc_822B859C;
	// lbz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b85ec
	if (ctx.cr6.eq) goto loc_822B85EC;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b852c
	if (!ctx.cr6.eq) goto loc_822B852C;
	// lhz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_822B8574:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x822b85e0
	if (!ctx.cr6.lt) goto loc_822B85E0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b8574
	if (ctx.cr6.eq) goto loc_822B8574;
	// b 0x822b852c
	goto loc_822B852C;
loc_822B859C:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b852c
	if (!ctx.cr6.eq) goto loc_822B852C;
	// lhz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_822B85B8:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x822b85e0
	if (!ctx.cr6.lt) goto loc_822B85E0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b85b8
	if (ctx.cr6.eq) goto loc_822B85B8;
	// b 0x822b852c
	goto loc_822B852C;
loc_822B85E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b852c
	if (!ctx.cr6.eq) goto loc_822B852C;
loc_822B85E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822B85EC:
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

__attribute__((alias("__imp__sub_822B8604"))) PPC_WEAK_FUNC(sub_822B8604);
PPC_FUNC_IMPL(__imp__sub_822B8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8608"))) PPC_WEAK_FUNC(sub_822B8608);
PPC_FUNC_IMPL(__imp__sub_822B8608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x822B8610;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bl 0x82237920
	ctx.lr = 0x822B8638;
	sub_82237920(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b86c4
	if (ctx.cr6.eq) goto loc_822B86C4;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822B864C:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b867c
	if (!ctx.cr6.eq) goto loc_822B867C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822b8668
	if (!ctx.cr6.eq) goto loc_822B8668;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_822B8668:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b7ea0
	ctx.lr = 0x822B8674;
	sub_822B7EA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b86e0
	if (!ctx.cr6.eq) goto loc_822B86E0;
loc_822B867C:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822b864c
	if (!ctx.cr6.eq) goto loc_822B864C;
	// lhz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
loc_822B8694:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822b86bc
	if (!ctx.cr6.lt) goto loc_822B86BC;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b8694
	if (ctx.cr6.eq) goto loc_822B8694;
	// b 0x822b864c
	goto loc_822B864C;
loc_822B86BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822b864c
	if (!ctx.cr6.eq) goto loc_822B864C;
loc_822B86C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,32384
	ctx.r3.s64 = ctx.r11.s64 + 32384;
	// bl 0x82130000
	ctx.lr = 0x822B86D4;
	sub_82130000(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_822B86E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B86EC"))) PPC_WEAK_FUNC(sub_822B86EC);
PPC_FUNC_IMPL(__imp__sub_822B86EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B86F0"))) PPC_WEAK_FUNC(sub_822B86F0);
PPC_FUNC_IMPL(__imp__sub_822B86F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B86F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82237920
	ctx.lr = 0x822B8718;
	sub_82237920(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b877c
	if (ctx.cr6.eq) goto loc_822B877C;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822B872C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82398c08
	ctx.lr = 0x822B8734;
	sub_82398C08(ctx, base);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822b872c
	if (!ctx.cr6.eq) goto loc_822B872C;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
loc_822B874C:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822b8774
	if (!ctx.cr6.lt) goto loc_822B8774;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b874c
	if (ctx.cr6.eq) goto loc_822B874C;
	// b 0x822b872c
	goto loc_822B872C;
loc_822B8774:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822b872c
	if (!ctx.cr6.eq) goto loc_822B872C;
loc_822B877C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8784"))) PPC_WEAK_FUNC(sub_822B8784);
PPC_FUNC_IMPL(__imp__sub_822B8784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8788"))) PPC_WEAK_FUNC(sub_822B8788);
PPC_FUNC_IMPL(__imp__sub_822B8788) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c9790
	ctx.lr = 0x822B87B4;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826bddb0
	ctx.lr = 0x822B87C8;
	sub_826BDDB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b87ec
	if (ctx.cr6.eq) goto loc_822B87EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b87ec
	if (ctx.cr6.eq) goto loc_822B87EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,32536
	ctx.r3.s64 = ctx.r11.s64 + 32536;
	// bl 0x82130000
	ctx.lr = 0x822B87E8;
	sub_82130000(ctx, base);
	// b 0x822b8804
	goto loc_822B8804;
loc_822B87EC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82389998
	ctx.lr = 0x822B8804;
	sub_82389998(ctx, base);
loc_822B8804:
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

__attribute__((alias("__imp__sub_822B881C"))) PPC_WEAK_FUNC(sub_822B881C);
PPC_FUNC_IMPL(__imp__sub_822B881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8820"))) PPC_WEAK_FUNC(sub_822B8820);
PPC_FUNC_IMPL(__imp__sub_822B8820) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-5148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// beq cr6,0x822b8884
	if (ctx.cr6.eq) goto loc_822B8884;
	// bl 0x822b9bf8
	ctx.lr = 0x822B8868;
	sub_822B9BF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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
loc_822B8884:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822B88A4"))) PPC_WEAK_FUNC(sub_822B88A4);
PPC_FUNC_IMPL(__imp__sub_822B88A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B88A8"))) PPC_WEAK_FUNC(sub_822B88A8);
PPC_FUNC_IMPL(__imp__sub_822B88A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// b 0x822c97b0
	sub_822C97B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B88B8"))) PPC_WEAK_FUNC(sub_822B88B8);
PPC_FUNC_IMPL(__imp__sub_822B88B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30856
	ctx.r3.s64 = ctx.r11.s64 + 30856;
	// b 0x822c97b0
	sub_822C97B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B88C8"))) PPC_WEAK_FUNC(sub_822B88C8);
PPC_FUNC_IMPL(__imp__sub_822B88C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-5148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822b7dc8
	sub_822B7DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B88DC"))) PPC_WEAK_FUNC(sub_822B88DC);
PPC_FUNC_IMPL(__imp__sub_822B88DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B88E0"))) PPC_WEAK_FUNC(sub_822B88E0);
PPC_FUNC_IMPL(__imp__sub_822B88E0) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,-5148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x822b892c
	if (ctx.cr6.eq) goto loc_822B892C;
	// bl 0x822b7ea0
	ctx.lr = 0x822B8910;
	sub_822B7EA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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
loc_822B892C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822B894C"))) PPC_WEAK_FUNC(sub_822B894C);
PPC_FUNC_IMPL(__imp__sub_822B894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8950"))) PPC_WEAK_FUNC(sub_822B8950);
PPC_FUNC_IMPL(__imp__sub_822B8950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-5148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822b7f08
	sub_822B7F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8970"))) PPC_WEAK_FUNC(sub_822B8970);
PPC_FUNC_IMPL(__imp__sub_822B8970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8974"))) PPC_WEAK_FUNC(sub_822B8974);
PPC_FUNC_IMPL(__imp__sub_822B8974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8978"))) PPC_WEAK_FUNC(sub_822B8978);
PPC_FUNC_IMPL(__imp__sub_822B8978) {
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
	// bl 0x822b8178
	ctx.lr = 0x822B8998;
	sub_822B8178(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b89b0
	if (ctx.cr6.eq) goto loc_822B89B0;
	// bl 0x82130588
	ctx.lr = 0x822B89AC;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B89B0:
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

__attribute__((alias("__imp__sub_822B89C8"))) PPC_WEAK_FUNC(sub_822B89C8);
PPC_FUNC_IMPL(__imp__sub_822B89C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x822B89D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r25,r11,30576
	ctx.r25.s64 = ctx.r11.s64 + 30576;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r10,-32748
	ctx.r4.s64 = ctx.r10.s64 + -32748;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821ca540
	ctx.lr = 0x822B89F0;
	sub_821CA540(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r31,r11,-32760
	ctx.r31.s64 = ctx.r11.s64 + -32760;
	// addi r5,r9,-32764
	ctx.r5.s64 = ctx.r9.s64 + -32764;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821ca6a8
	ctx.lr = 0x822B8A14;
	sub_821CA6A8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822b8a48
	if (!ctx.cr6.eq) goto loc_822B8A48;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c9a90
	ctx.lr = 0x822B8A28;
	sub_821C9A90(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,32752
	ctx.r4.s64 = ctx.r11.s64 + 32752;
	// addi r3,r10,32692
	ctx.r3.s64 = ctx.r10.s64 + 32692;
	// bl 0x82130000
	ctx.lr = 0x822B8A40;
	sub_82130000(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_822B8A48:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d1cd0
	ctx.lr = 0x822B8A50;
	sub_821D1CD0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,32672
	ctx.r4.s64 = ctx.r11.s64 + 32672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821cf7b8
	ctx.lr = 0x822B8A64;
	sub_821CF7B8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r24,r11,32660
	ctx.r24.s64 = ctx.r11.s64 + 32660;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821cff40
	ctx.lr = 0x822B8A7C;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b8bb8
	if (ctx.cr6.eq) goto loc_822B8BB8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r22,36
	ctx.r29.s64 = ctx.r22.s64 + 36;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r10,-29628
	ctx.r26.s64 = ctx.r10.s64 + -29628;
	// addi r28,r9,9848
	ctx.r28.s64 = ctx.r9.s64 + 9848;
	// addi r27,r11,-29624
	ctx.r27.s64 = ctx.r11.s64 + -29624;
loc_822B8AA8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d0898
	ctx.lr = 0x822B8AB4;
	sub_821D0898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821cfe20
	ctx.lr = 0x822B8AC0;
	sub_821CFE20(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821cfaa8
	ctx.lr = 0x822B8AD0;
	sub_821CFAA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c9790
	ctx.lr = 0x822B8ADC;
	sub_821C9790(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8b40
	if (ctx.cr6.eq) goto loc_822B8B40;
	// divwu r10,r3,r11
	ctx.r10.u32 = ctx.r3.u32 / ctx.r11.u32;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// twllei r11,0
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8b40
	if (ctx.cr6.eq) goto loc_822B8B40;
loc_822B8B0C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b8b28
	if (ctx.cr6.eq) goto loc_822B8B28;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b8b0c
	if (!ctx.cr6.eq) goto loc_822B8B0C;
	// b 0x822b8b40
	goto loc_822B8B40;
loc_822B8B28:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8b40
	if (ctx.cr6.eq) goto loc_822B8B40;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822b8b84
	if (!ctx.cr6.eq) goto loc_822B8B84;
loc_822B8B40:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82130528
	ctx.lr = 0x822B8B48;
	sub_82130528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b8b74
	if (ctx.cr6.eq) goto loc_822B8B74;
	// sth r30,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r30,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r30.u16);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stb r30,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r30.u8);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// bl 0x823986d0
	ctx.lr = 0x822B8B70;
	sub_823986D0(ctx, base);
	// b 0x822b8b78
	goto loc_822B8B78;
loc_822B8B74:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822B8B78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822b8788
	ctx.lr = 0x822B8B84;
	sub_822B8788(ctx, base);
loc_822B8B84:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398ca8
	ctx.lr = 0x822B8B90;
	sub_82398CA8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d0898
	ctx.lr = 0x822B8B9C;
	sub_821D0898(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821cff40
	ctx.lr = 0x822B8BAC;
	sub_821CFF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b8aa8
	if (!ctx.cr6.eq) goto loc_822B8AA8;
loc_822B8BB8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821be610
	ctx.lr = 0x822B8BC0;
	sub_821BE610(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c9a90
	ctx.lr = 0x822B8BC8;
	sub_821C9A90(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8BD0"))) PPC_WEAK_FUNC(sub_822B8BD0);
PPC_FUNC_IMPL(__imp__sub_822B8BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B8BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82237920
	ctx.lr = 0x822B8BF8;
	sub_82237920(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8c74
	if (ctx.cr6.eq) goto loc_822B8C74;
loc_822B8C04:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822b7bd0
	ctx.lr = 0x822B8C1C;
	sub_822B7BD0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82608de8
	ctx.lr = 0x822B8C24;
	sub_82608DE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130588
	ctx.lr = 0x822B8C2C;
	sub_82130588(ctx, base);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822b8c60
	if (!ctx.cr6.gt) goto loc_822B8C60;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_822B8C44:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b8c60
	if (!ctx.cr6.eq) goto loc_822B8C60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822b8c44
	if (ctx.cr6.lt) goto loc_822B8C44;
loc_822B8C60:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b8c04
	if (!ctx.cr6.eq) goto loc_822B8C04;
loc_822B8C74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8C7C"))) PPC_WEAK_FUNC(sub_822B8C7C);
PPC_FUNC_IMPL(__imp__sub_822B8C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8C80"))) PPC_WEAK_FUNC(sub_822B8C80);
PPC_FUNC_IMPL(__imp__sub_822B8C80) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-5148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b8cc4
	if (ctx.cr6.eq) goto loc_822B8CC4;
	// bl 0x822b8490
	ctx.lr = 0x822B8CA8;
	sub_822B8490(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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
loc_822B8CC4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822B8CE4"))) PPC_WEAK_FUNC(sub_822B8CE4);
PPC_FUNC_IMPL(__imp__sub_822B8CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8CE8"))) PPC_WEAK_FUNC(sub_822B8CE8);
PPC_FUNC_IMPL(__imp__sub_822B8CE8) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,-5148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x822b8d34
	if (ctx.cr6.eq) goto loc_822B8D34;
	// bl 0x822b8608
	ctx.lr = 0x822B8D18;
	sub_822B8608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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
loc_822B8D34:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822B8D54"))) PPC_WEAK_FUNC(sub_822B8D54);
PPC_FUNC_IMPL(__imp__sub_822B8D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8D58"))) PPC_WEAK_FUNC(sub_822B8D58);
PPC_FUNC_IMPL(__imp__sub_822B8D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-5148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822b86f0
	sub_822B86F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8D6C"))) PPC_WEAK_FUNC(sub_822B8D6C);
PPC_FUNC_IMPL(__imp__sub_822B8D6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8D70"))) PPC_WEAK_FUNC(sub_822B8D70);
PPC_FUNC_IMPL(__imp__sub_822B8D70) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82130528
	ctx.lr = 0x822B8D90;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b8da4
	if (ctx.cr6.eq) goto loc_822B8DA4;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x822b8060
	ctx.lr = 0x822B8DA0;
	sub_822B8060(ctx, base);
	// b 0x822b8da8
	goto loc_822B8DA8;
loc_822B8DA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B8DA8:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82130528
	ctx.lr = 0x822B8DB4;
	sub_82130528(ctx, base);
	// li r30,100
	ctx.r30.s64 = 100;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r3,400
	ctx.r3.s64 = 400;
	// sth r30,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r30.u16);
	// bl 0x82130528
	ctx.lr = 0x822B8DC8;
	sub_82130528(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// sth r30,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r30.u16);
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82130528
	ctx.lr = 0x822B8DD8;
	sub_82130528(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// sth r30,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b89c8
	ctx.lr = 0x822B8DE8;
	sub_822B89C8(ctx, base);
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

__attribute__((alias("__imp__sub_822B8E00"))) PPC_WEAK_FUNC(sub_822B8E00);
PPC_FUNC_IMPL(__imp__sub_822B8E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B8E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822b8e48
	if (ctx.cr6.eq) goto loc_822B8E48;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_822B8E34:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b8e34
	if (!ctx.cr6.eq) goto loc_822B8E34;
loc_822B8E48:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lhz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// sth r6,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r6.u16);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822b8e94
	if (ctx.cr6.eq) goto loc_822B8E94;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_822B8E80:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b8e80
	if (!ctx.cr6.eq) goto loc_822B8E80;
loc_822B8E94:
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lhz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// sth r6,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r6.u16);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822b8ee0
	if (ctx.cr6.eq) goto loc_822B8EE0;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_822B8ECC:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b8ecc
	if (!ctx.cr6.eq) goto loc_822B8ECC;
loc_822B8EE0:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lhz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r7,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r7.u16);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b8f38
	if (ctx.cr6.eq) goto loc_822B8F38;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8f14
	if (ctx.cr6.eq) goto loc_822B8F14;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x822B8F14;
	sub_82130588(ctx, base);
loc_822B8F14:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// sth r29,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r29.u16);
	// sth r29,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r29.u16);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// bl 0x82130588
	ctx.lr = 0x822B8F34;
	sub_82130588(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_822B8F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8bd0
	ctx.lr = 0x822B8F40;
	sub_822B8BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B8F48"))) PPC_WEAK_FUNC(sub_822B8F48);
PPC_FUNC_IMPL(__imp__sub_822B8F48) {
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
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// addi r3,r10,-32108
	ctx.r3.s64 = ctx.r10.s64 + -32108;
	// bl 0x82554798
	ctx.lr = 0x822B8F68;
	sub_82554798(ctx, base);
	// lis r9,-32212
	ctx.r9.s64 = -2111045632;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r4,r9,-30552
	ctx.r4.s64 = ctx.r9.s64 + -30552;
	// addi r3,r8,-32140
	ctx.r3.s64 = ctx.r8.s64 + -32140;
	// bl 0x82554798
	ctx.lr = 0x822B8F7C;
	sub_82554798(ctx, base);
	// lis r7,-32212
	ctx.r7.s64 = -2111045632;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r4,r7,-30536
	ctx.r4.s64 = ctx.r7.s64 + -30536;
	// addi r3,r6,-32180
	ctx.r3.s64 = ctx.r6.s64 + -32180;
	// bl 0x82554798
	ctx.lr = 0x822B8F90;
	sub_82554798(ctx, base);
	// lis r5,-32213
	ctx.r5.s64 = -2111111168;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// addi r4,r5,32640
	ctx.r4.s64 = ctx.r5.s64 + 32640;
	// addi r3,r3,-32216
	ctx.r3.s64 = ctx.r3.s64 + -32216;
	// bl 0x82554798
	ctx.lr = 0x822B8FA4;
	sub_82554798(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,0
	ctx.r4.s64 = ctx.r11.s64 + 0;
	// addi r3,r10,-32256
	ctx.r3.s64 = ctx.r10.s64 + -32256;
	// bl 0x82554798
	ctx.lr = 0x822B8FB8;
	sub_82554798(ctx, base);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r4,r9,32656
	ctx.r4.s64 = ctx.r9.s64 + 32656;
	// addi r3,r8,-32288
	ctx.r3.s64 = ctx.r8.s64 + -32288;
	// bl 0x82554798
	ctx.lr = 0x822B8FCC;
	sub_82554798(ctx, base);
	// lis r7,-32213
	ctx.r7.s64 = -2111111168;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r4,r7,32672
	ctx.r4.s64 = ctx.r7.s64 + 32672;
	// addi r3,r6,-32316
	ctx.r3.s64 = ctx.r6.s64 + -32316;
	// bl 0x82554798
	ctx.lr = 0x822B8FE0;
	sub_82554798(ctx, base);
	// lis r5,-32212
	ctx.r5.s64 = -2111045632;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// addi r4,r5,-30520
	ctx.r4.s64 = ctx.r5.s64 + -30520;
	// addi r3,r3,-32356
	ctx.r3.s64 = ctx.r3.s64 + -32356;
	// bl 0x82554798
	ctx.lr = 0x822B8FF4;
	sub_82554798(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,32728
	ctx.r4.s64 = ctx.r11.s64 + 32728;
	// addi r3,r10,-32392
	ctx.r3.s64 = ctx.r10.s64 + -32392;
	// bl 0x82554798
	ctx.lr = 0x822B9008;
	sub_82554798(ctx, base);
	// lis r9,-32212
	ctx.r9.s64 = -2111045632;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r4,r9,-30496
	ctx.r4.s64 = ctx.r9.s64 + -30496;
	// addi r3,r8,-32432
	ctx.r3.s64 = ctx.r8.s64 + -32432;
	// bl 0x82554798
	ctx.lr = 0x822B901C;
	sub_82554798(ctx, base);
	// lis r7,-32212
	ctx.r7.s64 = -2111045632;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r4,r7,-29568
	ctx.r4.s64 = ctx.r7.s64 + -29568;
	// addi r3,r6,-32480
	ctx.r3.s64 = ctx.r6.s64 + -32480;
	// bl 0x82554798
	ctx.lr = 0x822B9030;
	sub_82554798(ctx, base);
	// lis r5,-32212
	ctx.r5.s64 = -2111045632;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// addi r4,r5,-29464
	ctx.r4.s64 = ctx.r5.s64 + -29464;
	// addi r3,r3,-32540
	ctx.r3.s64 = ctx.r3.s64 + -32540;
	// bl 0x82554798
	ctx.lr = 0x822B9044;
	sub_82554798(ctx, base);
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-30384
	ctx.r4.s64 = ctx.r11.s64 + -30384;
	// addi r3,r10,-32576
	ctx.r3.s64 = ctx.r10.s64 + -32576;
	// bl 0x82554798
	ctx.lr = 0x822B9058;
	sub_82554798(ctx, base);
	// lis r9,-32212
	ctx.r9.s64 = -2111045632;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r4,r9,-29352
	ctx.r4.s64 = ctx.r9.s64 + -29352;
	// addi r3,r8,-32612
	ctx.r3.s64 = ctx.r8.s64 + -32612;
	// bl 0x82554798
	ctx.lr = 0x822B906C;
	sub_82554798(ctx, base);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r4,r7,17552
	ctx.r4.s64 = ctx.r7.s64 + 17552;
	// addi r3,r6,-32652
	ctx.r3.s64 = ctx.r6.s64 + -32652;
	// bl 0x82554798
	ctx.lr = 0x822B9080;
	sub_82554798(ctx, base);
	// lis r5,-32212
	ctx.r5.s64 = -2111045632;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// addi r4,r5,-32760
	ctx.r4.s64 = ctx.r5.s64 + -32760;
	// addi r3,r3,-32684
	ctx.r3.s64 = ctx.r3.s64 + -32684;
	// bl 0x82554798
	ctx.lr = 0x822B9094;
	sub_82554798(ctx, base);
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-32736
	ctx.r4.s64 = ctx.r11.s64 + -32736;
	// addi r3,r10,-32724
	ctx.r3.s64 = ctx.r10.s64 + -32724;
	// bl 0x82554798
	ctx.lr = 0x822B90A8;
	sub_82554798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B90B8"))) PPC_WEAK_FUNC(sub_822B90B8);
PPC_FUNC_IMPL(__imp__sub_822B90B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823db9d4
	ctx.lr = 0x822B90C8;
	sub_823DB9D4(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f12,-12736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12736);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lfs f11,32692(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32692);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,-31640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31640);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,12428(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12428);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,-31376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31376);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,3732(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3732);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f7,27632(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 27632);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f6,14988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14988);
	ctx.f6.f64 = double(temp.f32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfs f5,14184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14184);
	ctx.f5.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lfs f4,11368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11368);
	ctx.f4.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f3,30712(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30712);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f2,17032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17032);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f1,-15468(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15468);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,-31644(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31644);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,14884(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14884);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-31648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31648);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-7912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7912);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,-31652(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31652);
	ctx.f27.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f31,60(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f30,64(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f29,72(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f28,76(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f27,80(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823dba20
	ctx.lr = 0x822B91BC;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B91C8"))) PPC_WEAK_FUNC(sub_822B91C8);
PPC_FUNC_IMPL(__imp__sub_822B91C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,169(r3)
	PPC_STORE_U8(ctx.r3.u32 + 169, ctx.r10.u8);
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// b 0x82560bb0
	sub_82560BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B91EC"))) PPC_WEAK_FUNC(sub_822B91EC);
PPC_FUNC_IMPL(__imp__sub_822B91EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B91F0"))) PPC_WEAK_FUNC(sub_822B91F0);
PPC_FUNC_IMPL(__imp__sub_822B91F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x82130000
	ctx.lr = 0x822B9208;
	sub_82130000(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f10,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f9.f64 = double(temp.f32);
	// bne cr6,0x822b9254
	if (!ctx.cr6.eq) goto loc_822B9254;
	// lbz r11,169(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9254
	if (!ctx.cr6.eq) goto loc_822B9254;
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x822b93dc
	goto loc_822B93DC;
loc_822B9254:
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9268
	if (ctx.cr6.eq) goto loc_822B9268;
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x822b926c
	goto loc_822B926C;
loc_822B9268:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_822B926C:
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lbz r10,169(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// addi r9,r11,29952
	ctx.r9.s64 = ctx.r11.s64 + 29952;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// beq cr6,0x822b9294
	if (ctx.cr6.eq) goto loc_822B9294;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,14884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	ctx.f12.f64 = double(temp.f32);
	// b 0x822b9298
	goto loc_822B9298;
loc_822B9294:
	// fmr f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f9.f64;
loc_822B9298:
	// lfs f8,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fsel f3,f4,f6,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// bge cr6,0x822b92d8
	if (!ctx.cr6.lt) goto loc_822B92D8;
	// fmadds f12,f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x822b92f8
	if (!ctx.cr6.gt) goto loc_822B92F8;
	// b 0x822b92f4
	goto loc_822B92F4;
loc_822B92D8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822b92f8
	if (!ctx.cr6.gt) goto loc_822B92F8;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f12,f11,f13
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x822b92f8
	if (!ctx.cr6.lt) goto loc_822B92F8;
loc_822B92F4:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_822B92F8:
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822b9320
	if (!ctx.cr6.lt) goto loc_822B9320;
	// fmadds f12,f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x822b9340
	if (!ctx.cr6.gt) goto loc_822B9340;
	// b 0x822b933c
	goto loc_822B933C;
loc_822B9320:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822b9340
	if (!ctx.cr6.gt) goto loc_822B9340;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f12,f11,f13
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x822b9340
	if (!ctx.cr6.lt) goto loc_822B9340;
loc_822B933C:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_822B9340:
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fsel f12,f12,f8,f7
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f8.f64 : ctx.f7.f64;
	// bge cr6,0x822b9374
	if (!ctx.cr6.lt) goto loc_822B9374;
	// fmadds f12,f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x822b9394
	if (!ctx.cr6.gt) goto loc_822B9394;
	// b 0x822b9390
	goto loc_822B9390;
loc_822B9374:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822b9394
	if (!ctx.cr6.gt) goto loc_822B9394;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f12,f11,f13
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x822b9394
	if (!ctx.cr6.lt) goto loc_822B9394;
loc_822B9390:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_822B9394:
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822b93bc
	if (!ctx.cr6.lt) goto loc_822B93BC;
	// fmadds f12,f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x822b93dc
	if (!ctx.cr6.gt) goto loc_822B93DC;
	// b 0x822b93d8
	goto loc_822B93D8;
loc_822B93BC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822b93dc
	if (!ctx.cr6.gt) goto loc_822B93DC;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f12,f11,f13
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x822b93dc
	if (!ctx.cr6.lt) goto loc_822B93DC;
loc_822B93D8:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_822B93DC:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x822b93ec
	if (!ctx.cr6.gt) goto loc_822B93EC;
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_822B93EC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lbz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b940c
	if (ctx.cr6.eq) goto loc_822B940C;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822b9410
	goto loc_822B9410;
loc_822B940C:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_822B9410:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stfs f0,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lbz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b942c
	if (ctx.cr6.eq) goto loc_822B942C;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822b9430
	goto loc_822B9430;
loc_822B942C:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_822B9430:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stfs f0,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 144, temp.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 148, temp.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,592(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822b9470
	if (!ctx.cr6.eq) goto loc_822B9470;
	// lhz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x825617e8
	ctx.lr = 0x822B9470;
	sub_825617E8(ctx, base);
loc_822B9470:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b94b8
	if (ctx.cr6.eq) goto loc_822B94B8;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b94b8
	if (ctx.cr6.eq) goto loc_822B94B8;
	// bl 0x823eaef8
	ctx.lr = 0x822B9494;
	sub_823EAEF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r10,-31588
	ctx.r3.s64 = ctx.r10.s64 + -31588;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r4,r11,8109
	ctx.r4.s64 = ctx.r11.s64 + 8109;
	// bl 0x82130000
	ctx.lr = 0x822B94AC;
	sub_82130000(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,664(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 664);
	// bl 0x82345988
	ctx.lr = 0x822B94B8;
	sub_82345988(ctx, base);
loc_822B94B8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9500
	if (ctx.cr6.eq) goto loc_822B9500;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9500
	if (ctx.cr6.eq) goto loc_822B9500;
	// bl 0x823eaef8
	ctx.lr = 0x822B94DC;
	sub_823EAEF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r10,-31636
	ctx.r3.s64 = ctx.r10.s64 + -31636;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r4,r11,8109
	ctx.r4.s64 = ctx.r11.s64 + 8109;
	// bl 0x82130000
	ctx.lr = 0x822B94F4;
	sub_82130000(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,668(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// bl 0x823460a0
	ctx.lr = 0x822B9500;
	sub_823460A0(ctx, base);
loc_822B9500:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9518
	if (ctx.cr6.eq) goto loc_822B9518;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8232d4b8
	ctx.lr = 0x822B9518;
	sub_8232D4B8(ctx, base);
loc_822B9518:
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

__attribute__((alias("__imp__sub_822B952C"))) PPC_WEAK_FUNC(sub_822B952C);
PPC_FUNC_IMPL(__imp__sub_822B952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9530"))) PPC_WEAK_FUNC(sub_822B9530);
PPC_FUNC_IMPL(__imp__sub_822B9530) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82560be8
	ctx.lr = 0x822B9554;
	sub_82560BE8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r10,r11,-31540
	ctx.r10.s64 = ctx.r11.s64 + -31540;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822b90b8
	ctx.lr = 0x822B9568;
	sub_822B90B8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lfs f13,7444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7444);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,3796(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// stfs f11,140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stb r6,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r6.u8);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// bl 0x82560bb0
	ctx.lr = 0x822B95C8;
	sub_82560BB0(ctx, base);
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

__attribute__((alias("__imp__sub_822B95E4"))) PPC_WEAK_FUNC(sub_822B95E4);
PPC_FUNC_IMPL(__imp__sub_822B95E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B95E8"))) PPC_WEAK_FUNC(sub_822B95E8);
PPC_FUNC_IMPL(__imp__sub_822B95E8) {
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
	// bl 0x82560ba0
	ctx.lr = 0x822B9608;
	sub_82560BA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9620
	if (ctx.cr6.eq) goto loc_822B9620;
	// bl 0x82130588
	ctx.lr = 0x822B961C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B9620:
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

__attribute__((alias("__imp__sub_822B9638"))) PPC_WEAK_FUNC(sub_822B9638);
PPC_FUNC_IMPL(__imp__sub_822B9638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b9650
	if (!ctx.cr6.eq) goto loc_822B9650;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822B9650:
	// b 0x826fc510
	sub_826FC510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B9654"))) PPC_WEAK_FUNC(sub_822B9654);
PPC_FUNC_IMPL(__imp__sub_822B9654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9658"))) PPC_WEAK_FUNC(sub_822B9658);
PPC_FUNC_IMPL(__imp__sub_822B9658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x826fc528
	ctx.lr = 0x822B9670;
	sub_826FC528(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-31196
	ctx.r8.s64 = ctx.r9.s64 + -31196;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11364);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
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

__attribute__((alias("__imp__sub_822B96B0"))) PPC_WEAK_FUNC(sub_822B96B0);
PPC_FUNC_IMPL(__imp__sub_822B96B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B96C4"))) PPC_WEAK_FUNC(sub_822B96C4);
PPC_FUNC_IMPL(__imp__sub_822B96C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B96C8"))) PPC_WEAK_FUNC(sub_822B96C8);
PPC_FUNC_IMPL(__imp__sub_822B96C8) {
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
	// bl 0x826fc558
	ctx.lr = 0x822B96E0;
	sub_826FC558(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B96F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_822B9708"))) PPC_WEAK_FUNC(sub_822B9708);
PPC_FUNC_IMPL(__imp__sub_822B9708) {
	PPC_FUNC_PROLOGUE();
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B970C"))) PPC_WEAK_FUNC(sub_822B970C);
PPC_FUNC_IMPL(__imp__sub_822B970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9710"))) PPC_WEAK_FUNC(sub_822B9710);
PPC_FUNC_IMPL(__imp__sub_822B9710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r7,144(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// lfs f0,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stb r10,816(r5)
	PPC_STORE_U8(ctx.r5.u32 + 816, ctx.r10.u8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r10,817(r11)
	PPC_STORE_U8(ctx.r11.u32 + 817, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B974C"))) PPC_WEAK_FUNC(sub_822B974C);
PPC_FUNC_IMPL(__imp__sub_822B974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9750"))) PPC_WEAK_FUNC(sub_822B9750);
PPC_FUNC_IMPL(__imp__sub_822B9750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r7,144(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stb r11,816(r4)
	PPC_STORE_U8(ctx.r4.u32 + 816, ctx.r11.u8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r11,817(r9)
	PPC_STORE_U8(ctx.r9.u32 + 817, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9790"))) PPC_WEAK_FUNC(sub_822B9790);
PPC_FUNC_IMPL(__imp__sub_822B9790) {
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
	// bl 0x826fc548
	ctx.lr = 0x822B97B0;
	sub_826FC548(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b97c8
	if (ctx.cr6.eq) goto loc_822B97C8;
	// bl 0x82130588
	ctx.lr = 0x822B97C4;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B97C8:
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

__attribute__((alias("__imp__sub_822B97E0"))) PPC_WEAK_FUNC(sub_822B97E0);
PPC_FUNC_IMPL(__imp__sub_822B97E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x822B97E8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823db9d4
	ctx.lr = 0x822B97F0;
	sub_823DB9D4(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b99e0
	if (ctx.cr6.eq) goto loc_822B99E0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b99e0
	if (ctx.cr6.eq) goto loc_822B99E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f31,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r28,8(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,144(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// beq cr6,0x822b9870
	if (ctx.cr6.eq) goto loc_822B9870;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9870
	if (ctx.cr6.eq) goto loc_822B9870;
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f28,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
loc_822B9870:
	// lwz r11,668(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9898
	if (ctx.cr6.eq) goto loc_822B9898;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9898
	if (ctx.cr6.eq) goto loc_822B9898;
	// lwz r11,668(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 668);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f30,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
loc_822B9898:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f0,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// extsh r27,r9
	ctx.r27.s64 = ctx.r9.s16;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bgt cr6,0x822b98c8
	if (ctx.cr6.gt) goto loc_822B98C8;
	// li r27,2
	ctx.r27.s64 = 2;
loc_822B98C8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822B98DC;
	sub_822A8108(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lvx128 v62,r3,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v61,v63,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v61,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r28,128(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822b9928
	if (ctx.cr6.eq) goto loc_822B9928;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lfs f0,180(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_822B9928:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r1,172
	ctx.r26.s64 = ctx.r1.s64 + 172;
	// addi r25,r1,168
	ctx.r25.s64 = ctx.r1.s64 + 168;
	// addi r24,r1,164
	ctx.r24.s64 = ctx.r1.s64 + 164;
	// addi r23,r1,160
	ctx.r23.s64 = ctx.r1.s64 + 160;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r22,104(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x822a8108
	ctx.lr = 0x822B9948;
	sub_822A8108(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r20,r1,176
	ctx.r20.s64 = ctx.r1.s64 + 176;
	// addi r28,r28,272
	ctx.r28.s64 = ctx.r28.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// lfs f0,-31128(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31128);
	ctx.f0.f64 = double(temp.f32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// bl 0x8254a280
	ctx.lr = 0x822B99BC;
	sub_8254A280(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// sth r27,44(r29)
	PPC_STORE_U16(ctx.r29.u32 + 44, ctx.r27.u16);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,152(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 152, temp.u32);
	// stfs f13,156(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 156, temp.u32);
	// stfs f12,160(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 160, temp.u32);
	// stfs f11,164(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 164, temp.u32);
loc_822B99E0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823dba20
	ctx.lr = 0x822B99EC;
	__restfpr_27(ctx, base);
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B99F0"))) PPC_WEAK_FUNC(sub_822B99F0);
PPC_FUNC_IMPL(__imp__sub_822B99F0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-30812
	ctx.r10.s64 = ctx.r11.s64 + -30812;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9a54
	if (ctx.cr6.eq) goto loc_822B9A54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9a4c
	if (ctx.cr6.eq) goto loc_822B9A4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9A4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_822B9A54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826fc6b8
	ctx.lr = 0x822B9A5C;
	sub_826FC6B8(ctx, base);
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

__attribute__((alias("__imp__sub_822B9A70"))) PPC_WEAK_FUNC(sub_822B9A70);
PPC_FUNC_IMPL(__imp__sub_822B9A70) {
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
	// bl 0x822b99f0
	ctx.lr = 0x822B9A90;
	sub_822B99F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9aa8
	if (ctx.cr6.eq) goto loc_822B9AA8;
	// bl 0x82130588
	ctx.lr = 0x822B9AA4;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B9AA8:
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

__attribute__((alias("__imp__sub_822B9AC0"))) PPC_WEAK_FUNC(sub_822B9AC0);
PPC_FUNC_IMPL(__imp__sub_822B9AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B9AC8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9b54
	if (!ctx.cr6.eq) goto loc_822B9B54;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9b54
	if (ctx.cr6.eq) goto loc_822B9B54;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b9b54
	if (ctx.cr6.eq) goto loc_822B9B54;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b9b54
	if (ctx.cr6.eq) goto loc_822B9B54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lfs f1,-31384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31384);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b9e58
	ctx.lr = 0x822B9B54;
	sub_822B9E58(ctx, base);
loc_822B9B54:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aceb8
	ctx.lr = 0x822B9B68;
	sub_822ACEB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B9B74"))) PPC_WEAK_FUNC(sub_822B9B74);
PPC_FUNC_IMPL(__imp__sub_822B9B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9B78"))) PPC_WEAK_FUNC(sub_822B9B78);
PPC_FUNC_IMPL(__imp__sub_822B9B78) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r10,r11,22868
	ctx.r10.s64 = ctx.r11.s64 + 22868;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822a5a70
	ctx.lr = 0x822B9BA8;
	sub_822A5A70(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,22740
	ctx.r7.s64 = ctx.r9.s64 + 22740;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82740ec0
	ctx.lr = 0x822B9BC4;
	sub_82740EC0(ctx, base);
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b9bdc
	if (ctx.cr6.eq) goto loc_822B9BDC;
	// bl 0x82130588
	ctx.lr = 0x822B9BD8;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B9BDC:
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

__attribute__((alias("__imp__sub_822B9BF4"))) PPC_WEAK_FUNC(sub_822B9BF4);
PPC_FUNC_IMPL(__imp__sub_822B9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9BF8"))) PPC_WEAK_FUNC(sub_822B9BF8);
PPC_FUNC_IMPL(__imp__sub_822B9BF8) {
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
	// bl 0x826fc678
	ctx.lr = 0x822B9C14;
	sub_826FC678(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,316
	ctx.r3.s64 = 316;
	// addi r10,r11,-30812
	ctx.r10.s64 = ctx.r11.s64 + -30812;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82130528
	ctx.lr = 0x822B9C28;
	sub_82130528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822b9c58
	if (ctx.cr6.eq) goto loc_822B9C58;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822a6460
	ctx.lr = 0x822B9C3C;
	sub_822A6460(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30612
	ctx.r9.s64 = ctx.r11.s64 + -30612;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x822b9c5c
	goto loc_822B9C5C;
loc_822B9C58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B9C5C:
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822B9C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 312, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822B9C94"))) PPC_WEAK_FUNC(sub_822B9C94);
PPC_FUNC_IMPL(__imp__sub_822B9C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9C98"))) PPC_WEAK_FUNC(sub_822B9C98);
PPC_FUNC_IMPL(__imp__sub_822B9C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r11,467(r3)
	PPC_STORE_U8(ctx.r3.u32 + 467, ctx.r11.u8);
	// b 0x82683820
	sub_82683820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B9CC4"))) PPC_WEAK_FUNC(sub_822B9CC4);
PPC_FUNC_IMPL(__imp__sub_822B9CC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9CC8"))) PPC_WEAK_FUNC(sub_822B9CC8);
PPC_FUNC_IMPL(__imp__sub_822B9CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r10,468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9CF0"))) PPC_WEAK_FUNC(sub_822B9CF0);
PPC_FUNC_IMPL(__imp__sub_822B9CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9d14
	if (ctx.cr6.eq) goto loc_822B9D14;
	// lbz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 468);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822B9D14:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9D28"))) PPC_WEAK_FUNC(sub_822B9D28);
PPC_FUNC_IMPL(__imp__sub_822B9D28) {
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
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-12200
	ctx.r4.s64 = ctx.r11.s64 + -12200;
	// addi r3,r10,-30456
	ctx.r3.s64 = ctx.r10.s64 + -30456;
	// bl 0x82554798
	ctx.lr = 0x822B9D48;
	sub_82554798(ctx, base);
	// lis r9,-32212
	ctx.r9.s64 = -2111045632;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r4,r9,-25448
	ctx.r4.s64 = ctx.r9.s64 + -25448;
	// addi r3,r8,-30488
	ctx.r3.s64 = ctx.r8.s64 + -30488;
	// bl 0x82554798
	ctx.lr = 0x822B9D5C;
	sub_82554798(ctx, base);
	// lis r7,-32212
	ctx.r7.s64 = -2111045632;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r4,r7,-25400
	ctx.r4.s64 = ctx.r7.s64 + -25400;
	// addi r3,r6,-30520
	ctx.r3.s64 = ctx.r6.s64 + -30520;
	// bl 0x82554798
	ctx.lr = 0x822B9D70;
	sub_82554798(ctx, base);
	// lis r5,-32212
	ctx.r5.s64 = -2111045632;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// addi r4,r5,-25360
	ctx.r4.s64 = ctx.r5.s64 + -25360;
	// addi r3,r3,-30552
	ctx.r3.s64 = ctx.r3.s64 + -30552;
	// bl 0x82554798
	ctx.lr = 0x822B9D84;
	sub_82554798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9D94"))) PPC_WEAK_FUNC(sub_822B9D94);
PPC_FUNC_IMPL(__imp__sub_822B9D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9D98"))) PPC_WEAK_FUNC(sub_822B9D98);
PPC_FUNC_IMPL(__imp__sub_822B9D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lwz r11,984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b9db0
	if (!ctx.cr6.eq) goto loc_822B9DB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822B9DB0:
	// b 0x826fcd48
	sub_826FCD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B9DB4"))) PPC_WEAK_FUNC(sub_822B9DB4);
PPC_FUNC_IMPL(__imp__sub_822B9DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9DB8"))) PPC_WEAK_FUNC(sub_822B9DB8);
PPC_FUNC_IMPL(__imp__sub_822B9DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b9df0
	if (ctx.cr6.eq) goto loc_822B9DF0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822b9df0
	if (ctx.cr6.eq) goto loc_822B9DF0;
	// rlwinm r11,r11,0,26,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E;
	// rlwinm r11,r11,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9df0
	if (!ctx.cr6.eq) goto loc_822B9DF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,27640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822B9DF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9DFC"))) PPC_WEAK_FUNC(sub_822B9DFC);
PPC_FUNC_IMPL(__imp__sub_822B9DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9E00"))) PPC_WEAK_FUNC(sub_822B9E00);
PPC_FUNC_IMPL(__imp__sub_822B9E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822B9E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r31,308
	ctx.r10.s64 = ctx.r31.s64 + 308;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b9e40
	if (!ctx.cr6.eq) goto loc_822B9E40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826fd730
	ctx.lr = 0x822B9E30;
	sub_826FD730(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826fd730
	ctx.lr = 0x822B9E3C;
	sub_826FD730(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
loc_822B9E40:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826fd410
	ctx.lr = 0x822B9E50;
	sub_826FD410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B9E58"))) PPC_WEAK_FUNC(sub_822B9E58);
PPC_FUNC_IMPL(__imp__sub_822B9E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9E60"))) PPC_WEAK_FUNC(sub_822B9E60);
PPC_FUNC_IMPL(__imp__sub_822B9E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9e94
	if (ctx.cr6.eq) goto loc_822B9E94;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lfs f0,180(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
loc_822B9E94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9EA0"))) PPC_WEAK_FUNC(sub_822B9EA0);
PPC_FUNC_IMPL(__imp__sub_822B9EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9ecc
	if (ctx.cr6.eq) goto loc_822B9ECC;
	// lfs f0,520(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f13,f1,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
loc_822B9ECC:
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9ee4
	if (ctx.cr6.eq) goto loc_822B9EE4;
	// lfs f0,520(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsel f1,f13,f1,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
loc_822B9EE4:
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9efc
	if (ctx.cr6.eq) goto loc_822B9EFC;
	// lfs f0,520(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsel f1,f13,f1,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
loc_822B9EFC:
	// lwz r11,420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsel f1,f13,f1,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9F18"))) PPC_WEAK_FUNC(sub_822B9F18);
PPC_FUNC_IMPL(__imp__sub_822B9F18) {
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
	// bl 0x826fd488
	ctx.lr = 0x822B9F38;
	sub_826FD488(ctx, base);
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9f48
	if (ctx.cr6.eq) goto loc_822B9F48;
	// bl 0x8254b768
	ctx.lr = 0x822B9F48;
	sub_8254B768(ctx, base);
loc_822B9F48:
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822B9F6C"))) PPC_WEAK_FUNC(sub_822B9F6C);
PPC_FUNC_IMPL(__imp__sub_822B9F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B9F70"))) PPC_WEAK_FUNC(sub_822B9F70);
PPC_FUNC_IMPL(__imp__sub_822B9F70) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b9fa8
	if (!ctx.cr6.eq) goto loc_822B9FA8;
	// lwz r3,300(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b9fa8
	if (ctx.cr6.eq) goto loc_822B9FA8;
	// bl 0x8254ca78
	ctx.lr = 0x822B9F98;
	sub_8254CA78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822b9fac
	if (!ctx.cr6.eq) goto loc_822B9FAC;
loc_822B9FA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B9FAC:
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

__attribute__((alias("__imp__sub_822B9FC0"))) PPC_WEAK_FUNC(sub_822B9FC0);
PPC_FUNC_IMPL(__imp__sub_822B9FC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,192
	ctx.r11.s64 = 192;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9FD0"))) PPC_WEAK_FUNC(sub_822B9FD0);
PPC_FUNC_IMPL(__imp__sub_822B9FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-31600
	ctx.r9.s64 = ctx.r11.s64 + -31600;
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v61,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// lfs f0,27644(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27644);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dbae8
	ctx.lr = 0x822BA01C;
	sub_823DBAE8(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dbbc8
	ctx.lr = 0x822BA028;
	sub_823DBBC8(ctx, base);
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmadds f9,f12,f13,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f9,192(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// fmsubs f8,f0,f13,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f8,200(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA068"))) PPC_WEAK_FUNC(sub_822BA068);
PPC_FUNC_IMPL(__imp__sub_822BA068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA070"))) PPC_WEAK_FUNC(sub_822BA070);
PPC_FUNC_IMPL(__imp__sub_822BA070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x822BA078;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823db9d4
	ctx.lr = 0x822BA080;
	sub_823DB9D4(ctx, base);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BA0AC;
	sub_822A8108(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lvx128 v126,r3,r11
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f27,14192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14192);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x822ba200
	if (ctx.cr6.eq) goto loc_822BA200;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ba0ec
	if (ctx.cr6.eq) goto loc_822BA0EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822ba0f0
	if (!ctx.cr6.eq) goto loc_822BA0F0;
loc_822BA0EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BA0F0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lfs f29,3796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3796);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x822ba11c
	if (!ctx.cr6.eq) goto loc_822BA11C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ba144
	if (ctx.cr6.eq) goto loc_822BA144;
loc_822BA114:
	// lwz r11,412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// b 0x822ba148
	goto loc_822BA148;
loc_822BA11C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ba134
	if (ctx.cr6.eq) goto loc_822BA134;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x822ba114
	if (!ctx.cr6.gt) goto loc_822BA114;
	// lwz r11,420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	// b 0x822ba148
	goto loc_822BA148;
loc_822BA134:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x822ba144
	if (!ctx.cr6.lt) goto loc_822BA144;
	// lwz r11,424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	// b 0x822ba148
	goto loc_822BA148;
loc_822BA144:
	// lwz r11,416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 416);
loc_822BA148:
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx128 v126,r11,r10
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822a8108
	ctx.lr = 0x822BA154;
	sub_822A8108(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lvx128 v63,r3,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f30,31492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31492);
	ctx.f30.f64 = double(temp.f32);
	// vsubfp128 v127,v63,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v126.f32)));
	// beq cr6,0x822ba17c
	if (ctx.cr6.eq) goto loc_822BA17C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,14884(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	ctx.f28.f64 = double(temp.f32);
	// b 0x822ba180
	goto loc_822BA180;
loc_822BA17C:
	// fmr f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f30.f64;
loc_822BA180:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,300(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x822a8108
	ctx.lr = 0x822BA18C;
	sub_822A8108(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,25176(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 25176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// li r10,32
	ctx.r10.s64 = 32;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v62,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v60,r3,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp128 v127,v60,v61,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)), _mm_load_ps(ctx.v127.f32)));
	// beq cr6,0x822ba2d8
	if (ctx.cr6.eq) goto loc_822BA2D8;
	// lwz r30,300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BA1C4;
	sub_822A8108(ctx, base);
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,25168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 25168);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r0,r3
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// fsel f11,f13,f29,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f0.f64;
	// fsel f10,f31,f11,f27
	ctx.f10.f64 = ctx.f31.f64 >= 0.0 ? ctx.f11.f64 : ctx.f27.f64;
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// vmaddfp128 v127,v59,v57,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v57.f32)), _mm_load_ps(ctx.v127.f32)));
	// b 0x822ba2d8
	goto loc_822BA2D8;
loc_822BA200:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 336);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f29,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x822ba220
	if (ctx.cr6.eq) goto loc_822BA220;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-28872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28872);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822ba224
	goto loc_822BA224;
loc_822BA220:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_822BA224:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// beq cr6,0x822ba248
	if (ctx.cr6.eq) goto loc_822BA248;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// b 0x822ba24c
	goto loc_822BA24C;
loc_822BA248:
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
loc_822BA24C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BA254;
	sub_822A8108(ctx, base);
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v56,r0,r3
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f0,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f13,f0,f29
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// fsel f11,f31,f12,f27
	ctx.f11.f64 = ctx.f31.f64 >= 0.0 ? ctx.f12.f64 : ctx.f27.f64;
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v54,v55,0
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// vmulfp128 v127,v56,v54
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v126,v126,v127
	_mm_store_ps(ctx.v126.f32, _mm_sub_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v127.f32)));
	// beq cr6,0x822ba2a0
	if (ctx.cr6.eq) goto loc_822BA2A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,14884(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822ba2a8
	goto loc_822BA2A8;
loc_822BA2A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,31492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31492);
	ctx.f30.f64 = double(temp.f32);
loc_822BA2A8:
	// lwz r30,300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BA2B4;
	sub_822A8108(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,25176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 25176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// li r10,32
	ctx.r10.s64 = 32;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v52,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// lvx128 v53,r3,r10
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp128 v126,v53,v51,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v126.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32)), _mm_load_ps(ctx.v126.f32)));
loc_822BA2D8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8254ab98
	ctx.lr = 0x822BA2E0;
	sub_8254AB98(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,25168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f27,136(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8254e2e0
	ctx.lr = 0x822BA2F8;
	sub_8254E2E0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8254ad08
	ctx.lr = 0x822BA304;
	sub_8254AD08(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lwz r11,-23636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23636);
	// lwz r9,656(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ba324
	if (ctx.cr6.eq) goto loc_822BA324;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x822ba330
	goto loc_822BA330;
loc_822BA324:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822BA330:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vaddfp128 v50,v126,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v127.f32)));
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,31016(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31016);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f29,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f29.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f30,-29232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29232);
	ctx.f30.f64 = double(temp.f32);
	// stvx128 v50,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_822BA360:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f28,f11,f30
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x823dbae8
	ctx.lr = 0x822BA390;
	sub_823DBAE8(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x823dbbc8
	ctx.lr = 0x822BA39C;
	sub_823DBBC8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f27
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f7,f13,f10,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f9.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f6,f13,f27,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f8.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v49,r0,r9
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v48,v49,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v126.f32)));
	// stvx128 v48,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BA3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ba428
	if (ctx.cr6.eq) goto loc_822BA428;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// lvx128 v47,r0,r10
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blt cr6,0x822ba360
	if (ctx.cr6.lt) goto loc_822BA360;
	// b 0x822ba42c
	goto loc_822BA42C;
loc_822BA428:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822BA42C:
	// stfs f29,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8254e338
	ctx.lr = 0x822BA438;
	sub_8254E338(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8254ab20
	ctx.lr = 0x822BA440;
	sub_8254AB20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823dba20
	ctx.lr = 0x822BA460;
	__restfpr_27(ctx, base);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BA464"))) PPC_WEAK_FUNC(sub_822BA464);
PPC_FUNC_IMPL(__imp__sub_822BA464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BA468"))) PPC_WEAK_FUNC(sub_822BA468);
PPC_FUNC_IMPL(__imp__sub_822BA468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x822BA470;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,29952
	ctx.r8.s64 = ctx.r11.s64 + 29952;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f13,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f31,14988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14988);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,3796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f12,344(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// bne cr6,0x822ba55c
	if (!ctx.cr6.eq) goto loc_822BA55C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,352
	ctx.r30.s64 = ctx.r31.s64 + 352;
	// bl 0x822a8108
	ctx.lr = 0x822BA4CC;
	sub_822A8108(ctx, base);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lfs f0,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f9
	ctx.cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// bgt cr6,0x822ba544
	if (ctx.cr6.gt) goto loc_822BA544;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822ba544
	if (ctx.cr6.gt) goto loc_822BA544;
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822ba55c
	if (!ctx.cr6.gt) goto loc_822BA55C;
	// stfs f30,344(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
	// b 0x822ba55c
	goto loc_822BA55C;
loc_822BA544:
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BA550;
	sub_822A8108(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v63,r3,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_822BA55C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822ba61c
	if (!ctx.cr6.eq) goto loc_822BA61C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,352
	ctx.r30.s64 = ctx.r31.s64 + 352;
	// bl 0x822a8108
	ctx.lr = 0x822BA578;
	sub_822A8108(ctx, base);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lfs f0,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f9
	ctx.cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// bgt cr6,0x822ba5fc
	if (ctx.cr6.gt) goto loc_822BA5FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822ba5fc
	if (ctx.cr6.gt) goto loc_822BA5FC;
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822ba5f4
	if (!ctx.cr6.gt) goto loc_822BA5F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f30,344(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// b 0x822ba618
	goto loc_822BA618;
loc_822BA5F4:
	// stb r28,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r28.u8);
	// b 0x822ba61c
	goto loc_822BA61C;
loc_822BA5FC:
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BA608;
	sub_822A8108(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v62,r3,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
loc_822BA618:
	// stb r29,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r29.u8);
loc_822BA61C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ba740
	if (!ctx.cr6.eq) goto loc_822BA740;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BA630;
	sub_822A8108(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v127,r3,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x8254c888
	ctx.lr = 0x822BA640;
	sub_8254C888(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lvx128 v61,r0,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v60,v61,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v127.f32)));
	// stvx128 v60,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822a8108
	ctx.lr = 0x822BA65C;
	sub_822A8108(ctx, base);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// vspltisw128 v59,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_set1_epi32(int(0x0)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v58,r0,r8
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v57,v59,v58
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v58.f32)));
	// stvx128 v57,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8216c9c0
	ctx.lr = 0x822BA680;
	sub_8216C9C0(ctx, base);
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822ba6fc
	if (!ctx.cr6.eq) goto loc_822BA6FC;
	// fabs f13,f31
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-28412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822ba6e8
	if (!ctx.cr6.gt) goto loc_822BA6E8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BA6AC;
	sub_822A8108(ctx, base);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8254c8c0
	ctx.lr = 0x822BA6C0;
	sub_8254C8C0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v56,r0,r10
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v55,v56,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v127.f32)));
	// stvx128 v55,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8216c9c0
	ctx.lr = 0x822BA6E0;
	sub_8216C9C0(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// b 0x822ba6ec
	goto loc_822BA6EC;
loc_822BA6E8:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
loc_822BA6EC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x822ba6f8
	if (!ctx.cr6.lt) goto loc_822BA6F8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_822BA6F8:
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_822BA6FC:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,30280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822ba73c
	if (!ctx.cr6.lt) goto loc_822BA73C;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x822ba720
	if (!ctx.cr6.lt) goto loc_822BA720;
	// li r11,2
	ctx.r11.s64 = 2;
loc_822BA720:
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822ba73c
	if (!ctx.cr6.eq) goto loc_822BA73C;
	// stfs f30,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// b 0x822ba740
	goto loc_822BA740;
loc_822BA73C:
	// stb r28,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r28.u8);
loc_822BA740:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BA758"))) PPC_WEAK_FUNC(sub_822BA758);
PPC_FUNC_IMPL(__imp__sub_822BA758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d4
	ctx.lr = 0x822BA760;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r31,0(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f30,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// lwz r3,324(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x82267490
	ctx.lr = 0x822BA79C;
	sub_82267490(ctx, base);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,228(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 228);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822ba7bc
	if (!ctx.cr6.eq) goto loc_822BA7BC;
	// lwz r11,232(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822ba7c0
	if (ctx.cr6.eq) goto loc_822BA7C0;
loc_822BA7BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BA7C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lis r9,23772
	ctx.r9.s64 = 1557921792;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// ori r6,r9,64167
	ctx.r6.u64 = ctx.r9.u64 | 64167;
	// lfs f13,14348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14348);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r7,r11,2192
	ctx.r7.s64 = ctx.r11.s64 + 2192;
	// bne cr6,0x822ba8a8
	if (!ctx.cr6.eq) goto loc_822BA8A8;
	// lbz r11,380(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba8a8
	if (ctx.cr6.eq) goto loc_822BA8A8;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mulld r10,r9,r6
	ctx.r10.s64 = ctx.r9.s64 * ctx.r6.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rldicl r5,r11,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lfs f0,260(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x822ba8b0
	if (!ctx.cr6.lt) goto loc_822BA8B0;
	// lwz r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822ba8b0
	if (!ctx.cr6.lt) goto loc_822BA8B0;
	// lwz r10,324(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822BA854:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822ba88c
	if (ctx.cr6.lt) goto loc_822BA88C;
	// bgt cr6,0x822ba8b0
	if (ctx.cr6.gt) goto loc_822BA8B0;
	// lwz r10,328(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 328);
	// lbz r28,11(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// srw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ba88c
	if (ctx.cr6.eq) goto loc_822BA88C;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ba8a0
	if (!ctx.cr6.eq) goto loc_822BA8A0;
loc_822BA88C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822ba854
	if (ctx.cr6.lt) goto loc_822BA854;
	// b 0x822ba8b0
	goto loc_822BA8B0;
loc_822BA8A0:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x822ba8b0
	goto loc_822BA8B0;
loc_822BA8A8:
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_822BA8B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f11,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x822baab8
	if (ctx.cr6.lt) goto loc_822BAAB8;
	// lwz r10,324(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// rlwinm r11,r21,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,13
	ctx.r10.s64 = ctx.r11.s64 + 13;
	// addi r9,r11,29
	ctx.r9.s64 = ctx.r11.s64 + 29;
loc_822BA8E0:
	// lwz r11,-13(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822ba950
	if (ctx.cr6.lt) goto loc_822BA950;
	// bgt cr6,0x822bab6c
	if (ctx.cr6.gt) goto loc_822BAB6C;
	// lwz r11,328(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 328);
	// lbz r31,-2(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// srw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba950
	if (ctx.cr6.eq) goto loc_822BA950;
	// lbz r11,380(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba928
	if (ctx.cr6.eq) goto loc_822BA928;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ba950
	if (!ctx.cr6.eq) goto loc_822BA950;
loc_822BA928:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lfs f0,-9(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba94c
	if (ctx.cr6.eq) goto loc_822BA94C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x822ba948
	if (ctx.cr6.eq) goto loc_822BA948;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x822ba94c
	goto loc_822BA94C;
loc_822BA948:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_822BA94C:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_822BA950:
	// lwz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822ba9c0
	if (ctx.cr6.lt) goto loc_822BA9C0;
	// bgt cr6,0x822bab58
	if (ctx.cr6.gt) goto loc_822BAB58;
	// lwz r11,328(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 328);
	// lbz r31,-2(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// srw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba9c0
	if (ctx.cr6.eq) goto loc_822BA9C0;
	// lbz r11,380(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba998
	if (ctx.cr6.eq) goto loc_822BA998;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ba9c0
	if (!ctx.cr6.eq) goto loc_822BA9C0;
loc_822BA998:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lfs f0,-9(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba9bc
	if (ctx.cr6.eq) goto loc_822BA9BC;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x822ba9b8
	if (ctx.cr6.eq) goto loc_822BA9B8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x822ba9bc
	goto loc_822BA9BC;
loc_822BA9B8:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_822BA9BC:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_822BA9C0:
	// lwz r11,19(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822baa30
	if (ctx.cr6.lt) goto loc_822BAA30;
	// bgt cr6,0x822bab60
	if (ctx.cr6.gt) goto loc_822BAB60;
	// lwz r11,328(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 328);
	// lbz r31,14(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// srw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822baa30
	if (ctx.cr6.eq) goto loc_822BAA30;
	// lbz r11,380(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822baa08
	if (ctx.cr6.eq) goto loc_822BAA08;
	// lbz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822baa30
	if (!ctx.cr6.eq) goto loc_822BAA30;
loc_822BAA08:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lfs f0,7(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822baa2c
	if (ctx.cr6.eq) goto loc_822BAA2C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x822baa28
	if (ctx.cr6.eq) goto loc_822BAA28;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x822baa2c
	goto loc_822BAA2C;
loc_822BAA28:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_822BAA2C:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_822BAA30:
	// lwz r11,35(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 35);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822baaa0
	if (ctx.cr6.lt) goto loc_822BAAA0;
	// bgt cr6,0x822bab68
	if (ctx.cr6.gt) goto loc_822BAB68;
	// lwz r11,328(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 328);
	// lbz r31,30(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 30);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// srw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822baaa0
	if (ctx.cr6.eq) goto loc_822BAAA0;
	// lbz r11,380(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822baa78
	if (ctx.cr6.eq) goto loc_822BAA78;
	// lbz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822baaa0
	if (!ctx.cr6.eq) goto loc_822BAAA0;
loc_822BAA78:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lfs f0,23(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822baa9c
	if (ctx.cr6.eq) goto loc_822BAA9C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x822baa98
	if (ctx.cr6.eq) goto loc_822BAA98;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x822baa9c
	goto loc_822BAA9C;
loc_822BAA98:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_822BAA9C:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_822BAAA0:
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ba8e0
	if (ctx.cr6.lt) goto loc_822BA8E0;
loc_822BAAB8:
	// cmpw cr6,r21,r3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822bab6c
	if (!ctx.cr6.lt) goto loc_822BAB6C;
	// lwz r10,324(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// rlwinm r11,r21,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822BAAD4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822bab44
	if (ctx.cr6.lt) goto loc_822BAB44;
	// bgt cr6,0x822bab6c
	if (ctx.cr6.gt) goto loc_822BAB6C;
	// lwz r10,328(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 328);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bab44
	if (ctx.cr6.eq) goto loc_822BAB44;
	// lbz r10,380(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bab1c
	if (ctx.cr6.eq) goto loc_822BAB1C;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822bab44
	if (!ctx.cr6.eq) goto loc_822BAB44;
loc_822BAB1C:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bab40
	if (ctx.cr6.eq) goto loc_822BAB40;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x822bab3c
	if (ctx.cr6.eq) goto loc_822BAB3C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x822bab40
	goto loc_822BAB40;
loc_822BAB3C:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_822BAB40:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_822BAB44:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r21,r3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822baad4
	if (ctx.cr6.lt) goto loc_822BAAD4;
	// b 0x822bab6c
	goto loc_822BAB6C;
loc_822BAB58:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x822bab6c
	goto loc_822BAB6C;
loc_822BAB60:
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// b 0x822bab6c
	goto loc_822BAB6C;
loc_822BAB68:
	// addi r21,r21,3
	ctx.r21.s64 = ctx.r21.s64 + 3;
loc_822BAB6C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x822bad64
	if (!ctx.cr6.gt) goto loc_822BAD64;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mulld r11,r11,r6
	ctx.r11.s64 = ctx.r11.s64 * ctx.r6.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r11,9
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// rldicl r11,r11,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// bge cr6,0x822bad64
	if (!ctx.cr6.lt) goto loc_822BAD64;
	// lwz r10,324(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,14196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14196);
	ctx.f12.f64 = double(temp.f32);
loc_822BABD4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822bac4c
	if (ctx.cr6.lt) goto loc_822BAC4C;
	// bgt cr6,0x822bad64
	if (ctx.cr6.gt) goto loc_822BAD64;
	// lwz r10,328(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 328);
	// lbz r9,11(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// srw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822bac44
	if (ctx.cr6.eq) goto loc_822BAC44;
	// lbz r10,380(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bac1c
	if (ctx.cr6.eq) goto loc_822BAC1C;
	// lbz r10,13(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 13);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822bac44
	if (!ctx.cr6.eq) goto loc_822BAC44;
loc_822BAC1C:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bac40
	if (ctx.cr6.eq) goto loc_822BAC40;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x822bac3c
	if (ctx.cr6.eq) goto loc_822BAC3C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x822bac40
	goto loc_822BAC40;
loc_822BAC3C:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_822BAC40:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_822BAC44:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x822bac70
	if (ctx.cr6.lt) goto loc_822BAC70;
loc_822BAC4C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822babd4
	if (ctx.cr6.lt) goto loc_822BABD4;
	// stw r21,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r21.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823d9224
	__restgprlr_19(ctx, base);
	return;
loc_822BAC70:
	// lbz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// lbz r10,10(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bad64
	if (ctx.cr6.eq) goto loc_822BAD64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r23,176
	ctx.r29.s64 = ctx.r23.s64 + 176;
	// addi r28,r23,184
	ctx.r28.s64 = ctx.r23.s64 + 184;
	// rlwinm r22,r25,2,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C;
	// li r24,16
	ctx.r24.s64 = 16;
	// lfs f31,14192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f31.f64 = double(temp.f32);
loc_822BACA4:
	// lhz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,324(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82267498
	ctx.lr = 0x822BACBC;
	sub_82267498(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,324(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// bl 0x822674b0
	ctx.lr = 0x822BACC8;
	sub_822674B0(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r7,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r7.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lhz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// sth r11,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r11.u16);
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r30,r3,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// stvx128 v62,r31,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,324(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// bl 0x822674c8
	ctx.lr = 0x822BAD20;
	sub_822674C8(ctx, base);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x822bad30
	if (!ctx.cr6.eq) goto loc_822BAD30;
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_822BAD30:
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwx r10,r30,r25
	PPC_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r10.u32);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwimi r9,r8,6,19,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0x1FC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE03F);
	// rlwinm r7,r9,0,30,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC3;
	// or r6,r7,r22
	ctx.r6.u64 = ctx.r7.u64 | ctx.r22.u64;
	// stwx r6,r30,r25
	PPC_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r6.u32);
	// lbz r5,10(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 10);
	// cmpw cr6,r26,r5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822baca4
	if (ctx.cr6.lt) goto loc_822BACA4;
loc_822BAD64:
	// stw r21,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r21.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823d9224
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BAD78"))) PPC_WEAK_FUNC(sub_822BAD78);
PPC_FUNC_IMPL(__imp__sub_822BAD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822badc4
	if (ctx.cr6.eq) goto loc_822BADC4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,12
	ctx.r8.s64 = 12;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// lvlx128 v62,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v62,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vmaddfp v11,v13,v12,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_822BADC4:
	// lvx128 v61,r11,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BADD0"))) PPC_WEAK_FUNC(sub_822BADD0);
PPC_FUNC_IMPL(__imp__sub_822BADD0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bade4
	if (!ctx.cr6.eq) goto loc_822BADE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822BADE4:
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822bae0c
	if (!ctx.cr6.eq) goto loc_822BAE0C;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r9,r10,19,0,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF80000;
	// srawi r3,r9,25
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 25;
	// blr 
	return;
loc_822BAE0C:
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r9,19,0,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF80000;
	// srawi r3,r8,25
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 25;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BAE24"))) PPC_WEAK_FUNC(sub_822BAE24);
PPC_FUNC_IMPL(__imp__sub_822BAE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BAE28"))) PPC_WEAK_FUNC(sub_822BAE28);
PPC_FUNC_IMPL(__imp__sub_822BAE28) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bae3c
	if (!ctx.cr6.eq) goto loc_822BAE3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822BAE3C:
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822bae64
	if (!ctx.cr6.eq) goto loc_822BAE64;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r9,r10,26,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFC000000;
	// srawi r3,r9,28
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 28;
	// blr 
	return;
loc_822BAE64:
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r9,26,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC000000;
	// srawi r3,r8,28
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BAE7C"))) PPC_WEAK_FUNC(sub_822BAE7C);
PPC_FUNC_IMPL(__imp__sub_822BAE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BAE80"))) PPC_WEAK_FUNC(sub_822BAE80);
PPC_FUNC_IMPL(__imp__sub_822BAE80) {
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
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x82640ad8
	ctx.lr = 0x822BAEA0;
	sub_82640AD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x82267490
	ctx.lr = 0x822BAEAC;
	sub_82267490(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822baef8
	if (!ctx.cr6.gt) goto loc_822BAEF8;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_822BAEC4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822baedc
	if (ctx.cr6.eq) goto loc_822BAEDC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BAEDC:
	// lbz r10,10(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822baeec
	if (ctx.cr6.gt) goto loc_822BAEEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822BAEEC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x822baec4
	if (!ctx.cr0.eq) goto loc_822BAEC4;
loc_822BAEF8:
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
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

__attribute__((alias("__imp__sub_822BAF14"))) PPC_WEAK_FUNC(sub_822BAF14);
PPC_FUNC_IMPL(__imp__sub_822BAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BAF18"))) PPC_WEAK_FUNC(sub_822BAF18);
PPC_FUNC_IMPL(__imp__sub_822BAF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x822BAF20;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x82640ad8
	ctx.lr = 0x822BAF40;
	sub_82640AD8(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822bb0b0
	if (!ctx.cr6.lt) goto loc_822BB0B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r27,64
	ctx.r27.s64 = 64;
	// li r24,80
	ctx.r24.s64 = 80;
	// lfs f30,14192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f30.f64 = double(temp.f32);
	// li r25,16
	ctx.r25.s64 = 16;
	// lfs f31,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_822BAF74:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bge cr6,0x822bb068
	if (!ctx.cr6.lt) goto loc_822BB068;
loc_822BAF84:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba758
	ctx.lr = 0x822BAF9C;
	sub_822BA758(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r6,r28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822bb068
	if (!ctx.cr6.lt) goto loc_822BB068;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mulli r9,r6,368
	ctx.r9.s64 = ctx.r6.s64 * 368;
	// lhz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 180);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r11,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r5,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r5.u16);
	// lhz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 188);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// sth r3,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r3.u16);
	// lvx128 v63,r11,r27
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r4,330(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 330);
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822bb008
	if (ctx.cr6.eq) goto loc_822BB008;
	// lfs f0,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822bb00c
	goto loc_822BB00C;
loc_822BB008:
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
loc_822BB00C:
	// stfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lvx128 v62,r11,r24
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r9,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// bne cr6,0x822bb02c
	if (!ctx.cr6.eq) goto loc_822BB02C;
	// stfs f30,28(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_822BB02C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r9,330(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 330);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// rlwimi r10,r6,4,21,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x7F0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF80F);
	// rlwimi r9,r26,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r26.u32, 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r4,r10,2,19,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FFC;
	// rlwinm r3,r5,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// or r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r3,r3,0,30,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFE003;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// blt cr6,0x822baf84
	if (ctx.cr6.lt) goto loc_822BAF84;
loc_822BB068:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822bb078
	if (!ctx.cr0.lt) goto loc_822BB078;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_822BB078:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba758
	ctx.lr = 0x822BB098;
	sub_822BA758(ctx, base);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// subf r30,r28,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r28.s64;
	// blt cr6,0x822baf74
	if (ctx.cr6.lt) goto loc_822BAF74;
loc_822BB0B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BB0C0"))) PPC_WEAK_FUNC(sub_822BB0C0);
PPC_FUNC_IMPL(__imp__sub_822BB0C0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r4,254(r10)
	PPC_STORE_U8(ctx.r10.u32 + 254, ctx.r4.u8);
	// bne cr6,0x822bb0fc
	if (!ctx.cr6.eq) goto loc_822BB0FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,276(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 276, temp.u32);
	// stfs f0,284(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 284, temp.u32);
	// stfs f0,288(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 288, temp.u32);
loc_822BB0FC:
	// lis r8,-32122
	ctx.r8.s64 = -2105147392;
	// lis r7,23772
	ctx.r7.s64 = 1557921792;
	// addi r6,r8,2192
	ctx.r6.s64 = ctx.r8.s64 + 2192;
	// ori r5,r7,64167
	ctx.r5.u64 = ctx.r7.u64 | 64167;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lwz r7,2192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2192);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulld r9,r7,r5
	ctx.r9.s64 = ctx.r7.s64 * ctx.r5.s64;
	// lfs f0,14348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14348);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r3,r11,9
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rldicl r11,r11,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stw r9,2192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2192, ctx.r9.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,280(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 280, temp.u32);
	// beq cr6,0x822bb188
	if (ctx.cr6.eq) goto loc_822BB188;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bb188
	if (ctx.cr6.eq) goto loc_822BB188;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bb188
	if (ctx.cr6.eq) goto loc_822BB188;
	// bl 0x82348880
	ctx.lr = 0x822BB178;
	sub_82348880(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BB188:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,256(r10)
	PPC_STORE_U8(ctx.r10.u32 + 256, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB1A0"))) PPC_WEAK_FUNC(sub_822BB1A0);
PPC_FUNC_IMPL(__imp__sub_822BB1A0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bb1d8
	if (ctx.cr6.eq) goto loc_822BB1D8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r9,30848
	ctx.r10.s64 = ctx.r9.s64 + 30848;
loc_822BB1B8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822bb1e0
	if (ctx.cr6.eq) goto loc_822BB1E0;
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,30864
	ctx.r10.s64 = ctx.r10.s64 + 30864;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822bb1b8
	if (ctx.cr6.lt) goto loc_822BB1B8;
loc_822BB1D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822BB1E0:
	// mulli r11,r11,30864
	ctx.r11.s64 = ctx.r11.s64 * 30864;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r7,30848(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30848, ctx.r7.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB208"))) PPC_WEAK_FUNC(sub_822BB208);
PPC_FUNC_IMPL(__imp__sub_822BB208) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bb240
	if (ctx.cr6.eq) goto loc_822BB240;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_822BB224:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822bb248
	if (ctx.cr6.eq) goto loc_822BB248;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,30864
	ctx.r9.s64 = ctx.r9.s64 + 30864;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822bb224
	if (ctx.cr6.lt) goto loc_822BB224;
loc_822BB240:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822BB248:
	// mulli r10,r10,30864
	ctx.r10.s64 = ctx.r10.s64 * 30864;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r9,30848(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30848);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bb240
	if (ctx.cr6.eq) goto loc_822BB240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,30848(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30848, ctx.r9.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB278"))) PPC_WEAK_FUNC(sub_822BB278);
PPC_FUNC_IMPL(__imp__sub_822BB278) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x822bb2bc
	if (!ctx.cr6.gt) goto loc_822BB2BC;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r6,16
	ctx.r6.s64 = 16;
loc_822BB294:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne 0x822bb294
	if (!ctx.cr0.eq) goto loc_822BB294;
loc_822BB2BC:
	// lhz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB2D8"))) PPC_WEAK_FUNC(sub_822BB2D8);
PPC_FUNC_IMPL(__imp__sub_822BB2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bb318
	if (ctx.cr6.eq) goto loc_822BB318;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822bb320
	if (!ctx.cr6.eq) goto loc_822BB320;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
loc_822BB318:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822BB320:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB330"))) PPC_WEAK_FUNC(sub_822BB330);
PPC_FUNC_IMPL(__imp__sub_822BB330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bb384
	if (ctx.cr6.eq) goto loc_822BB384;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb36c
	if (ctx.cr6.eq) goto loc_822BB36C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_822BB36C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_822BB384:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BB39C"))) PPC_WEAK_FUNC(sub_822BB39C);
PPC_FUNC_IMPL(__imp__sub_822BB39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB3A0"))) PPC_WEAK_FUNC(sub_822BB3A0);
PPC_FUNC_IMPL(__imp__sub_822BB3A0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bb3d0
	if (ctx.cr6.eq) goto loc_822BB3D0;
	// bl 0x821c4458
	ctx.lr = 0x822BB3CC;
	sub_821C4458(ctx, base);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
loc_822BB3D0:
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822bb3ec
	if (ctx.cr6.eq) goto loc_822BB3EC;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,18180
	ctx.r3.s64 = ctx.r11.s64 + 18180;
	// bl 0x822bb208
	ctx.lr = 0x822BB3E8;
	sub_822BB208(ctx, base);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
loc_822BB3EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826fd258
	ctx.lr = 0x822BB3F4;
	sub_826FD258(ctx, base);
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

__attribute__((alias("__imp__sub_822BB40C"))) PPC_WEAK_FUNC(sub_822BB40C);
PPC_FUNC_IMPL(__imp__sub_822BB40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB410"))) PPC_WEAK_FUNC(sub_822BB410);
PPC_FUNC_IMPL(__imp__sub_822BB410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x826fc5a8
	ctx.lr = 0x822BB428;
	sub_826FC5A8(ctx, base);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,192
	ctx.r9.s64 = 192;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lfs f0,14192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14192);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stvx128 v63,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822BB470"))) PPC_WEAK_FUNC(sub_822BB470);
PPC_FUNC_IMPL(__imp__sub_822BB470) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x822a8d98
	ctx.lr = 0x822BB494;
	sub_822A8D98(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-30048
	ctx.r3.s64 = ctx.r11.s64 + -30048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82130000
	ctx.lr = 0x822BB4A8;
	sub_82130000(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// addi r3,r10,18180
	ctx.r3.s64 = ctx.r10.s64 + 18180;
	// bl 0x822bb1a0
	ctx.lr = 0x822BB4B4;
	sub_822BB1A0(ctx, base);
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// bl 0x8254ce70
	ctx.lr = 0x822BB4BC;
	sub_8254CE70(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8255b9a8
	ctx.lr = 0x822BB4CC;
	sub_8255B9A8(ctx, base);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lwz r6,300(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r11,25168
	ctx.r11.s64 = 25168;
	// lfs f0,3732(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v61,r3,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v60,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bb51c
	if (!ctx.cr6.eq) goto loc_822BB51C;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r11,r11,-32416
	ctx.r11.s64 = ctx.r11.s64 + -32416;
loc_822BB51C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bb560
	if (ctx.cr6.eq) goto loc_822BB560;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb560
	if (ctx.cr6.eq) goto loc_822BB560;
	// lwz r8,300(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,25292(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 25292, temp.u32);
	// stfs f13,25296(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 25296, temp.u32);
	// stfs f0,25300(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 25300, temp.u32);
loc_822BB560:
	// lwz r11,668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bb594
	if (ctx.cr6.eq) goto loc_822BB594;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb594
	if (ctx.cr6.eq) goto loc_822BB594;
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,25308(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 25308, temp.u32);
	// stfs f13,25312(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 25312, temp.u32);
	// stfs f0,25316(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 25316, temp.u32);
loc_822BB594:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BB5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,300(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,-31128(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,7444(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,25324(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 25324, temp.u32);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,25328(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 25328, temp.u32);
	// bl 0x822a8d98
	ctx.lr = 0x822BB5DC;
	sub_822A8D98(ctx, base);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r4,-30100
	ctx.r3.s64 = ctx.r4.s64 + -30100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x822BB5F0;
	sub_82130000(ctx, base);
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

__attribute__((alias("__imp__sub_822BB608"))) PPC_WEAK_FUNC(sub_822BB608);
PPC_FUNC_IMPL(__imp__sub_822BB608) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x822a8d98
	ctx.lr = 0x822BB62C;
	sub_822A8D98(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-30008
	ctx.r3.s64 = ctx.r11.s64 + -30008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82130000
	ctx.lr = 0x822BB640;
	sub_82130000(ctx, base);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bb658
	if (ctx.cr6.eq) goto loc_822BB658;
	// bl 0x821c4458
	ctx.lr = 0x822BB654;
	sub_821C4458(ctx, base);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
loc_822BB658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826fd2b8
	ctx.lr = 0x822BB660;
	sub_826FD2B8(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb68c
	if (ctx.cr6.eq) goto loc_822BB68C;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// addi r8,r10,-32416
	ctx.r8.s64 = ctx.r10.s64 + -32416;
	// addi r3,r9,18180
	ctx.r3.s64 = ctx.r9.s64 + 18180;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x822bb208
	ctx.lr = 0x822BB688;
	sub_822BB208(ctx, base);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
loc_822BB68C:
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

__attribute__((alias("__imp__sub_822BB6A4"))) PPC_WEAK_FUNC(sub_822BB6A4);
PPC_FUNC_IMPL(__imp__sub_822BB6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BB6A8"))) PPC_WEAK_FUNC(sub_822BB6A8);
PPC_FUNC_IMPL(__imp__sub_822BB6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x822BB6B0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823db9d8
	ctx.lr = 0x822BB6B8;
	sub_823DB9D8(ctx, base);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,14988(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14988);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f13,224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bb6f4
	if (!ctx.cr6.gt) goto loc_822BB6F4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// b 0x822bbb40
	goto loc_822BBB40;
loc_822BB6F4:
	// bl 0x822a8108
	ctx.lr = 0x822BB6F8;
	sub_822A8108(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v127,r3,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x8254c888
	ctx.lr = 0x822BB708;
	sub_8254C888(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v62,v63,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v127.f32)));
	// stvx128 v62,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822a8108
	ctx.lr = 0x822BB724;
	sub_822A8108(ctx, base);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v60,r0,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v59,v61,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v59,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8216c9c0
	ctx.lr = 0x822BB748;
	sub_8216C9C0(ctx, base);
	// lbz r6,337(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 337);
	// li r27,1
	ctx.r27.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822bb780
	if (!ctx.cr6.eq) goto loc_822BB780;
	// lbz r11,338(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 338);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bb778
	if (!ctx.cr6.eq) goto loc_822BB778;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bb780
	if (ctx.cr6.eq) goto loc_822BB780;
loc_822BB778:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x822bb784
	goto loc_822BB784;
loc_822BB780:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822BB784:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,332(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// li r26,2
	ctx.r26.s64 = 2;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f28,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x822bb80c
	if (!ctx.cr6.eq) goto loc_822BB80C;
	// fabs f13,f31
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-28412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bb7f8
	if (!ctx.cr6.gt) goto loc_822BB7F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a8108
	ctx.lr = 0x822BB7BC;
	sub_822A8108(ctx, base);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8254c8c0
	ctx.lr = 0x822BB7D0;
	sub_8254C8C0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v58,r0,r10
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v57,v58,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v127.f32)));
	// stvx128 v57,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8216c9c0
	ctx.lr = 0x822BB7F0;
	sub_8216C9C0(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// b 0x822bb7fc
	goto loc_822BB7FC;
loc_822BB7F8:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
loc_822BB7FC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bge cr6,0x822bb808
	if (!ctx.cr6.lt) goto loc_822BB808;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822BB808:
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_822BB80C:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,18204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18204);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x822bb990
	if (!ctx.cr6.eq) goto loc_822BB990;
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822bb868
	if (ctx.cr6.eq) goto loc_822BB868;
	// fadds f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsel f1,f31,f31,f0
	ctx.f1.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// bl 0x822ba070
	ctx.lr = 0x822BB84C;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb868
	if (ctx.cr6.eq) goto loc_822BB868;
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// stb r27,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r27.u8);
	// b 0x822bbb04
	goto loc_822BBB04;
loc_822BB868:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r7,r7,255
	ctx.r7.u64 = ctx.r7.u64 | 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsel f29,f31,f31,f0
	ctx.f29.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822ba070
	ctx.lr = 0x822BB88C;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb8a4
	if (ctx.cr6.eq) goto loc_822BB8A4;
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// b 0x822bbb00
	goto loc_822BBB00;
loc_822BB8A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822bb8e0
	if (!ctx.cr6.eq) goto loc_822BB8E0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba070
	ctx.lr = 0x822BB8C4;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb8e0
	if (ctx.cr6.eq) goto loc_822BB8E0;
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// stb r27,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r27.u8);
	// b 0x822bbb04
	goto loc_822BBB04;
loc_822BB8E0:
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r7,65280
	ctx.r7.u64 = ctx.r7.u64 | 65280;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsel f30,f0,f31,f13
	ctx.f30.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822ba070
	ctx.lr = 0x822BB908;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb924
	if (ctx.cr6.eq) goto loc_822BB924;
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// stb r27,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r27.u8);
	// b 0x822bbb04
	goto loc_822BBB04;
loc_822BB924:
	// li r7,-16436
	ctx.r7.s64 = -16436;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba070
	ctx.lr = 0x822BB93C;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb954
	if (ctx.cr6.eq) goto loc_822BB954;
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// b 0x822bbb00
	goto loc_822BBB00;
loc_822BB954:
	// li r7,-256
	ctx.r7.s64 = -256;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba070
	ctx.lr = 0x822BB96C;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r27,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r30,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r30.u8);
	// beq cr6,0x822bb988
	if (ctx.cr6.eq) goto loc_822BB988;
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// b 0x822bbb04
	goto loc_822BBB04;
loc_822BB988:
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// b 0x822bbb04
	goto loc_822BBB04;
loc_822BB990:
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822bb9dc
	if (ctx.cr6.eq) goto loc_822BB9DC;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r7,-96
	ctx.r7.s64 = -6291456;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r7,8687
	ctx.r7.u64 = ctx.r7.u64 | 8687;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsel f1,f0,f31,f13
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// bl 0x822ba070
	ctx.lr = 0x822BB9C0;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bb9dc
	if (ctx.cr6.eq) goto loc_822BB9DC;
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// stb r27,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r27.u8);
	// b 0x822bbb04
	goto loc_822BBB04;
loc_822BB9DC:
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r7,-91
	ctx.r7.s64 = -5963776;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r7,r7,10280
	ctx.r7.u64 = ctx.r7.u64 | 10280;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsel f29,f0,f31,f13
	ctx.f29.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822ba070
	ctx.lr = 0x822BBA04;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bba1c
	if (ctx.cr6.eq) goto loc_822BBA1C;
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// b 0x822bbb00
	goto loc_822BBB00;
loc_822BBA1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822bba5c
	if (!ctx.cr6.eq) goto loc_822BBA5C;
	// lis r7,-96
	ctx.r7.s64 = -6291456;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r7,8687
	ctx.r7.u64 = ctx.r7.u64 | 8687;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba070
	ctx.lr = 0x822BBA40;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bba5c
	if (ctx.cr6.eq) goto loc_822BBA5C;
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// stb r27,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r27.u8);
	// b 0x822bbb04
	goto loc_822BBB04;
loc_822BBA5C:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// li r7,-23296
	ctx.r7.s64 = -23296;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsel f30,f31,f31,f0
	ctx.f30.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822ba070
	ctx.lr = 0x822BBA7C;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bba98
	if (ctx.cr6.eq) goto loc_822BBA98;
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// stb r27,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r27.u8);
	// b 0x822bbb04
	goto loc_822BBB04;
loc_822BBA98:
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r7,r7,62719
	ctx.r7.u64 = ctx.r7.u64 | 62719;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba070
	ctx.lr = 0x822BBAB4;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bbacc
	if (ctx.cr6.eq) goto loc_822BBACC;
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// stb r30,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r30.u8);
	// b 0x822bbb00
	goto loc_822BBB00;
loc_822BBACC:
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ba070
	ctx.lr = 0x822BBAE4;
	sub_822BA070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r27,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bbafc
	if (ctx.cr6.eq) goto loc_822BBAFC;
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// b 0x822bbb00
	goto loc_822BBB00;
loc_822BBAFC:
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
loc_822BBB00:
	// stb r30,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r30.u8);
loc_822BBB04:
	// lbz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bbb44
	if (!ctx.cr6.eq) goto loc_822BBB44;
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822bbb44
	if (!ctx.cr6.lt) goto loc_822BBB44;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bge cr6,0x822bbb34
	if (!ctx.cr6.lt) goto loc_822BBB34;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822BBB34:
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822bbb44
	if (!ctx.cr6.eq) goto loc_822BBB44;
loc_822BBB40:
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
loc_822BBB44:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823dba24
	ctx.lr = 0x822BBB58;
	__restfpr_28(ctx, base);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBB5C"))) PPC_WEAK_FUNC(sub_822BBB5C);
PPC_FUNC_IMPL(__imp__sub_822BBB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BBB60"))) PPC_WEAK_FUNC(sub_822BBB60);
PPC_FUNC_IMPL(__imp__sub_822BBB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c4
	ctx.lr = 0x822BBB68;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823db9cc
	ctx.lr = 0x822BBB70;
	sub_823DB9CC(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r3,-3660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3660);
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x8226a798
	ctx.lr = 0x822BBBA0;
	sub_8226A798(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822bbed8
	if (ctx.cr6.eq) goto loc_822BBED8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f26,7444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lfs f29,31292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31292);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f27,14988(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14988);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32122
	ctx.r9.s64 = -2105147392;
	// lfs f30,14884(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14884);
	ctx.f30.f64 = double(temp.f32);
	// lis r8,-32122
	ctx.r8.s64 = -2105147392;
	// lfs f31,3796(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,-32122
	ctx.r7.s64 = -2105147392;
	// lis r6,-32122
	ctx.r6.s64 = -2105147392;
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r25,r11,-31664
	ctx.r25.s64 = ctx.r11.s64 + -31664;
	// addi r24,r10,-31648
	ctx.r24.s64 = ctx.r10.s64 + -31648;
	// addi r23,r9,2240
	ctx.r23.s64 = ctx.r9.s64 + 2240;
	// addi r22,r8,2528
	ctx.r22.s64 = ctx.r8.s64 + 2528;
	// addi r21,r7,2352
	ctx.r21.s64 = ctx.r7.s64 + 2352;
	// addi r20,r6,2384
	ctx.r20.s64 = ctx.r6.s64 + 2384;
loc_822BBC08:
	// lwz r11,300(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// lwz r10,25104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x822bbed8
	if (ctx.cr6.eq) goto loc_822BBED8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r26,6(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822bbecc
	if (ctx.cr6.eq) goto loc_822BBECC;
	// rlwinm r11,r26,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r26,27
	ctx.r10.u64 = ctx.r26.u32 & 0x1F;
	// addi r9,r11,102
	ctx.r9.s64 = ctx.r11.s64 + 102;
	// slw r8,r18,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822bbecc
	if (!ctx.cr6.eq) goto loc_822BBECC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BBC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822BBC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// lvx128 v62,r0,r17
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lvx128 v61,r0,r29
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v60,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stvx128 v60,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BBCB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// lfs f2,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fsel f8,f12,f0,f13
	ctx.f8.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmadds f11,f5,f10,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f10,f7,f1,f3
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f3.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f8,f30,f28
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f13,f2,f9,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f12,f2,f12,f10
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// blt cr6,0x822bbecc
	if (ctx.cr6.lt) goto loc_822BBECC;
	// fcmpu cr6,f12,f25
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
	// ble cr6,0x822bbd24
	if (!ctx.cr6.gt) goto loc_822BBD24;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822bbecc
	if (ctx.cr6.gt) goto loc_822BBECC;
loc_822BBD24:
	// fsubs f0,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f27.f64));
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822bbd38
	if (ctx.cr6.gt) goto loc_822BBD38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BBD38:
	// lvx128 v59,r0,r16
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v58,r0,r29
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,300(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// vsubfp128 v57,v58,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v59.f32)));
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lfs f13,25424(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25424);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,25428(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25428);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v57,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x822bbecc
	if (ctx.cr6.gt) goto loc_822BBECC;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x822bbecc
	if (ctx.cr6.gt) goto loc_822BBECC;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_822BBD98:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822bbdc0
	if (!ctx.cr6.lt) goto loc_822BBDC0;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r6,r7,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r7,r5,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822bbd98
	if (ctx.cr6.eq) goto loc_822BBD98;
loc_822BBDC0:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bbecc
	if (!ctx.cr6.eq) goto loc_822BBECC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f26,144(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r15,r1,192
	ctx.r15.s64 = ctx.r1.s64 + 192;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stwx r31,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r31.u32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lvx128 v60,r0,r22
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r3,300(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// lvx128 v0,r0,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltisw128 v54,0
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v59,r0,r24
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cntlzw r10,r26
	ctx.r10.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lvx128 v63,r0,r20
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvx128 v61,r0,r21
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r0,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lvx128 v53,r0,r4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v56,v62,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vrsqrtefp128 v55,v56
	_mm_store_ps(ctx.v55.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v56.f32))));
	// vor128 v12,v56,v56
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v56.u8));
	// vand128 v52,v56,v63
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stfs f10,176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// vand128 v51,v53,v63
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// vor128 v50,v52,v61
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vcmpgtfp128 v5,v50,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v51.f32)));
	// vcmpeqfp128 v10,v55,v60
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v60.f32)));
	// vor128 v9,v55,v55
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v55.u8));
	// vsel v0,v9,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v7,v59,v0
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v6,v12,v8,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v4,v6,v7,v0
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v3,v4,v62
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v62.f32)));
	// vsel v0,v11,v3,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vsubfp128 v49,v54,v0
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8254b030
	ctx.lr = 0x822BBECC;
	sub_8254B030(ctx, base);
loc_822BBECC:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822bbc08
	if (!ctx.cr6.eq) goto loc_822BBC08;
loc_822BBED8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823dba18
	ctx.lr = 0x822BBEE4;
	__restfpr_25(ctx, base);
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BBEE8"))) PPC_WEAK_FUNC(sub_822BBEE8);
PPC_FUNC_IMPL(__imp__sub_822BBEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x822BBEF0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-23636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23636);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bbf20
	if (ctx.cr6.eq) goto loc_822BBF20;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x822bbf2c
	goto loc_822BBF2C;
loc_822BBF20:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_822BBF2C:
	// clrlwi r25,r5,24
	ctx.r25.u64 = ctx.r5.u32 & 0xFF;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822bbf44
	if (ctx.cr6.eq) goto loc_822BBF44;
	// lwz r27,36(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x822bbf48
	goto loc_822BBF48;
loc_822BBF44:
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_822BBF48:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822bc350
	if (ctx.cr6.eq) goto loc_822BC350;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x822bc350
	if (ctx.cr6.eq) goto loc_822BC350;
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// rlwinm r10,r27,22,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 22) & 0x1FFFC;
	// clrlwi r28,r27,20
	ctx.r28.u64 = ctx.r27.u32 & 0xFFF;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bb2d8
	ctx.lr = 0x822BBF70;
	sub_822BB2D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bc350
	if (ctx.cr6.eq) goto loc_822BC350;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bb330
	ctx.lr = 0x822BBF88;
	sub_822BB330(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bbfbc
	if (ctx.cr6.eq) goto loc_822BBFBC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822bbfc4
	if (!ctx.cr6.eq) goto loc_822BBFC4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822bbfc4
	goto loc_822BBFC4;
loc_822BBFBC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822BBFC4:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// bl 0x8254fb60
	ctx.lr = 0x822BBFD4;
	sub_8254FB60(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,-31380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31380);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// blt cr6,0x822bc194
	if (ctx.cr6.lt) goto loc_822BC194;
	// addi r7,r3,-3
	ctx.r7.s64 = ctx.r3.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
loc_822BC060:
	// lfs f0,-24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f13,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f5,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822bc088
	if (!ctx.cr6.lt) goto loc_822BC088;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822BC088:
	// fsubs f0,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822bc0a8
	if (!ctx.cr6.lt) goto loc_822BC0A8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_822BC0A8:
	// lfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f5,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822bc0d0
	if (!ctx.cr6.lt) goto loc_822BC0D0;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822BC0D0:
	// fsubs f0,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822bc0f0
	if (!ctx.cr6.lt) goto loc_822BC0F0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_822BC0F0:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f5,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822bc118
	if (!ctx.cr6.lt) goto loc_822BC118;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822BC118:
	// fsubs f0,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822bc138
	if (!ctx.cr6.lt) goto loc_822BC138;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_822BC138:
	// lfs f0,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f5,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822bc160
	if (!ctx.cr6.lt) goto loc_822BC160;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822BC160:
	// fsubs f0,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822bc180
	if (!ctx.cr6.lt) goto loc_822BC180;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_822BC180:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822bc060
	if (ctx.cr6.lt) goto loc_822BC060;
loc_822BC194:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822bc200
	if (!ctx.cr6.lt) goto loc_822BC200;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822BC1A8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f5,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822bc1d0
	if (!ctx.cr6.lt) goto loc_822BC1D0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822BC1D0:
	// fsubs f0,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822bc1f0
	if (!ctx.cr6.lt) goto loc_822BC1F0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_822BC1F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822bc1a8
	if (ctx.cr6.lt) goto loc_822BC1A8;
loc_822BC200:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822bc214
	if (!ctx.cr6.eq) goto loc_822BC214;
	// subfic r11,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r8.s64;
	// subf r31,r30,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r30.s64;
	// b 0x822bc248
	goto loc_822BC248;
loc_822BC214:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,257
	ctx.r10.s64 = 16842752;
	// or r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lis r7,6735
	ctx.r7.s64 = 441384960;
	// ori r6,r10,600
	ctx.r6.u64 = ctx.r10.u64 | 600;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r3,r7,46012
	ctx.r3.u64 = ctx.r7.u64 | 46012;
	// sraw r11,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// sraw r10,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	// clrlwi r30,r11,30
	ctx.r30.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r31,r10,30
	ctx.r31.u64 = ctx.r10.u32 & 0x3;
loc_822BC248:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8254f388
	ctx.lr = 0x822BC258;
	sub_8254F388(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8254f478
	ctx.lr = 0x822BC268;
	sub_8254F478(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r31,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v61,r10,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vsubfp128 v59,v61,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lvx128 v60,r8,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v58,v60,v63
	_mm_store_ps(ctx.v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// lfs f31,3796(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// stvx128 v59,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v58,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f9,f13,f0,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// blt cr6,0x822bc2d0
	if (ctx.cr6.lt) goto loc_822BC2D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC2D0:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x822bc2e4
	if (ctx.cr6.eq) goto loc_822BC2E4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_822BC2E4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BC2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bc318
	if (ctx.cr6.eq) goto loc_822BC318;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bc31c
	if (!ctx.cr6.eq) goto loc_822BC31C;
loc_822BC318:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC31C:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r3,300(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 300);
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r7,r30,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lvx128 v3,r0,r10
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r9,r8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r7,r5
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8254adf0
	ctx.lr = 0x822BC350;
	sub_8254ADF0(ctx, base);
loc_822BC350:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC35C"))) PPC_WEAK_FUNC(sub_822BC35C);
PPC_FUNC_IMPL(__imp__sub_822BC35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC360"))) PPC_WEAK_FUNC(sub_822BC360);
PPC_FUNC_IMPL(__imp__sub_822BC360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x822BC368;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-23636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23636);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bc394
	if (ctx.cr6.eq) goto loc_822BC394;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x822bc3a0
	goto loc_822BC3A0;
loc_822BC394:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_822BC3A0:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,16(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822bc4f8
	if (ctx.cr6.eq) goto loc_822BC4F8;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x822bc4f8
	if (ctx.cr6.eq) goto loc_822BC4F8;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r10,r27,22,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 22) & 0x1FFFC;
	// clrlwi r28,r27,20
	ctx.r28.u64 = ctx.r27.u32 & 0xFFF;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bb2d8
	ctx.lr = 0x822BC3D0;
	sub_822BB2D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bc4f8
	if (ctx.cr6.eq) goto loc_822BC4F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bb330
	ctx.lr = 0x822BC3E8;
	sub_822BB330(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bc41c
	if (ctx.cr6.eq) goto loc_822BC41C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822bc424
	if (!ctx.cr6.eq) goto loc_822BC424;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822bc424
	goto loc_822BC424;
loc_822BC41C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822BC424:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// bl 0x8254fb60
	ctx.lr = 0x822BC434;
	sub_8254FB60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f478
	ctx.lr = 0x822BC448;
	sub_8254F478(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BC460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bc47c
	if (ctx.cr6.eq) goto loc_822BC47C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bc480
	if (!ctx.cr6.eq) goto loc_822BC480;
loc_822BC47C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC480:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,300(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// lfs f31,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lvx128 v3,r0,r10
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lvx128 v2,r0,r9
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x822bc4c8
	if (!ctx.cr6.eq) goto loc_822BC4C8;
	// bl 0x8254adf0
	ctx.lr = 0x822BC4C0;
	sub_8254ADF0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x822bc4d0
	goto loc_822BC4D0;
loc_822BC4C8:
	// bl 0x8254adf0
	ctx.lr = 0x822BC4CC;
	sub_8254ADF0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_822BC4D0:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,300(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lvx128 v3,r0,r7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r5
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8254adf0
	ctx.lr = 0x822BC4F8;
	sub_8254ADF0(ctx, base);
loc_822BC4F8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC504"))) PPC_WEAK_FUNC(sub_822BC504);
PPC_FUNC_IMPL(__imp__sub_822BC504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC508"))) PPC_WEAK_FUNC(sub_822BC508);
PPC_FUNC_IMPL(__imp__sub_822BC508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x822BC510;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r10,-31616
	ctx.r8.s64 = ctx.r10.s64 + -31616;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-23636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23636);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,656(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822bc550
	if (ctx.cr6.eq) goto loc_822BC550;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x822bc55c
	goto loc_822BC55C;
loc_822BC550:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_822BC55C:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r30,40(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822bc5e4
	if (ctx.cr6.eq) goto loc_822BC5E4;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x822bc5e4
	if (ctx.cr6.eq) goto loc_822BC5E4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r30,22,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x1FFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bb2d8
	ctx.lr = 0x822BC58C;
	sub_822BB2D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bc5a8
	if (ctx.cr6.eq) goto loc_822BC5A8;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// clrlwi r4,r30,20
	ctx.r4.u64 = ctx.r30.u32 & 0xFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8254f478
	ctx.lr = 0x822BC5A8;
	sub_8254F478(ctx, base);
loc_822BC5A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BC5C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bc5dc
	if (ctx.cr6.eq) goto loc_822BC5DC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bc5e0
	if (!ctx.cr6.eq) goto loc_822BC5E0;
loc_822BC5DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC5E0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
loc_822BC5E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f11,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r3,300(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// lfs f0,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lvx128 v3,r0,r8
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f2,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lvx128 v2,r0,r10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8254adf0
	ctx.lr = 0x822BC64C;
	sub_8254ADF0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC654"))) PPC_WEAK_FUNC(sub_822BC654);
PPC_FUNC_IMPL(__imp__sub_822BC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC658"))) PPC_WEAK_FUNC(sub_822BC658);
PPC_FUNC_IMPL(__imp__sub_822BC658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822BC670"))) PPC_WEAK_FUNC(sub_822BC670);
PPC_FUNC_IMPL(__imp__sub_822BC670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822b9fd0
	sub_822B9FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC680"))) PPC_WEAK_FUNC(sub_822BC680);
PPC_FUNC_IMPL(__imp__sub_822BC680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC694"))) PPC_WEAK_FUNC(sub_822BC694);
PPC_FUNC_IMPL(__imp__sub_822BC694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC698"))) PPC_WEAK_FUNC(sub_822BC698);
PPC_FUNC_IMPL(__imp__sub_822BC698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,292(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 292, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC6AC"))) PPC_WEAK_FUNC(sub_822BC6AC);
PPC_FUNC_IMPL(__imp__sub_822BC6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC6B0"))) PPC_WEAK_FUNC(sub_822BC6B0);
PPC_FUNC_IMPL(__imp__sub_822BC6B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822bc6ec
	if (ctx.cr6.eq) goto loc_822BC6EC;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r9,r11,18160
	ctx.r9.s64 = ctx.r11.s64 + 18160;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822bc6f0
	if (ctx.cr6.eq) goto loc_822BC6F0;
loc_822BC6EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC6F0:
	// stb r11,236(r10)
	PPC_STORE_U8(ctx.r10.u32 + 236, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC6F8"))) PPC_WEAK_FUNC(sub_822BC6F8);
PPC_FUNC_IMPL(__imp__sub_822BC6F8) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822bc740
	if (!ctx.cr6.eq) goto loc_822BC740;
	// lwz r3,300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bc740
	if (ctx.cr6.eq) goto loc_822BC740;
	// bl 0x8254ca78
	ctx.lr = 0x822BC730;
	sub_8254CA78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822bc744
	if (!ctx.cr6.eq) goto loc_822BC744;
loc_822BC740:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC744:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_822BC764"))) PPC_WEAK_FUNC(sub_822BC764);
PPC_FUNC_IMPL(__imp__sub_822BC764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC768"))) PPC_WEAK_FUNC(sub_822BC768);
PPC_FUNC_IMPL(__imp__sub_822BC768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 248, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC77C"))) PPC_WEAK_FUNC(sub_822BC77C);
PPC_FUNC_IMPL(__imp__sub_822BC77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822BC780"))) PPC_WEAK_FUNC(sub_822BC780);
PPC_FUNC_IMPL(__imp__sub_822BC780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,300(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// stfs f0,25396(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 25396, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC798"))) PPC_WEAK_FUNC(sub_822BC798);
PPC_FUNC_IMPL(__imp__sub_822BC798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// b 0x822bb0c0
	sub_822BB0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822BC7B8"))) PPC_WEAK_FUNC(sub_822BC7B8);
PPC_FUNC_IMPL(__imp__sub_822BC7B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,255(r9)
	PPC_STORE_U8(ctx.r9.u32 + 255, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC7D8"))) PPC_WEAK_FUNC(sub_822BC7D8);
PPC_FUNC_IMPL(__imp__sub_822BC7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,257(r9)
	PPC_STORE_U8(ctx.r9.u32 + 257, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC7F8"))) PPC_WEAK_FUNC(sub_822BC7F8);
PPC_FUNC_IMPL(__imp__sub_822BC7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,258(r9)
	PPC_STORE_U8(ctx.r9.u32 + 258, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BC818"))) PPC_WEAK_FUNC(sub_822BC818);
PPC_FUNC_IMPL(__imp__sub_822BC818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,338(r9)
	PPC_STORE_U8(ctx.r9.u32 + 338, ctx.r6.u8);
	// blr 
	return;
}

