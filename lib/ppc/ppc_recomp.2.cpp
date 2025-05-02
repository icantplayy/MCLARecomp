#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821426BC"))) PPC_WEAK_FUNC(sub_821426BC);
PPC_FUNC_IMPL(__imp__sub_821426BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821426C0"))) PPC_WEAK_FUNC(sub_821426C0);
PPC_FUNC_IMPL(__imp__sub_821426C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,12888
	ctx.r10.s64 = ctx.r11.s64 + 12888;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82136f18
	ctx.lr = 0x821426EC;
	sub_82136F18(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82142704
	if (ctx.cr6.eq) goto loc_82142704;
	// bl 0x821370f0
	ctx.lr = 0x82142700;
	sub_821370F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82142704:
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

__attribute__((alias("__imp__sub_8214271C"))) PPC_WEAK_FUNC(sub_8214271C);
PPC_FUNC_IMPL(__imp__sub_8214271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142720"))) PPC_WEAK_FUNC(sub_82142720);
PPC_FUNC_IMPL(__imp__sub_82142720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c4
	ctx.lr = 0x82142728;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r30,r11,7496
	ctx.r30.s64 = ctx.r11.s64 + 7496;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// bl 0x8244d150
	ctx.lr = 0x8214276C;
	sub_8244D150(ctx, base);
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r5,r11,7216
	ctx.r5.s64 = ctx.r11.s64 + 7216;
	// lwz r27,204(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82142a58
	if (ctx.cr6.eq) goto loc_82142A58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lfs f9,13260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13260);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f11.f64 = double(temp.f32);
loc_82142798:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r24,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r10,r30
	ctx.r28.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r4,7776
	ctx.r3.s64 = ctx.r4.s64 + 7776;
loc_821427B8:
	// lwz r11,232(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 232);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82142a34
	if (ctx.cr6.eq) goto loc_82142A34;
	// lwz r11,232(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 232);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142a34
	if (ctx.cr6.eq) goto loc_82142A34;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// beq cr6,0x82142a34
	if (ctx.cr6.eq) goto loc_82142A34;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwimi r16,r29,8,16,23
	ctx.r16.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFF00) | (ctx.r16.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// clrlwi r10,r16,16
	ctx.r10.u64 = ctx.r16.u32 & 0xFFFF;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r10,r8,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x82142840
	if (!ctx.cr6.eq) goto loc_82142840;
	// fmr f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x82142868
	goto loc_82142868;
loc_82142840:
	// rlwinm r16,r10,3,0,13
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r15,r10,22
	ctx.r15.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
	// or r16,r16,r15
	ctx.r16.u64 = ctx.r16.u64 | ctx.r15.u64;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// rlwinm r16,r16,13,0,18
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r10,r10,23,0,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFF800000;
	// or r10,r16,r10
	ctx.r10.u64 = ctx.r16.u64 | ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
loc_82142868:
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8214287c
	if (!ctx.cr6.eq) goto loc_8214287C;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x821428a4
	goto loc_821428A4;
loc_8214287C:
	// rlwinm r16,r10,3,0,13
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r15,r10,22
	ctx.r15.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
	// or r16,r16,r15
	ctx.r16.u64 = ctx.r16.u64 | ctx.r15.u64;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// rlwinm r16,r16,13,0,18
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r10,r10,23,0,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFF800000;
	// or r10,r16,r10
	ctx.r10.u64 = ctx.r16.u64 | ctx.r10.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
loc_821428A4:
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821428b8
	if (!ctx.cr6.eq) goto loc_821428B8;
	// fmr f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x821428e0
	goto loc_821428E0;
loc_821428B8:
	// rlwinm r16,r10,3,0,13
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r15,r10,22
	ctx.r15.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
	// or r16,r16,r15
	ctx.r16.u64 = ctx.r16.u64 | ctx.r15.u64;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// rlwinm r16,r16,13,0,18
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r10,r10,23,0,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFF800000;
	// or r10,r16,r10
	ctx.r10.u64 = ctx.r16.u64 | ctx.r10.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
loc_821428E0:
	// lhz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821428f4
	if (!ctx.cr6.eq) goto loc_821428F4;
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8214291c
	goto loc_8214291C;
loc_821428F4:
	// rlwinm r16,r10,3,0,13
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r15,r10,22
	ctx.r15.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
	// or r16,r16,r15
	ctx.r16.u64 = ctx.r16.u64 | ctx.r15.u64;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// rlwinm r16,r16,13,0,18
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r10,r10,23,0,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFF800000;
	// or r10,r16,r10
	ctx.r10.u64 = ctx.r16.u64 | ctx.r10.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
loc_8214291C:
	// fadds f12,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subfic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r10.s64;
	// beq cr6,0x82142954
	if (ctx.cr6.eq) goto loc_82142954;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x8214296c
	if (ctx.cr6.gt) goto loc_8214296C;
loc_82142954:
	// rlwinm r16,r11,0,28,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x8214296c
	if (!ctx.cr6.eq) goto loc_8214296C;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142974
	if (ctx.cr6.eq) goto loc_82142974;
loc_8214296C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_82142974:
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821429a4
	if (!ctx.cr6.eq) goto loc_821429A4;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82142998
	if (!ctx.cr6.eq) goto loc_82142998;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r23,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r23.u32);
	// b 0x82142a34
	goto loc_82142A34;
loc_82142998:
	// stw r25,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r25.u32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// b 0x82142a34
	goto loc_82142A34;
loc_821429A4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821429e0
	if (ctx.cr6.eq) goto loc_821429E0;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
loc_821429B4:
	// lwz r16,0(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r16,r8
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821429d4
	if (ctx.cr6.eq) goto loc_821429D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821429b4
	if (ctx.cr6.lt) goto loc_821429B4;
	// b 0x821429e0
	goto loc_821429E0;
loc_821429D4:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821429f0
	if (!ctx.cr0.eq) goto loc_821429F0;
loc_821429E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
loc_821429F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82142a0c
	if (!ctx.cr6.eq) goto loc_82142A0C;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stw r23,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r23.u32);
	// b 0x82142a24
	goto loc_82142A24;
loc_82142A0C:
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82142a28
	if (!ctx.cr6.gt) goto loc_82142A28;
loc_82142A24:
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_82142A28:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82142A34:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r7,96
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 96, ctx.xer);
	// blt cr6,0x821427b8
	if (ctx.cr6.lt) goto loc_821427B8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r4,r4,11488
	ctx.r4.s64 = ctx.r4.s64 + 11488;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82142798
	if (ctx.cr6.lt) goto loc_82142798;
loc_82142A58:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82142ae0
	if (ctx.cr6.eq) goto loc_82142AE0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
loc_82142A68:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82142acc
	if (ctx.cr6.eq) goto loc_82142ACC;
	// ld r8,-16(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + -16);
	// ld r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82142acc
	if (!ctx.cr6.gt) goto loc_82142ACC;
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// addi r10,r21,24
	ctx.r10.s64 = ctx.r21.s64 + 24;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142ab8
	if (ctx.cr6.eq) goto loc_82142AB8;
loc_82142A94:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x82142ab8
	if (!ctx.cr6.lt) goto loc_82142AB8;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82142a94
	if (!ctx.cr6.eq) goto loc_82142A94;
loc_82142AB8:
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r7,-24
	ctx.r10.s64 = ctx.r7.s64 + -24;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// b 0x82142ad4
	goto loc_82142AD4;
loc_82142ACC:
	// stw r21,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r21.u32);
	// addi r21,r7,-24
	ctx.r21.s64 = ctx.r7.s64 + -24;
loc_82142AD4:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bne 0x82142a68
	if (!ctx.cr0.eq) goto loc_82142A68;
loc_82142AE0:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r27,8
	ctx.r27.s64 = 8;
	// addi r28,r11,15688
	ctx.r28.s64 = ctx.r11.s64 + 15688;
loc_82142AF4:
	// rlwinm r11,r29,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 11) & 0xFFFFF800;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
	// bl 0x8244d150
	ctx.lr = 0x82142B14;
	sub_8244D150(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82142b60
	if (ctx.cr6.eq) goto loc_82142B60;
loc_82142B20:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r23,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r23.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// srd r9,r10,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r30.u8 & 0x7F));
	// rlwinm r10,r9,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7F8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82142b4c
	if (ctx.cr6.eq) goto loc_82142B4C;
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// b 0x82142b50
	goto loc_82142B50;
loc_82142B4C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82142B50:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82142b20
	if (!ctx.cr6.eq) goto loc_82142B20;
loc_82142B60:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82142B68:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82142bcc
	if (ctx.cr6.eq) goto loc_82142BCC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82142b88
	if (!ctx.cr6.eq) goto loc_82142B88;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82142B88:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82142bcc
	if (!ctx.cr6.lt) goto loc_82142BCC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82142B9C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82142bbc
	if (!ctx.cr6.eq) goto loc_82142BBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82142b9c
	if (ctx.cr6.lt) goto loc_82142B9C;
	// b 0x82142bcc
	goto loc_82142BCC;
loc_82142BBC:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
loc_82142BCC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// blt cr6,0x82142b68
	if (ctx.cr6.lt) goto loc_82142B68;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82142af4
	if (!ctx.cr0.eq) goto loc_82142AF4;
	// sth r18,6(r19)
	PPC_STORE_U16(ctx.r19.u32 + 6, ctx.r18.u16);
	// sth r20,4(r19)
	PPC_STORE_U16(ctx.r19.u32 + 4, ctx.r20.u16);
	// sth r24,2(r19)
	PPC_STORE_U16(ctx.r19.u32 + 2, ctx.r24.u16);
	// sth r26,0(r19)
	PPC_STORE_U16(ctx.r19.u32 + 0, ctx.r26.u16);
	// stw r25,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r25.u32);
	// stw r21,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r21.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82142C04"))) PPC_WEAK_FUNC(sub_82142C04);
PPC_FUNC_IMPL(__imp__sub_82142C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142C08"))) PPC_WEAK_FUNC(sub_82142C08);
PPC_FUNC_IMPL(__imp__sub_82142C08) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82142C10;
	__savegprlr_29(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r31,-32125
	ctx.r31.s64 = -2105344000;
	// sth r11,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r11.u16);
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// sth r11,10(r7)
	PPC_STORE_U16(ctx.r7.u32 + 10, ctx.r11.u16);
loc_82142C24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82142c34
	if (!ctx.cr6.eq) goto loc_82142C34;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82142e04
	if (ctx.cr6.eq) goto loc_82142E04;
loc_82142C34:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82142d78
	if (ctx.cr6.eq) goto loc_82142D78;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82142d0c
	if (ctx.cr6.eq) goto loc_82142D0C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82142c5c
	if (ctx.cr6.eq) goto loc_82142C5C;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x82142ca0
	if (!ctx.cr6.lt) goto loc_82142CA0;
loc_82142C5C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82142c94
	if (!ctx.cr6.eq) goto loc_82142C94;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82142c94
	if (ctx.cr6.eq) goto loc_82142C94;
	// lhz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r11,5696(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5696);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r11.u16);
loc_82142C94:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// b 0x82142c24
	goto loc_82142C24;
loc_82142CA0:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82142d04
	if (ctx.cr6.lt) goto loc_82142D04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142d04
	if (ctx.cr6.eq) goto loc_82142D04;
loc_82142CB8:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82142cf4
	if (!ctx.cr6.eq) goto loc_82142CF4;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82142d04
	if (ctx.cr6.lt) goto loc_82142D04;
	// lhz r30,8(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r9,5696(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5696);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// sthx r29,r30,r9
	PPC_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r29.u16);
	// lhz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r9.u16);
loc_82142CF4:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82142cb8
	if (!ctx.cr6.eq) goto loc_82142CB8;
loc_82142D04:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82142c24
	goto loc_82142C24;
loc_82142D0C:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82142d70
	if (ctx.cr6.lt) goto loc_82142D70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142d70
	if (ctx.cr6.eq) goto loc_82142D70;
loc_82142D24:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82142d60
	if (!ctx.cr6.eq) goto loc_82142D60;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82142d70
	if (ctx.cr6.lt) goto loc_82142D70;
	// lhz r30,8(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r9,5696(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5696);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// sthx r29,r30,r9
	PPC_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r29.u16);
	// lhz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r9.u16);
loc_82142D60:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82142d24
	if (!ctx.cr6.eq) goto loc_82142D24;
loc_82142D70:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82142c24
	goto loc_82142C24;
loc_82142D78:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82142db0
	if (ctx.cr6.eq) goto loc_82142DB0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82142dac
	if (!ctx.cr6.eq) goto loc_82142DAC;
	// lhz r10,10(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// lwz r11,5700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5700);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,10(r7)
	PPC_STORE_U16(ctx.r7.u32 + 10, ctx.r11.u16);
loc_82142DAC:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_82142DB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82142c24
	if (ctx.cr6.eq) goto loc_82142C24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142dfc
	if (ctx.cr6.eq) goto loc_82142DFC;
loc_82142DC4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82142df0
	if (!ctx.cr6.eq) goto loc_82142DF0;
	// lhz r9,10(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// lwz r10,5700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5700);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// sthx r30,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u16);
	// lhz r10,10(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,10(r7)
	PPC_STORE_U16(ctx.r7.u32 + 10, ctx.r10.u16);
loc_82142DF0:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82142dc4
	if (!ctx.cr6.eq) goto loc_82142DC4;
loc_82142DFC:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82142c24
	goto loc_82142C24;
loc_82142E04:
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82142E08"))) PPC_WEAK_FUNC(sub_82142E08);
PPC_FUNC_IMPL(__imp__sub_82142E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r4,96
	ctx.r5.s64 = ctx.r4.s64 + 96;
	// addi r7,r4,7780
	ctx.r7.s64 = ctx.r4.s64 + 7780;
loc_82142E18:
	// lbzx r10,r6,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82142e34
	if (!ctx.cr6.eq) goto loc_82142E34;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82142e50
	if (ctx.cr6.eq) goto loc_82142E50;
loc_82142E34:
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82142e50
	if (!ctx.cr6.eq) goto loc_82142E50;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stbx r10,r6,r4
	PPC_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r10.u8);
	// b 0x82142f04
	goto loc_82142F04;
loc_82142E50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142f04
	if (ctx.cr6.eq) goto loc_82142F04;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82142f04
	if (!ctx.cr6.eq) goto loc_82142F04;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82142e80
	if (ctx.cr6.eq) goto loc_82142E80;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82142f04
	if (!ctx.cr6.eq) goto loc_82142F04;
loc_82142E80:
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r9,-4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f9.u64);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82142efc
	if (ctx.cr6.lt) goto loc_82142EFC;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82142ed4
	if (!ctx.cr6.eq) goto loc_82142ED4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82142efc
	goto loc_82142EFC;
loc_82142ED4:
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82142ef8
	if (ctx.cr0.eq) goto loc_82142EF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// twllei r9,0
	// divwu r31,r11,r9
	ctx.r31.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82142efc
	goto loc_82142EFC;
loc_82142EF8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82142EFC:
	// rlwimi r8,r11,3,0,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xFFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFFF00000007);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
loc_82142F04:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// addi r5,r5,80
	ctx.r5.s64 = ctx.r5.s64 + 80;
	// cmplwi cr6,r6,96
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 96, ctx.xer);
	// blt cr6,0x82142e18
	if (ctx.cr6.lt) goto loc_82142E18;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142F20"))) PPC_WEAK_FUNC(sub_82142F20);
PPC_FUNC_IMPL(__imp__sub_82142F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82142F28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,7216
	ctx.r29.s64 = ctx.r11.s64 + 7216;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142f68
	if (ctx.cr6.eq) goto loc_82142F68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82142F48:
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82142e08
	ctx.lr = 0x82142F54;
	sub_82142E08(ctx, base);
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,11488
	ctx.r30.s64 = ctx.r30.s64 + 11488;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82142f48
	if (ctx.cr6.lt) goto loc_82142F48;
loc_82142F68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82142F70"))) PPC_WEAK_FUNC(sub_82142F70);
PPC_FUNC_IMPL(__imp__sub_82142F70) {
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
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x821433cc
	if (ctx.cr6.gt) goto loc_821433CC;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,12200
	ctx.r12.s64 = ctx.r12.s64 + 12200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8214300C;
	case 1:
		goto loc_82143034;
	case 2:
		goto loc_8214305C;
	case 3:
		goto loc_82143084;
	case 4:
		goto loc_821430AC;
	case 5:
		goto loc_821430D4;
	case 6:
		goto loc_821430FC;
	case 7:
		goto loc_82143124;
	case 8:
		goto loc_8214314C;
	case 9:
		goto loc_82143174;
	case 10:
		goto loc_8214319C;
	case 11:
		goto loc_821431C4;
	case 12:
		goto loc_821431EC;
	case 13:
		goto loc_82143214;
	case 14:
		goto loc_821433CC;
	case 15:
		goto loc_8214323C;
	case 16:
		goto loc_82143264;
	case 17:
		goto loc_8214328C;
	case 18:
		goto loc_821432B4;
	case 19:
		goto loc_821432DC;
	case 20:
		goto loc_82143304;
	case 21:
		goto loc_8214332C;
	case 22:
		goto loc_82143354;
	case 23:
		goto loc_8214337C;
	case 24:
		goto loc_821433A4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,12300(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12300);
	// lwz r16,12340(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12340);
	// lwz r16,12380(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12380);
	// lwz r16,12420(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12420);
	// lwz r16,12460(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12460);
	// lwz r16,12500(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12500);
	// lwz r16,12540(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12540);
	// lwz r16,12580(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12580);
	// lwz r16,12620(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12620);
	// lwz r16,12660(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12660);
	// lwz r16,12700(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12700);
	// lwz r16,12740(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12740);
	// lwz r16,12780(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12780);
	// lwz r16,12820(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12820);
	// lwz r16,13260(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13260);
	// lwz r16,12860(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12860);
	// lwz r16,12900(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12900);
	// lwz r16,12940(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12940);
	// lwz r16,12980(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12980);
	// lwz r16,13020(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13020);
	// lwz r16,13060(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13060);
	// lwz r16,13100(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13100);
	// lwz r16,13140(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13140);
	// lwz r16,13180(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13180);
	// lwz r16,13220(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13220);
loc_8214300C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,208
	ctx.r4.s64 = 208;
	// bl 0x8213e928
	ctx.lr = 0x82143020;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x8215d660
	ctx.lr = 0x82143030;
	sub_8215D660(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_82143034:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,240
	ctx.r4.s64 = 240;
	// bl 0x8213e928
	ctx.lr = 0x82143048;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x8215c400
	ctx.lr = 0x82143058;
	sub_8215C400(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_8214305C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,236
	ctx.r4.s64 = 236;
	// bl 0x8213e928
	ctx.lr = 0x82143070;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x8215b518
	ctx.lr = 0x82143080;
	sub_8215B518(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_82143084:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,172
	ctx.r4.s64 = 172;
	// bl 0x8213e928
	ctx.lr = 0x82143098;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x8215a098
	ctx.lr = 0x821430A8;
	sub_8215A098(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821430AC:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x8213e928
	ctx.lr = 0x821430C0;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x821596e0
	ctx.lr = 0x821430D0;
	sub_821596E0(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821430D4:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,164
	ctx.r4.s64 = 164;
	// bl 0x8213e928
	ctx.lr = 0x821430E8;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82159228
	ctx.lr = 0x821430F8;
	sub_82159228(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821430FC:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,200
	ctx.r4.s64 = 200;
	// bl 0x8213e928
	ctx.lr = 0x82143110;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82158640
	ctx.lr = 0x82143120;
	sub_82158640(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_82143124:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,220
	ctx.r4.s64 = 220;
	// bl 0x8213e928
	ctx.lr = 0x82143138;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x821570e0
	ctx.lr = 0x82143148;
	sub_821570E0(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_8214314C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,216
	ctx.r4.s64 = 216;
	// bl 0x8213e928
	ctx.lr = 0x82143160;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82156448
	ctx.lr = 0x82143170;
	sub_82156448(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_82143174:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x8213e928
	ctx.lr = 0x82143188;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x821554c8
	ctx.lr = 0x82143198;
	sub_821554C8(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_8214319C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x8213e928
	ctx.lr = 0x821431B0;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x821541b8
	ctx.lr = 0x821431C0;
	sub_821541B8(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821431C4:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,176
	ctx.r4.s64 = 176;
	// bl 0x8213e928
	ctx.lr = 0x821431D8;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82153800
	ctx.lr = 0x821431E8;
	sub_82153800(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821431EC:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,172
	ctx.r4.s64 = 172;
	// bl 0x8213e928
	ctx.lr = 0x82143200;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82153128
	ctx.lr = 0x82143210;
	sub_82153128(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_82143214:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,164
	ctx.r4.s64 = 164;
	// bl 0x8213e928
	ctx.lr = 0x82143228;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82152b40
	ctx.lr = 0x82143238;
	sub_82152B40(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_8214323C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,180
	ctx.r4.s64 = 180;
	// bl 0x8213e928
	ctx.lr = 0x82143250;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82152070
	ctx.lr = 0x82143260;
	sub_82152070(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_82143264:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,232
	ctx.r4.s64 = 232;
	// bl 0x8213e928
	ctx.lr = 0x82143278;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x821517a8
	ctx.lr = 0x82143288;
	sub_821517A8(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_8214328C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,212
	ctx.r4.s64 = 212;
	// bl 0x8213e928
	ctx.lr = 0x821432A0;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82151350
	ctx.lr = 0x821432B0;
	sub_82151350(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821432B4:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x8213e928
	ctx.lr = 0x821432C8;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82151230
	ctx.lr = 0x821432D8;
	sub_82151230(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821432DC:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,164
	ctx.r4.s64 = 164;
	// bl 0x8213e928
	ctx.lr = 0x821432F0;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82151140
	ctx.lr = 0x82143300;
	sub_82151140(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_82143304:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x8213e928
	ctx.lr = 0x82143318;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82150fc8
	ctx.lr = 0x82143328;
	sub_82150FC8(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_8214332C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,176
	ctx.r4.s64 = 176;
	// bl 0x8213e928
	ctx.lr = 0x82143340;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x82150788
	ctx.lr = 0x82143350;
	sub_82150788(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_82143354:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,188
	ctx.r4.s64 = 188;
	// bl 0x8213e928
	ctx.lr = 0x82143368;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x8214f9e8
	ctx.lr = 0x82143378;
	sub_8214F9E8(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_8214337C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,220
	ctx.r4.s64 = 220;
	// bl 0x8213e928
	ctx.lr = 0x82143390;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x8214f018
	ctx.lr = 0x821433A0;
	sub_8214F018(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821433A4:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// li r4,172
	ctx.r4.s64 = 172;
	// bl 0x8213e928
	ctx.lr = 0x821433B8;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821433d0
	if (ctx.cr6.eq) goto loc_821433D0;
	// bl 0x8214e380
	ctx.lr = 0x821433C8;
	sub_8214E380(ctx, base);
	// b 0x821433d0
	goto loc_821433D0;
loc_821433CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821433D0:
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

__attribute__((alias("__imp__sub_821433E8"))) PPC_WEAK_FUNC(sub_821433E8);
PPC_FUNC_IMPL(__imp__sub_821433E8) {
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
	// bl 0x8214dee8
	ctx.lr = 0x82143400;
	sub_8214DEE8(ctx, base);
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

__attribute__((alias("__imp__sub_82143418"))) PPC_WEAK_FUNC(sub_82143418);
PPC_FUNC_IMPL(__imp__sub_82143418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x82143420;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8214344c
	if (!ctx.cr6.eq) goto loc_8214344C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8214344C:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lbz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r30,r11,7216
	ctx.r30.s64 = ctx.r11.s64 + 7216;
	// mulli r10,r10,11488
	ctx.r10.s64 = ctx.r10.s64 * 11488;
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,11452
	ctx.r3.s64 = ctx.r11.s64 + 11452;
	// bl 0x821c8f08
	ctx.lr = 0x82143470;
	sub_821C8F08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// bl 0x82142f70
	ctx.lr = 0x8214347C;
	sub_82142F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82143558
	if (ctx.cr6.eq) goto loc_82143558;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821434bc
	if (ctx.cr6.eq) goto loc_821434BC;
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// mulli r9,r10,11488
	ctx.r9.s64 = ctx.r10.s64 * 11488;
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// twllei r10,0
	// lwz r8,11440(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11440);
	// subf r7,r8,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r8.s64;
	// divwu r6,r7,r10
	ctx.r6.u32 = ctx.r7.u32 / ctx.r10.u32;
	// stb r6,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r6.u8);
	// b 0x821434c8
	goto loc_821434C8;
loc_821434BC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b068
	ctx.lr = 0x821434C8;
	sub_8213B068(ctx, base);
loc_821434C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821434E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82143514
	if (!ctx.cr6.eq) goto loc_82143514;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214350C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82143558
	goto loc_82143558;
loc_82143514:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stb r10,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r10.u8);
	// bne cr6,0x82143558
	if (!ctx.cr6.eq) goto loc_82143558;
	// lbz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// mulli r9,r4,11488
	ctx.r9.s64 = ctx.r4.s64 * 11488;
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// twllei r10,0
	// lwz r9,11440(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11440);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// divwu r7,r8,r10
	ctx.r7.u32 = ctx.r8.u32 / ctx.r10.u32;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// bl 0x8213eac8
	ctx.lr = 0x82143558;
	sub_8213EAC8(ctx, base);
loc_82143558:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// mulli r10,r10,11488
	ctx.r10.s64 = ctx.r10.s64 * 11488;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,11452
	ctx.r3.s64 = ctx.r11.s64 + 11452;
	// bl 0x821c8f70
	ctx.lr = 0x82143570;
	sub_821C8F70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214357C"))) PPC_WEAK_FUNC(sub_8214357C);
PPC_FUNC_IMPL(__imp__sub_8214357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143580"))) PPC_WEAK_FUNC(sub_82143580);
PPC_FUNC_IMPL(__imp__sub_82143580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82143588;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r11,7216
	ctx.r30.s64 = ctx.r11.s64 + 7216;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,228
	ctx.r4.s64 = 228;
	// lbz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213e928
	ctx.lr = 0x821435B4;
	sub_8213E928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82143630
	if (ctx.cr6.eq) goto loc_82143630;
	// bl 0x8214a608
	ctx.lr = 0x821435C4;
	sub_8214A608(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821435f8
	if (ctx.cr6.eq) goto loc_821435F8;
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// mulli r9,r10,11488
	ctx.r9.s64 = ctx.r10.s64 * 11488;
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// twllei r10,0
	// lwz r8,11440(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11440);
	// subf r7,r8,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r8.s64;
	// divwu r6,r7,r10
	ctx.r6.u32 = ctx.r7.u32 / ctx.r10.u32;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// b 0x821435fc
	goto loc_821435FC;
loc_821435F8:
	// li r11,255
	ctx.r11.s64 = 255;
loc_821435FC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82143620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r6,r7,128
	ctx.r6.u64 = ctx.r7.u64 | 128;
	// stb r6,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r6.u8);
loc_82143630:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143638"))) PPC_WEAK_FUNC(sub_82143638);
PPC_FUNC_IMPL(__imp__sub_82143638) {
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
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,19856
	ctx.r9.s64 = ctx.r11.s64 + 19856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r10,13660
	ctx.r3.s64 = ctx.r10.s64 + 13660;
	// li r4,164
	ctx.r4.s64 = 164;
	// lwz r31,1260(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1260);
	// bl 0x82130000
	ctx.lr = 0x8214366C;
	sub_82130000(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r4,r8,13616
	ctx.r4.s64 = ctx.r8.s64 + 13616;
	// addi r3,r7,13580
	ctx.r3.s64 = ctx.r7.s64 + 13580;
	// li r5,240
	ctx.r5.s64 = 240;
	// bl 0x82130000
	ctx.lr = 0x82143684;
	sub_82130000(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,240
	ctx.r4.s64 = 240;
	// addi r3,r6,13636
	ctx.r3.s64 = ctx.r6.s64 + 13636;
	// bl 0x82130000
	ctx.lr = 0x82143694;
	sub_82130000(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214e328
	ctx.lr = 0x821436A8;
	sub_8214E328(ctx, base);
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

__attribute__((alias("__imp__sub_821436C0"))) PPC_WEAK_FUNC(sub_821436C0);
PPC_FUNC_IMPL(__imp__sub_821436C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214d858
	sub_8214D858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821436C4"))) PPC_WEAK_FUNC(sub_821436C4);
PPC_FUNC_IMPL(__imp__sub_821436C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821436C8"))) PPC_WEAK_FUNC(sub_821436C8);
PPC_FUNC_IMPL(__imp__sub_821436C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214d850
	sub_8214D850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821436CC"))) PPC_WEAK_FUNC(sub_821436CC);
PPC_FUNC_IMPL(__imp__sub_821436CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821436D0"))) PPC_WEAK_FUNC(sub_821436D0);
PPC_FUNC_IMPL(__imp__sub_821436D0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r11,13616
	ctx.r4.s64 = ctx.r11.s64 + 13616;
	// addi r3,r10,13580
	ctx.r3.s64 = ctx.r10.s64 + 13580;
	// li r5,240
	ctx.r5.s64 = 240;
	// bl 0x82130000
	ctx.lr = 0x821436F4;
	sub_82130000(ctx, base);
	// li r3,240
	ctx.r3.s64 = 240;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143708"))) PPC_WEAK_FUNC(sub_82143708);
PPC_FUNC_IMPL(__imp__sub_82143708) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x821438c0
	if (ctx.cr6.gt) {
		sub_821438C0(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,14128
	ctx.r12.s64 = ctx.r12.s64 + 14128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82143794
		return;
	case 1:
		// ERROR: 0x821437A0
		return;
	case 2:
		// ERROR: 0x821437AC
		return;
	case 3:
		// ERROR: 0x821437B8
		return;
	case 4:
		// ERROR: 0x821437C4
		return;
	case 5:
		// ERROR: 0x821437D0
		return;
	case 6:
		// ERROR: 0x821437DC
		return;
	case 7:
		// ERROR: 0x821437E8
		return;
	case 8:
		// ERROR: 0x821437F4
		return;
	case 9:
		// ERROR: 0x82143800
		return;
	case 10:
		// ERROR: 0x8214380C
		return;
	case 11:
		// ERROR: 0x82143818
		return;
	case 12:
		// ERROR: 0x82143824
		return;
	case 13:
		// ERROR: 0x82143830
		return;
	case 14:
		// ERROR: 0x8214383C
		return;
	case 15:
		// ERROR: 0x82143848
		return;
	case 16:
		// ERROR: 0x82143854
		return;
	case 17:
		// ERROR: 0x82143860
		return;
	case 18:
		// ERROR: 0x8214386C
		return;
	case 19:
		// ERROR: 0x82143878
		return;
	case 20:
		// ERROR: 0x82143884
		return;
	case 21:
		// ERROR: 0x82143890
		return;
	case 22:
		// ERROR: 0x8214389C
		return;
	case 23:
		// ERROR: 0x821438A8
		return;
	case 24:
		// ERROR: 0x821438B4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82143730"))) PPC_WEAK_FUNC(sub_82143730);
PPC_FUNC_IMPL(__imp__sub_82143730) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,14228(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14228);
	// lwz r16,14240(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14240);
	// lwz r16,14252(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14252);
	// lwz r16,14264(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14264);
	// lwz r16,14276(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14276);
	// lwz r16,14288(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14288);
	// lwz r16,14300(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14300);
	// lwz r16,14312(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14312);
	// lwz r16,14324(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14324);
	// lwz r16,14336(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14336);
	// lwz r16,14348(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14348);
	// lwz r16,14360(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14360);
	// lwz r16,14372(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14372);
	// lwz r16,14384(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14384);
	// lwz r16,14396(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14396);
	// lwz r16,14408(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14408);
	// lwz r16,14420(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14420);
	// lwz r16,14432(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14432);
	// lwz r16,14444(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14444);
	// lwz r16,14456(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14456);
	// lwz r16,14468(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14468);
	// lwz r16,14480(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14480);
	// lwz r16,14492(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14492);
	// lwz r16,14504(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14504);
	// lwz r16,14516(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14516);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-8344
	ctx.r3.s64 = ctx.r11.s64 + -8344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821437A0"))) PPC_WEAK_FUNC(sub_821437A0);
PPC_FUNC_IMPL(__imp__sub_821437A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10680
	ctx.r3.s64 = ctx.r11.s64 + -10680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821437AC"))) PPC_WEAK_FUNC(sub_821437AC);
PPC_FUNC_IMPL(__imp__sub_821437AC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-15504
	ctx.r3.s64 = ctx.r11.s64 + -15504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821437B8"))) PPC_WEAK_FUNC(sub_821437B8);
PPC_FUNC_IMPL(__imp__sub_821437B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-21048
	ctx.r3.s64 = ctx.r11.s64 + -21048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821437C4"))) PPC_WEAK_FUNC(sub_821437C4);
PPC_FUNC_IMPL(__imp__sub_821437C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-24656
	ctx.r3.s64 = ctx.r11.s64 + -24656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821437D0"))) PPC_WEAK_FUNC(sub_821437D0);
PPC_FUNC_IMPL(__imp__sub_821437D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-27152
	ctx.r3.s64 = ctx.r11.s64 + -27152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821437DC"))) PPC_WEAK_FUNC(sub_821437DC);
PPC_FUNC_IMPL(__imp__sub_821437DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-28264
	ctx.r3.s64 = ctx.r11.s64 + -28264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821437E8"))) PPC_WEAK_FUNC(sub_821437E8);
PPC_FUNC_IMPL(__imp__sub_821437E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-31176
	ctx.r3.s64 = ctx.r11.s64 + -31176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821437F4"))) PPC_WEAK_FUNC(sub_821437F4);
PPC_FUNC_IMPL(__imp__sub_821437F4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,28872
	ctx.r3.s64 = ctx.r11.s64 + 28872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143800"))) PPC_WEAK_FUNC(sub_82143800);
PPC_FUNC_IMPL(__imp__sub_82143800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,25656
	ctx.r3.s64 = ctx.r11.s64 + 25656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214380C"))) PPC_WEAK_FUNC(sub_8214380C);
PPC_FUNC_IMPL(__imp__sub_8214380C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,21504
	ctx.r3.s64 = ctx.r11.s64 + 21504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143818"))) PPC_WEAK_FUNC(sub_82143818);
PPC_FUNC_IMPL(__imp__sub_82143818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,16608
	ctx.r3.s64 = ctx.r11.s64 + 16608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143824"))) PPC_WEAK_FUNC(sub_82143824);
PPC_FUNC_IMPL(__imp__sub_82143824) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143830"))) PPC_WEAK_FUNC(sub_82143830);
PPC_FUNC_IMPL(__imp__sub_82143830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,11832
	ctx.r3.s64 = ctx.r11.s64 + 11832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214383C"))) PPC_WEAK_FUNC(sub_8214383C);
PPC_FUNC_IMPL(__imp__sub_8214383C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-12784
	ctx.r3.s64 = ctx.r11.s64 + -12784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143848"))) PPC_WEAK_FUNC(sub_82143848);
PPC_FUNC_IMPL(__imp__sub_82143848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,10584
	ctx.r3.s64 = ctx.r11.s64 + 10584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143854"))) PPC_WEAK_FUNC(sub_82143854);
PPC_FUNC_IMPL(__imp__sub_82143854) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7952
	ctx.r3.s64 = ctx.r11.s64 + 7952;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143860"))) PPC_WEAK_FUNC(sub_82143860);
PPC_FUNC_IMPL(__imp__sub_82143860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5840
	ctx.r3.s64 = ctx.r11.s64 + 5840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214386C"))) PPC_WEAK_FUNC(sub_8214386C);
PPC_FUNC_IMPL(__imp__sub_8214386C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143878"))) PPC_WEAK_FUNC(sub_82143878);
PPC_FUNC_IMPL(__imp__sub_82143878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143884"))) PPC_WEAK_FUNC(sub_82143884);
PPC_FUNC_IMPL(__imp__sub_82143884) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143890"))) PPC_WEAK_FUNC(sub_82143890);
PPC_FUNC_IMPL(__imp__sub_82143890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3728
	ctx.r3.s64 = ctx.r11.s64 + 3728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214389C"))) PPC_WEAK_FUNC(sub_8214389C);
PPC_FUNC_IMPL(__imp__sub_8214389C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1784
	ctx.r3.s64 = ctx.r11.s64 + 1784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821438A8"))) PPC_WEAK_FUNC(sub_821438A8);
PPC_FUNC_IMPL(__imp__sub_821438A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-1768
	ctx.r3.s64 = ctx.r11.s64 + -1768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821438B4"))) PPC_WEAK_FUNC(sub_821438B4);
PPC_FUNC_IMPL(__imp__sub_821438B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-4080
	ctx.r3.s64 = ctx.r11.s64 + -4080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821438C0"))) PPC_WEAK_FUNC(sub_821438C0);
PPC_FUNC_IMPL(__imp__sub_821438C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821438C8"))) PPC_WEAK_FUNC(sub_821438C8);
PPC_FUNC_IMPL(__imp__sub_821438C8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82143a80
	if (ctx.cr6.gt) {
		sub_82143A80(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,14576
	ctx.r12.s64 = ctx.r12.s64 + 14576;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82143954
		return;
	case 1:
		// ERROR: 0x82143960
		return;
	case 2:
		// ERROR: 0x8214396C
		return;
	case 3:
		// ERROR: 0x82143978
		return;
	case 4:
		// ERROR: 0x82143984
		return;
	case 5:
		// ERROR: 0x82143990
		return;
	case 6:
		// ERROR: 0x8214399C
		return;
	case 7:
		// ERROR: 0x821439A8
		return;
	case 8:
		// ERROR: 0x821439B4
		return;
	case 9:
		// ERROR: 0x821439C0
		return;
	case 10:
		// ERROR: 0x821439CC
		return;
	case 11:
		// ERROR: 0x821439D8
		return;
	case 12:
		// ERROR: 0x821439E4
		return;
	case 13:
		// ERROR: 0x821439F0
		return;
	case 14:
		// ERROR: 0x821439FC
		return;
	case 15:
		// ERROR: 0x82143A08
		return;
	case 16:
		// ERROR: 0x82143A14
		return;
	case 17:
		// ERROR: 0x82143A20
		return;
	case 18:
		// ERROR: 0x82143A2C
		return;
	case 19:
		// ERROR: 0x82143A38
		return;
	case 20:
		// ERROR: 0x82143A44
		return;
	case 21:
		// ERROR: 0x82143A50
		return;
	case 22:
		// ERROR: 0x82143A5C
		return;
	case 23:
		// ERROR: 0x82143A68
		return;
	case 24:
		// ERROR: 0x82143A74
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821438F0"))) PPC_WEAK_FUNC(sub_821438F0);
PPC_FUNC_IMPL(__imp__sub_821438F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,14676(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14676);
	// lwz r16,14688(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14688);
	// lwz r16,14700(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14700);
	// lwz r16,14712(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14712);
	// lwz r16,14724(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14724);
	// lwz r16,14736(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14736);
	// lwz r16,14748(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14748);
	// lwz r16,14760(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14760);
	// lwz r16,14772(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14772);
	// lwz r16,14784(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14784);
	// lwz r16,14796(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14796);
	// lwz r16,14808(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14808);
	// lwz r16,14820(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14820);
	// lwz r16,14832(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14832);
	// lwz r16,14844(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14844);
	// lwz r16,14856(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14856);
	// lwz r16,14868(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14868);
	// lwz r16,14880(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14880);
	// lwz r16,14892(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14892);
	// lwz r16,14904(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14904);
	// lwz r16,14916(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14916);
	// lwz r16,14928(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14928);
	// lwz r16,14940(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14940);
	// lwz r16,14952(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14952);
	// lwz r16,14964(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 14964);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-8328
	ctx.r3.s64 = ctx.r11.s64 + -8328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143960"))) PPC_WEAK_FUNC(sub_82143960);
PPC_FUNC_IMPL(__imp__sub_82143960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10672
	ctx.r3.s64 = ctx.r11.s64 + -10672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214396C"))) PPC_WEAK_FUNC(sub_8214396C);
PPC_FUNC_IMPL(__imp__sub_8214396C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-15480
	ctx.r3.s64 = ctx.r11.s64 + -15480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143978"))) PPC_WEAK_FUNC(sub_82143978);
PPC_FUNC_IMPL(__imp__sub_82143978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-20968
	ctx.r3.s64 = ctx.r11.s64 + -20968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143984"))) PPC_WEAK_FUNC(sub_82143984);
PPC_FUNC_IMPL(__imp__sub_82143984) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-24632
	ctx.r3.s64 = ctx.r11.s64 + -24632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143990"))) PPC_WEAK_FUNC(sub_82143990);
PPC_FUNC_IMPL(__imp__sub_82143990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214399C"))) PPC_WEAK_FUNC(sub_8214399C);
PPC_FUNC_IMPL(__imp__sub_8214399C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-28240
	ctx.r3.s64 = ctx.r11.s64 + -28240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821439A8"))) PPC_WEAK_FUNC(sub_821439A8);
PPC_FUNC_IMPL(__imp__sub_821439A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,29560
	ctx.r3.s64 = ctx.r11.s64 + 29560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821439B4"))) PPC_WEAK_FUNC(sub_821439B4);
PPC_FUNC_IMPL(__imp__sub_821439B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,27360
	ctx.r3.s64 = ctx.r11.s64 + 27360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821439C0"))) PPC_WEAK_FUNC(sub_821439C0);
PPC_FUNC_IMPL(__imp__sub_821439C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,25664
	ctx.r3.s64 = ctx.r11.s64 + 25664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821439CC"))) PPC_WEAK_FUNC(sub_821439CC);
PPC_FUNC_IMPL(__imp__sub_821439CC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,21512
	ctx.r3.s64 = ctx.r11.s64 + 21512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821439D8"))) PPC_WEAK_FUNC(sub_821439D8);
PPC_FUNC_IMPL(__imp__sub_821439D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,16624
	ctx.r3.s64 = ctx.r11.s64 + 16624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821439E4"))) PPC_WEAK_FUNC(sub_821439E4);
PPC_FUNC_IMPL(__imp__sub_821439E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,14216
	ctx.r3.s64 = ctx.r11.s64 + 14216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821439F0"))) PPC_WEAK_FUNC(sub_821439F0);
PPC_FUNC_IMPL(__imp__sub_821439F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,11944
	ctx.r3.s64 = ctx.r11.s64 + 11944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821439FC"))) PPC_WEAK_FUNC(sub_821439FC);
PPC_FUNC_IMPL(__imp__sub_821439FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-12648
	ctx.r3.s64 = ctx.r11.s64 + -12648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A08"))) PPC_WEAK_FUNC(sub_82143A08);
PPC_FUNC_IMPL(__imp__sub_82143A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,11064
	ctx.r3.s64 = ctx.r11.s64 + 11064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A14"))) PPC_WEAK_FUNC(sub_82143A14);
PPC_FUNC_IMPL(__imp__sub_82143A14) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,6504
	ctx.r3.s64 = ctx.r11.s64 + 6504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A20"))) PPC_WEAK_FUNC(sub_82143A20);
PPC_FUNC_IMPL(__imp__sub_82143A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5944
	ctx.r3.s64 = ctx.r11.s64 + 5944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A2C"))) PPC_WEAK_FUNC(sub_82143A2C);
PPC_FUNC_IMPL(__imp__sub_82143A2C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,0
	ctx.r3.s64 = ctx.r11.s64 + 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A38"))) PPC_WEAK_FUNC(sub_82143A38);
PPC_FUNC_IMPL(__imp__sub_82143A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,0
	ctx.r3.s64 = ctx.r11.s64 + 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A44"))) PPC_WEAK_FUNC(sub_82143A44);
PPC_FUNC_IMPL(__imp__sub_82143A44) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A50"))) PPC_WEAK_FUNC(sub_82143A50);
PPC_FUNC_IMPL(__imp__sub_82143A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3864
	ctx.r3.s64 = ctx.r11.s64 + 3864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A5C"))) PPC_WEAK_FUNC(sub_82143A5C);
PPC_FUNC_IMPL(__imp__sub_82143A5C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A68"))) PPC_WEAK_FUNC(sub_82143A68);
PPC_FUNC_IMPL(__imp__sub_82143A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-1680
	ctx.r3.s64 = ctx.r11.s64 + -1680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A74"))) PPC_WEAK_FUNC(sub_82143A74);
PPC_FUNC_IMPL(__imp__sub_82143A74) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A80"))) PPC_WEAK_FUNC(sub_82143A80);
PPC_FUNC_IMPL(__imp__sub_82143A80) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A88"))) PPC_WEAK_FUNC(sub_82143A88);
PPC_FUNC_IMPL(__imp__sub_82143A88) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82143c40
	if (ctx.cr6.gt) {
		sub_82143C40(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,15024
	ctx.r12.s64 = ctx.r12.s64 + 15024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82143B14
		return;
	case 1:
		// ERROR: 0x82143B20
		return;
	case 2:
		// ERROR: 0x82143B2C
		return;
	case 3:
		// ERROR: 0x82143B38
		return;
	case 4:
		// ERROR: 0x82143B44
		return;
	case 5:
		// ERROR: 0x82143B50
		return;
	case 6:
		// ERROR: 0x82143B5C
		return;
	case 7:
		// ERROR: 0x82143B68
		return;
	case 8:
		// ERROR: 0x82143B74
		return;
	case 9:
		// ERROR: 0x82143B80
		return;
	case 10:
		// ERROR: 0x82143B8C
		return;
	case 11:
		// ERROR: 0x82143B98
		return;
	case 12:
		// ERROR: 0x82143BA4
		return;
	case 13:
		// ERROR: 0x82143BB0
		return;
	case 14:
		// ERROR: 0x82143BBC
		return;
	case 15:
		// ERROR: 0x82143BC8
		return;
	case 16:
		// ERROR: 0x82143BD4
		return;
	case 17:
		// ERROR: 0x82143BE0
		return;
	case 18:
		// ERROR: 0x82143BEC
		return;
	case 19:
		// ERROR: 0x82143BF8
		return;
	case 20:
		// ERROR: 0x82143C04
		return;
	case 21:
		// ERROR: 0x82143C10
		return;
	case 22:
		// ERROR: 0x82143C1C
		return;
	case 23:
		// ERROR: 0x82143C28
		return;
	case 24:
		// ERROR: 0x82143C34
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82143AB0"))) PPC_WEAK_FUNC(sub_82143AB0);
PPC_FUNC_IMPL(__imp__sub_82143AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,15124(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15124);
	// lwz r16,15136(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15136);
	// lwz r16,15148(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15148);
	// lwz r16,15160(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15160);
	// lwz r16,15172(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15172);
	// lwz r16,15184(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15184);
	// lwz r16,15196(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15196);
	// lwz r16,15208(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15208);
	// lwz r16,15220(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15220);
	// lwz r16,15232(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15232);
	// lwz r16,15244(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15244);
	// lwz r16,15256(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15256);
	// lwz r16,15268(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15268);
	// lwz r16,15280(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15280);
	// lwz r16,15292(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15292);
	// lwz r16,15304(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15304);
	// lwz r16,15316(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15316);
	// lwz r16,15328(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15328);
	// lwz r16,15340(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15340);
	// lwz r16,15352(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15352);
	// lwz r16,15364(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15364);
	// lwz r16,15376(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15376);
	// lwz r16,15388(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15388);
	// lwz r16,15400(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15400);
	// lwz r16,15412(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15412);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B20"))) PPC_WEAK_FUNC(sub_82143B20);
PPC_FUNC_IMPL(__imp__sub_82143B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B2C"))) PPC_WEAK_FUNC(sub_82143B2C);
PPC_FUNC_IMPL(__imp__sub_82143B2C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-15496
	ctx.r3.s64 = ctx.r11.s64 + -15496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B38"))) PPC_WEAK_FUNC(sub_82143B38);
PPC_FUNC_IMPL(__imp__sub_82143B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B44"))) PPC_WEAK_FUNC(sub_82143B44);
PPC_FUNC_IMPL(__imp__sub_82143B44) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-24648
	ctx.r3.s64 = ctx.r11.s64 + -24648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B50"))) PPC_WEAK_FUNC(sub_82143B50);
PPC_FUNC_IMPL(__imp__sub_82143B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B5C"))) PPC_WEAK_FUNC(sub_82143B5C);
PPC_FUNC_IMPL(__imp__sub_82143B5C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-28256
	ctx.r3.s64 = ctx.r11.s64 + -28256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B68"))) PPC_WEAK_FUNC(sub_82143B68);
PPC_FUNC_IMPL(__imp__sub_82143B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,31144
	ctx.r3.s64 = ctx.r11.s64 + 31144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B74"))) PPC_WEAK_FUNC(sub_82143B74);
PPC_FUNC_IMPL(__imp__sub_82143B74) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B80"))) PPC_WEAK_FUNC(sub_82143B80);
PPC_FUNC_IMPL(__imp__sub_82143B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,24912
	ctx.r3.s64 = ctx.r11.s64 + 24912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B8C"))) PPC_WEAK_FUNC(sub_82143B8C);
PPC_FUNC_IMPL(__imp__sub_82143B8C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B98"))) PPC_WEAK_FUNC(sub_82143B98);
PPC_FUNC_IMPL(__imp__sub_82143B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143BA4"))) PPC_WEAK_FUNC(sub_82143BA4);
PPC_FUNC_IMPL(__imp__sub_82143BA4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,10592
	ctx.r3.s64 = ctx.r11.s64 + 10592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143BB0"))) PPC_WEAK_FUNC(sub_82143BB0);
PPC_FUNC_IMPL(__imp__sub_82143BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143BBC"))) PPC_WEAK_FUNC(sub_82143BBC);
PPC_FUNC_IMPL(__imp__sub_82143BBC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-22784
	ctx.r3.s64 = ctx.r11.s64 + -22784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143BC8"))) PPC_WEAK_FUNC(sub_82143BC8);
PPC_FUNC_IMPL(__imp__sub_82143BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,10592
	ctx.r3.s64 = ctx.r11.s64 + 10592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143BD4"))) PPC_WEAK_FUNC(sub_82143BD4);
PPC_FUNC_IMPL(__imp__sub_82143BD4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143BE0"))) PPC_WEAK_FUNC(sub_82143BE0);
PPC_FUNC_IMPL(__imp__sub_82143BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143BEC"))) PPC_WEAK_FUNC(sub_82143BEC);
PPC_FUNC_IMPL(__imp__sub_82143BEC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,0
	ctx.r3.s64 = ctx.r11.s64 + 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143BF8"))) PPC_WEAK_FUNC(sub_82143BF8);
PPC_FUNC_IMPL(__imp__sub_82143BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,0
	ctx.r3.s64 = ctx.r11.s64 + 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143C04"))) PPC_WEAK_FUNC(sub_82143C04);
PPC_FUNC_IMPL(__imp__sub_82143C04) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,0
	ctx.r3.s64 = ctx.r11.s64 + 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143C10"))) PPC_WEAK_FUNC(sub_82143C10);
PPC_FUNC_IMPL(__imp__sub_82143C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3792
	ctx.r3.s64 = ctx.r11.s64 + 3792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143C1C"))) PPC_WEAK_FUNC(sub_82143C1C);
PPC_FUNC_IMPL(__imp__sub_82143C1C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143C28"))) PPC_WEAK_FUNC(sub_82143C28);
PPC_FUNC_IMPL(__imp__sub_82143C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143C34"))) PPC_WEAK_FUNC(sub_82143C34);
PPC_FUNC_IMPL(__imp__sub_82143C34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143C40"))) PPC_WEAK_FUNC(sub_82143C40);
PPC_FUNC_IMPL(__imp__sub_82143C40) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143C48"))) PPC_WEAK_FUNC(sub_82143C48);
PPC_FUNC_IMPL(__imp__sub_82143C48) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82143e00
	if (ctx.cr6.gt) {
		sub_82143E00(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,15472
	ctx.r12.s64 = ctx.r12.s64 + 15472;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82143CD4
		return;
	case 1:
		// ERROR: 0x82143CE0
		return;
	case 2:
		// ERROR: 0x82143CEC
		return;
	case 3:
		// ERROR: 0x82143CF8
		return;
	case 4:
		// ERROR: 0x82143D04
		return;
	case 5:
		// ERROR: 0x82143D10
		return;
	case 6:
		// ERROR: 0x82143D1C
		return;
	case 7:
		// ERROR: 0x82143D28
		return;
	case 8:
		// ERROR: 0x82143D34
		return;
	case 9:
		// ERROR: 0x82143D40
		return;
	case 10:
		// ERROR: 0x82143D4C
		return;
	case 11:
		// ERROR: 0x82143D58
		return;
	case 12:
		// ERROR: 0x82143D64
		return;
	case 13:
		// ERROR: 0x82143D70
		return;
	case 14:
		// ERROR: 0x82143D7C
		return;
	case 15:
		// ERROR: 0x82143D88
		return;
	case 16:
		// ERROR: 0x82143D94
		return;
	case 17:
		// ERROR: 0x82143DA0
		return;
	case 18:
		// ERROR: 0x82143DAC
		return;
	case 19:
		// ERROR: 0x82143DB8
		return;
	case 20:
		// ERROR: 0x82143DC4
		return;
	case 21:
		// ERROR: 0x82143DD0
		return;
	case 22:
		// ERROR: 0x82143DDC
		return;
	case 23:
		// ERROR: 0x82143DE8
		return;
	case 24:
		// ERROR: 0x82143DF4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82143C70"))) PPC_WEAK_FUNC(sub_82143C70);
PPC_FUNC_IMPL(__imp__sub_82143C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,15572(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15572);
	// lwz r16,15584(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15584);
	// lwz r16,15596(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15596);
	// lwz r16,15608(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15608);
	// lwz r16,15620(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15620);
	// lwz r16,15632(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15632);
	// lwz r16,15644(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15644);
	// lwz r16,15656(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15656);
	// lwz r16,15668(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15668);
	// lwz r16,15680(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15680);
	// lwz r16,15692(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15692);
	// lwz r16,15704(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15704);
	// lwz r16,15716(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15716);
	// lwz r16,15728(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15728);
	// lwz r16,15740(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15740);
	// lwz r16,15752(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15752);
	// lwz r16,15764(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15764);
	// lwz r16,15776(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15776);
	// lwz r16,15788(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15788);
	// lwz r16,15800(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15800);
	// lwz r16,15812(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15812);
	// lwz r16,15824(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15824);
	// lwz r16,15836(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15836);
	// lwz r16,15848(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15848);
	// lwz r16,15860(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 15860);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-8336
	ctx.r3.s64 = ctx.r11.s64 + -8336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143CE0"))) PPC_WEAK_FUNC(sub_82143CE0);
PPC_FUNC_IMPL(__imp__sub_82143CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143CEC"))) PPC_WEAK_FUNC(sub_82143CEC);
PPC_FUNC_IMPL(__imp__sub_82143CEC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-15488
	ctx.r3.s64 = ctx.r11.s64 + -15488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143CF8"))) PPC_WEAK_FUNC(sub_82143CF8);
PPC_FUNC_IMPL(__imp__sub_82143CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-20976
	ctx.r3.s64 = ctx.r11.s64 + -20976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D04"))) PPC_WEAK_FUNC(sub_82143D04);
PPC_FUNC_IMPL(__imp__sub_82143D04) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-24640
	ctx.r3.s64 = ctx.r11.s64 + -24640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D10"))) PPC_WEAK_FUNC(sub_82143D10);
PPC_FUNC_IMPL(__imp__sub_82143D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D1C"))) PPC_WEAK_FUNC(sub_82143D1C);
PPC_FUNC_IMPL(__imp__sub_82143D1C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-28248
	ctx.r3.s64 = ctx.r11.s64 + -28248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D28"))) PPC_WEAK_FUNC(sub_82143D28);
PPC_FUNC_IMPL(__imp__sub_82143D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-31336
	ctx.r3.s64 = ctx.r11.s64 + -31336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D34"))) PPC_WEAK_FUNC(sub_82143D34);
PPC_FUNC_IMPL(__imp__sub_82143D34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,27240
	ctx.r3.s64 = ctx.r11.s64 + 27240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D40"))) PPC_WEAK_FUNC(sub_82143D40);
PPC_FUNC_IMPL(__imp__sub_82143D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,24920
	ctx.r3.s64 = ctx.r11.s64 + 24920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D4C"))) PPC_WEAK_FUNC(sub_82143D4C);
PPC_FUNC_IMPL(__imp__sub_82143D4C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,19808
	ctx.r3.s64 = ctx.r11.s64 + 19808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D58"))) PPC_WEAK_FUNC(sub_82143D58);
PPC_FUNC_IMPL(__imp__sub_82143D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,16616
	ctx.r3.s64 = ctx.r11.s64 + 16616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D64"))) PPC_WEAK_FUNC(sub_82143D64);
PPC_FUNC_IMPL(__imp__sub_82143D64) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,10600
	ctx.r3.s64 = ctx.r11.s64 + 10600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D70"))) PPC_WEAK_FUNC(sub_82143D70);
PPC_FUNC_IMPL(__imp__sub_82143D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3856
	ctx.r3.s64 = ctx.r11.s64 + 3856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D7C"))) PPC_WEAK_FUNC(sub_82143D7C);
PPC_FUNC_IMPL(__imp__sub_82143D7C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D88"))) PPC_WEAK_FUNC(sub_82143D88);
PPC_FUNC_IMPL(__imp__sub_82143D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,10600
	ctx.r3.s64 = ctx.r11.s64 + 10600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143D94"))) PPC_WEAK_FUNC(sub_82143D94);
PPC_FUNC_IMPL(__imp__sub_82143D94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DA0"))) PPC_WEAK_FUNC(sub_82143DA0);
PPC_FUNC_IMPL(__imp__sub_82143DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DAC"))) PPC_WEAK_FUNC(sub_82143DAC);
PPC_FUNC_IMPL(__imp__sub_82143DAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DB8"))) PPC_WEAK_FUNC(sub_82143DB8);
PPC_FUNC_IMPL(__imp__sub_82143DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DC4"))) PPC_WEAK_FUNC(sub_82143DC4);
PPC_FUNC_IMPL(__imp__sub_82143DC4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DD0"))) PPC_WEAK_FUNC(sub_82143DD0);
PPC_FUNC_IMPL(__imp__sub_82143DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3856
	ctx.r3.s64 = ctx.r11.s64 + 3856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DDC"))) PPC_WEAK_FUNC(sub_82143DDC);
PPC_FUNC_IMPL(__imp__sub_82143DDC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1800
	ctx.r3.s64 = ctx.r11.s64 + 1800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DE8"))) PPC_WEAK_FUNC(sub_82143DE8);
PPC_FUNC_IMPL(__imp__sub_82143DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-1760
	ctx.r3.s64 = ctx.r11.s64 + -1760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DF4"))) PPC_WEAK_FUNC(sub_82143DF4);
PPC_FUNC_IMPL(__imp__sub_82143DF4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-4408
	ctx.r3.s64 = ctx.r11.s64 + -4408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143E00"))) PPC_WEAK_FUNC(sub_82143E00);
PPC_FUNC_IMPL(__imp__sub_82143E00) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143E08"))) PPC_WEAK_FUNC(sub_82143E08);
PPC_FUNC_IMPL(__imp__sub_82143E08) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82143fc0
	if (ctx.cr6.gt) {
		sub_82143FC0(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,15920
	ctx.r12.s64 = ctx.r12.s64 + 15920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82143E94
		return;
	case 1:
		// ERROR: 0x82143EA0
		return;
	case 2:
		// ERROR: 0x82143EAC
		return;
	case 3:
		// ERROR: 0x82143EB8
		return;
	case 4:
		// ERROR: 0x82143EC4
		return;
	case 5:
		// ERROR: 0x82143ED0
		return;
	case 6:
		// ERROR: 0x82143EDC
		return;
	case 7:
		// ERROR: 0x82143EE8
		return;
	case 8:
		// ERROR: 0x82143EF4
		return;
	case 9:
		// ERROR: 0x82143F00
		return;
	case 10:
		// ERROR: 0x82143F0C
		return;
	case 11:
		// ERROR: 0x82143F18
		return;
	case 12:
		// ERROR: 0x82143F24
		return;
	case 13:
		// ERROR: 0x82143F30
		return;
	case 14:
		// ERROR: 0x82143F3C
		return;
	case 15:
		// ERROR: 0x82143F48
		return;
	case 16:
		// ERROR: 0x82143F54
		return;
	case 17:
		// ERROR: 0x82143F60
		return;
	case 18:
		// ERROR: 0x82143F6C
		return;
	case 19:
		// ERROR: 0x82143F78
		return;
	case 20:
		// ERROR: 0x82143F84
		return;
	case 21:
		// ERROR: 0x82143F90
		return;
	case 22:
		// ERROR: 0x82143F9C
		return;
	case 23:
		// ERROR: 0x82143FA8
		return;
	case 24:
		// ERROR: 0x82143FB4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82143E30"))) PPC_WEAK_FUNC(sub_82143E30);
PPC_FUNC_IMPL(__imp__sub_82143E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,16020(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16020);
	// lwz r16,16032(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16032);
	// lwz r16,16044(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16044);
	// lwz r16,16056(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16056);
	// lwz r16,16068(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16068);
	// lwz r16,16080(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16080);
	// lwz r16,16092(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16092);
	// lwz r16,16104(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16104);
	// lwz r16,16116(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16116);
	// lwz r16,16128(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16128);
	// lwz r16,16140(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16140);
	// lwz r16,16152(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16152);
	// lwz r16,16164(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16164);
	// lwz r16,16176(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16176);
	// lwz r16,16188(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16188);
	// lwz r16,16200(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16200);
	// lwz r16,16212(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16212);
	// lwz r16,16224(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16224);
	// lwz r16,16236(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16236);
	// lwz r16,16248(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16248);
	// lwz r16,16260(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16260);
	// lwz r16,16272(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16272);
	// lwz r16,16284(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16284);
	// lwz r16,16296(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16296);
	// lwz r16,16308(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16308);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143EA0"))) PPC_WEAK_FUNC(sub_82143EA0);
PPC_FUNC_IMPL(__imp__sub_82143EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143EAC"))) PPC_WEAK_FUNC(sub_82143EAC);
PPC_FUNC_IMPL(__imp__sub_82143EAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143EB8"))) PPC_WEAK_FUNC(sub_82143EB8);
PPC_FUNC_IMPL(__imp__sub_82143EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143EC4"))) PPC_WEAK_FUNC(sub_82143EC4);
PPC_FUNC_IMPL(__imp__sub_82143EC4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143ED0"))) PPC_WEAK_FUNC(sub_82143ED0);
PPC_FUNC_IMPL(__imp__sub_82143ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143EDC"))) PPC_WEAK_FUNC(sub_82143EDC);
PPC_FUNC_IMPL(__imp__sub_82143EDC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143EE8"))) PPC_WEAK_FUNC(sub_82143EE8);
PPC_FUNC_IMPL(__imp__sub_82143EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143EF4"))) PPC_WEAK_FUNC(sub_82143EF4);
PPC_FUNC_IMPL(__imp__sub_82143EF4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F00"))) PPC_WEAK_FUNC(sub_82143F00);
PPC_FUNC_IMPL(__imp__sub_82143F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F0C"))) PPC_WEAK_FUNC(sub_82143F0C);
PPC_FUNC_IMPL(__imp__sub_82143F0C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F18"))) PPC_WEAK_FUNC(sub_82143F18);
PPC_FUNC_IMPL(__imp__sub_82143F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F24"))) PPC_WEAK_FUNC(sub_82143F24);
PPC_FUNC_IMPL(__imp__sub_82143F24) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F30"))) PPC_WEAK_FUNC(sub_82143F30);
PPC_FUNC_IMPL(__imp__sub_82143F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F3C"))) PPC_WEAK_FUNC(sub_82143F3C);
PPC_FUNC_IMPL(__imp__sub_82143F3C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-22624
	ctx.r3.s64 = ctx.r11.s64 + -22624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F48"))) PPC_WEAK_FUNC(sub_82143F48);
PPC_FUNC_IMPL(__imp__sub_82143F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F54"))) PPC_WEAK_FUNC(sub_82143F54);
PPC_FUNC_IMPL(__imp__sub_82143F54) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F60"))) PPC_WEAK_FUNC(sub_82143F60);
PPC_FUNC_IMPL(__imp__sub_82143F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F6C"))) PPC_WEAK_FUNC(sub_82143F6C);
PPC_FUNC_IMPL(__imp__sub_82143F6C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F78"))) PPC_WEAK_FUNC(sub_82143F78);
PPC_FUNC_IMPL(__imp__sub_82143F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F84"))) PPC_WEAK_FUNC(sub_82143F84);
PPC_FUNC_IMPL(__imp__sub_82143F84) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F90"))) PPC_WEAK_FUNC(sub_82143F90);
PPC_FUNC_IMPL(__imp__sub_82143F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143F9C"))) PPC_WEAK_FUNC(sub_82143F9C);
PPC_FUNC_IMPL(__imp__sub_82143F9C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143FA8"))) PPC_WEAK_FUNC(sub_82143FA8);
PPC_FUNC_IMPL(__imp__sub_82143FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143FB4"))) PPC_WEAK_FUNC(sub_82143FB4);
PPC_FUNC_IMPL(__imp__sub_82143FB4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143FC0"))) PPC_WEAK_FUNC(sub_82143FC0);
PPC_FUNC_IMPL(__imp__sub_82143FC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143FC8"))) PPC_WEAK_FUNC(sub_82143FC8);
PPC_FUNC_IMPL(__imp__sub_82143FC8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82144180
	if (ctx.cr6.gt) {
		sub_82144180(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,16368
	ctx.r12.s64 = ctx.r12.s64 + 16368;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82144054
		return;
	case 1:
		// ERROR: 0x82144060
		return;
	case 2:
		// ERROR: 0x8214406C
		return;
	case 3:
		// ERROR: 0x82144078
		return;
	case 4:
		// ERROR: 0x82144084
		return;
	case 5:
		// ERROR: 0x82144090
		return;
	case 6:
		// ERROR: 0x8214409C
		return;
	case 7:
		// ERROR: 0x821440A8
		return;
	case 8:
		// ERROR: 0x821440B4
		return;
	case 9:
		// ERROR: 0x821440C0
		return;
	case 10:
		// ERROR: 0x821440CC
		return;
	case 11:
		// ERROR: 0x821440D8
		return;
	case 12:
		// ERROR: 0x821440E4
		return;
	case 13:
		// ERROR: 0x821440F0
		return;
	case 14:
		// ERROR: 0x821440FC
		return;
	case 15:
		// ERROR: 0x82144108
		return;
	case 16:
		// ERROR: 0x82144114
		return;
	case 17:
		// ERROR: 0x82144120
		return;
	case 18:
		// ERROR: 0x8214412C
		return;
	case 19:
		// ERROR: 0x82144138
		return;
	case 20:
		// ERROR: 0x82144144
		return;
	case 21:
		// ERROR: 0x82144150
		return;
	case 22:
		// ERROR: 0x8214415C
		return;
	case 23:
		// ERROR: 0x82144168
		return;
	case 24:
		// ERROR: 0x82144174
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82143FF0"))) PPC_WEAK_FUNC(sub_82143FF0);
PPC_FUNC_IMPL(__imp__sub_82143FF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,16468(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16468);
	// lwz r16,16480(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16480);
	// lwz r16,16492(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16492);
	// lwz r16,16504(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16504);
	// lwz r16,16516(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16516);
	// lwz r16,16528(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16528);
	// lwz r16,16540(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16540);
	// lwz r16,16552(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16552);
	// lwz r16,16564(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16564);
	// lwz r16,16576(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16576);
	// lwz r16,16588(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16588);
	// lwz r16,16600(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16600);
	// lwz r16,16612(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16612);
	// lwz r16,16624(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16624);
	// lwz r16,16636(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16636);
	// lwz r16,16648(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16648);
	// lwz r16,16660(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16660);
	// lwz r16,16672(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16672);
	// lwz r16,16684(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16684);
	// lwz r16,16696(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16696);
	// lwz r16,16708(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16708);
	// lwz r16,16720(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16720);
	// lwz r16,16732(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16732);
	// lwz r16,16744(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16744);
	// lwz r16,16756(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16756);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-8320
	ctx.r3.s64 = ctx.r11.s64 + -8320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144060"))) PPC_WEAK_FUNC(sub_82144060);
PPC_FUNC_IMPL(__imp__sub_82144060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-12040
	ctx.r3.s64 = ctx.r11.s64 + -12040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214406C"))) PPC_WEAK_FUNC(sub_8214406C);
PPC_FUNC_IMPL(__imp__sub_8214406C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-15472
	ctx.r3.s64 = ctx.r11.s64 + -15472;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144078"))) PPC_WEAK_FUNC(sub_82144078);
PPC_FUNC_IMPL(__imp__sub_82144078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,16632
	ctx.r3.s64 = ctx.r11.s64 + 16632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144084"))) PPC_WEAK_FUNC(sub_82144084);
PPC_FUNC_IMPL(__imp__sub_82144084) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-24624
	ctx.r3.s64 = ctx.r11.s64 + -24624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144090"))) PPC_WEAK_FUNC(sub_82144090);
PPC_FUNC_IMPL(__imp__sub_82144090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-27128
	ctx.r3.s64 = ctx.r11.s64 + -27128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214409C"))) PPC_WEAK_FUNC(sub_8214409C);
PPC_FUNC_IMPL(__imp__sub_8214409C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440A8"))) PPC_WEAK_FUNC(sub_821440A8);
PPC_FUNC_IMPL(__imp__sub_821440A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,29584
	ctx.r3.s64 = ctx.r11.s64 + 29584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440B4"))) PPC_WEAK_FUNC(sub_821440B4);
PPC_FUNC_IMPL(__imp__sub_821440B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,27368
	ctx.r3.s64 = ctx.r11.s64 + 27368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440C0"))) PPC_WEAK_FUNC(sub_821440C0);
PPC_FUNC_IMPL(__imp__sub_821440C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,24928
	ctx.r3.s64 = ctx.r11.s64 + 24928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440CC"))) PPC_WEAK_FUNC(sub_821440CC);
PPC_FUNC_IMPL(__imp__sub_821440CC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440D8"))) PPC_WEAK_FUNC(sub_821440D8);
PPC_FUNC_IMPL(__imp__sub_821440D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,16632
	ctx.r3.s64 = ctx.r11.s64 + 16632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440E4"))) PPC_WEAK_FUNC(sub_821440E4);
PPC_FUNC_IMPL(__imp__sub_821440E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,14224
	ctx.r3.s64 = ctx.r11.s64 + 14224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440F0"))) PPC_WEAK_FUNC(sub_821440F0);
PPC_FUNC_IMPL(__imp__sub_821440F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3872
	ctx.r3.s64 = ctx.r11.s64 + 3872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440FC"))) PPC_WEAK_FUNC(sub_821440FC);
PPC_FUNC_IMPL(__imp__sub_821440FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-22512
	ctx.r3.s64 = ctx.r11.s64 + -22512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144108"))) PPC_WEAK_FUNC(sub_82144108);
PPC_FUNC_IMPL(__imp__sub_82144108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,10608
	ctx.r3.s64 = ctx.r11.s64 + 10608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144114"))) PPC_WEAK_FUNC(sub_82144114);
PPC_FUNC_IMPL(__imp__sub_82144114) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144120"))) PPC_WEAK_FUNC(sub_82144120);
PPC_FUNC_IMPL(__imp__sub_82144120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214412C"))) PPC_WEAK_FUNC(sub_8214412C);
PPC_FUNC_IMPL(__imp__sub_8214412C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r3,r11,9344
	ctx.r3.s64 = ctx.r11.s64 + 9344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144138"))) PPC_WEAK_FUNC(sub_82144138);
PPC_FUNC_IMPL(__imp__sub_82144138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4528
	ctx.r3.s64 = ctx.r11.s64 + 4528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144144"))) PPC_WEAK_FUNC(sub_82144144);
PPC_FUNC_IMPL(__imp__sub_82144144) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r3,r11,9344
	ctx.r3.s64 = ctx.r11.s64 + 9344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144150"))) PPC_WEAK_FUNC(sub_82144150);
PPC_FUNC_IMPL(__imp__sub_82144150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3872
	ctx.r3.s64 = ctx.r11.s64 + 3872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214415C"))) PPC_WEAK_FUNC(sub_8214415C);
PPC_FUNC_IMPL(__imp__sub_8214415C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1816
	ctx.r3.s64 = ctx.r11.s64 + 1816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144168"))) PPC_WEAK_FUNC(sub_82144168);
PPC_FUNC_IMPL(__imp__sub_82144168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-1672
	ctx.r3.s64 = ctx.r11.s64 + -1672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144174"))) PPC_WEAK_FUNC(sub_82144174);
PPC_FUNC_IMPL(__imp__sub_82144174) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-4392
	ctx.r3.s64 = ctx.r11.s64 + -4392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144180"))) PPC_WEAK_FUNC(sub_82144180);
PPC_FUNC_IMPL(__imp__sub_82144180) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144188"))) PPC_WEAK_FUNC(sub_82144188);
PPC_FUNC_IMPL(__imp__sub_82144188) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82144340
	if (ctx.cr6.gt) {
		sub_82144340(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,16816
	ctx.r12.s64 = ctx.r12.s64 + 16816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82144214
		return;
	case 1:
		// ERROR: 0x82144220
		return;
	case 2:
		// ERROR: 0x8214422C
		return;
	case 3:
		// ERROR: 0x82144238
		return;
	case 4:
		// ERROR: 0x82144244
		return;
	case 5:
		// ERROR: 0x82144250
		return;
	case 6:
		// ERROR: 0x8214425C
		return;
	case 7:
		// ERROR: 0x82144268
		return;
	case 8:
		// ERROR: 0x82144274
		return;
	case 9:
		// ERROR: 0x82144280
		return;
	case 10:
		// ERROR: 0x8214428C
		return;
	case 11:
		// ERROR: 0x82144298
		return;
	case 12:
		// ERROR: 0x821442A4
		return;
	case 13:
		// ERROR: 0x821442B0
		return;
	case 14:
		// ERROR: 0x821442BC
		return;
	case 15:
		// ERROR: 0x821442C8
		return;
	case 16:
		// ERROR: 0x821442D4
		return;
	case 17:
		// ERROR: 0x821442E0
		return;
	case 18:
		// ERROR: 0x821442EC
		return;
	case 19:
		// ERROR: 0x821442F8
		return;
	case 20:
		// ERROR: 0x82144304
		return;
	case 21:
		// ERROR: 0x82144310
		return;
	case 22:
		// ERROR: 0x8214431C
		return;
	case 23:
		// ERROR: 0x82144328
		return;
	case 24:
		// ERROR: 0x82144334
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821441B0"))) PPC_WEAK_FUNC(sub_821441B0);
PPC_FUNC_IMPL(__imp__sub_821441B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,16916(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16916);
	// lwz r16,16928(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16928);
	// lwz r16,16940(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16940);
	// lwz r16,16952(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16952);
	// lwz r16,16964(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16964);
	// lwz r16,16976(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16976);
	// lwz r16,16988(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16988);
	// lwz r16,17000(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17000);
	// lwz r16,17012(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17012);
	// lwz r16,17024(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17024);
	// lwz r16,17036(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17036);
	// lwz r16,17048(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17048);
	// lwz r16,17060(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17060);
	// lwz r16,17072(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17072);
	// lwz r16,17084(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17084);
	// lwz r16,17096(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17096);
	// lwz r16,17108(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17108);
	// lwz r16,17120(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17120);
	// lwz r16,17132(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17132);
	// lwz r16,17144(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17144);
	// lwz r16,17156(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17156);
	// lwz r16,17168(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17168);
	// lwz r16,17180(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17180);
	// lwz r16,17192(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17192);
	// lwz r16,17204(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17204);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144220"))) PPC_WEAK_FUNC(sub_82144220);
PPC_FUNC_IMPL(__imp__sub_82144220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214422C"))) PPC_WEAK_FUNC(sub_8214422C);
PPC_FUNC_IMPL(__imp__sub_8214422C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144238"))) PPC_WEAK_FUNC(sub_82144238);
PPC_FUNC_IMPL(__imp__sub_82144238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144244"))) PPC_WEAK_FUNC(sub_82144244);
PPC_FUNC_IMPL(__imp__sub_82144244) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144250"))) PPC_WEAK_FUNC(sub_82144250);
PPC_FUNC_IMPL(__imp__sub_82144250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214425C"))) PPC_WEAK_FUNC(sub_8214425C);
PPC_FUNC_IMPL(__imp__sub_8214425C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144268"))) PPC_WEAK_FUNC(sub_82144268);
PPC_FUNC_IMPL(__imp__sub_82144268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144274"))) PPC_WEAK_FUNC(sub_82144274);
PPC_FUNC_IMPL(__imp__sub_82144274) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144280"))) PPC_WEAK_FUNC(sub_82144280);
PPC_FUNC_IMPL(__imp__sub_82144280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214428C"))) PPC_WEAK_FUNC(sub_8214428C);
PPC_FUNC_IMPL(__imp__sub_8214428C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144298"))) PPC_WEAK_FUNC(sub_82144298);
PPC_FUNC_IMPL(__imp__sub_82144298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442A4"))) PPC_WEAK_FUNC(sub_821442A4);
PPC_FUNC_IMPL(__imp__sub_821442A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442B0"))) PPC_WEAK_FUNC(sub_821442B0);
PPC_FUNC_IMPL(__imp__sub_821442B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442BC"))) PPC_WEAK_FUNC(sub_821442BC);
PPC_FUNC_IMPL(__imp__sub_821442BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442C8"))) PPC_WEAK_FUNC(sub_821442C8);
PPC_FUNC_IMPL(__imp__sub_821442C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442D4"))) PPC_WEAK_FUNC(sub_821442D4);
PPC_FUNC_IMPL(__imp__sub_821442D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442E0"))) PPC_WEAK_FUNC(sub_821442E0);
PPC_FUNC_IMPL(__imp__sub_821442E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442EC"))) PPC_WEAK_FUNC(sub_821442EC);
PPC_FUNC_IMPL(__imp__sub_821442EC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442F8"))) PPC_WEAK_FUNC(sub_821442F8);
PPC_FUNC_IMPL(__imp__sub_821442F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144304"))) PPC_WEAK_FUNC(sub_82144304);
PPC_FUNC_IMPL(__imp__sub_82144304) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144310"))) PPC_WEAK_FUNC(sub_82144310);
PPC_FUNC_IMPL(__imp__sub_82144310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214431C"))) PPC_WEAK_FUNC(sub_8214431C);
PPC_FUNC_IMPL(__imp__sub_8214431C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144328"))) PPC_WEAK_FUNC(sub_82144328);
PPC_FUNC_IMPL(__imp__sub_82144328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144334"))) PPC_WEAK_FUNC(sub_82144334);
PPC_FUNC_IMPL(__imp__sub_82144334) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144340"))) PPC_WEAK_FUNC(sub_82144340);
PPC_FUNC_IMPL(__imp__sub_82144340) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144348"))) PPC_WEAK_FUNC(sub_82144348);
PPC_FUNC_IMPL(__imp__sub_82144348) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82144500
	if (ctx.cr6.gt) {
		sub_82144500(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,17264
	ctx.r12.s64 = ctx.r12.s64 + 17264;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x821443D4
		return;
	case 1:
		// ERROR: 0x821443E0
		return;
	case 2:
		// ERROR: 0x821443EC
		return;
	case 3:
		// ERROR: 0x821443F8
		return;
	case 4:
		// ERROR: 0x82144404
		return;
	case 5:
		// ERROR: 0x82144410
		return;
	case 6:
		// ERROR: 0x8214441C
		return;
	case 7:
		// ERROR: 0x82144428
		return;
	case 8:
		// ERROR: 0x82144434
		return;
	case 9:
		// ERROR: 0x82144440
		return;
	case 10:
		// ERROR: 0x8214444C
		return;
	case 11:
		// ERROR: 0x82144458
		return;
	case 12:
		// ERROR: 0x82144464
		return;
	case 13:
		// ERROR: 0x82144470
		return;
	case 14:
		// ERROR: 0x8214447C
		return;
	case 15:
		// ERROR: 0x82144488
		return;
	case 16:
		// ERROR: 0x82144494
		return;
	case 17:
		// ERROR: 0x821444A0
		return;
	case 18:
		// ERROR: 0x821444AC
		return;
	case 19:
		// ERROR: 0x821444B8
		return;
	case 20:
		// ERROR: 0x821444C4
		return;
	case 21:
		// ERROR: 0x821444D0
		return;
	case 22:
		// ERROR: 0x821444DC
		return;
	case 23:
		// ERROR: 0x821444E8
		return;
	case 24:
		// ERROR: 0x821444F4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82144370"))) PPC_WEAK_FUNC(sub_82144370);
PPC_FUNC_IMPL(__imp__sub_82144370) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,17364(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17364);
	// lwz r16,17376(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17376);
	// lwz r16,17388(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17388);
	// lwz r16,17400(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17400);
	// lwz r16,17412(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17412);
	// lwz r16,17424(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17424);
	// lwz r16,17436(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17436);
	// lwz r16,17448(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17448);
	// lwz r16,17460(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17460);
	// lwz r16,17472(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17472);
	// lwz r16,17484(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17484);
	// lwz r16,17496(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17496);
	// lwz r16,17508(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17508);
	// lwz r16,17520(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17520);
	// lwz r16,17532(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17532);
	// lwz r16,17544(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17544);
	// lwz r16,17556(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17556);
	// lwz r16,17568(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17568);
	// lwz r16,17580(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17580);
	// lwz r16,17592(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17592);
	// lwz r16,17604(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17604);
	// lwz r16,17616(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17616);
	// lwz r16,17628(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17628);
	// lwz r16,17640(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17640);
	// lwz r16,17652(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17652);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821443E0"))) PPC_WEAK_FUNC(sub_821443E0);
PPC_FUNC_IMPL(__imp__sub_821443E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821443EC"))) PPC_WEAK_FUNC(sub_821443EC);
PPC_FUNC_IMPL(__imp__sub_821443EC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821443F8"))) PPC_WEAK_FUNC(sub_821443F8);
PPC_FUNC_IMPL(__imp__sub_821443F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144404"))) PPC_WEAK_FUNC(sub_82144404);
PPC_FUNC_IMPL(__imp__sub_82144404) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144410"))) PPC_WEAK_FUNC(sub_82144410);
PPC_FUNC_IMPL(__imp__sub_82144410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214441C"))) PPC_WEAK_FUNC(sub_8214441C);
PPC_FUNC_IMPL(__imp__sub_8214441C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144428"))) PPC_WEAK_FUNC(sub_82144428);
PPC_FUNC_IMPL(__imp__sub_82144428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,28880
	ctx.r3.s64 = ctx.r11.s64 + 28880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144434"))) PPC_WEAK_FUNC(sub_82144434);
PPC_FUNC_IMPL(__imp__sub_82144434) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144440"))) PPC_WEAK_FUNC(sub_82144440);
PPC_FUNC_IMPL(__imp__sub_82144440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214444C"))) PPC_WEAK_FUNC(sub_8214444C);
PPC_FUNC_IMPL(__imp__sub_8214444C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144458"))) PPC_WEAK_FUNC(sub_82144458);
PPC_FUNC_IMPL(__imp__sub_82144458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144464"))) PPC_WEAK_FUNC(sub_82144464);
PPC_FUNC_IMPL(__imp__sub_82144464) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144470"))) PPC_WEAK_FUNC(sub_82144470);
PPC_FUNC_IMPL(__imp__sub_82144470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214447C"))) PPC_WEAK_FUNC(sub_8214447C);
PPC_FUNC_IMPL(__imp__sub_8214447C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144488"))) PPC_WEAK_FUNC(sub_82144488);
PPC_FUNC_IMPL(__imp__sub_82144488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144494"))) PPC_WEAK_FUNC(sub_82144494);
PPC_FUNC_IMPL(__imp__sub_82144494) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444A0"))) PPC_WEAK_FUNC(sub_821444A0);
PPC_FUNC_IMPL(__imp__sub_821444A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444AC"))) PPC_WEAK_FUNC(sub_821444AC);
PPC_FUNC_IMPL(__imp__sub_821444AC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444B8"))) PPC_WEAK_FUNC(sub_821444B8);
PPC_FUNC_IMPL(__imp__sub_821444B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444C4"))) PPC_WEAK_FUNC(sub_821444C4);
PPC_FUNC_IMPL(__imp__sub_821444C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444D0"))) PPC_WEAK_FUNC(sub_821444D0);
PPC_FUNC_IMPL(__imp__sub_821444D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444DC"))) PPC_WEAK_FUNC(sub_821444DC);
PPC_FUNC_IMPL(__imp__sub_821444DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444E8"))) PPC_WEAK_FUNC(sub_821444E8);
PPC_FUNC_IMPL(__imp__sub_821444E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444F4"))) PPC_WEAK_FUNC(sub_821444F4);
PPC_FUNC_IMPL(__imp__sub_821444F4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144500"))) PPC_WEAK_FUNC(sub_82144500);
PPC_FUNC_IMPL(__imp__sub_82144500) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144508"))) PPC_WEAK_FUNC(sub_82144508);
PPC_FUNC_IMPL(__imp__sub_82144508) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x821446c0
	if (ctx.cr6.gt) {
		sub_821446C0(ctx, base);
		return;
	}
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,17712
	ctx.r12.s64 = ctx.r12.s64 + 17712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82144594
		return;
	case 1:
		// ERROR: 0x821445A0
		return;
	case 2:
		// ERROR: 0x821445AC
		return;
	case 3:
		// ERROR: 0x821445B8
		return;
	case 4:
		// ERROR: 0x821445C4
		return;
	case 5:
		// ERROR: 0x821445D0
		return;
	case 6:
		// ERROR: 0x821445DC
		return;
	case 7:
		// ERROR: 0x821445E8
		return;
	case 8:
		// ERROR: 0x821445F4
		return;
	case 9:
		// ERROR: 0x82144600
		return;
	case 10:
		// ERROR: 0x8214460C
		return;
	case 11:
		// ERROR: 0x82144618
		return;
	case 12:
		// ERROR: 0x82144624
		return;
	case 13:
		// ERROR: 0x82144630
		return;
	case 14:
		// ERROR: 0x8214463C
		return;
	case 15:
		// ERROR: 0x82144648
		return;
	case 16:
		// ERROR: 0x82144654
		return;
	case 17:
		// ERROR: 0x82144660
		return;
	case 18:
		// ERROR: 0x8214466C
		return;
	case 19:
		// ERROR: 0x82144678
		return;
	case 20:
		// ERROR: 0x82144684
		return;
	case 21:
		// ERROR: 0x82144690
		return;
	case 22:
		// ERROR: 0x8214469C
		return;
	case 23:
		// ERROR: 0x821446A8
		return;
	case 24:
		// ERROR: 0x821446B4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82144530"))) PPC_WEAK_FUNC(sub_82144530);
PPC_FUNC_IMPL(__imp__sub_82144530) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,17812(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17812);
	// lwz r16,17824(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17824);
	// lwz r16,17836(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17836);
	// lwz r16,17848(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17848);
	// lwz r16,17860(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17860);
	// lwz r16,17872(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17872);
	// lwz r16,17884(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17884);
	// lwz r16,17896(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17896);
	// lwz r16,17908(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17908);
	// lwz r16,17920(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17920);
	// lwz r16,17932(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17932);
	// lwz r16,17944(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17944);
	// lwz r16,17956(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17956);
	// lwz r16,17968(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17968);
	// lwz r16,17980(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17980);
	// lwz r16,17992(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17992);
	// lwz r16,18004(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18004);
	// lwz r16,18016(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18016);
	// lwz r16,18028(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18028);
	// lwz r16,18040(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18040);
	// lwz r16,18052(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18052);
	// lwz r16,18064(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18064);
	// lwz r16,18076(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18076);
	// lwz r16,18088(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18088);
	// lwz r16,18100(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18100);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821445A0"))) PPC_WEAK_FUNC(sub_821445A0);
PPC_FUNC_IMPL(__imp__sub_821445A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821445AC"))) PPC_WEAK_FUNC(sub_821445AC);
PPC_FUNC_IMPL(__imp__sub_821445AC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821445B8"))) PPC_WEAK_FUNC(sub_821445B8);
PPC_FUNC_IMPL(__imp__sub_821445B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821445C4"))) PPC_WEAK_FUNC(sub_821445C4);
PPC_FUNC_IMPL(__imp__sub_821445C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821445D0"))) PPC_WEAK_FUNC(sub_821445D0);
PPC_FUNC_IMPL(__imp__sub_821445D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821445DC"))) PPC_WEAK_FUNC(sub_821445DC);
PPC_FUNC_IMPL(__imp__sub_821445DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821445E8"))) PPC_WEAK_FUNC(sub_821445E8);
PPC_FUNC_IMPL(__imp__sub_821445E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,29592
	ctx.r3.s64 = ctx.r11.s64 + 29592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821445F4"))) PPC_WEAK_FUNC(sub_821445F4);
PPC_FUNC_IMPL(__imp__sub_821445F4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144600"))) PPC_WEAK_FUNC(sub_82144600);
PPC_FUNC_IMPL(__imp__sub_82144600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214460C"))) PPC_WEAK_FUNC(sub_8214460C);
PPC_FUNC_IMPL(__imp__sub_8214460C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144618"))) PPC_WEAK_FUNC(sub_82144618);
PPC_FUNC_IMPL(__imp__sub_82144618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144624"))) PPC_WEAK_FUNC(sub_82144624);
PPC_FUNC_IMPL(__imp__sub_82144624) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144630"))) PPC_WEAK_FUNC(sub_82144630);
PPC_FUNC_IMPL(__imp__sub_82144630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214463C"))) PPC_WEAK_FUNC(sub_8214463C);
PPC_FUNC_IMPL(__imp__sub_8214463C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144648"))) PPC_WEAK_FUNC(sub_82144648);
PPC_FUNC_IMPL(__imp__sub_82144648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144654"))) PPC_WEAK_FUNC(sub_82144654);
PPC_FUNC_IMPL(__imp__sub_82144654) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144660"))) PPC_WEAK_FUNC(sub_82144660);
PPC_FUNC_IMPL(__imp__sub_82144660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214466C"))) PPC_WEAK_FUNC(sub_8214466C);
PPC_FUNC_IMPL(__imp__sub_8214466C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144678"))) PPC_WEAK_FUNC(sub_82144678);
PPC_FUNC_IMPL(__imp__sub_82144678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// blr 
	return;
}

