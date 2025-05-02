#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82783240"))) PPC_WEAK_FUNC(sub_82783240);
PPC_FUNC_IMPL(__imp__sub_82783240) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82783270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r31.u32);
	// addi r8,r9,11640
	ctx.r8.s64 = ctx.r9.s64 + 11640;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r4,276(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x827832e4
	if (!ctx.cr6.eq) goto loc_827832E4;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r9,r11,11664
	ctx.r9.s64 = ctx.r11.s64 + 11664;
	// addi r8,r10,12376
	ctx.r8.s64 = ctx.r10.s64 + 12376;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x827832DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x82783300
	goto loc_82783300;
loc_827832E4:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r8,r10,11928
	ctx.r8.s64 = ctx.r10.s64 + 11928;
	// addi r7,r9,12040
	ctx.r7.s64 = ctx.r9.s64 + 12040;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_82783300:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82782c58
	ctx.lr = 0x82783308;
	sub_82782C58(ctx, base);
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

__attribute__((alias("__imp__sub_82783320"))) PPC_WEAK_FUNC(sub_82783320);
PPC_FUNC_IMPL(__imp__sub_82783320) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r31,92(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ble cr6,0x827833b0
	if (!ctx.cr6.gt) goto loc_827833B0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r3,r11,65535
	ctx.r3.u64 = ctx.r11.u64 | 65535;
loc_82783340:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827833a4
	if (ctx.cr6.eq) goto loc_827833A4;
loc_82783350:
	// lbz r11,1(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rlwinm r11,r11,3,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFE0;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r9,31,1,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r11,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82783398
	if (!ctx.cr6.eq) goto loc_82783398;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sthx r11,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u16);
loc_82783398:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// bne 0x82783350
	if (!ctx.cr0.eq) goto loc_82783350;
loc_827833A4:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82783340
	if (!ctx.cr0.eq) goto loc_82783340;
loc_827833B0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827833B8"))) PPC_WEAK_FUNC(sub_827833B8);
PPC_FUNC_IMPL(__imp__sub_827833B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x827833C0;
	__savegprlr_25(ctx, base);
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r27,12(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// lwz r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r28,20(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// ble cr6,0x827834f8
	if (!ctx.cr6.gt) goto loc_827834F8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_827833F4:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82783450
	if (ctx.cr6.gt) goto loc_82783450;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82783414:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82783440
	if (ctx.cr6.gt) goto loc_82783440;
loc_82783424:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82783464
	if (!ctx.cr6.eq) goto loc_82783464;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82783424
	if (!ctx.cr6.gt) goto loc_82783424;
loc_82783440:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82783414
	if (!ctx.cr6.gt) goto loc_82783414;
loc_82783450:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x827833f4
	if (!ctx.cr6.gt) goto loc_827833F4;
	// b 0x8278346c
	goto loc_8278346C;
loc_82783464:
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
loc_8278346C:
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x827834f8
	if (!ctx.cr6.gt) goto loc_827834F8;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82783480:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x827834dc
	if (ctx.cr6.gt) goto loc_827834DC;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827834A0:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x827834cc
	if (ctx.cr6.gt) goto loc_827834CC;
loc_827834B0:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x827834f0
	if (!ctx.cr6.eq) goto loc_827834F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x827834b0
	if (!ctx.cr6.gt) goto loc_827834B0;
loc_827834CC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x827834a0
	if (!ctx.cr6.gt) goto loc_827834A0;
loc_827834DC:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82783480
	if (!ctx.cr6.lt) goto loc_82783480;
	// b 0x827834f8
	goto loc_827834F8;
loc_827834F0:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
loc_827834F8:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82783608
	if (!ctx.cr6.lt) goto loc_82783608;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82783510:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82783564
	if (ctx.cr6.gt) goto loc_82783564;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82783524:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bgt cr6,0x82783554
	if (ctx.cr6.gt) goto loc_82783554;
loc_82783538:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82783578
	if (!ctx.cr6.eq) goto loc_82783578;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82783538
	if (!ctx.cr6.gt) goto loc_82783538;
loc_82783554:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82783524
	if (!ctx.cr6.gt) goto loc_82783524;
loc_82783564:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// cmpw cr6,r6,r27
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82783510
	if (!ctx.cr6.gt) goto loc_82783510;
	// b 0x82783580
	goto loc_82783580;
loc_82783578:
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
loc_82783580:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82783608
	if (!ctx.cr6.gt) goto loc_82783608;
	// rlwinm r11,r27,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82783598:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x827835ec
	if (ctx.cr6.gt) goto loc_827835EC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_827835AC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bgt cr6,0x827835dc
	if (ctx.cr6.gt) goto loc_827835DC;
loc_827835C0:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82783600
	if (!ctx.cr6.eq) goto loc_82783600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x827835c0
	if (!ctx.cr6.gt) goto loc_827835C0;
loc_827835DC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x827835ac
	if (!ctx.cr6.gt) goto loc_827835AC;
loc_827835EC:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r8,r8,-64
	ctx.r8.s64 = ctx.r8.s64 + -64;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82783598
	if (!ctx.cr6.lt) goto loc_82783598;
	// b 0x82783608
	goto loc_82783608;
loc_82783600:
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
loc_82783608:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82783710
	if (!ctx.cr6.lt) goto loc_82783710;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82783614:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82783674
	if (ctx.cr6.gt) goto loc_82783674;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82783634:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bgt cr6,0x82783664
	if (ctx.cr6.gt) goto loc_82783664;
loc_82783648:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82783684
	if (!ctx.cr6.eq) goto loc_82783684;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82783648
	if (!ctx.cr6.gt) goto loc_82783648;
loc_82783664:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82783634
	if (!ctx.cr6.gt) goto loc_82783634;
loc_82783674:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82783614
	if (!ctx.cr6.gt) goto loc_82783614;
	// b 0x8278368c
	goto loc_8278368C;
loc_82783684:
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
loc_8278368C:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82783710
	if (!ctx.cr6.gt) goto loc_82783710;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82783698:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x827836f8
	if (ctx.cr6.gt) goto loc_827836F8;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_827836B8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bgt cr6,0x827836e8
	if (ctx.cr6.gt) goto loc_827836E8;
loc_827836CC:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82783708
	if (!ctx.cr6.eq) goto loc_82783708;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x827836cc
	if (!ctx.cr6.gt) goto loc_827836CC;
loc_827836E8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x827836b8
	if (!ctx.cr6.gt) goto loc_827836B8;
loc_827836F8:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82783698
	if (!ctx.cr6.lt) goto loc_82783698;
	// b 0x82783710
	goto loc_82783710;
loc_82783708:
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
loc_82783710:
	// subf r8,r29,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r29.s64;
	// subf r5,r30,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r30.s64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r10,r9,r9
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x827837c4
	if (ctx.cr6.gt) goto loc_827837C4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// add r6,r10,r25
	ctx.r6.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_82783760:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x827837b8
	if (ctx.cr6.gt) goto loc_827837B8;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82783780:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x827837ac
	if (ctx.cr6.gt) goto loc_827837AC;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
loc_82783790:
	// lhz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827837a0
	if (ctx.cr6.eq) goto loc_827837A0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_827837A0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x82783790
	if (!ctx.cr0.eq) goto loc_82783790;
loc_827837AC:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// bne 0x82783780
	if (!ctx.cr0.eq) goto loc_82783780;
loc_827837B8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82783760
	if (!ctx.cr0.eq) goto loc_82783760;
loc_827837C4:
	// stw r3,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r3.u32);
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827837CC"))) PPC_WEAK_FUNC(sub_827837CC);
PPC_FUNC_IMPL(__imp__sub_827837CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827837D0"))) PPC_WEAK_FUNC(sub_827837D0);
PPC_FUNC_IMPL(__imp__sub_827837D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x827837D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x827839a4
	if (!ctx.cr6.lt) goto loc_827839A4;
	// rlwinm r11,r27,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r26,r27,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_82783804:
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bgt cr6,0x82783854
	if (ctx.cr6.gt) goto loc_82783854;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82783884
	if (!ctx.cr6.gt) goto loc_82783884;
	// addi r11,r25,28
	ctx.r11.s64 = ctx.r25.s64 + 28;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82783824:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82783844
	if (!ctx.cr6.gt) goto loc_82783844;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82783844
	if (!ctx.cr6.gt) goto loc_82783844;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82783844:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82783824
	if (!ctx.cr0.eq) goto loc_82783824;
	// b 0x82783884
	goto loc_82783884;
loc_82783854:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82783884
	if (!ctx.cr6.gt) goto loc_82783884;
	// addi r11,r25,24
	ctx.r11.s64 = ctx.r25.s64 + 24;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82783864:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82783878
	if (!ctx.cr6.gt) goto loc_82783878;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82783878:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82783864
	if (!ctx.cr0.eq) goto loc_82783864;
loc_82783884:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827839a4
	if (ctx.cr6.eq) goto loc_827839A4;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r29,r31,-12
	ctx.r29.s64 = ctx.r31.s64 + -12;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r8,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r3,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r3.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8278390c
	if (!ctx.cr6.gt) goto loc_8278390C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8278390C:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82783918
	if (!ctx.cr6.gt) goto loc_82783918;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82783918:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82783964
	if (ctx.cr6.lt) goto loc_82783964;
	// beq cr6,0x82783948
	if (ctx.cr6.eq) goto loc_82783948;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x8278397c
	if (!ctx.cr6.lt) goto loc_8278397C;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x8278397c
	goto loc_8278397C;
loc_82783948:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r9,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r9.u32);
	// b 0x8278397c
	goto loc_8278397C;
loc_82783964:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_8278397C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x827833b8
	ctx.lr = 0x82783984;
	sub_827833B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x827833b8
	ctx.lr = 0x82783990;
	sub_827833B8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82783804
	if (ctx.cr6.lt) goto loc_82783804;
loc_827839A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827839B0"))) PPC_WEAK_FUNC(sub_827839B0);
PPC_FUNC_IMPL(__imp__sub_827839B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d0
	ctx.lr = 0x827839B8;
	__savegprlr_18(ctx, base);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r6,424(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r23,8(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r19,12(r8)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r26,16(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r21,20(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// bgt cr6,0x82783aac
	if (ctx.cr6.gt) goto loc_82783AAC;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r28,r8,4
	ctx.r28.s64 = ctx.r8.s64 + 4;
	// add r20,r6,r9
	ctx.r20.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
loc_82783A0C:
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r19.s32, ctx.xer);
	// bgt cr6,0x82783a9c
	if (ctx.cr6.gt) goto loc_82783A9C;
	// rlwinm r11,r23,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subf r11,r23,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r23.s64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
loc_82783A38:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmpw cr6,r26,r21
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x82783a8c
	if (ctx.cr6.gt) goto loc_82783A8C;
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r26,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r26.s64;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82783A54:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82783a80
	if (ctx.cr6.eq) goto loc_82783A80;
	// mullw r8,r28,r11
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r29,r11
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82783A80:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bne 0x82783a54
	if (!ctx.cr0.eq) goto loc_82783A54;
loc_82783A8C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82783a38
	if (!ctx.cr0.eq) goto loc_82783A38;
loc_82783A9C:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x82783a0c
	if (!ctx.cr0.eq) goto loc_82783A0C;
loc_82783AAC:
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// twllei r7,0
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// divw r31,r9,r7
	ctx.r31.s32 = ctx.r9.s32 / ctx.r7.s32;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r30,r8,r7
	ctx.r30.s32 = ctx.r8.s32 / ctx.r7.s32;
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// stbx r31,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r31.u8);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbx r30,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r30.u8);
	// andc r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// andc r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// divw r6,r6,r7
	ctx.r6.s32 = ctx.r6.s32 / ctx.r7.s32;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// andc r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// twllei r7,0
	// stbx r6,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r6.u8);
	// twllei r7,0
	// twlgei r10,-1
	// twlgei r8,-1
	// twlgei r3,-1
	// b 0x823d9220
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783B2C"))) PPC_WEAK_FUNC(sub_82783B2C);
PPC_FUNC_IMPL(__imp__sub_82783B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82783B30"))) PPC_WEAK_FUNC(sub_82783B30);
PPC_FUNC_IMPL(__imp__sub_82783B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82783B38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r5,r29,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82783B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r9,63
	ctx.r9.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x827833b8
	ctx.lr = 0x82783B90;
	sub_827833B8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827837d0
	ctx.lr = 0x82783BA0;
	sub_827837D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82783bcc
	if (!ctx.cr6.gt) goto loc_82783BCC;
loc_82783BB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827839b0
	ctx.lr = 0x82783BBC;
	sub_827839B0(ctx, base);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82783bb0
	if (ctx.cr6.lt) goto loc_82783BB0;
loc_82783BCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r29,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82783BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783C04"))) PPC_WEAK_FUNC(sub_82783C04);
PPC_FUNC_IMPL(__imp__sub_82783C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82783C08"))) PPC_WEAK_FUNC(sub_82783C08);
PPC_FUNC_IMPL(__imp__sub_82783C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d0
	ctx.lr = 0x82783C10;
	__savegprlr_18(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r4,24
	ctx.r28.s64 = ctx.r4.s64 + 24;
	// lwz r25,112(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r30,r5,28
	ctx.r30.s64 = ctx.r5.s64 + 28;
	// addi r29,r6,24
	ctx.r29.s64 = ctx.r6.s64 + 24;
	// add r11,r28,r4
	ctx.r11.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r9,r29,r6
	ctx.r9.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lis r23,32767
	ctx.r23.s64 = 2147418112;
	// srawi r24,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 1;
	// srawi r19,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r10.s32 >> 1;
	// srawi r18,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r9.s32 >> 1;
	// ori r23,r23,65535
	ctx.r23.u64 = ctx.r23.u64 | 65535;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82783dd0
	if (!ctx.cr6.gt) goto loc_82783DD0;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r26,r1,16
	ctx.r26.s64 = ctx.r1.s64 + 16;
	// lwz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r20,8(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82783C64:
	// lbzx r11,r22,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r27.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82783c8c
	if (!ctx.cr6.lt) goto loc_82783C8C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r9,r28,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r28.s64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r8,r8
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// b 0x82783cd0
	goto loc_82783CD0;
loc_82783C8C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82783cb0
	if (!ctx.cr6.gt) goto loc_82783CB0;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r8,r8
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// b 0x82783cd0
	goto loc_82783CD0;
loc_82783CB0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x82783cc4
	if (ctx.cr6.gt) goto loc_82783CC4;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x82783cc8
	goto loc_82783CC8;
loc_82783CC4:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_82783CC8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r9,r9
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
loc_82783CD0:
	// lbzx r11,r21,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r27.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82783d00
	if (!ctx.cr6.lt) goto loc_82783D00;
	// subf r8,r5,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r3,r30,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r30.s64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x82783d48
	goto loc_82783D48;
loc_82783D00:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82783d2c
	if (!ctx.cr6.gt) goto loc_82783D2C;
	// subf r8,r30,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r3,r5,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r5.s64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x82783d48
	goto loc_82783D48;
loc_82783D2C:
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bgt cr6,0x82783d3c
	if (ctx.cr6.gt) goto loc_82783D3C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// b 0x82783d40
	goto loc_82783D40;
loc_82783D3C:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_82783D40:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82783D48:
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r9,r20,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r27.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82783d74
	if (!ctx.cr6.lt) goto loc_82783D74;
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r3,r29,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r29.s64;
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x82783dac
	goto loc_82783DAC;
loc_82783D74:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82783d94
	if (!ctx.cr6.gt) goto loc_82783D94;
	// subf r8,r29,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r29.s64;
	// subf r3,r6,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r6.s64;
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x82783dac
	goto loc_82783DAC;
loc_82783D94:
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// bgt cr6,0x82783da4
	if (ctx.cr6.gt) goto loc_82783DA4;
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// b 0x82783da8
	goto loc_82783DA8;
loc_82783DA4:
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
loc_82783DA8:
	// mullw r9,r9,r9
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
loc_82783DAC:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82783dc0
	if (!ctx.cr6.lt) goto loc_82783DC0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82783DC0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82783c64
	if (ctx.cr6.lt) goto loc_82783C64;
loc_82783DD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82783e08
	if (!ctx.cr6.gt) goto loc_82783E08;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
loc_82783DE4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x82783df8
	if (ctx.cr6.gt) goto loc_82783DF8;
	// stbx r11,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82783DF8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82783de4
	if (ctx.cr6.lt) goto loc_82783DE4;
loc_82783E08:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823d9220
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783E10"))) PPC_WEAK_FUNC(sub_82783E10);
PPC_FUNC_IMPL(__imp__sub_82783E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d0
	ctx.lr = 0x82783E18;
	__savegprlr_18(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,32767
	ctx.r31.s64 = 2147418112;
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// li r10,128
	ctx.r10.s64 = 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82783E30:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82783e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82783E30;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82783f64
	if (!ctx.cr6.gt) goto loc_82783F64;
loc_82783E48:
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// lbzx r28,r19,r8
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r8.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// li r22,3
	ctx.r22.s64 = 3;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lbzx r31,r30,r28
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lbzx r29,r28,r29
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// subf r30,r31,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r31.s64;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r29,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r29.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r10,6
	ctx.r29.s64 = ctx.r10.s64 + 6;
	// mullw r25,r10,r10
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r30,r30
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r30.s32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r26,r29,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r25,r30,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r30,r31,r31
	ctx.r30.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r26,r10,r30
	ctx.r26.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r20,r29,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r21,r31,5,0,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r24,r25,128
	ctx.r24.s64 = ctx.r25.s64 + 128;
	// addi r23,r25,256
	ctx.r23.s64 = ctx.r25.s64 + 256;
loc_82783EC8:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// li r30,7
	ctx.r30.s64 = 7;
loc_82783ED4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82783ee8
	if (!ctx.cr6.lt) goto loc_82783EE8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stb r28,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r28.u8);
loc_82783EE8:
	// lwz r18,4(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x82783f00
	if (!ctx.cr6.lt) goto loc_82783F00;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stb r28,1(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1, ctx.r28.u8);
loc_82783F00:
	// lwz r18,8(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x82783f18
	if (!ctx.cr6.lt) goto loc_82783F18;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stb r28,2(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2, ctx.r28.u8);
loc_82783F18:
	// lwz r18,12(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x82783f30
	if (!ctx.cr6.lt) goto loc_82783F30;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stb r28,3(r27)
	PPC_STORE_U8(ctx.r27.u32 + 3, ctx.r28.u8);
loc_82783F30:
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,288
	ctx.r29.s64 = ctx.r29.s64 + 288;
	// bge 0x82783ed4
	if (!ctx.cr0.lt) goto loc_82783ED4;
	// add r26,r21,r26
	ctx.r26.u64 = ctx.r21.u64 + ctx.r26.u64;
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r21,r21,512
	ctx.r21.s64 = ctx.r21.s64 + 512;
	// bge 0x82783ec8
	if (!ctx.cr0.lt) goto loc_82783EC8;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r19,r7
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82783e48
	if (ctx.cr6.lt) goto loc_82783E48;
loc_82783F64:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x823d9220
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783F6C"))) PPC_WEAK_FUNC(sub_82783F6C);
PPC_FUNC_IMPL(__imp__sub_82783F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82783F70"))) PPC_WEAK_FUNC(sub_82783F70);
PPC_FUNC_IMPL(__imp__sub_82783F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82783F78;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// srawi r31,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 2;
	// srawi r30,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 3;
	// srawi r29,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r6.s32 >> 2;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,424(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 424);
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lwz r28,24(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// bl 0x82783c08
	ctx.lr = 0x82783FB4;
	sub_82783C08(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82783e10
	ctx.lr = 0x82783FC8;
	sub_82783E10(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + ctx.r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
loc_82783FE8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r9,8
	ctx.r9.s64 = 8;
loc_82783FF0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r7,1
	ctx.r30.s64 = ctx.r7.s64 + 1;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r30.u16);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// sth r5,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r5.u16);
	// sth r7,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// bne 0x82783ff0
	if (!ctx.cr0.eq) goto loc_82783FF0;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82783fe8
	if (!ctx.cr0.eq) goto loc_82783FE8;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278404C"))) PPC_WEAK_FUNC(sub_8278404C);
PPC_FUNC_IMPL(__imp__sub_8278404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82784050"))) PPC_WEAK_FUNC(sub_82784050);
PPC_FUNC_IMPL(__imp__sub_82784050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x82784058;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r23,92(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 92);
	// lwz r26,24(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ble cr6,0x82784104
	if (!ctx.cr6.gt) goto loc_82784104;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// subf r22,r5,r4
	ctx.r22.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
loc_82784080:
	// lwzx r31,r22,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x827840f8
	if (ctx.cr6.eq) goto loc_827840F8;
loc_82784094:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r10,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// lwzx r29,r8,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827840e0
	if (!ctx.cr6.eq) goto loc_827840E0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82783f70
	ctx.lr = 0x827840E0;
	sub_82783F70(ctx, base);
loc_827840E0:
	// lhzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x82784094
	if (!ctx.cr0.eq) goto loc_82784094;
loc_827840F8:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x82784080
	if (!ctx.cr0.eq) goto loc_82784080;
loc_82784104:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278410C"))) PPC_WEAK_FUNC(sub_8278410C);
PPC_FUNC_IMPL(__imp__sub_8278410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82784110"))) PPC_WEAK_FUNC(sub_82784110);
PPC_FUNC_IMPL(__imp__sub_82784110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x82784118;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,424(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r23,92(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r15,288(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// lwz r9,24(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r14,40(r7)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// ble cr6,0x827843d8
	if (!ctx.cr6.gt) goto loc_827843D8;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x8278417c
	goto loc_8278417C;
loc_82784178:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8278417C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,36(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 36);
	// lwz r24,0(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r30,r11,r5
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// beq cr6,0x827841e0
	if (ctx.cr6.eq) goto loc_827841E0;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// lwz r8,32(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r24,r23
	ctx.r10.u64 = ctx.r24.u64 + ctx.r23.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,-3
	ctx.r3.s64 = -3;
	// stb r6,36(r7)
	PPC_STORE_U8(ctx.r7.u32 + 36, ctx.r6.u8);
	// addi r30,r11,-3
	ctx.r30.s64 = ctx.r11.s64 + -3;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x827841fc
	goto loc_827841FC;
loc_827841E0:
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r31,32(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stb r11,36(r7)
	PPC_STORE_U8(ctx.r7.u32 + 36, ctx.r11.u8);
loc_827841FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x827843b4
	if (ctx.cr6.eq) goto loc_827843B4;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// rlwinm r22,r3,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
loc_82784238:
	// addi r10,r22,2
	ctx.r10.s64 = ctx.r22.s64 + 2;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lhzx r29,r22,r31
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r22.u32 + ctx.r31.u32);
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lhzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// lhzx r5,r5,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r14
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r14.u32);
	// lwzx r9,r4,r14
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r14.u32);
	// lwzx r11,r11,r14
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r29,r8,r15
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r15.u32);
	// lbzx r28,r7,r15
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r15.u32);
	// lbzx r27,r6,r15
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r15.u32);
	// srawi r5,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 2;
	// srawi r6,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 3;
	// srawi r4,r27,3
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 3;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r25,r10,r25
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// lhzx r8,r26,r25
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r25.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827842f4
	if (!ctx.cr6.eq) goto loc_827842F4;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82783f70
	ctx.lr = 0x827842F0;
	sub_82783F70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827842F4:
	// lhzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r25.u32);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r24,r6,r24
	ctx.r24.u64 = ctx.r6.u64 + ctx.r24.u64;
	// lbzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r5,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r5.s64;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r21,r10
	ctx.r29.u64 = ctx.r21.u64 + ctx.r10.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r21,r18,r7
	ctx.r21.u64 = ctx.r18.u64 + ctx.r7.u64;
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// subf r11,r4,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r4.s64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r20,r10
	ctx.r4.u64 = ctx.r20.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r17,r6
	ctx.r20.u64 = ctx.r17.u64 + ctx.r6.u64;
	// sth r4,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r4.u16);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r28,r19,r11
	ctx.r28.u64 = ctx.r19.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r19,r16,r11
	ctx.r19.u64 = ctx.r16.u64 + ctx.r11.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r22,r31
	ctx.r31.u64 = ctx.r22.u64 + ctx.r31.u64;
	// bne 0x82784238
	if (!ctx.cr0.eq) goto loc_82784238;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,120(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_827843B4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r5,4
	ctx.r6.s64 = ctx.r5.s64 + 4;
	// sth r21,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r21.u16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r20,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r20.u16);
	// sth r19,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r19.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bne 0x82784178
	if (!ctx.cr0.eq) goto loc_82784178;
loc_827843D8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827843E0"))) PPC_WEAK_FUNC(sub_827843E0);
PPC_FUNC_IMPL(__imp__sub_827843E0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,2044
	ctx.r5.s64 = 2044;
	// lwz r31,424(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278440C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r3,1020
	ctx.r5.s64 = ctx.r3.s64 + 1020;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8278442C:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bne 0x8278442c
	if (!ctx.cr0.eq) goto loc_8278442C;
	// addi r9,r5,64
	ctx.r9.s64 = ctx.r5.s64 + 64;
	// addi r8,r5,-64
	ctx.r8.s64 = ctx.r5.s64 + -64;
loc_82784454:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// neg r7,r11
	ctx.r7.s64 = -ctx.r11.s64;
	// not r6,r10
	ctx.r6.u64 = ~ctx.r10.u64;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// clrlwi r7,r6,31
	ctx.r7.u64 = ctx.r6.u32 & 0x1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x82784454
	if (ctx.cr6.lt) goto loc_82784454;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bgt cr6,0x827844b4
	if (ctx.cr6.gt) goto loc_827844B4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r7,r11
	ctx.r7.s64 = -ctx.r11.s64;
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subfic r10,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r10.s64;
loc_8278449C:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bne 0x8278449c
	if (!ctx.cr0.eq) goto loc_8278449C;
loc_827844B4:
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

__attribute__((alias("__imp__sub_827844C8"))) PPC_WEAK_FUNC(sub_827844C8);
PPC_FUNC_IMPL(__imp__sub_827844C8) {
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
	// lwz r31,424(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82783b30
	ctx.lr = 0x827844EC;
	sub_82783B30(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82784508"))) PPC_WEAK_FUNC(sub_82784508);
PPC_FUNC_IMPL(__imp__sub_82784508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82784510;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,424(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// beq cr6,0x82784534
	if (ctx.cr6.eq) goto loc_82784534;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82784534:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82784568
	if (ctx.cr6.eq) goto loc_82784568;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r9,r11,13088
	ctx.r9.s64 = ctx.r11.s64 + 13088;
	// addi r8,r10,17608
	ctx.r8.s64 = ctx.r10.s64 + 17608;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stb r7,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r7.u8);
	// b 0x82784674
	goto loc_82784674;
loc_82784568:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82784580
	if (!ctx.cr6.eq) goto loc_82784580;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,16656
	ctx.r10.s64 = ctx.r11.s64 + 16656;
	// b 0x82784588
	goto loc_82784588;
loc_82784580:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,16464
	ctx.r10.s64 = ctx.r11.s64 + 16464;
loc_82784588:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r10,r11,0
	ctx.r10.s64 = ctx.r11.s64 + 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r28,112(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bge cr6,0x827845d0
	if (!ctx.cr6.lt) goto loc_827845D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,56
	ctx.r10.s64 = 56;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x827845D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827845D0:
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// ble cr6,0x82784604
	if (!ctx.cr6.gt) goto loc_82784604;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82784604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82784604:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82784674
	if (!ctx.cr6.eq) goto loc_82784674;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82784650
	if (!ctx.cr6.eq) goto loc_82784650;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278464C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
loc_82784650:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x8277a3e8
	ctx.lr = 0x8278465C;
	sub_8277A3E8(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82784670
	if (!ctx.cr6.eq) goto loc_82784670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827843e0
	ctx.lr = 0x82784670;
	sub_827843E0(ctx, base);
loc_82784670:
	// stb r27,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r27.u8);
loc_82784674:
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827846a0
	if (ctx.cr6.eq) goto loc_827846A0;
	// li r31,32
	ctx.r31.s64 = 32;
loc_82784684:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8277a3e8
	ctx.lr = 0x82784690;
	sub_8277A3E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82784684
	if (!ctx.cr0.eq) goto loc_82784684;
	// stb r27,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r27.u8);
loc_827846A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827846A8"))) PPC_WEAK_FUNC(sub_827846A8);
PPC_FUNC_IMPL(__imp__sub_827846A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827846B8"))) PPC_WEAK_FUNC(sub_827846B8);
PPC_FUNC_IMPL(__imp__sub_827846B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x827846C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827846E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// lis r8,-32136
	ctx.r8.s64 = -2106064896;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r7,r9,17672
	ctx.r7.s64 = ctx.r9.s64 + 17672;
	// addi r6,r8,18088
	ctx.r6.s64 = ctx.r8.s64 + 18088;
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82784738
	if (ctx.cr6.eq) goto loc_82784738;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,47
	ctx.r10.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82784738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82784738:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82784754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8278475C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82784778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stwx r3,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r29,128
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 128, ctx.xer);
	// blt cr6,0x8278475c
	if (ctx.cr6.lt) goto loc_8278475C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
	// lbz r10,90(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 90);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82784838
	if (ctx.cr6.eq) goto loc_82784838;
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bge cr6,0x827847d8
	if (!ctx.cr6.lt) goto loc_827847D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,56
	ctx.r10.s64 = 56;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x827847D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827847D8:
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 256, ctx.xer);
	// ble cr6,0x8278480c
	if (!ctx.cr6.gt) goto loc_8278480C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8278480C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278480C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278482C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// b 0x8278483c
	goto loc_8278483C;
loc_82784838:
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
loc_8278483C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82784850
	if (ctx.cr6.eq) goto loc_82784850;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82784850:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82784894
	if (!ctx.cr6.eq) goto loc_82784894;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82784888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827843e0
	ctx.lr = 0x82784894;
	sub_827843E0(ctx, base);
loc_82784894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278489C"))) PPC_WEAK_FUNC(sub_8278489C);
PPC_FUNC_IMPL(__imp__sub_8278489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827848A0"))) PPC_WEAK_FUNC(sub_827848A0);
PPC_FUNC_IMPL(__imp__sub_827848A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x827848A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r29,100(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r28,84(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
loc_827848C0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// ble cr6,0x827848e0
	if (!ctx.cr6.gt) goto loc_827848E0;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
loc_827848D4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bne 0x827848d4
	if (!ctx.cr0.eq) goto loc_827848D4;
loc_827848E0:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x827848c0
	if (!ctx.cr6.gt) goto loc_827848C0;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x8278491c
	if (!ctx.cr6.lt) goto loc_8278491C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,56
	ctx.r9.s64 = 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8278491C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278491C:
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82784954
	if (!ctx.cr6.gt) goto loc_82784954;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82784948
	if (ctx.cr6.eq) goto loc_82784948;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_8278493C:
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8278493c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278493C;
loc_82784948:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r3,r3,r30
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// bne 0x82784948
	if (!ctx.cr0.eq) goto loc_82784948;
loc_82784954:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-30384
	ctx.r5.s64 = ctx.r11.s64 + -30384;
loc_8278495C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x827849d4
	if (!ctx.cr6.gt) goto loc_827849D4;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82784970:
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82784984
	if (!ctx.cr6.eq) goto loc_82784984;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82784988
	goto loc_82784988;
loc_82784984:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82784988:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// divw r30,r3,r11
	ctx.r30.s32 = ctx.r3.s32 / ctx.r11.s32;
	// andc r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// twllei r11,0
	// mullw r11,r30,r10
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// twlgei r4,-1
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x827849d4
	if (ctx.cr6.gt) goto loc_827849D4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82784970
	if (ctx.cr6.lt) goto loc_82784970;
loc_827849D4:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278495c
	if (!ctx.cr6.eq) goto loc_8278495C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827849E8"))) PPC_WEAK_FUNC(sub_827849E8);
PPC_FUNC_IMPL(__imp__sub_827849E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x827849F0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r23,424(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 424);
	// addi r31,r23,32
	ctx.r31.s64 = ctx.r23.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827848a0
	ctx.lr = 0x82784A08;
	sub_827848A0(ctx, base);
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x82784a5c
	if (!ctx.cr6.eq) goto loc_82784A5C;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// li r10,94
	ctx.r10.s64 = 94;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r8,36(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r7,40(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r10,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r10.u32);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82784a78
	goto loc_82784A78;
loc_82784A5C:
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82784A78:
	// bctrl 
	ctx.lr = 0x82784A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r6,100(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82784A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82784b78
	if (!ctx.cr6.gt) goto loc_82784B78;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82784AB4:
	// rotlwi r10,r26,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r8,r26,r11
	ctx.r8.s32 = ctx.r26.s32 / ctx.r11.s32;
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r9,-1
	// ble cr6,0x82784b5c
	if (!ctx.cr6.gt) goto loc_82784B5C;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r27.s64 = temp.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82784AF0:
	// add r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 + ctx.r27.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r30,r9,r4
	ctx.r30.s32 = ctx.r9.s32 / ctx.r4.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r4,0
	// andc r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// twlgei r9,-1
	// bge cr6,0x82784b4c
	if (!ctx.cr6.lt) goto loc_82784B4C;
loc_82784B18:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82784b40
	if (!ctx.cr6.gt) goto loc_82784B40;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
loc_82784B28:
	// lwz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stbx r9,r21,r22
	PPC_STORE_U8(ctx.r21.u32 + ctx.r22.u32, ctx.r9.u8);
	// blt cr6,0x82784b28
	if (ctx.cr6.lt) goto loc_82784B28;
loc_82784B40:
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82784b18
	if (ctx.cr6.lt) goto loc_82784B18;
loc_82784B4C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,255
	ctx.r5.s64 = ctx.r5.s64 + 255;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// bne 0x82784af0
	if (!ctx.cr0.eq) goto loc_82784AF0;
loc_82784B5C:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82784ab4
	if (ctx.cr6.lt) goto loc_82784AB4;
loc_82784B78:
	// stw r29,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r29.u32);
	// stw r3,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784B88"))) PPC_WEAK_FUNC(sub_82784B88);
PPC_FUNC_IMPL(__imp__sub_82784B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82784B90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r31,424(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82784bb0
	if (!ctx.cr6.eq) goto loc_82784BB0;
	// li r26,510
	ctx.r26.s64 = 510;
	// b 0x82784bb8
	goto loc_82784BB8;
loc_82784BB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82784BB8:
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r5,r26,256
	ctx.r5.s64 = ctx.r26.s64 + 256;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,100(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82784BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r9,100(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82784d04
	if (!ctx.cr6.gt) goto loc_82784D04;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_82784BFC:
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r30,r30,r11
	ctx.r30.s32 = ctx.r30.s32 / ctx.r11.s32;
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	// twlgei r9,-1
	// beq cr6,0x82784c30
	if (ctx.cr6.eq) goto loc_82784C30;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82784C30:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r5,255
	ctx.r8.s64 = ctx.r5.s64 + 255;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwzx r4,r9,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// divw r7,r8,r6
	ctx.r7.s32 = ctx.r8.s32 / ctx.r6.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r6,0
	// andc r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// twlgei r9,-1
loc_82784C64:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82784ca4
	if (!ctx.cr6.gt) goto loc_82784CA4;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r11,r10,510
	ctx.r11.s64 = ctx.r10.s64 * 510;
loc_82784C74:
	// addi r11,r11,510
	ctx.r11.s64 = ctx.r11.s64 + 510;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// twllei r9,0
	// addi r7,r7,255
	ctx.r7.s64 = ctx.r7.s64 + 255;
	// rotlwi r6,r7,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r7,r7,r9
	ctx.r7.s32 = ctx.r7.s32 / ctx.r9.s32;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// andc r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twlgei r6,-1
	// bgt cr6,0x82784c74
	if (ctx.cr6.gt) goto loc_82784C74;
loc_82784CA4:
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// stbx r11,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x82784c64
	if (!ctx.cr6.gt) goto loc_82784C64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82784cec
	if (ctx.cr6.eq) goto loc_82784CEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r4,255
	ctx.r9.s64 = ctx.r4.s64 + 255;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
loc_82784CCC:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82784ccc
	if (!ctx.cr6.gt) goto loc_82784CCC;
loc_82784CEC:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82784bfc
	if (ctx.cr6.lt) goto loc_82784BFC;
loc_82784D04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784D0C"))) PPC_WEAK_FUNC(sub_82784D0C);
PPC_FUNC_IMPL(__imp__sub_82784D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82784D10"))) PPC_WEAK_FUNC(sub_82784D10);
PPC_FUNC_IMPL(__imp__sub_82784D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x82784D18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r25,424(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82784e2c
	if (!ctx.cr6.gt) goto loc_82784E2C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r26,r25,52
	ctx.r26.s64 = ctx.r25.s64 + 52;
	// ori r30,r10,65025
	ctx.r30.u64 = ctx.r10.u64 | 65025;
	// addi r27,r11,-30640
	ctx.r27.s64 = ctx.r11.s64 + -30640;
loc_82784D48:
	// lwz r31,-20(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82784d90
	if (!ctx.cr6.gt) goto loc_82784D90;
	// addi r10,r25,32
	ctx.r10.s64 = ctx.r25.s64 + 32;
loc_82784D5C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82784d7c
	if (ctx.cr6.eq) goto loc_82784D7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82784d5c
	if (ctx.cr6.lt) goto loc_82784D5C;
	// b 0x82784d90
	goto loc_82784D90;
loc_82784D7C:
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82784e14
	if (!ctx.cr6.eq) goto loc_82784E14;
loc_82784D90:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82784DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFFFFFE00;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r8,r11,-512
	ctx.r8.s64 = ctx.r11.s64 + -512;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82784DBC:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82784DC4:
	// lbzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// twllei r8,0
	// mulli r10,r11,510
	ctx.r10.s64 = ctx.r11.s64 * 510;
	// subf. r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r8
	ctx.r11.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// andc r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// twlgei r5,-1
	// blt cr6,0x82784dc4
	if (ctx.cr6.lt) goto loc_82784DC4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r10,r27,256
	ctx.r10.s64 = ctx.r27.s64 + 256;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82784dbc
	if (ctx.cr6.lt) goto loc_82784DBC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82784E14:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82784d48
	if (ctx.cr6.lt) goto loc_82784D48;
loc_82784E2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784E34"))) PPC_WEAK_FUNC(sub_82784E34);
PPC_FUNC_IMPL(__imp__sub_82784E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82784E38"))) PPC_WEAK_FUNC(sub_82784E38);
PPC_FUNC_IMPL(__imp__sub_82784E38) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82784E40;
	__savegprlr_27(ctx, base);
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r30,92(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ble cr6,0x82784ec4
	if (!ctx.cr6.gt) goto loc_82784EC4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r28,r5,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_82784E60:
	// lwzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82784eb8
	if (ctx.cr6.eq) goto loc_82784EB8;
loc_82784E74:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82784ea8
	if (!ctx.cr6.gt) goto loc_82784EA8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82784E88:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbzx r7,r7,r27
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bne 0x82784e88
	if (!ctx.cr0.eq) goto loc_82784E88;
loc_82784EA8:
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x82784e74
	if (!ctx.cr0.eq) goto loc_82784E74;
loc_82784EB8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82784e60
	if (!ctx.cr0.eq) goto loc_82784E60;
loc_82784EC4:
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784EC8"))) PPC_WEAK_FUNC(sub_82784EC8);
PPC_FUNC_IMPL(__imp__sub_82784EC8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82784ED0;
	__savegprlr_28(ctx, base);
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r29,92(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ble cr6,0x82784f50
	if (!ctx.cr6.gt) goto loc_82784F50;
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_82784EF4:
	// lwzx r10,r4,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82784f44
	if (ctx.cr6.eq) goto loc_82784F44;
loc_82784F08:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbzx r7,r28,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82784f08
	if (!ctx.cr0.eq) goto loc_82784F08;
loc_82784F44:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82784ef4
	if (!ctx.cr0.eq) goto loc_82784EF4;
loc_82784F50:
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784F54"))) PPC_WEAK_FUNC(sub_82784F54);
PPC_FUNC_IMPL(__imp__sub_82784F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82784F58"))) PPC_WEAK_FUNC(sub_82784F58);
PPC_FUNC_IMPL(__imp__sub_82784F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x82784F60;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,424(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r28,92(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// ble cr6,0x8278503c
	if (!ctx.cr6.gt) goto loc_8278503C;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r23,r5,r4
	ctx.r23.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
loc_82784F84:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8277a3e8
	ctx.lr = 0x82784F90;
	sub_8277A3E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r22,48(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// ble cr6,0x82785024
	if (!ctx.cr6.gt) goto loc_82785024;
	// rlwinm r24,r22,6,0,25
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 6) & 0xFFFFFFC0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r25,52
	ctx.r26.s64 = ctx.r25.s64 + 52;
loc_82784FAC:
	// lwz r6,24(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r9,r23,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r4,r7,r24
	ctx.r4.u64 = ctx.r7.u64 + ctx.r24.u64;
	// lwzx r3,r6,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// beq cr6,0x82785010
	if (ctx.cr6.eq) goto loc_82785010;
loc_82784FD8:
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// lwzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82784fd8
	if (!ctx.cr0.eq) goto loc_82784FD8;
loc_82785010:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82784fac
	if (ctx.cr6.lt) goto loc_82784FAC;
loc_82785024:
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r10,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r10.u32);
	// bne 0x82784f84
	if (!ctx.cr0.eq) goto loc_82784F84;
loc_8278503C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785044"))) PPC_WEAK_FUNC(sub_82785044);
PPC_FUNC_IMPL(__imp__sub_82785044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82785048"))) PPC_WEAK_FUNC(sub_82785048);
PPC_FUNC_IMPL(__imp__sub_82785048) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x82785050;
	__savegprlr_20(ctx, base);
	// lwz r28,424(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r22,92(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x8278512c
	if (!ctx.cr6.gt) goto loc_8278512C;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// subf r21,r5,r4
	ctx.r21.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
loc_8278507C:
	// lwz r23,48(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,52(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// rlwinm r7,r23,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r6,56(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r5,60(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// add r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r9,r21,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r24.u32);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r29,r5,r7
	ctx.r29.u64 = ctx.r5.u64 + ctx.r7.u64;
	// beq cr6,0x82785114
	if (ctx.cr6.eq) goto loc_82785114;
loc_827850B4:
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// lwzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwzx r7,r7,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r7,r5,r26
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r26.u32);
	// lbzx r6,r4,r27
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r6,r3,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r25.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x827850b4
	if (!ctx.cr0.eq) goto loc_827850B4;
loc_82785114:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// bne 0x8278507c
	if (!ctx.cr0.eq) goto loc_8278507C;
loc_8278512C:
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785130"))) PPC_WEAK_FUNC(sub_82785130);
PPC_FUNC_IMPL(__imp__sub_82785130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91cc
	ctx.lr = 0x82785138;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,424(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r24,100(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r25,92(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r26,288(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// ble cr6,0x8278529c
	if (!ctx.cr6.gt) goto loc_8278529C;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// subf r18,r5,r4
	ctx.r18.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
loc_82785160:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x8277a3e8
	ctx.lr = 0x8278516C;
	sub_8277A3E8(ctx, base);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82785280
	if (!ctx.cr6.gt) goto loc_82785280;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r23,r21,68
	ctx.r23.s64 = ctx.r21.s64 + 68;
loc_82785180:
	// lwzx r10,r18,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	// lbz r9,84(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 84);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r7,r10,r20
	ctx.r7.u64 = ctx.r10.u64 + ctx.r20.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827851c4
	if (ctx.cr6.eq) goto loc_827851C4;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r6,r25,1
	ctx.r6.s64 = ctx.r25.s64 + 1;
	// mullw r9,r10,r24
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// neg r29,r24
	ctx.r29.s64 = -ctx.r24.s64;
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// b 0x827851d0
	goto loc_827851D0;
loc_827851C4:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_827851D0:
	// lwz r8,24(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,16(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r28,r8,r22
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// lwzx r27,r22,r4
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r4.u32);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82785268
	if (ctx.cr6.eq) goto loc_82785268;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_827851FC:
	// lhzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r3,r3,r26
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// lbzx r9,r3,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r28.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r27.u32);
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r31,r6,r9
	ctx.r31.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r31,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r31.u16);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x827851fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827851FC;
loc_82785268:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r20,r24
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82785180
	if (ctx.cr6.lt) goto loc_82785180;
loc_82785280:
	// lbz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 84);
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,84(r21)
	PPC_STORE_U8(ctx.r21.u32 + 84, ctx.r9.u8);
	// bne 0x82785160
	if (!ctx.cr0.eq) goto loc_82785160;
loc_8278529C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d921c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827852A4"))) PPC_WEAK_FUNC(sub_827852A4);
PPC_FUNC_IMPL(__imp__sub_827852A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827852A8"))) PPC_WEAK_FUNC(sub_827852A8);
PPC_FUNC_IMPL(__imp__sub_827852A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x827852B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82785310
	if (!ctx.cr6.gt) goto loc_82785310;
	// addi r29,r10,68
	ctx.r29.s64 = ctx.r10.s64 + 68;
loc_827852DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827852F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827852dc
	if (ctx.cr6.lt) goto loc_827852DC;
loc_82785310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785318"))) PPC_WEAK_FUNC(sub_82785318);
PPC_FUNC_IMPL(__imp__sub_82785318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82785320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,424(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// blt cr6,0x82785444
	if (ctx.cr6.lt) goto loc_82785444;
	// beq cr6,0x827853e8
	if (ctx.cr6.eq) goto loc_827853E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82785378
	if (ctx.cr6.lt) goto loc_82785378;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82785370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82785378:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,20784
	ctx.r8.s64 = ctx.r11.s64 + 20784;
	// addi r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 + 68;
	// stb r9,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r9.u8);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827853a4
	if (!ctx.cr6.eq) goto loc_827853A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827852a8
	ctx.lr = 0x827853A4;
	sub_827852A8(ctx, base);
loc_827853A4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82785470
	if (!ctx.cr6.gt) goto loc_82785470;
loc_827853C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8277a3e8
	ctx.lr = 0x827853CC;
	sub_8277A3E8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827853c0
	if (ctx.cr6.lt) goto loc_827853C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_827853E8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82785400
	if (!ctx.cr6.eq) goto loc_82785400;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,20552
	ctx.r10.s64 = ctx.r11.s64 + 20552;
	// b 0x82785408
	goto loc_82785408;
loc_82785400:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,20312
	ctx.r10.s64 = ctx.r11.s64 + 20312;
loc_82785408:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82785428
	if (!ctx.cr6.eq) goto loc_82785428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82784b88
	ctx.lr = 0x82785428;
	sub_82784B88(ctx, base);
loc_82785428:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82785470
	if (!ctx.cr6.eq) goto loc_82785470;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82784d10
	ctx.lr = 0x8278543C;
	sub_82784D10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82785444:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82785464
	if (!ctx.cr6.eq) goto loc_82785464;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,20168
	ctx.r10.s64 = ctx.r11.s64 + 20168;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82785464:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,20024
	ctx.r10.s64 = ctx.r11.s64 + 20024;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82785470:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785478"))) PPC_WEAK_FUNC(sub_82785478);
PPC_FUNC_IMPL(__imp__sub_82785478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82785494"))) PPC_WEAK_FUNC(sub_82785494);
PPC_FUNC_IMPL(__imp__sub_82785494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82785498"))) PPC_WEAK_FUNC(sub_82785498);
PPC_FUNC_IMPL(__imp__sub_82785498) {
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827854C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// lis r7,-32136
	ctx.r7.s64 = -2106064896;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,21272
	ctx.r6.s64 = ctx.r9.s64 + 21272;
	// addi r5,r8,0
	ctx.r5.s64 = ctx.r8.s64 + 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// addi r4,r7,21624
	ctx.r4.s64 = ctx.r7.s64 + 21624;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82785530
	if (!ctx.cr6.gt) goto loc_82785530;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82785530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82785530:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x82785568
	if (!ctx.cr6.gt) goto loc_82785568;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82785568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82785568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827849e8
	ctx.lr = 0x82785570;
	sub_827849E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82784b88
	ctx.lr = 0x82785578;
	sub_82784B88(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8278558c
	if (!ctx.cr6.eq) goto loc_8278558C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827852a8
	ctx.lr = 0x8278558C;
	sub_827852A8(ctx, base);
loc_8278558C:
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

__attribute__((alias("__imp__sub_827855A0"))) PPC_WEAK_FUNC(sub_827855A0);
PPC_FUNC_IMPL(__imp__sub_827855A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x827855A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r31,320(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827856a0
	if (!ctx.cr6.lt) goto loc_827856A0;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// li r27,0
	ctx.r27.s64 = 0;
loc_827855D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82785610
	if (!ctx.cr6.lt) goto loc_82785610;
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82785610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82785610:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x827856a0
	if (!ctx.cr6.eq) goto loc_827856A0;
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82785634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82785684
	if (ctx.cr6.eq) goto loc_82785684;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278565c
	if (ctx.cr6.eq) goto loc_8278565C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stb r27,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r27.u8);
loc_8278565C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,224(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827855d8
	if (ctx.cr6.lt) goto loc_827855D8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_82785684:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827856a0
	if (!ctx.cr6.eq) goto loc_827856A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
loc_827856A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827856A8"))) PPC_WEAK_FUNC(sub_827856A8);
PPC_FUNC_IMPL(__imp__sub_827856A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// beq cr6,0x827856ec
	if (ctx.cr6.eq) goto loc_827856EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_827856EC:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r9,r10,21920
	ctx.r9.s64 = ctx.r10.s64 + 21920;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827856FC"))) PPC_WEAK_FUNC(sub_827856FC);
PPC_FUNC_IMPL(__imp__sub_827856FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82785700"))) PPC_WEAK_FUNC(sub_82785700);
PPC_FUNC_IMPL(__imp__sub_82785700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82785708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278572C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// addi r8,r9,22184
	ctx.r8.s64 = ctx.r9.s64 + 22184;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lbz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x827857dc
	if (!ctx.cr6.eq) goto loc_827857DC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278577c
	if (ctx.cr6.eq) goto loc_8278577C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82785774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8278577C:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827857dc
	if (!ctx.cr6.gt) goto loc_827857DC;
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
loc_82785798:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827857C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82785798
	if (ctx.cr6.lt) goto loc_82785798;
loc_827857DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827857E4"))) PPC_WEAK_FUNC(sub_827857E4);
PPC_FUNC_IMPL(__imp__sub_827857E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827857E8"))) PPC_WEAK_FUNC(sub_827857E8);
PPC_FUNC_IMPL(__imp__sub_827857E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82785810
	if (!ctx.cr6.gt) goto loc_82785810;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
loc_82785810:
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82785840
	if (!ctx.cr6.lt) goto loc_82785840;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
loc_82785840:
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82785858"))) PPC_WEAK_FUNC(sub_82785858);
PPC_FUNC_IMPL(__imp__sub_82785858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x82785860;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,248(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 248);
	// lwz r29,328(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 328);
	// addi r15,r11,-1
	ctx.r15.s64 = ctx.r11.s64 + -1;
	// lwz r11,224(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 224);
	// addi r14,r11,-1
	ctx.r14.s64 = ctx.r11.s64 + -1;
	// lwz r17,16(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82785a88
	if (!ctx.cr6.lt) goto loc_82785A88;
loc_82785894:
	// lwz r21,12(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r21,r15
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r15.u32, ctx.xer);
	// bgt cr6,0x82785a74
	if (ctx.cr6.gt) goto loc_82785A74;
loc_827858A0:
	// lwz r11,228(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 228);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82785a44
	if (!ctx.cr6.gt) goto loc_82785A44;
	// rlwinm r18,r17,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r20,r24,232
	ctx.r20.s64 = ctx.r24.s64 + 232;
loc_827858BC:
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r21,r15
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x827858d0
	if (!ctx.cr6.lt) goto loc_827858D0;
	// lwz r27,52(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x827858d4
	goto loc_827858D4;
loc_827858D0:
	// lwz r27,68(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_827858D4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mullw r23,r11,r21
	ctx.r23.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82785a30
	if (!ctx.cr6.gt) goto loc_82785A30;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
loc_827858F4:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x8278596c
	if (ctx.cr6.lt) goto loc_8278596C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r9,r25,r17
	ctx.r9.u64 = ctx.r25.u64 + ctx.r17.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8278596c
	if (ctx.cr6.lt) goto loc_8278596C;
	// addi r10,r28,6
	ctx.r10.s64 = ctx.r28.s64 + 6;
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8277a3e8
	ctx.lr = 0x82785928;
	sub_8277A3E8(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82785a14
	if (!ctx.cr6.gt) goto loc_82785A14;
	// addi r9,r28,5
	ctx.r9.s64 = ctx.r28.s64 + 5;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82785944:
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// sth r6,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82785944
	if (ctx.cr6.lt) goto loc_82785944;
	// b 0x82785a14
	goto loc_82785A14;
loc_8278596C:
	// addi r10,r28,6
	ctx.r10.s64 = ctx.r28.s64 + 6;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,344(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 344);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r6,r5,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r11,r22
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827859A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82785a14
	if (!ctx.cr6.lt) goto loc_82785A14;
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x8277a3e8
	ctx.lr = 0x827859D0;
	sub_8277A3E8(ctx, base);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82785a14
	if (!ctx.cr6.lt) goto loc_82785A14;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_827859F0:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r7,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x827859f0
	if (ctx.cr6.lt) goto loc_827859F0;
loc_82785A14:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827858f4
	if (ctx.cr6.lt) goto loc_827858F4;
loc_82785A30:
	// lwz r11,228(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 228);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827858bc
	if (ctx.cr6.lt) goto loc_827858BC;
loc_82785A44:
	// lwz r11,348(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 348);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82785A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82785ac0
	if (ctx.cr6.eq) goto loc_82785AC0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r15
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r15.u32, ctx.xer);
	// ble cr6,0x827858a0
	if (!ctx.cr6.gt) goto loc_827858A0;
loc_82785A74:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// stw r19,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r19.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82785894
	if (ctx.cr6.lt) goto loc_82785894;
loc_82785A88:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,228(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 228);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,328(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 328);
	// ble cr6,0x82785ad4
	if (!ctx.cr6.gt) goto loc_82785AD4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r19.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r19,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r19.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
loc_82785AC0:
	// stw r17,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r17.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r21,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r21.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
loc_82785AD4:
	// lwz r10,224(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 224);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,232(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 232);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82785af4
	if (!ctx.cr6.lt) goto loc_82785AF4;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82785af8
	goto loc_82785AF8;
loc_82785AF4:
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
loc_82785AF8:
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r19,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r19.u32);
	// stw r19,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r19.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785B10"))) PPC_WEAK_FUNC(sub_82785B10);
PPC_FUNC_IMPL(__imp__sub_82785B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x82785B18;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// lwz r27,328(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82785b98
	if (!ctx.cr6.gt) goto loc_82785B98;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,232
	ctx.r31.s64 = ctx.r28.s64 + 232;
loc_82785B40:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r8,r5
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82785B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,228(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82785b40
	if (ctx.cr6.lt) goto loc_82785B40;
loc_82785B98:
	// lwz r23,16(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82785cbc
	if (!ctx.cr6.lt) goto loc_82785CBC;
	// rlwinm r24,r23,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_82785BAC:
	// lwz r26,12(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82785ca4
	if (!ctx.cr6.lt) goto loc_82785CA4;
	// addi r22,r27,24
	ctx.r22.s64 = ctx.r27.s64 + 24;
loc_82785BC0:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82785c70
	if (!ctx.cr6.gt) goto loc_82785C70;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,232
	ctx.r31.s64 = ctx.r28.s64 + 232;
loc_82785BDC:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,52(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mullw r11,r8,r26
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82785c58
	if (!ctx.cr6.gt) goto loc_82785C58;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r24,r10
	ctx.r5.u64 = ctx.r24.u64 + ctx.r10.u64;
loc_82785C04:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ble cr6,0x82785c44
	if (!ctx.cr6.gt) goto loc_82785C44;
	// addi r11,r6,6
	ctx.r11.s64 = ctx.r6.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82785C24:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,52(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82785c24
	if (ctx.cr6.lt) goto loc_82785C24;
loc_82785C44:
	// lwz r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82785c04
	if (ctx.cr6.lt) goto loc_82785C04;
loc_82785C58:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82785bdc
	if (ctx.cr6.lt) goto loc_82785BDC;
loc_82785C70:
	// lwz r11,348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 348);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82785C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82785cf4
	if (ctx.cr6.eq) goto loc_82785CF4;
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82785bc0
	if (ctx.cr6.lt) goto loc_82785BC0;
loc_82785CA4:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r25,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r25.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82785bac
	if (ctx.cr6.lt) goto loc_82785BAC;
loc_82785CBC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r10,228(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// ble cr6,0x82785d08
	if (!ctx.cr6.gt) goto loc_82785D08;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_82785CF4:
	// stw r23,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r23.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_82785D08:
	// lwz r10,224(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,232(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82785d28
	if (!ctx.cr6.lt) goto loc_82785D28;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82785d2c
	goto loc_82785D2C;
loc_82785D28:
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
loc_82785D2C:
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// stw r25,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785D44"))) PPC_WEAK_FUNC(sub_82785D44);
PPC_FUNC_IMPL(__imp__sub_82785D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82785D48"))) PPC_WEAK_FUNC(sub_82785D48);
PPC_FUNC_IMPL(__imp__sub_82785D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c8
	ctx.lr = 0x82785D50;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r11,224(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 224);
	// lwz r10,60(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// lwz r19,328(r22)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r22.u32 + 328);
	// addi r17,r11,-1
	ctx.r17.s64 = ctx.r11.s64 + -1;
	// lwz r23,68(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82785f58
	if (!ctx.cr6.gt) goto loc_82785F58;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// addi r20,r19,64
	ctx.r20.s64 = ctx.r19.s64 + 64;
loc_82785D84:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82785DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r7,r17
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x82785dc8
	if (!ctx.cr6.lt) goto loc_82785DC8;
	// lwz r26,12(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// b 0x82785de8
	goto loc_82785DE8;
loc_82785DC8:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r10,32(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf. r26,r8,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82785de8
	if (!ctx.cr0.eq) goto loc_82785DE8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82785DE8:
	// lwz r25,8(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r29,28(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// twllei r25,0
	// divwu r11,r29,r25
	ctx.r11.u32 = ctx.r29.u32 / ctx.r25.u32;
	// mullw r10,r11,r25
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// subf. r30,r10,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82785e08
	if (!ctx.cr0.gt) goto loc_82785E08;
	// subf r30,r30,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r30.s64;
loc_82785E08:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82785e98
	if (!ctx.cr6.gt) goto loc_82785E98;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82785E18:
	// lwz r11,344(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 344);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r7,r28,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82785E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82785e88
	if (!ctx.cr6.gt) goto loc_82785E88;
	// rlwinm r11,r29,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r4,r30,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277a3e8
	ctx.lr = 0x82785E64;
	sub_8277A3E8(ctx, base);
	// lhz r9,-128(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + -128);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82785e88
	if (!ctx.cr6.gt) goto loc_82785E88;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82785E78:
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bne 0x82785e78
	if (!ctx.cr0.eq) goto loc_82785E78;
loc_82785E88:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82785e18
	if (ctx.cr6.lt) goto loc_82785E18;
loc_82785E98:
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x82785f3c
	if (!ctx.cr6.eq) goto loc_82785F3C;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// divwu r28,r11,r25
	ctx.r28.u32 = ctx.r11.u32 / ctx.r25.u32;
	// twllei r25,0
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82785f3c
	if (!ctx.cr6.lt) goto loc_82785F3C;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,7,0,24
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r29,r10,r24
	ctx.r29.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_82785ECC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r30,-4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277a3e8
	ctx.lr = 0x82785EE0;
	sub_8277A3E8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82785f28
	if (ctx.cr6.eq) goto loc_82785F28;
	// rlwinm r7,r25,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 7) & 0xFFFFFF80;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r6,r7,-128
	ctx.r6.s64 = ctx.r7.s64 + -128;
loc_82785EF4:
	// lhzx r9,r6,r30
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82785f18
	if (!ctx.cr6.gt) goto loc_82785F18;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82785F08:
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bne 0x82785f08
	if (!ctx.cr0.eq) goto loc_82785F08;
loc_82785F18:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// bne 0x82785ef4
	if (!ctx.cr0.eq) goto loc_82785EF4;
loc_82785F28:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82785ecc
	if (ctx.cr6.lt) goto loc_82785ECC;
loc_82785F3C:
	// lwz r11,60(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r23,r23,84
	ctx.r23.s64 = ctx.r23.s64 + 84;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82785d84
	if (ctx.cr6.lt) goto loc_82785D84;
loc_82785F58:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82785b10
	ctx.lr = 0x82785F64;
	sub_82785B10(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823d9218
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785F6C"))) PPC_WEAK_FUNC(sub_82785F6C);
PPC_FUNC_IMPL(__imp__sub_82785F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82785F70"))) PPC_WEAK_FUNC(sub_82785F70);
PPC_FUNC_IMPL(__imp__sub_82785F70) {
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
	// lwz r31,328(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827857e8
	ctx.lr = 0x82785F90;
	sub_827857E8(ctx, base);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82786040
	if (ctx.cr6.eq) goto loc_82786040;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8278600c
	if (ctx.cr6.eq) goto loc_8278600C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82785fd8
	if (ctx.cr6.eq) goto loc_82785FD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82785FC4;
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
loc_82785FD8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82786000
	if (!ctx.cr6.eq) goto loc_82786000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82786000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786000:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,23880
	ctx.r10.s64 = ctx.r11.s64 + 23880;
	// b 0x82786070
	goto loc_82786070;
loc_8278600C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82786034
	if (!ctx.cr6.eq) goto loc_82786034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82786034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786034:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,23312
	ctx.r10.s64 = ctx.r11.s64 + 23312;
	// b 0x82786070
	goto loc_82786070;
loc_82786040:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786068
	if (ctx.cr6.eq) goto loc_82786068;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82786068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786068:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,22616
	ctx.r10.s64 = ctx.r11.s64 + 22616;
loc_82786070:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82786088"))) PPC_WEAK_FUNC(sub_82786088);
PPC_FUNC_IMPL(__imp__sub_82786088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x82786090;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827860B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r29.u32);
	// addi r7,r9,24432
	ctx.r7.s64 = ctx.r9.s64 + 24432;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// beq cr6,0x8278615c
	if (ctx.cr6.eq) goto loc_8278615C;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827861cc
	if (!ctx.cr6.gt) goto loc_827861CC;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
loc_827860F0:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8277a348
	ctx.lr = 0x82786104;
	sub_8277A348(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8277a348
	ctx.lr = 0x82786114;
	sub_8277A348(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82786138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827860f0
	if (ctx.cr6.lt) goto loc_827860F0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8278615C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82786178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// addi r7,r3,256
	ctx.r7.s64 = ctx.r3.s64 + 256;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r8,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r8.u32);
	// addi r6,r3,384
	ctx.r6.s64 = ctx.r3.s64 + 384;
	// stw r7,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r7.u32);
	// addi r5,r3,512
	ctx.r5.s64 = ctx.r3.s64 + 512;
	// addi r4,r3,640
	ctx.r4.s64 = ctx.r3.s64 + 640;
	// stw r6,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r6.u32);
	// addi r11,r3,768
	ctx.r11.s64 = ctx.r3.s64 + 768;
	// stw r5,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r5.u32);
	// addi r10,r3,896
	ctx.r10.s64 = ctx.r3.s64 + 896;
	// stw r4,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r4.u32);
	// addi r8,r3,1024
	ctx.r8.s64 = ctx.r3.s64 + 1024;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// addi r7,r3,1152
	ctx.r7.s64 = ctx.r3.s64 + 1152;
	// stw r10,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r8.u32);
	// stw r7,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r7.u32);
	// stw r9,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r9.u32);
loc_827861CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827861D4"))) PPC_WEAK_FUNC(sub_827861D4);
PPC_FUNC_IMPL(__imp__sub_827861D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827861D8"))) PPC_WEAK_FUNC(sub_827861D8);
PPC_FUNC_IMPL(__imp__sub_827861D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x827861E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r28,50
	ctx.r28.s64 = 50;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82786208
	if (ctx.cr6.lt) goto loc_82786208;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8278622c
	if (ctx.cr6.lt) goto loc_8278622C;
loc_82786208:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278622C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278622C:
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82786240
	if (!ctx.cr6.eq) goto loc_82786240;
	// addi r11,r31,26
	ctx.r11.s64 = ctx.r31.s64 + 26;
loc_82786240:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r24
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82786274
	if (!ctx.cr6.eq) goto loc_82786274;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82786274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786274:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827862a0
	if (!ctx.cr6.eq) goto loc_827862A0;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278629C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_827862A0:
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r23,0(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r22,8
	ctx.r22.s64 = 8;
loc_827862B4:
	// lbzx r31,r30,r27
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827862cc
	if (ctx.cr6.lt) goto loc_827862CC;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x827862e8
	if (!ctx.cr6.gt) goto loc_827862E8;
loc_827862CC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827862E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827862E8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82786318
	if (ctx.cr6.eq) goto loc_82786318;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82786314
	if (ctx.cr6.eq) goto loc_82786314;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82786308:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82786308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82786308;
loc_82786314:
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
loc_82786318:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// ble cr6,0x827862b4
	if (!ctx.cr6.gt) goto loc_827862B4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stbx r10,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827863d4
	if (ctx.cr6.eq) goto loc_827863D4;
loc_8278634C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82786394
	if (!ctx.cr6.eq) goto loc_82786394;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82786370:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82786370
	if (ctx.cr6.eq) goto loc_82786370;
loc_82786394:
	// slw r11,r28,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r29.u8 & 0x3F));
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827863bc
	if (ctx.cr6.lt) goto loc_827863BC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827863BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827863BC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278634c
	if (!ctx.cr6.eq) goto loc_8278634C;
loc_827863D4:
	// addi r28,r23,1024
	ctx.r28.s64 = ctx.r23.s64 + 1024;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d9890
	ctx.lr = 0x827863E8;
	sub_823D9890(ctx, base);
	// subfic r11,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
	// addi r26,r11,255
	ctx.r26.s64 = ctx.r11.s64 + 255;
	// ble cr6,0x82786474
	if (!ctx.cr6.gt) goto loc_82786474;
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// addi r27,r27,17
	ctx.r27.s64 = ctx.r27.s64 + 17;
loc_82786410:
	// lbzx r30,r27,r31
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82786430
	if (ctx.cr6.lt) goto loc_82786430;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82786430
	if (ctx.cr6.gt) goto loc_82786430;
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278644c
	if (ctx.cr6.eq) goto loc_8278644C;
loc_82786430:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8278644C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278644C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lbzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r10,r9,r23
	PPC_STORE_U32(ctx.r9.u32 + ctx.r23.u32, ctx.r10.u32);
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// stbx r8,r28,r30
	PPC_STORE_U8(ctx.r28.u32 + ctx.r30.u32, ctx.r8.u8);
	// blt cr6,0x82786410
	if (ctx.cr6.lt) goto loc_82786410;
loc_82786474:
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278647C"))) PPC_WEAK_FUNC(sub_8278647C);
PPC_FUNC_IMPL(__imp__sub_8278647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82786480"))) PPC_WEAK_FUNC(sub_82786480);
PPC_FUNC_IMPL(__imp__sub_82786480) {
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
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827864AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827864c0
	if (!ctx.cr6.eq) goto loc_827864C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827864d4
	goto loc_827864D4;
loc_827864C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827864D4:
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

__attribute__((alias("__imp__sub_827864EC"))) PPC_WEAK_FUNC(sub_827864EC);
PPC_FUNC_IMPL(__imp__sub_827864EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827864F0"))) PPC_WEAK_FUNC(sub_827864F0);
PPC_FUNC_IMPL(__imp__sub_827864F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x827864F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x82786538
	if (!ctx.cr6.eq) goto loc_82786538;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82786538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786538:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfic r8,r28,24
	ctx.xer.ca = ctx.r28.u32 <= 24;
	ctx.r8.s64 = 24 - ctx.r28.s64;
	// and r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 & ctx.r29.u64;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r27,r6,r10
	ctx.r27.u64 = ctx.r6.u64 | ctx.r10.u64;
	// blt cr6,0x82786660
	if (ctx.cr6.lt) goto loc_82786660;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82786568:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r10,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 16;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x827865dc
	if (!ctx.cr0.eq) goto loc_827865DC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827865A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827865bc
	if (!ctx.cr6.eq) goto loc_827865BC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x827865d0
	goto loc_827865D0;
loc_827865BC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_827865D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786674
	if (ctx.cr6.eq) goto loc_82786674;
loc_827865DC:
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// bne cr6,0x82786650
	if (!ctx.cr6.eq) goto loc_82786650;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82786650
	if (!ctx.cr0.eq) goto loc_82786650;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278661C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82786630
	if (!ctx.cr6.eq) goto loc_82786630;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82786644
	goto loc_82786644;
loc_82786630:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82786644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786674
	if (ctx.cr6.eq) goto loc_82786674;
loc_82786650:
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// rlwinm r27,r27,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bge cr6,0x82786568
	if (!ctx.cr6.lt) goto loc_82786568;
loc_82786660:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_82786674:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786680"))) PPC_WEAK_FUNC(sub_82786680);
PPC_FUNC_IMPL(__imp__sub_82786680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x82786688;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subf. r30,r5,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge 0x827866b8
	if (!ctx.cr0.lt) goto loc_827866B8;
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_827866B8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r23,6
	ctx.r23.s64 = 6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827866fc
	if (ctx.cr6.eq) goto loc_827866FC;
loc_827866C8:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x827866c8
	if (!ctx.cr0.eq) goto loc_827866C8;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// ble cr6,0x827866fc
	if (!ctx.cr6.gt) goto loc_827866FC;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r23,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r23.u32);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827866FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827866FC:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1024);
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// bl 0x827864f0
	ctx.lr = 0x82786718;
	sub_827864F0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82786730
	if (!ctx.cr6.eq) goto loc_82786730;
loc_82786724:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
loc_82786730:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82786754
	if (ctx.cr6.eq) goto loc_82786754;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827864f0
	ctx.lr = 0x82786748;
	sub_827864F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786724
	if (ctx.cr6.eq) goto loc_82786724;
loc_82786754:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,-31424
	ctx.r25.s64 = ctx.r11.s64 + -31424;
	// addi r26,r25,4
	ctx.r26.s64 = ctx.r25.s64 + 4;
loc_82786764:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82786784
	if (!ctx.cr6.eq) goto loc_82786784;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8278685c
	goto loc_8278685C;
loc_82786784:
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// ble cr6,0x827867b8
	if (!ctx.cr6.gt) goto loc_827867B8;
loc_8278678C:
	// lbz r11,1264(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1264);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,960(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 960);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x827864f0
	ctx.lr = 0x827867A0;
	sub_827864F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82786724
	if (ctx.cr6.eq) goto loc_82786724;
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bgt cr6,0x8278678c
	if (ctx.cr6.gt) goto loc_8278678C;
loc_827867B8:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x827867cc
	if (!ctx.cr6.lt) goto loc_827867CC;
	// neg r31,r31
	ctx.r31.s64 = -ctx.r31.s64;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_827867CC:
	// srawi. r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// beq 0x8278680c
	if (ctx.cr0.eq) goto loc_8278680C;
loc_827867D8:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x827867d8
	if (!ctx.cr0.eq) goto loc_827867D8;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// ble cr6,0x8278680c
	if (!ctx.cr6.gt) goto loc_8278680C;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r23,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r23.u32);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278680C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278680C:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,1024(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1024);
	// lwzx r4,r9,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// bl 0x827864f0
	ctx.lr = 0x82786830;
	sub_827864F0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82786724
	if (ctx.cr6.eq) goto loc_82786724;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827864f0
	ctx.lr = 0x8278684C;
	sub_827864F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786724
	if (ctx.cr6.eq) goto loc_82786724;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8278685C:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r11,r25,256
	ctx.r11.s64 = ctx.r25.s64 + 256;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82786764
	if (ctx.cr6.lt) goto loc_82786764;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82786898
	if (!ctx.cr6.gt) goto loc_82786898;
	// lbz r11,1024(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1024);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x827864f0
	ctx.lr = 0x82786888;
	sub_827864F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8278689c
	if (ctx.cr6.eq) goto loc_8278689C;
loc_82786898:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8278689C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827868A4"))) PPC_WEAK_FUNC(sub_827868A4);
PPC_FUNC_IMPL(__imp__sub_827868A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827868A8"))) PPC_WEAK_FUNC(sub_827868A8);
PPC_FUNC_IMPL(__imp__sub_827868A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x827868B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827864f0
	ctx.lr = 0x827868C8;
	sub_827864F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827868e0
	if (!ctx.cr6.eq) goto loc_827868E0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x827868ec
	goto loc_827868EC;
loc_827868E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_827868EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82786904
	if (!ctx.cr6.eq) goto loc_82786904;
loc_827868F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82786904:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bne 0x82786940
	if (!ctx.cr0.eq) goto loc_82786940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82786480
	ctx.lr = 0x82786934;
	sub_82786480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827868f8
	if (ctx.cr6.eq) goto loc_827868F8;
loc_82786940:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r29,208
	ctx.r10.s64 = ctx.r29.s64 + 208;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x8278697c
	if (!ctx.cr0.eq) goto loc_8278697C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82786480
	ctx.lr = 0x82786970;
	sub_82786480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827868f8
	if (ctx.cr6.eq) goto loc_827868F8;
loc_8278697C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827869b0
	if (!ctx.cr6.gt) goto loc_827869B0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_82786994:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82786994
	if (ctx.cr6.lt) goto loc_82786994;
loc_827869B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827869BC"))) PPC_WEAK_FUNC(sub_827869BC);
PPC_FUNC_IMPL(__imp__sub_827869BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827869C0"))) PPC_WEAK_FUNC(sub_827869C0);
PPC_FUNC_IMPL(__imp__sub_827869C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x827869C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r26,348(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r24,r26,12
	ctx.r24.s64 = ctx.r26.s64 + 12;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82786A00:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82786a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82786A00;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786a54
	if (ctx.cr6.eq) goto loc_82786A54;
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82786a54
	if (!ctx.cr6.eq) goto loc_82786A54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x827868a8
	ctx.lr = 0x82786A3C;
	sub_827868A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82786a54
	if (!ctx.cr6.eq) goto loc_82786A54;
loc_82786A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
loc_82786A54:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82786ae4
	if (!ctx.cr6.gt) goto loc_82786AE4;
	// addi r27,r31,260
	ctx.r27.s64 = ctx.r31.s64 + 260;
loc_82786A68:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,58
	ctx.r10.s64 = ctx.r11.s64 + 58;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r28,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// addi r6,r11,11
	ctx.r6.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x82786680
	ctx.lr = 0x82786AB0;
	sub_82786680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82786a48
	if (ctx.cr6.eq) goto loc_82786A48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stwx r8,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r8.u32);
	// blt cr6,0x82786a68
	if (ctx.cr6.lt) goto loc_82786A68;
loc_82786AE4:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82786B0C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82786b0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82786B0C;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786b58
	if (ctx.cr6.eq) goto loc_82786B58;
	// lwz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82786b4c
	if (!ctx.cr6.eq) goto loc_82786B4C;
	// lwz r10,40(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r11,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r10,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r10.u32);
loc_82786B4C:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r11.u32);
loc_82786B58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786B64"))) PPC_WEAK_FUNC(sub_82786B64);
PPC_FUNC_IMPL(__imp__sub_82786B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82786B68"))) PPC_WEAK_FUNC(sub_82786B68);
PPC_FUNC_IMPL(__imp__sub_82786B68) {
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
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82786BAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82786bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82786BAC;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,127
	ctx.r4.s64 = 127;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827864f0
	ctx.lr = 0x82786BD4;
	sub_827864F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786bf0
	if (ctx.cr6.eq) goto loc_82786BF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82786BF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82786c1c
	if (!ctx.cr6.eq) goto loc_82786C1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82786C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786C1C:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82786C44:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82786c44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82786C44;
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

__attribute__((alias("__imp__sub_82786C70"))) PPC_WEAK_FUNC(sub_82786C70);
PPC_FUNC_IMPL(__imp__sub_82786C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x82786C78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subf. r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82786ca0
	if (!ctx.cr0.lt) goto loc_82786CA0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82786CA0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r24,6
	ctx.r24.s64 = 6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82786ce0
	if (ctx.cr6.eq) goto loc_82786CE0;
loc_82786CB0:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82786cb0
	if (!ctx.cr0.eq) goto loc_82786CB0;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// ble cr6,0x82786ce0
	if (!ctx.cr6.gt) goto loc_82786CE0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82786CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786CE0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r10,-31424
	ctx.r27.s64 = ctx.r10.s64 + -31424;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_82786D00:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82786d20
	if (!ctx.cr6.eq) goto loc_82786D20;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82786dac
	goto loc_82786DAC;
loc_82786D20:
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 15, ctx.xer);
	// ble cr6,0x82786d48
	if (!ctx.cr6.gt) goto loc_82786D48;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwz r10,960(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r31,r8,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r8.s64;
	// stw r7,960(r29)
	PPC_STORE_U32(ctx.r29.u32 + 960, ctx.r7.u32);
loc_82786D48:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82786d54
	if (!ctx.cr6.lt) goto loc_82786D54;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_82786D54:
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// beq 0x82786d90
	if (ctx.cr0.eq) goto loc_82786D90;
loc_82786D60:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82786d60
	if (!ctx.cr0.eq) goto loc_82786D60;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// ble cr6,0x82786d90
	if (!ctx.cr6.gt) goto loc_82786D90;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82786D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786D90:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_82786DAC:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r27,256
	ctx.r11.s64 = ctx.r27.s64 + 256;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82786d00
	if (ctx.cr6.lt) goto loc_82786D00;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82786dd0
	if (!ctx.cr6.gt) goto loc_82786DD0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82786DD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786DD8"))) PPC_WEAK_FUNC(sub_82786DD8);
PPC_FUNC_IMPL(__imp__sub_82786DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82786DE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r29,348(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786e48
	if (ctx.cr6.eq) goto loc_82786E48;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82786e3c
	if (!ctx.cr6.eq) goto loc_82786E3C;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82786e34
	if (!ctx.cr6.gt) goto loc_82786E34;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
loc_82786E1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82786e1c
	if (ctx.cr6.lt) goto loc_82786E1C;
loc_82786E34:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_82786E3C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_82786E48:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82786ecc
	if (!ctx.cr6.gt) goto loc_82786ECC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,260
	ctx.r28.s64 = ctx.r31.s64 + 260;
loc_82786E5C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,58
	ctx.r10.s64 = ctx.r11.s64 + 58;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r5,r27,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// lwz r10,24(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// addi r6,r10,23
	ctx.r6.s64 = ctx.r10.s64 + 23;
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwzx r6,r9,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x82786c70
	ctx.lr = 0x82786EA4;
	sub_82786C70(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stwx r6,r27,r29
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r6.u32);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r26,r5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82786e5c
	if (ctx.cr6.lt) goto loc_82786E5C;
loc_82786ECC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786ED8"))) PPC_WEAK_FUNC(sub_82786ED8);
PPC_FUNC_IMPL(__imp__sub_82786ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x82786EE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-2272(r1)
	ea = -2272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82786F04:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82786f04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82786F04;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823d9890
	ctx.lr = 0x82786F24;
	sub_823D9890(ctx, base);
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,257
	ctx.r10.s64 = 257;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82786F34:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82786f34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82786F34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r30,r11,51712
	ctx.r30.u64 = ctx.r11.u64 | 51712;
loc_82786F50:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82786F60:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82786f7c
	if (ctx.cr6.eq) goto loc_82786F7C;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82786f7c
	if (ctx.cr6.gt) goto loc_82786F7C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82786F7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x82786f60
	if (!ctx.cr6.gt) goto loc_82786F60;
	// li r3,-1
	ctx.r3.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82786F9C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82786fc0
	if (ctx.cr6.eq) goto loc_82786FC0;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82786fc0
	if (ctx.cr6.gt) goto loc_82786FC0;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82786fc0
	if (ctx.cr6.eq) goto loc_82786FC0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82786FC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x82786f9c
	if (!ctx.cr6.gt) goto loc_82786F9C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827870a4
	if (ctx.cr6.lt) goto loc_827870A4;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// stwx r26,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r26.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// blt cr6,0x82787044
	if (ctx.cr6.lt) goto loc_82787044;
loc_82787018:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// bge cr6,0x82787018
	if (!ctx.cr6.lt) goto loc_82787018;
loc_82787044:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,1168
	ctx.r6.s64 = ctx.r1.s64 + 1168;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stwx r3,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// blt cr6,0x82786f50
	if (ctx.cr6.lt) goto loc_82786F50;
loc_82787074:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// bge cr6,0x82787074
	if (!ctx.cr6.lt) goto loc_82787074;
	// b 0x82786f50
	goto loc_82786F50;
loc_827870A4:
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// li r29,257
	ctx.r29.s64 = 257;
	// li r28,39
	ctx.r28.s64 = 39;
loc_827870B0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x827870f0
	if (ctx.cr6.eq) goto loc_827870F0;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// ble cr6,0x827870e0
	if (!ctx.cr6.gt) goto loc_827870E0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827870E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827870E0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_827870F0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827870b0
	if (!ctx.cr0.eq) goto loc_827870B0;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r3,16
	ctx.r3.s64 = 16;
	// li r31,16
	ctx.r31.s64 = 16;
loc_82787108:
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8278718c
	if (ctx.cr6.eq) goto loc_8278718C;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
loc_8278711C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82787148
	if (!ctx.cr6.eq) goto loc_82787148;
loc_82787134:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82787134
	if (ctx.cr6.eq) goto loc_82787134;
loc_82787148:
	// lbzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lbzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,254
	ctx.r5.s64 = ctx.r5.s64 + 254;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r5,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u8);
	// stbx r6,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u8);
	// lbzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r6,r6,255
	ctx.r6.s64 = ctx.r6.s64 + 255;
	// lbzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// stbx r6,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u8);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278711c
	if (!ctx.cr6.eq) goto loc_8278711C;
loc_8278718C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x82787108
	if (!ctx.cr0.eq) goto loc_82787108;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827871bc
	if (!ctx.cr6.eq) goto loc_827871BC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_827871A8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827871a8
	if (ctx.cr6.eq) goto loc_827871A8;
loc_827871BC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x823da950
	ctx.lr = 0x827871DC;
	sub_823DA950(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_827871E4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
loc_827871EC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82787204
	if (!ctx.cr6.eq) goto loc_82787204;
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,17(r7)
	PPC_STORE_U8(ctx.r7.u32 + 17, ctx.r11.u8);
loc_82787204:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x827871ec
	if (!ctx.cr6.gt) goto loc_827871EC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// ble cr6,0x827871e4
	if (!ctx.cr6.gt) goto loc_827871E4;
	// stb r26,273(r25)
	PPC_STORE_U8(ctx.r25.u32 + 273, ctx.r26.u8);
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278722C"))) PPC_WEAK_FUNC(sub_8278722C);
PPC_FUNC_IMPL(__imp__sub_8278722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82787230"))) PPC_WEAK_FUNC(sub_82787230);
PPC_FUNC_IMPL(__imp__sub_82787230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x82787238;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r26,348(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82787328
	if (!ctx.cr6.gt) goto loc_82787328;
	// addi r24,r31,232
	ctx.r24.s64 = ctx.r31.s64 + 232;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82787270:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r27,24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lbzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827872c8
	if (!ctx.cr6.eq) goto loc_827872C8;
	// addi r11,r30,22
	ctx.r11.s64 = ctx.r30.s64 + 22;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827872ac
	if (!ctx.cr6.eq) goto loc_827872AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277a2e0
	ctx.lr = 0x827872A8;
	sub_8277A2E0(ctx, base);
	// stwx r3,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
loc_827872AC:
	// addi r11,r30,19
	ctx.r11.s64 = ctx.r30.s64 + 19;
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x82786ed8
	ctx.lr = 0x827872C4;
	sub_82786ED8(ctx, base);
	// stbx r25,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r25.u8);
loc_827872C8:
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
	// lbzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82787314
	if (!ctx.cr6.eq) goto loc_82787314;
	// addi r11,r27,26
	ctx.r11.s64 = ctx.r27.s64 + 26;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827872f8
	if (!ctx.cr6.eq) goto loc_827872F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277a2e0
	ctx.lr = 0x827872F4;
	sub_8277A2E0(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
loc_827872F8:
	// addi r11,r27,23
	ctx.r11.s64 = ctx.r27.s64 + 23;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x82786ed8
	ctx.lr = 0x82787310;
	sub_82786ED8(ctx, base);
	// stbx r25,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r25.u8);
loc_82787314:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82787270
	if (ctx.cr6.lt) goto loc_82787270;
loc_82787328:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787330"))) PPC_WEAK_FUNC(sub_82787330);
PPC_FUNC_IMPL(__imp__sub_82787330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x82787338;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r22,r4,24
	ctx.r22.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwz r30,348(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// beq cr6,0x82787364
	if (ctx.cr6.eq) goto loc_82787364;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r9,r11,28120
	ctx.r9.s64 = ctx.r11.s64 + 28120;
	// addi r8,r10,29232
	ctx.r8.s64 = ctx.r10.s64 + 29232;
	// b 0x82787374
	goto loc_82787374;
loc_82787364:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r9,r11,27072
	ctx.r9.s64 = ctx.r11.s64 + 27072;
	// addi r8,r10,27496
	ctx.r8.s64 = ctx.r10.s64 + 27496;
loc_82787374:
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827874f8
	if (!ctx.cr6.gt) goto loc_827874F8;
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// addi r27,r31,232
	ctx.r27.s64 = ctx.r31.s64 + 232;
	// li r24,50
	ctx.r24.s64 = 50;
loc_8278739C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// beq cr6,0x827874a4
	if (ctx.cr6.eq) goto loc_827874A4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827873c0
	if (ctx.cr6.lt) goto loc_827873C0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x827873e4
	if (ctx.cr6.lt) goto loc_827873E4;
loc_827873C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r29.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827873E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827873E4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x827873f4
	if (ctx.cr6.lt) goto loc_827873F4;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82787418
	if (ctx.cr6.lt) goto loc_82787418;
loc_827873F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82787418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787418:
	// addi r11,r29,19
	ctx.r11.s64 = ctx.r29.s64 + 19;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278744c
	if (!ctx.cr6.eq) goto loc_8278744C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82787448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
loc_8278744C:
	// li r5,1028
	ctx.r5.s64 = 1028;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d9890
	ctx.lr = 0x8278745C;
	sub_823D9890(ctx, base);
	// addi r11,r28,23
	ctx.r11.s64 = ctx.r28.s64 + 23;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82787490
	if (!ctx.cr6.eq) goto loc_82787490;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278748C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
loc_82787490:
	// li r5,1028
	ctx.r5.s64 = 1028;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d9890
	ctx.lr = 0x827874A0;
	sub_823D9890(ctx, base);
	// b 0x827874dc
	goto loc_827874DC;
loc_827874A4:
	// addi r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 + 11;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827861d8
	ctx.lr = 0x827874C0;
	sub_827861D8(ctx, base);
	// addi r10,r28,15
	ctx.r10.s64 = ctx.r28.s64 + 15;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827861d8
	ctx.lr = 0x827874DC;
	sub_827861D8(ctx, base);
loc_827874DC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278739c
	if (ctx.cr6.lt) goto loc_8278739C;
loc_827874F8:
	// stw r23,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r23.u32);
	// stw r23,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r23.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r23,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r23.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787514"))) PPC_WEAK_FUNC(sub_82787514);
PPC_FUNC_IMPL(__imp__sub_82787514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82787518"))) PPC_WEAK_FUNC(sub_82787518);
PPC_FUNC_IMPL(__imp__sub_82787518) {
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
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82787544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// addi r8,r9,29488
	ctx.r8.s64 = ctx.r9.s64 + 29488;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82787560:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82787560
	if (!ctx.cr0.eq) goto loc_82787560;
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

__attribute__((alias("__imp__sub_82787590"))) PPC_WEAK_FUNC(sub_82787590);
PPC_FUNC_IMPL(__imp__sub_82787590) {
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
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827875BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827875ec
	if (!ctx.cr6.eq) goto loc_827875EC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x827875EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827875EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82787614"))) PPC_WEAK_FUNC(sub_82787614);
PPC_FUNC_IMPL(__imp__sub_82787614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82787618"))) PPC_WEAK_FUNC(sub_82787618);
PPC_FUNC_IMPL(__imp__sub_82787618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x82787620;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r28,28(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bne cr6,0x82787660
	if (!ctx.cr6.eq) goto loc_82787660;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82787660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787660:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82787770
	if (!ctx.cr6.eq) goto loc_82787770;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r27,r28,r30
	ctx.r27.u64 = ctx.r28.u64 + ctx.r30.u64;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfic r8,r27,24
	ctx.xer.ca = ctx.r27.u32 <= 24;
	ctx.r8.s64 = 24 - ctx.r27.s64;
	// and r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 & ctx.r29.u64;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r28,r6,r10
	ctx.r28.u64 = ctx.r6.u64 | ctx.r10.u64;
	// blt cr6,0x82787768
	if (ctx.cr6.lt) goto loc_82787768;
	// rlwinm r11,r27,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r26,r27,29,3,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// li r24,24
	ctx.r24.s64 = 24;
	// li r25,0
	ctx.r25.s64 = 0;
loc_827876AC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r10,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 16;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// bne 0x82787728
	if (!ctx.cr0.eq) goto loc_82787728;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827876EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82787718
	if (!ctx.cr6.eq) goto loc_82787718;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r24,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r24.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82787718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787718:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82787728:
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// bne cr6,0x8278775c
	if (!ctx.cr6.eq) goto loc_8278775C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne 0x8278775c
	if (!ctx.cr0.eq) goto loc_8278775C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787590
	ctx.lr = 0x8278775C;
	sub_82787590(ctx, base);
loc_8278775C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// bne 0x827876ac
	if (!ctx.cr0.eq) goto loc_827876AC;
loc_82787768:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
loc_82787770:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787778"))) PPC_WEAK_FUNC(sub_82787778);
PPC_FUNC_IMPL(__imp__sub_82787778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82787780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82787894
	if (ctx.cr6.eq) goto loc_82787894;
	// li r28,0
	ctx.r28.s64 = 0;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// beq 0x827877dc
	if (ctx.cr0.eq) goto loc_827877DC;
loc_827877A4:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x827877a4
	if (!ctx.cr0.eq) goto loc_827877A4;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// ble cr6,0x827877dc
	if (!ctx.cr6.gt) goto loc_827877DC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x827877DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827877DC:
	// lbz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82787810
	if (ctx.cr6.eq) goto loc_82787810;
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// b 0x82787838
	goto loc_82787838;
loc_82787810:
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r6,1024(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1024);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// bl 0x82787618
	ctx.lr = 0x82787838;
	sub_82787618(ctx, base);
loc_82787838:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82787850
	if (ctx.cr6.eq) goto loc_82787850;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787618
	ctx.lr = 0x82787850;
	sub_82787618(ctx, base);
loc_82787850:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// bne cr6,0x82787890
	if (!ctx.cr6.eq) goto loc_82787890;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82787890
	if (ctx.cr6.eq) goto loc_82787890;
loc_82787870:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82787618
	ctx.lr = 0x82787884;
	sub_82787618(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82787870
	if (!ctx.cr0.eq) goto loc_82787870;
loc_82787890:
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_82787894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278789C"))) PPC_WEAK_FUNC(sub_8278789C);
PPC_FUNC_IMPL(__imp__sub_8278789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827878A0"))) PPC_WEAK_FUNC(sub_827878A0);
PPC_FUNC_IMPL(__imp__sub_827878A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x827878A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82787778
	ctx.lr = 0x827878B8;
	sub_82787778(ctx, base);
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82787940
	if (!ctx.cr6.eq) goto loc_82787940;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787618
	ctx.lr = 0x827878D8;
	sub_82787618(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne 0x82787910
	if (!ctx.cr0.eq) goto loc_82787910;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787590
	ctx.lr = 0x82787910;
	sub_82787590(ctx, base);
loc_82787910:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r29,208
	ctx.r10.s64 = ctx.r29.s64 + 208;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bne 0x82787940
	if (!ctx.cr0.eq) goto loc_82787940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787590
	ctx.lr = 0x82787940;
	sub_82787590(ctx, base);
loc_82787940:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82787988
	if (!ctx.cr6.eq) goto loc_82787988;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82787990
	if (!ctx.cr6.gt) goto loc_82787990;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
loc_82787964:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82787964
	if (ctx.cr6.lt) goto loc_82787964;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82787988:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82787990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787998"))) PPC_WEAK_FUNC(sub_82787998);
PPC_FUNC_IMPL(__imp__sub_82787998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x827879A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r31,348(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// lwz r28,312(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,188(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827879f0
	if (ctx.cr6.eq) goto loc_827879F0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827879f0
	if (!ctx.cr6.eq) goto loc_827879F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x827878a0
	ctx.lr = 0x827879F0;
	sub_827878A0(ctx, base);
loc_827879F0:
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82787b18
	if (!ctx.cr6.gt) goto loc_82787B18;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// extsh r24,r28
	ctx.r24.s64 = ctx.r28.s16;
	// addi r26,r29,260
	ctx.r26.s64 = ctx.r29.s64 + 260;
	// li r22,6
	ctx.r22.s64 = 6;
loc_82787A10:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// extsh r5,r24
	ctx.r5.s64 = ctx.r24.s16;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// addi r6,r11,58
	ctx.r6.s64 = ctx.r11.s64 + 58;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// sraw r10,r11,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// lwzx r28,r3,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// subf. r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bge 0x82787a58
	if (!ctx.cr0.lt) goto loc_82787A58;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_82787A58:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82787a94
	if (ctx.cr6.eq) goto loc_82787A94;
loc_82787A64:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82787a64
	if (!ctx.cr0.eq) goto loc_82787A64;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// ble cr6,0x82787a94
	if (!ctx.cr6.gt) goto loc_82787A94;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82787A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787A94:
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82787ac4
	if (ctx.cr6.eq) goto loc_82787AC4;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x82787ae8
	goto loc_82787AE8;
loc_82787AC4:
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r7,1024(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1024);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// bl 0x82787618
	ctx.lr = 0x82787AE8;
	sub_82787618(ctx, base);
loc_82787AE8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82787b00
	if (ctx.cr6.eq) goto loc_82787B00;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787618
	ctx.lr = 0x82787B00;
	sub_82787618(ctx, base);
loc_82787B00:
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82787a10
	if (ctx.cr6.lt) goto loc_82787A10;
loc_82787B18:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82787b68
	if (ctx.cr6.eq) goto loc_82787B68;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82787b5c
	if (!ctx.cr6.eq) goto loc_82787B5C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82787B5C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82787B68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787B74"))) PPC_WEAK_FUNC(sub_82787B74);
PPC_FUNC_IMPL(__imp__sub_82787B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82787B78"))) PPC_WEAK_FUNC(sub_82787B78);
PPC_FUNC_IMPL(__imp__sub_82787B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x82787B80;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r31,348(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 348);
	// lwz r30,304(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 304);
	// lwz r23,312(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,188(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82787bd4
	if (ctx.cr6.eq) goto loc_82787BD4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82787bd4
	if (!ctx.cr6.eq) goto loc_82787BD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x827878a0
	ctx.lr = 0x82787BD4;
	sub_827878A0(ctx, base);
loc_82787BD4:
	// lwz r11,300(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r22,0(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82787db4
	if (ctx.cr6.gt) goto loc_82787DB4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-31424
	ctx.r10.s64 = ctx.r10.s64 + -31424;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// li r21,6
	ctx.r21.s64 = 6;
loc_82787C04:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82787c24
	if (!ctx.cr6.eq) goto loc_82787C24;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82787d84
	goto loc_82787D84;
loc_82787C24:
	// bge cr6,0x82787c38
	if (!ctx.cr6.lt) goto loc_82787C38;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// sraw r30,r11,r23
	temp.u32 = ctx.r23.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r30.s64 = ctx.r11.s32 >> temp.u32;
	// not r27,r30
	ctx.r27.u64 = ~ctx.r30.u64;
	// b 0x82787c40
	goto loc_82787C40;
loc_82787C38:
	// sraw r30,r11,r23
	temp.u32 = ctx.r23.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r30.s64 = ctx.r11.s32 >> temp.u32;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82787C40:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82787c50
	if (!ctx.cr6.eq) goto loc_82787C50;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82787d84
	goto loc_82787D84;
loc_82787C50:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82787c64
	if (!ctx.cr6.gt) goto loc_82787C64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787778
	ctx.lr = 0x82787C64;
	sub_82787778(ctx, base);
loc_82787C64:
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// ble cr6,0x82787cd4
	if (!ctx.cr6.gt) goto loc_82787CD4;
	// addi r11,r28,-16
	ctx.r11.s64 = ctx.r28.s64 + -16;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r10,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r10.s64;
loc_82787C80:
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82787cac
	if (ctx.cr6.eq) goto loc_82787CAC;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 960, ctx.r9.u32);
	// b 0x82787ccc
	goto loc_82787CCC;
loc_82787CAC:
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lbz r8,1264(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1264);
	// lwz r4,960(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 960);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// bl 0x82787618
	ctx.lr = 0x82787CCC;
	sub_82787618(ctx, base);
loc_82787CCC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82787c80
	if (!ctx.cr0.eq) goto loc_82787C80;
loc_82787CD4:
	// srawi. r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// beq 0x82787d10
	if (ctx.cr0.eq) goto loc_82787D10;
loc_82787CE0:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82787ce0
	if (!ctx.cr0.eq) goto loc_82787CE0;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// ble cr6,0x82787d10
	if (!ctx.cr6.gt) goto loc_82787D10;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r21,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r21.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82787D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787D10:
	// lbz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82787d48
	if (ctx.cr6.eq) goto loc_82787D48;
	// addi r9,r10,23
	ctx.r9.s64 = ctx.r10.s64 + 23;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x82787d70
	goto loc_82787D70;
loc_82787D48:
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r6,1024(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1024);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// bl 0x82787618
	ctx.lr = 0x82787D70;
	sub_82787618(ctx, base);
loc_82787D70:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787618
	ctx.lr = 0x82787D80;
	sub_82787618(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82787D84:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x82787c04
	if (!ctx.cr0.eq) goto loc_82787C04;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82787db4
	if (!ctx.cr6.gt) goto loc_82787DB4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bne cr6,0x82787db4
	if (!ctx.cr6.eq) goto loc_82787DB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787778
	ctx.lr = 0x82787DB4;
	sub_82787778(ctx, base);
loc_82787DB4:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82787e04
	if (ctx.cr6.eq) goto loc_82787E04;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82787df8
	if (!ctx.cr6.eq) goto loc_82787DF8;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82787DF8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82787E04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787E10"))) PPC_WEAK_FUNC(sub_82787E10);
PPC_FUNC_IMPL(__imp__sub_82787E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82787E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,348(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r27,312(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82787e68
	if (ctx.cr6.eq) goto loc_82787E68;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82787e68
	if (!ctx.cr6.eq) goto loc_82787E68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x827878a0
	ctx.lr = 0x82787E68;
	sub_827878A0(ctx, base);
loc_82787E68:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82787eb4
	if (!ctx.cr6.gt) goto loc_82787EB4;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
loc_82787E7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// bl 0x82787618
	ctx.lr = 0x82787EA0;
	sub_82787618(ctx, base);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82787e7c
	if (ctx.cr6.lt) goto loc_82787E7C;
loc_82787EB4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82787f04
	if (ctx.cr6.eq) goto loc_82787F04;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82787ef8
	if (!ctx.cr6.eq) goto loc_82787EF8;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
loc_82787EF8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
loc_82787F04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787F10"))) PPC_WEAK_FUNC(sub_82787F10);
PPC_FUNC_IMPL(__imp__sub_82787F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x82787F18;
	__savegprlr_20(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lwz r31,348(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 348);
	// lwz r22,304(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 304);
	// lwz r29,312(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 312);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,188(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 188);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82787f6c
	if (ctx.cr6.eq) goto loc_82787F6C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82787f6c
	if (!ctx.cr6.eq) goto loc_82787F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x827878a0
	ctx.lr = 0x82787F6C;
	sub_827878A0(ctx, base);
loc_82787F6C:
	// lwz r9,300(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// addi r23,r11,-31424
	ctx.r23.s64 = ctx.r11.s64 + -31424;
	// bgt cr6,0x82787fd4
	if (ctx.cr6.gt) goto loc_82787FD4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82787F90:
	// lwzx r11,r10,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r24
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r24.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82787fac
	if (!ctx.cr6.lt) goto loc_82787FAC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82787FAC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sraw r11,r11,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82787fc4
	if (!ctx.cr6.eq) goto loc_82787FC4;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
loc_82787FC4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x82787f90
	if (!ctx.cr6.gt) goto loc_82787F90;
loc_82787FD4:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x827881f8
	if (ctx.cr6.gt) goto loc_827881F8;
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82787FF8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r27,r26,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82788010
	if (!ctx.cr6.eq) goto loc_82788010;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x827881a8
	goto loc_827881A8;
loc_82788010:
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// ble cr6,0x827880bc
	if (!ctx.cr6.gt) goto loc_827880BC;
loc_82788018:
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x827880bc
	if (ctx.cr6.gt) goto loc_827880BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787778
	ctx.lr = 0x82788028;
	sub_82787778(ctx, base);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82788054
	if (ctx.cr6.eq) goto loc_82788054;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 960, ctx.r9.u32);
	// b 0x82788074
	goto loc_82788074;
loc_82788054:
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lbz r8,1264(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1264);
	// lwz r4,960(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 960);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// bl 0x82787618
	ctx.lr = 0x82788074;
	sub_82787618(ctx, base);
loc_82788074:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827880ac
	if (!ctx.cr6.eq) goto loc_827880AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827880ac
	if (ctx.cr6.eq) goto loc_827880AC;
loc_8278808C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82787618
	ctx.lr = 0x827880A0;
	sub_82787618(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x8278808c
	if (!ctx.cr0.eq) goto loc_8278808C;
loc_827880AC:
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// bgt cr6,0x82788018
	if (ctx.cr6.gt) goto loc_82788018;
loc_827880BC:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// ble cr6,0x827880d4
	if (!ctx.cr6.gt) goto loc_827880D4;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// stbx r11,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x827881a8
	goto loc_827881A8;
loc_827880D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787778
	ctx.lr = 0x827880DC;
	sub_82787778(ctx, base);
	// lbz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82788114
	if (ctx.cr6.eq) goto loc_82788114;
	// addi r9,r10,23
	ctx.r9.s64 = ctx.r10.s64 + 23;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x8278813c
	goto loc_8278813C;
loc_82788114:
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r6,1024(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1024);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// bl 0x82787618
	ctx.lr = 0x8278813C;
	sub_82787618(ctx, base);
loc_8278813C:
	// lwzx r11,r26,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 ^ 1;
	// bl 0x82787618
	ctx.lr = 0x82788168;
	sub_82787618(ctx, base);
	// lbz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8278819c
	if (!ctx.cr6.eq) goto loc_8278819C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8278819c
	if (ctx.cr6.eq) goto loc_8278819C;
loc_8278817C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82787618
	ctx.lr = 0x82788190;
	sub_82787618(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x8278817c
	if (!ctx.cr0.eq) goto loc_8278817C;
loc_8278819C:
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_827881A8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x82787ff8
	if (!ctx.cr6.gt) goto loc_82787FF8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x827881c8
	if (ctx.cr6.gt) goto loc_827881C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827881f8
	if (ctx.cr6.eq) goto loc_827881F8;
loc_827881C8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq cr6,0x827881f0
	if (ctx.cr6.eq) goto loc_827881F0;
	// cmplwi cr6,r10,937
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 937, ctx.xer);
	// ble cr6,0x827881f8
	if (!ctx.cr6.gt) goto loc_827881F8;
loc_827881F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82787778
	ctx.lr = 0x827881F8;
	sub_82787778(ctx, base);
loc_827881F8:
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,24(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r11,188(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82788248
	if (ctx.cr6.eq) goto loc_82788248;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278823c
	if (!ctx.cr6.eq) goto loc_8278823C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_8278823C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82788248:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82788254"))) PPC_WEAK_FUNC(sub_82788254);
PPC_FUNC_IMPL(__imp__sub_82788254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788258"))) PPC_WEAK_FUNC(sub_82788258);
PPC_FUNC_IMPL(__imp__sub_82788258) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,348(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// bl 0x82787778
	ctx.lr = 0x82788294;
	sub_82787778(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82787618
	ctx.lr = 0x827882A4;
	sub_82787618(ctx, base);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_827882E0"))) PPC_WEAK_FUNC(sub_827882E0);
PPC_FUNC_IMPL(__imp__sub_827882E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x827882E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r26,348(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82787778
	ctx.lr = 0x827882FC;
	sub_82787778(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,300(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// ble cr6,0x827883c0
	if (!ctx.cr6.gt) goto loc_827883C0;
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// addi r27,r30,232
	ctx.r27.s64 = ctx.r30.s64 + 232;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8278832C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8278834c
	if (ctx.cr6.eq) goto loc_8278834C;
	// lwz r10,308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827883ac
	if (!ctx.cr6.eq) goto loc_827883AC;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82788350
	goto loc_82788350;
loc_8278834C:
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82788350:
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827883ac
	if (!ctx.cr6.eq) goto loc_827883AC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// bne cr6,0x82788370
	if (!ctx.cr6.eq) goto loc_82788370;
	// addi r11,r31,26
	ctx.r11.s64 = ctx.r31.s64 + 26;
loc_82788370:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82788390
	if (!ctx.cr6.eq) goto loc_82788390;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277a2e0
	ctx.lr = 0x8278838C;
	sub_8277A2E0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82788390:
	// addi r11,r31,23
	ctx.r11.s64 = ctx.r31.s64 + 23;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x82786ed8
	ctx.lr = 0x827883A8;
	sub_82786ED8(ctx, base);
	// stbx r24,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r24.u8);
loc_827883AC:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278832c
	if (ctx.cr6.lt) goto loc_8278832C;
loc_827883C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827883C8"))) PPC_WEAK_FUNC(sub_827883C8);
PPC_FUNC_IMPL(__imp__sub_827883C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x827883D0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,348(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
	// stb r31,12(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12, ctx.r31.u8);
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// lwz r10,300(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r22,r9,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r23,r22,24
	ctx.r23.u64 = ctx.r22.u32 & 0xFF;
	// bne cr6,0x8278842c
	if (!ctx.cr6.eq) goto loc_8278842C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8278841c
	if (ctx.cr6.eq) goto loc_8278841C;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,31128
	ctx.r10.s64 = ctx.r11.s64 + 31128;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x8278847c
	goto loc_8278847C;
loc_8278841C:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,31608
	ctx.r10.s64 = ctx.r11.s64 + 31608;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x8278847c
	goto loc_8278847C;
loc_8278842C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82788444
	if (ctx.cr6.eq) goto loc_82788444;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// addi r10,r11,32272
	ctx.r10.s64 = ctx.r11.s64 + 32272;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x8278847c
	goto loc_8278847C;
loc_82788444:
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r9,r11,32528
	ctx.r9.s64 = ctx.r11.s64 + 32528;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// bne cr6,0x8278847c
	if (!ctx.cr6.eq) goto loc_8278847C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82788478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
loc_8278847C:
	// clrlwi r21,r31,24
	ctx.r21.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82788494
	if (ctx.cr6.eq) goto loc_82788494;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-32032
	ctx.r10.s64 = ctx.r11.s64 + -32032;
	// b 0x8278849c
	goto loc_8278849C;
loc_82788494:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-32168
	ctx.r10.s64 = ctx.r11.s64 + -32168;
loc_8278849C:
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// ble cr6,0x827885a4
	if (!ctx.cr6.gt) goto loc_827885A4;
	// addi r27,r29,36
	ctx.r27.s64 = ctx.r29.s64 + 36;
	// addi r28,r30,232
	ctx.r28.s64 = ctx.r30.s64 + 232;
	// li r24,50
	ctx.r24.s64 = 50;
loc_827884C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// beq cr6,0x827884e4
	if (ctx.cr6.eq) goto loc_827884E4;
	// lwz r10,308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8278858c
	if (!ctx.cr6.eq) goto loc_8278858C;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x827884ec
	goto loc_827884EC;
loc_827884E4:
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
loc_827884EC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82788570
	if (ctx.cr6.eq) goto loc_82788570;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82788504
	if (ctx.cr6.lt) goto loc_82788504;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82788528
	if (ctx.cr6.lt) goto loc_82788528;
loc_82788504:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82788528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82788528:
	// addi r11,r31,23
	ctx.r11.s64 = ctx.r31.s64 + 23;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278855c
	if (!ctx.cr6.eq) goto loc_8278855C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82788558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
loc_8278855C:
	// li r5,1028
	ctx.r5.s64 = 1028;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d9890
	ctx.lr = 0x8278856C;
	sub_823D9890(ctx, base);
	// b 0x8278858c
	goto loc_8278858C;
loc_82788570:
	// addi r11,r31,19
	ctx.r11.s64 = ctx.r31.s64 + 19;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827861d8
	ctx.lr = 0x8278858C;
	sub_827861D8(ctx, base);
loc_8278858C:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827884c0
	if (ctx.cr6.lt) goto loc_827884C0;
loc_827885A4:
	// stw r25,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r25.u32);
	// stw r25,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r25.u32);
	// stw r25,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r25.u32);
	// stw r25,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r25.u32);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r11,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
	// stw r25,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827885C8"))) PPC_WEAK_FUNC(sub_827885C8);
PPC_FUNC_IMPL(__imp__sub_827885C8) {
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
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827885F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32135
	ctx.r9.s64 = -2105999360;
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// addi r8,r9,-31800
	ctx.r8.s64 = ctx.r9.s64 + -31800;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82788610:
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82788610
	if (!ctx.cr0.eq) goto loc_82788610;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8278863C"))) PPC_WEAK_FUNC(sub_8278863C);
PPC_FUNC_IMPL(__imp__sub_8278863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788640"))) PPC_WEAK_FUNC(sub_82788640);
PPC_FUNC_IMPL(__imp__sub_82788640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x82788648;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823db9cc
	ctx.lr = 0x82788650;
	sub_823DB9CC(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,60(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r28,344(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82788a44
	if (!ctx.cr6.gt) goto loc_82788A44;
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lfd f25,-30128(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r11.u32 + -30128);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lfd f26,-30136(r10)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + -30136);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfd f27,-30144(r9)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r9.u32 + -30144);
	// lfd f28,-30152(r8)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r8.u32 + -30152);
	// li r24,52
	ctx.r24.s64 = 52;
	// lfd f29,-30160(r7)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r7.u32 + -30160);
	// li r23,48
	ctx.r23.s64 = 48;
	// lfd f30,-30168(r6)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r6.u32 + -30168);
	// addi r31,r11,-30368
	ctx.r31.s64 = ctx.r11.s64 + -30368;
	// lfd f31,-30176(r5)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30176);
loc_827886BC:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827886e4
	if (ctx.cr6.lt) goto loc_827886E4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x827886e4
	if (!ctx.cr6.lt) goto loc_827886E4;
	// addi r11,r29,18
	ctx.r11.s64 = ctx.r29.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82788708
	if (!ctx.cr6.eq) goto loc_82788708;
loc_827886E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r29,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r29.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82788708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82788708:
	// addi r10,r29,18
	ctx.r10.s64 = ctx.r29.s64 + 18;
	// lwz r11,184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwzx r30,r9,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// blt cr6,0x827889d4
	if (ctx.cr6.lt) goto loc_827889D4;
	// beq cr6,0x827888f4
	if (ctx.cr6.eq) goto loc_827888F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8278874c
	if (ctx.cr6.lt) goto loc_8278874C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r23,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82788748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82788a30
	goto loc_82788A30;
loc_8278874C:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82788780
	if (!ctx.cr6.eq) goto loc_82788780;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278877C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r3.u32);
loc_82788780:
	// lwzx r9,r29,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_82788790:
	// lhz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f0,128(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// addi r8,r31,128
	ctx.r8.s64 = ctx.r31.s64 + 128;
	// addi r6,r8,64
	ctx.r6.s64 = ctx.r8.s64 + 64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmul f9,f10,f31
	ctx.f9.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fdiv f8,f0,f9
	ctx.f8.f64 = ctx.f0.f64 / ctx.f9.f64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,-8(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfd f6,0(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r5,-2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fmul f3,f4,f6
	ctx.f3.f64 = ctx.f4.f64 * ctx.f6.f64;
	// fmul f2,f3,f30
	ctx.f2.f64 = ctx.f3.f64 * ctx.f30.f64;
	// fdiv f1,f0,f2
	ctx.f1.f64 = ctx.f0.f64 / ctx.f2.f64;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,-4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// lfd f12,0(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmul f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmul f8,f9,f29
	ctx.f8.f64 = ctx.f9.f64 * ctx.f29.f64;
	// fdiv f7,f0,f8
	ctx.f7.f64 = ctx.f0.f64 / ctx.f8.f64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfd f5,0(r11)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f5
	ctx.f2.f64 = ctx.f3.f64 * ctx.f5.f64;
	// fmul f1,f2,f28
	ctx.f1.f64 = ctx.f2.f64 * ctx.f28.f64;
	// fdiv f13,f0,f1
	ctx.f13.f64 = ctx.f0.f64 / ctx.f1.f64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfd f11,0(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmul f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmul f7,f8,f31
	ctx.f7.f64 = ctx.f8.f64 * ctx.f31.f64;
	// fdiv f6,f0,f7
	ctx.f6.f64 = ctx.f0.f64 / ctx.f7.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,8(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfd f4,0(r11)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f3,120(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fmul f1,f2,f4
	ctx.f1.f64 = ctx.f2.f64 * ctx.f4.f64;
	// fmul f13,f1,f27
	ctx.f13.f64 = ctx.f1.f64 * ctx.f27.f64;
	// fdiv f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfd f10,0(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f9,128(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f10
	ctx.f7.f64 = ctx.f8.f64 * ctx.f10.f64;
	// fmul f6,f7,f26
	ctx.f6.f64 = ctx.f7.f64 * ctx.f26.f64;
	// fdiv f5,f0,f6
	ctx.f5.f64 = ctx.f0.f64 / ctx.f6.f64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,16(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lhz r4,10(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// lfd f3,0(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfd f2,136(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// fmul f13,f1,f3
	ctx.f13.f64 = ctx.f1.f64 * ctx.f3.f64;
	// fmul f12,f13,f25
	ctx.f12.f64 = ctx.f13.f64 * ctx.f25.f64;
	// fdiv f11,f0,f12
	ctx.f11.f64 = ctx.f0.f64 / ctx.f12.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,20(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// blt cr6,0x82788790
	if (ctx.cr6.lt) goto loc_82788790;
	// b 0x82788a30
	goto loc_82788A30;
loc_827888F4:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82788928
	if (!ctx.cr6.eq) goto loc_82788928;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82788924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r3.u32);
loc_82788928:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// neg r8,r30
	ctx.r8.s64 = -ctx.r30.s64;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82788948:
	// lhz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// addi r5,r31,130
	ctx.r5.s64 = ctx.r31.s64 + 130;
	// lhz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// mullw r8,r4,r3
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// addi r8,r8,1024
	ctx.r8.s64 = ctx.r8.s64 + 1024;
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// stw r4,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r4.u32);
	// lhz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// mullw r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// addi r3,r8,1024
	ctx.r3.s64 = ctx.r8.s64 + 1024;
	// srawi r8,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 11;
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// addi r8,r8,1024
	ctx.r8.s64 = ctx.r8.s64 + 1024;
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addi r5,r8,1024
	ctx.r5.s64 = ctx.r8.s64 + 1024;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r4,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 11;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x82788948
	if (ctx.cr6.lt) goto loc_82788948;
	// b 0x82788a30
	goto loc_82788A30;
loc_827889D4:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82788a08
	if (!ctx.cr6.eq) goto loc_82788A08;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82788A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r3.u32);
loc_82788A08:
	// lwzx r9,r29,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r11,64
	ctx.r11.s64 = 64;
loc_82788A14:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82788a14
	if (!ctx.cr0.eq) goto loc_82788A14;
loc_82788A30:
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,84
	ctx.r26.s64 = ctx.r26.s64 + 84;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827886bc
	if (ctx.cr6.lt) goto loc_827886BC;
loc_82788A44:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823dba18
	ctx.lr = 0x82788A50;
	__restfpr_25(ctx, base);
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82788A54"))) PPC_WEAK_FUNC(sub_82788A54);
PPC_FUNC_IMPL(__imp__sub_82788A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788A58"))) PPC_WEAK_FUNC(sub_82788A58);
PPC_FUNC_IMPL(__imp__sub_82788A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x82788A60;
	__savegprlr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r8,344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r25,8(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// beq cr6,0x82788f74
	if (ctx.cr6.eq) goto loc_82788F74;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r24,r10,8
	ctx.r24.s64 = ctx.r10.s64 + 8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// subf r29,r11,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r28,r11,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addi r30,r6,4
	ctx.r30.s64 = ctx.r6.s64 + 4;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_82788AB0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82788ABC:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r4,r7,-128
	ctx.r4.s64 = ctx.r7.s64 + -128;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r7,-128
	ctx.r3.s64 = ctx.r7.s64 + -128;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// lbz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r4,r4,-128
	ctx.r4.s64 = ctx.r4.s64 + -128;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r7,-128
	ctx.r3.s64 = ctx.r7.s64 + -128;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r4,r7,-128
	ctx.r4.s64 = ctx.r7.s64 + -128;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzx r7,r5,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// addi r3,r7,-128
	ctx.r3.s64 = ctx.r7.s64 + -128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r5,r7,-128
	ctx.r5.s64 = ctx.r7.s64 + -128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r7,-128
	ctx.r4.s64 = ctx.r7.s64 + -128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r7,-128
	ctx.r3.s64 = ctx.r7.s64 + -128;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r5,r7,-128
	ctx.r5.s64 = ctx.r7.s64 + -128;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// add r8,r6,r31
	ctx.r8.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r3,r7,-128
	ctx.r3.s64 = ctx.r7.s64 + -128;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r7,-128
	ctx.r5.s64 = ctx.r7.s64 + -128;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r7,-128
	ctx.r4.s64 = ctx.r7.s64 + -128;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r5,-128
	ctx.r3.s64 = ctx.r5.s64 + -128;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r5,r7,-128
	ctx.r5.s64 = ctx.r7.s64 + -128;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r4,r7,-128
	ctx.r4.s64 = ctx.r7.s64 + -128;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lbzx r7,r6,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// addi r3,r7,-128
	ctx.r3.s64 = ctx.r7.s64 + -128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r6,r7,-128
	ctx.r6.s64 = ctx.r7.s64 + -128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r5,r7,-128
	ctx.r5.s64 = ctx.r7.s64 + -128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r7,-128
	ctx.r4.s64 = ctx.r7.s64 + -128;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r7,-128
	ctx.r3.s64 = ctx.r7.s64 + -128;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// bne 0x82788abc
	if (!ctx.cr0.eq) goto loc_82788ABC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82788D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r5,16
	ctx.r5.s64 = 16;
loc_82788D54:
	// lwz r10,-4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// lwz r11,-8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// bge cr6,0x82788da0
	if (!ctx.cr6.lt) goto loc_82788DA0;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82788d94
	if (ctx.cr6.lt) goto loc_82788D94;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// twlgei r4,-1
	// b 0x82788dcc
	goto loc_82788DCC;
loc_82788D94:
	// li r10,0
	ctx.r10.s64 = 0;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// b 0x82788dcc
	goto loc_82788DCC;
loc_82788DA0:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82788dc8
	if (ctx.cr6.lt) goto loc_82788DC8;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r4,-1
	// b 0x82788dcc
	goto loc_82788DCC;
loc_82788DC8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82788DCC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,-4(r7)
	PPC_STORE_U16(ctx.r7.u32 + -4, ctx.r11.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// bge cr6,0x82788e20
	if (!ctx.cr6.lt) goto loc_82788E20;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82788e14
	if (ctx.cr6.lt) goto loc_82788E14;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// twlgei r4,-1
	// b 0x82788e4c
	goto loc_82788E4C;
loc_82788E14:
	// li r10,0
	ctx.r10.s64 = 0;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// b 0x82788e4c
	goto loc_82788E4C;
loc_82788E20:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82788e48
	if (ctx.cr6.lt) goto loc_82788E48;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r4,-1
	// b 0x82788e4c
	goto loc_82788E4C;
loc_82788E48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82788E4C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwzx r10,r8,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// sth r11,-2(r7)
	PPC_STORE_U16(ctx.r7.u32 + -2, ctx.r11.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// bge cr6,0x82788ea0
	if (!ctx.cr6.lt) goto loc_82788EA0;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82788e94
	if (ctx.cr6.lt) goto loc_82788E94;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// twlgei r4,-1
	// b 0x82788ecc
	goto loc_82788ECC;
loc_82788E94:
	// li r10,0
	ctx.r10.s64 = 0;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// b 0x82788ecc
	goto loc_82788ECC;
loc_82788EA0:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82788ec8
	if (ctx.cr6.lt) goto loc_82788EC8;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r4,-1
	// b 0x82788ecc
	goto loc_82788ECC;
loc_82788EC8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82788ECC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwzx r10,r8,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// bge cr6,0x82788f20
	if (!ctx.cr6.lt) goto loc_82788F20;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82788f14
	if (ctx.cr6.lt) goto loc_82788F14;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// twlgei r4,-1
	// b 0x82788f4c
	goto loc_82788F4C;
loc_82788F14:
	// li r10,0
	ctx.r10.s64 = 0;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// b 0x82788f4c
	goto loc_82788F4C;
loc_82788F20:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82788f48
	if (ctx.cr6.lt) goto loc_82788F48;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r4,-1
	// b 0x82788f4c
	goto loc_82788F4C;
loc_82788F48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82788F4C:
	// sth r10,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82788d54
	if (!ctx.cr0.eq) goto loc_82788D54;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82788ab0
	if (!ctx.cr0.eq) goto loc_82788AB0;
loc_82788F74:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82788F7C"))) PPC_WEAK_FUNC(sub_82788F7C);
PPC_FUNC_IMPL(__imp__sub_82788F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788F80"))) PPC_WEAK_FUNC(sub_82788F80);
PPC_FUNC_IMPL(__imp__sub_82788F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x82788F88;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r8,344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// add r30,r10,r5
	ctx.r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r27,28(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// beq cr6,0x82789a20
	if (ctx.cr6.eq) goto loc_82789A20;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r25,r11,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r24,r11,r7
	ctx.r24.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r23,r11,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r22,r11,r4
	ctx.r22.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r21,r11,r3
	ctx.r21.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r6,4
	ctx.r29.s64 = ctx.r6.s64 + 4;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// lfs f31,-30120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30120);
	ctx.f31.f64 = double(temp.f32);
loc_82789000:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,848(r1)
	PPC_STORE_U64(ctx.r1.u32 + 848, ctx.r8.u64);
	// lfd f0,848(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 848);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r6,840(r1)
	PPC_STORE_U64(ctx.r1.u32 + 840, ctx.r6.u64);
	// lfd f11,840(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r4,856(r1)
	PPC_STORE_U64(ctx.r1.u32 + 856, ctx.r4.u64);
	// lfd f8,856(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r10.u64);
	// lfd f5,368(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r10,-128
	ctx.r8.s64 = ctx.r10.s64 + -128;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r7,736(r1)
	PPC_STORE_U64(ctx.r1.u32 + 736, ctx.r7.u64);
	// lfd f2,736(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 736);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r5.u64);
	// lfd f13,384(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,624(r1)
	PPC_STORE_U64(ctx.r1.u32 + 624, ctx.r3.u64);
	// lfd f10,624(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 624);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r10,-128
	ctx.r11.s64 = ctx.r10.s64 + -128;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// std r10,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r10.u64);
	// lfd f7,400(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lbzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r9,r10,-128
	ctx.r9.s64 = ctx.r10.s64 + -128;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,800(r1)
	PPC_STORE_U64(ctx.r1.u32 + 800, ctx.r8.u64);
	// lfd f4,800(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 800);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r6,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r6.u64);
	// lfd f1,416(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r4,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r4.u64);
	// lfd f12,640(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 640);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r10.u64);
	// lfd f9,432(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r10,-128
	ctx.r8.s64 = ctx.r10.s64 + -128;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r7,752(r1)
	PPC_STORE_U64(ctx.r1.u32 + 752, ctx.r7.u64);
	// lfd f6,752(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 752);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r5.u64);
	// lfd f3,448(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,656(r1)
	PPC_STORE_U64(ctx.r1.u32 + 656, ctx.r3.u64);
	// lfd f0,656(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 656);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r10,-128
	ctx.r11.s64 = ctx.r10.s64 + -128;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// std r10,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r10.u64);
	// lfd f11,464(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lbzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// addi r9,r10,-128
	ctx.r9.s64 = ctx.r10.s64 + -128;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,832(r1)
	PPC_STORE_U64(ctx.r1.u32 + 832, ctx.r8.u64);
	// lfd f8,832(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 832);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,160(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r6,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r6.u64);
	// lfd f5,480(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,672(r1)
	PPC_STORE_U64(ctx.r1.u32 + 672, ctx.r4.u64);
	// lfd f2,672(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 672);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,496(r1)
	PPC_STORE_U64(ctx.r1.u32 + 496, ctx.r10.u64);
	// lfd f13,496(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 496);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r6,768(r1)
	PPC_STORE_U64(ctx.r1.u32 + 768, ctx.r6.u64);
	// lfd f10,768(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 768);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 512, ctx.r4.u64);
	// lfd f7,512(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 512);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,180(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,688(r1)
	PPC_STORE_U64(ctx.r1.u32 + 688, ctx.r10.u64);
	// lfd f4,688(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 688);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// std r6,528(r1)
	PPC_STORE_U64(ctx.r1.u32 + 528, ctx.r6.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f1,528(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lbzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,816(r1)
	PPC_STORE_U64(ctx.r1.u32 + 816, ctx.r4.u64);
	// lfd f12,816(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 816);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r10,-128
	ctx.r3.s64 = ctx.r10.s64 + -128;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r10.u64);
	// lfd f9,544(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 544);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,196(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r10,-128
	ctx.r9.s64 = ctx.r10.s64 + -128;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r7,704(r1)
	PPC_STORE_U64(ctx.r1.u32 + 704, ctx.r7.u64);
	// lfd f6,704(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 704);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,200(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,560(r1)
	PPC_STORE_U64(ctx.r1.u32 + 560, ctx.r5.u64);
	// lfd f3,560(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r3,784(r1)
	PPC_STORE_U64(ctx.r1.u32 + 784, ctx.r3.u64);
	// lfd f0,784(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 784);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,576(r1)
	PPC_STORE_U64(ctx.r1.u32 + 576, ctx.r7.u64);
	// lfd f11,576(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 576);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,720(r1)
	PPC_STORE_U64(ctx.r1.u32 + 720, ctx.r5.u64);
	// lfd f8,720(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 720);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// std r3,592(r1)
	PPC_STORE_U64(ctx.r1.u32 + 592, ctx.r3.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f5,592(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 592);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,220(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lbzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// std r7,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r7.u64);
	// lfd f2,352(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r5,608(r1)
	PPC_STORE_U64(ctx.r1.u32 + 608, ctx.r5.u64);
	// lfd f13,608(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 608);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,228(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r3,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r3.u64);
	// lfd f10,360(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,232(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r7,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r7.u64);
	// lfd f7,376(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,236(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r5.u64);
	// lfd f4,392(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,240(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r3.u64);
	// lfd f1,408(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r7.u64);
	// lfd f12,424(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// std r5,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r5.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f9,440(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,252(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lbzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r3.u64);
	// lfd f6,456(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,256(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r7,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r7.u64);
	// lfd f3,472(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// stfs f1,260(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r5,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r5.u64);
	// lfd f0,488(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r3,504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 504, ctx.r3.u64);
	// lfd f11,504(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,268(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r7,520(r1)
	PPC_STORE_U64(ctx.r1.u32 + 520, ctx.r7.u64);
	// lfd f8,520(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,272(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r5.u64);
	// lfd f5,536(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,276(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,552(r1)
	PPC_STORE_U64(ctx.r1.u32 + 552, ctx.r10.u64);
	// lfd f2,552(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 552);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// std r6,568(r1)
	PPC_STORE_U64(ctx.r1.u32 + 568, ctx.r6.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f13,568(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 568);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,284(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lbzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,584(r1)
	PPC_STORE_U64(ctx.r1.u32 + 584, ctx.r4.u64);
	// lfd f10,584(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 584);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,288(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,600(r1)
	PPC_STORE_U64(ctx.r1.u32 + 600, ctx.r8.u64);
	// lfd f7,600(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 600);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,292(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r6,616(r1)
	PPC_STORE_U64(ctx.r1.u32 + 616, ctx.r6.u64);
	// lfd f4,616(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,296(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r4,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r4.u64);
	// lfd f1,632(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,300(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,648(r1)
	PPC_STORE_U64(ctx.r1.u32 + 648, ctx.r8.u64);
	// lfd f12,648(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,304(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,664(r1)
	PPC_STORE_U64(ctx.r1.u32 + 664, ctx.r6.u64);
	// lfd f9,664(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,308(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,680(r1)
	PPC_STORE_U64(ctx.r1.u32 + 680, ctx.r4.u64);
	// lfd f6,680(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,312(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,696(r1)
	PPC_STORE_U64(ctx.r1.u32 + 696, ctx.r8.u64);
	// lfd f3,696(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// stfs f1,316(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// lbzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r10,-128
	ctx.r7.s64 = ctx.r10.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,712(r1)
	PPC_STORE_U64(ctx.r1.u32 + 712, ctx.r6.u64);
	// lfd f0,712(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,320(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r4,728(r1)
	PPC_STORE_U64(ctx.r1.u32 + 728, ctx.r4.u64);
	// lfd f11,728(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,324(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,744(r1)
	PPC_STORE_U64(ctx.r1.u32 + 744, ctx.r9.u64);
	// lfd f8,744(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,328(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r10,-128
	ctx.r8.s64 = ctx.r10.s64 + -128;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r7,760(r1)
	PPC_STORE_U64(ctx.r1.u32 + 760, ctx.r7.u64);
	// lfd f5,760(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,332(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r5,776(r1)
	PPC_STORE_U64(ctx.r1.u32 + 776, ctx.r5.u64);
	// lfd f2,776(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 776);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,792(r1)
	PPC_STORE_U64(ctx.r1.u32 + 792, ctx.r10.u64);
	// lfd f13,792(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,340(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r9,r10,-128
	ctx.r9.s64 = ctx.r10.s64 + -128;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,808(r1)
	PPC_STORE_U64(ctx.r1.u32 + 808, ctx.r8.u64);
	// lfd f10,808(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 808);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,344(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r7,r11,-128
	ctx.r7.s64 = ctx.r11.s64 + -128;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,824(r1)
	PPC_STORE_U64(ctx.r1.u32 + 824, ctx.r6.u64);
	// lfd f7,824(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,348(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x827898EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r8,8
	ctx.r8.s64 = 8;
loc_827898FC:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f31.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r26,r11
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lfsx f9,r25,r11
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fctiwz f4,f12
	ctx.f4.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r7,-16384
	ctx.r7.s64 = ctx.r7.s64 + -16384;
	// sth r7,-4(r10)
	PPC_STORE_U16(ctx.r10.u32 + -4, ctx.r7.u16);
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f11,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r7,-16384
	ctx.r5.s64 = ctx.r7.s64 + -16384;
	// sth r5,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r5.u16);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f0,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r7,-16384
	ctx.r3.s64 = ctx.r7.s64 + -16384;
	// sth r3,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r3.u16);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f31
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f31.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r7,-16384
	ctx.r6.s64 = ctx.r7.s64 + -16384;
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f8,f4,f31
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f31.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r7,-16384
	ctx.r4.s64 = ctx.r7.s64 + -16384;
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f7,f1,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r7,-16384
	ctx.r7.s64 = ctx.r7.s64 + -16384;
	// sth r7,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f6,f12,f31
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r7,-16384
	ctx.r5.s64 = ctx.r7.s64 + -16384;
	// sth r5,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f5,f9,f31
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f31.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r7,-16384
	ctx.r3.s64 = ctx.r7.s64 + -16384;
	// sth r3,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r3.u16);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x827898fc
	if (!ctx.cr0.eq) goto loc_827898FC;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82789000
	if (!ctx.cr0.eq) goto loc_82789000;
loc_82789A20:
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82789A2C"))) PPC_WEAK_FUNC(sub_82789A2C);
PPC_FUNC_IMPL(__imp__sub_82789A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789A30"))) PPC_WEAK_FUNC(sub_82789A30);
PPC_FUNC_IMPL(__imp__sub_82789A30) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82789A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32135
	ctx.r9.s64 = -2105999360;
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// addi r8,r9,-31168
	ctx.r8.s64 = ctx.r9.s64 + -31168;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82789ad4
	if (ctx.cr6.lt) goto loc_82789AD4;
	// beq cr6,0x82789ac8
	if (ctx.cr6.eq) goto loc_82789AC8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82789ab0
	if (ctx.cr6.lt) goto loc_82789AB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82789AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82789aec
	goto loc_82789AEC;
loc_82789AB0:
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r8,r10,-6920
	ctx.r8.s64 = ctx.r10.s64 + -6920;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// b 0x82789ae8
	goto loc_82789AE8;
loc_82789AC8:
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// addi r8,r10,-8848
	ctx.r8.s64 = ctx.r10.s64 + -8848;
	// b 0x82789adc
	goto loc_82789ADC;
loc_82789AD4:
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// addi r8,r10,-9504
	ctx.r8.s64 = ctx.r10.s64 + -9504;
loc_82789ADC:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// addi r9,r11,-30120
	ctx.r9.s64 = ctx.r11.s64 + -30120;
loc_82789AE8:
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_82789AEC:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82789AF8:
	// stw r9,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82789af8
	if (!ctx.cr0.eq) goto loc_82789AF8;
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

__attribute__((alias("__imp__sub_82789B24"))) PPC_WEAK_FUNC(sub_82789B24);
PPC_FUNC_IMPL(__imp__sub_82789B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789B28"))) PPC_WEAK_FUNC(sub_82789B28);
PPC_FUNC_IMPL(__imp__sub_82789B28) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r30,324(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// beq cr6,0x82789b68
	if (ctx.cr6.eq) goto loc_82789B68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82789B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82789B68:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82789BA0"))) PPC_WEAK_FUNC(sub_82789BA0);
PPC_FUNC_IMPL(__imp__sub_82789BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c4
	ctx.lr = 0x82789BA8;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// lwz r30,324(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x82789dcc
	if (!ctx.cr6.lt) goto loc_82789DCC;
	// li r16,0
	ctx.r16.s64 = 0;
loc_82789BDC:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x82789dcc
	if (!ctx.cr6.lt) goto loc_82789DCC;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,220(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subf r10,r11,r17
	ctx.r10.s64 = ctx.r17.s64 - ctx.r11.s64;
	// subf r31,r6,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82789c08
	if (ctx.cr6.lt) goto loc_82789C08;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82789C08:
	// lwz r10,336(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// addi r21,r30,8
	ctx.r21.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// add r4,r11,r18
	ctx.r4.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82789C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// lwz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf. r6,r31,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r6,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r6.u32);
	// bne 0x82789cd8
	if (!ctx.cr0.eq) goto loc_82789CD8;
	// lwz r10,220(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82789cd8
	if (!ctx.cr6.lt) goto loc_82789CD8;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82789cd0
	if (!ctx.cr6.gt) goto loc_82789CD0;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_82789C78:
	// lwz r31,52(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r27,220(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lwz r26,28(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82789cbc
	if (!ctx.cr6.lt) goto loc_82789CBC;
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
loc_82789C94:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8277a378
	ctx.lr = 0x82789CB0;
	sub_8277A378(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82789c94
	if (ctx.cr6.lt) goto loc_82789C94;
loc_82789CBC:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82789c78
	if (ctx.cr6.lt) goto loc_82789C78;
loc_82789CD0:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_82789CD8:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,220(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82789d1c
	if (!ctx.cr6.eq) goto loc_82789D1C;
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82789D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r16,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r16.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r9.u32);
loc_82789D1C:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82789d34
	if (!ctx.cr6.eq) goto loc_82789D34;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82789d48
	if (ctx.cr6.lt) goto loc_82789D48;
loc_82789D34:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82789bdc
	if (ctx.cr6.lt) goto loc_82789BDC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
loc_82789D48:
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82789dc8
	if (!ctx.cr6.gt) goto loc_82789DC8;
	// addi r26,r11,12
	ctx.r26.s64 = ctx.r11.s64 + 12;
loc_82789D60:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mullw r29,r11,r15
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r27,r9,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82789db0
	if (!ctx.cr6.lt) goto loc_82789DB0;
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
loc_82789D88:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277a378
	ctx.lr = 0x82789DA4;
	sub_8277A378(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82789d88
	if (ctx.cr6.lt) goto loc_82789D88;
loc_82789DB0:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r26,r26,84
	ctx.r26.s64 = ctx.r26.s64 + 84;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82789d60
	if (ctx.cr6.lt) goto loc_82789D60;
loc_82789DC8:
	// stw r15,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r15.u32);
loc_82789DCC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82789DD4"))) PPC_WEAK_FUNC(sub_82789DD4);
PPC_FUNC_IMPL(__imp__sub_82789DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789DD8"))) PPC_WEAK_FUNC(sub_82789DD8);
PPC_FUNC_IMPL(__imp__sub_82789DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c4
	ctx.lr = 0x82789DE0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,324(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r15.u32, ctx.xer);
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x8278a028
	if (!ctx.cr6.lt) goto loc_8278A028;
	// li r16,0
	ctx.r16.s64 = 0;
loc_82789E20:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x82789f10
	if (!ctx.cr6.lt) goto loc_82789F10;
	// lwz r9,60(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// subf r10,r11,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r11.s64;
	// lwz r6,52(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// subf r26,r6,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82789e48
	if (ctx.cr6.lt) goto loc_82789E48;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82789E48:
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// addi r27,r28,8
	ctx.r27.s64 = ctx.r28.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82789E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82789ee8
	if (!ctx.cr6.eq) goto loc_82789EE8;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82789ee8
	if (!ctx.cr6.gt) goto loc_82789EE8;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
loc_82789E94:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82789ed4
	if (ctx.cr6.lt) goto loc_82789ED4;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82789EA4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8277a378
	ctx.lr = 0x82789EC0;
	sub_8277A378(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82789ea4
	if (!ctx.cr6.gt) goto loc_82789EA4;
loc_82789ED4:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82789e94
	if (ctx.cr6.lt) goto loc_82789E94;
loc_82789EE8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r8,r26,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r26.s64;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r8.u32);
	// stw r9,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r9.u32);
	// b 0x82789fa0
	goto loc_82789FA0;
loc_82789F10:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278a028
	if (!ctx.cr6.eq) goto loc_8278A028;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82789fa0
	if (!ctx.cr6.lt) goto loc_82789FA0;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82789f98
	if (!ctx.cr6.gt) goto loc_82789F98;
	// addi r24,r28,8
	ctx.r24.s64 = ctx.r28.s64 + 8;
loc_82789F40:
	// lwz r31,52(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r27,60(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r26,28(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82789f84
	if (!ctx.cr6.lt) goto loc_82789F84;
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
loc_82789F5C:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8277a378
	ctx.lr = 0x82789F78;
	sub_8277A378(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82789f5c
	if (ctx.cr6.lt) goto loc_82789F5C;
loc_82789F84:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82789f40
	if (ctx.cr6.lt) goto loc_82789F40;
loc_82789F98:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r11,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r11.u32);
loc_82789FA0:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8278a01c
	if (!ctx.cr6.eq) goto loc_8278A01C;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// lwz r5,56(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82789FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r11.u32);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82789ffc
	if (ctx.cr6.lt) goto loc_82789FFC;
	// stw r16,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r16.u32);
loc_82789FFC:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8278a00c
	if (ctx.cr6.lt) goto loc_8278A00C;
	// stw r16,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r16.u32);
loc_8278A00C:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
loc_8278A01C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82789e20
	if (ctx.cr6.lt) goto loc_82789E20;
loc_8278A028:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278A030"))) PPC_WEAK_FUNC(sub_8278A030);
PPC_FUNC_IMPL(__imp__sub_8278A030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x8278A038;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,220(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r30,324(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8278A070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,60(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r8,68(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8278a180
	if (!ctx.cr6.gt) goto loc_8278A180;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r31,r10
	ctx.r22.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r21,r6,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r7,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r8,8
	ctx.r27.s64 = ctx.r8.s64 + 8;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
loc_8278A0B8:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r10,216(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r9,0
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r5,r8,r9
	ctx.r5.s32 = ctx.r8.s32 / ctx.r9.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andc r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// twlgei r11,-1
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278A100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823da950
	ctx.lr = 0x8278A114;
	sub_823DA950(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8278a15c
	if (!ctx.cr6.gt) goto loc_8278A15C;
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r7,r30,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r30.s64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8278A138:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwx r6,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8278a138
	if (!ctx.cr0.eq) goto loc_8278A138;
loc_8278A15C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 + ctx.r24.u64;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r27,r27,84
	ctx.r27.s64 = ctx.r27.s64 + 84;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278a0b8
	if (ctx.cr6.lt) goto loc_8278A0B8;
loc_8278A180:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278A188"))) PPC_WEAK_FUNC(sub_8278A188);
PPC_FUNC_IMPL(__imp__sub_8278A188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x8278A190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278a1c0
	if (ctx.cr6.eq) goto loc_8278A1C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278A1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278A1C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278A1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32135
	ctx.r9.s64 = -2105999360;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// addi r8,r9,-25816
	ctx.r8.s64 = ctx.r9.s64 + -25816;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lbz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8278a21c
	if (ctx.cr6.eq) goto loc_8278A21C;
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25128
	ctx.r9.s64 = ctx.r10.s64 + -25128;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x8278a030
	ctx.lr = 0x8278A214;
	sub_8278A030(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8278A21C:
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r10,-25696
	ctx.r9.s64 = ctx.r10.s64 + -25696;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8278a2a8
	if (!ctx.cr6.gt) goto loc_8278A2A8;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_8278A244:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r9,0
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r5,r8,r9
	ctx.r5.s32 = ctx.r8.s32 / ctx.r9.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andc r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// twlgei r11,-1
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278A28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8278a244
	if (ctx.cr6.lt) goto loc_8278A244;
loc_8278A2A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278A2B0"))) PPC_WEAK_FUNC(sub_8278A2B0);
PPC_FUNC_IMPL(__imp__sub_8278A2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x8278A2B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// lwz r30,68(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8278a338
	if (!ctx.cr6.gt) goto loc_8278A338;
	// rlwinm r26,r5,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// subf r25,r4,r6
	ctx.r25.s64 = ctx.r6.s64 - ctx.r4.s64;
loc_8278A2EC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r10,r25,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r8,r11,r24
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8278A31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,60(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8278a2ec
	if (ctx.cr6.lt) goto loc_8278A2EC;
loc_8278A338:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278A340"))) PPC_WEAK_FUNC(sub_8278A340);
PPC_FUNC_IMPL(__imp__sub_8278A340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x8278A348;
	__savegprlr_22(ctx, base);
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r8,216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwz r29,28(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// divw r26,r11,r30
	ctx.r26.s32 = ctx.r11.s32 / ctx.r30.s32;
	// divw r31,r8,r7
	ctx.r31.s32 = ctx.r8.s32 / ctx.r7.s32;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r22,r29,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r28,r26,r31
	ctx.r28.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// andc r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 & ~ctx.r3.u64;
	// twllei r7,0
	// twllei r30,0
	// andc r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// mullw r9,r31,r22
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r22.s32);
	// srawi r30,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 1;
	// subf. r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twlgei r7,-1
	// twlgei r3,-1
	// addze r24,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r24.s64 = temp.s64;
	// ble 0x8278a3ec
	if (!ctx.cr0.gt) goto loc_8278A3EC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278a3ec
	if (!ctx.cr6.gt) goto loc_8278A3EC;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8278A3BC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x8278a3e0
	if (ctx.cr6.eq) goto loc_8278A3E0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278A3D4:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278a3d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A3D4;
loc_8278A3E0:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8278a3bc
	if (!ctx.cr0.eq) goto loc_8278A3BC;
loc_8278A3EC:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278a4a8
	if (!ctx.cr6.gt) goto loc_8278A4A8;
	// rlwinm r23,r26,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
loc_8278A404:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8278a490
	if (ctx.cr6.eq) goto loc_8278A490;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8278A418:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8278a460
	if (!ctx.cr6.gt) goto loc_8278A460;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8278A42C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ble cr6,0x8278a454
	if (!ctx.cr6.gt) goto loc_8278A454;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8278A440:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne 0x8278a440
	if (!ctx.cr0.eq) goto loc_8278A440;
loc_8278A454:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8278a42c
	if (!ctx.cr0.eq) goto loc_8278A42C;
loc_8278A460:
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r28
	ctx.r9.s32 = ctx.r10.s32 / ctx.r28.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// twllei r28,0
	// andc r3,r28,r8
	ctx.r3.u64 = ctx.r28.u64 & ~ctx.r8.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// twlgei r3,-1
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// bne 0x8278a418
	if (!ctx.cr0.eq) goto loc_8278A418;
loc_8278A490:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r5,r23,r5
	ctx.r5.u64 = ctx.r23.u64 + ctx.r5.u64;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278a404
	if (ctx.cr6.lt) goto loc_8278A404;
loc_8278A4A8:
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278A4AC"))) PPC_WEAK_FUNC(sub_8278A4AC);
PPC_FUNC_IMPL(__imp__sub_8278A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278A4B0"))) PPC_WEAK_FUNC(sub_8278A4B0);
PPC_FUNC_IMPL(__imp__sub_8278A4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8278A4B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x8277a378
	ctx.lr = 0x8278A4E4;
	sub_8277A378(ctx, base);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// subf. r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8278a53c
	if (!ctx.cr0.gt) goto loc_8278A53C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278a53c
	if (!ctx.cr6.gt) goto loc_8278A53C;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8278A50C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x8278a530
	if (ctx.cr6.eq) goto loc_8278A530;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8278A524:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278a524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A524;
loc_8278A530:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8278a50c
	if (!ctx.cr0.eq) goto loc_8278A50C;
loc_8278A53C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278A544"))) PPC_WEAK_FUNC(sub_8278A544);
PPC_FUNC_IMPL(__imp__sub_8278A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278A548"))) PPC_WEAK_FUNC(sub_8278A548);
PPC_FUNC_IMPL(__imp__sub_8278A548) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8278a5ac
	if (!ctx.cr0.gt) goto loc_8278A5AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278a5ac
	if (!ctx.cr6.gt) goto loc_8278A5AC;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8278A57C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x8278a5a0
	if (ctx.cr6.eq) goto loc_8278A5A0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8278A594:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278a594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A594;
loc_8278A5A0:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8278a57c
	if (!ctx.cr0.eq) goto loc_8278A57C;
loc_8278A5AC:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278a618
	if (!ctx.cr6.gt) goto loc_8278A618;
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_8278A5C0:
	// lwzx r9,r3,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8278a604
	if (ctx.cr6.eq) goto loc_8278A604;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_8278A5D8:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8278a5d8
	if (!ctx.cr0.eq) goto loc_8278A5D8;
loc_8278A604:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278a5c0
	if (ctx.cr6.lt) goto loc_8278A5C0;
loc_8278A618:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278A624"))) PPC_WEAK_FUNC(sub_8278A624);
PPC_FUNC_IMPL(__imp__sub_8278A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278A628"))) PPC_WEAK_FUNC(sub_8278A628);
PPC_FUNC_IMPL(__imp__sub_8278A628) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x8278A630;
	__savegprlr_28(ctx, base);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8278a68c
	if (!ctx.cr0.gt) goto loc_8278A68C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278a68c
	if (!ctx.cr6.gt) goto loc_8278A68C;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8278A65C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x8278a680
	if (ctx.cr6.eq) goto loc_8278A680;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8278A674:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278a674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A674;
loc_8278A680:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8278a65c
	if (!ctx.cr0.eq) goto loc_8278A65C;
loc_8278A68C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278a718
	if (!ctx.cr6.gt) goto loc_8278A718;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_8278A6A4:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x8278a700
	if (ctx.cr6.eq) goto loc_8278A700;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8278A6C0:
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// xori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 ^ 3;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x8278a6c0
	if (!ctx.cr0.eq) goto loc_8278A6C0;
loc_8278A700:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278a6a4
	if (ctx.cr6.lt) goto loc_8278A6A4;
loc_8278A718:
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278A71C"))) PPC_WEAK_FUNC(sub_8278A71C);
PPC_FUNC_IMPL(__imp__sub_8278A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278A720"))) PPC_WEAK_FUNC(sub_8278A720);
PPC_FUNC_IMPL(__imp__sub_8278A720) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91cc
	ctx.lr = 0x8278A728;
	__savegprlr_17(ctx, base);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf. r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8278a788
	if (!ctx.cr0.gt) goto loc_8278A788;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278a788
	if (!ctx.cr6.gt) goto loc_8278A788;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8278A758:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x8278a77c
	if (ctx.cr6.eq) goto loc_8278A77C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8278A770:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278a770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A770;
loc_8278A77C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8278a758
	if (!ctx.cr0.eq) goto loc_8278A758;
loc_8278A788:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subfic r27,r7,16384
	ctx.xer.ca = ctx.r7.u32 <= 16384;
	ctx.r27.s64 = 16384 - ctx.r7.s64;
	// ble cr6,0x8278a9d0
	if (!ctx.cr6.gt) goto loc_8278A9D0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r17,r30,-2
	ctx.r17.s64 = ctx.r30.s64 + -2;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// addi r29,r5,-4
	ctx.r29.s64 = ctx.r5.s64 + -4;
	// ori r7,r11,32768
	ctx.r7.u64 = ctx.r11.u64 | 32768;
loc_8278A7C4:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// lwz r26,0(r19)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lbz r25,1(r6)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lbz r24,1(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r22,2(r3)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// add r25,r24,r25
	ctx.r25.u64 = ctx.r24.u64 + ctx.r25.u64;
	// lbz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r3,1(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// add r22,r25,r22
	ctx.r22.u64 = ctx.r25.u64 + ctx.r22.u64;
	// lbz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r22,r22,r6
	ctx.r22.u64 = ctx.r22.u64 + ctx.r6.u64;
	// lbz r20,1(r30)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r6,r26,1
	ctx.r6.s64 = ctx.r26.s64 + 1;
	// add r30,r22,r23
	ctx.r30.u64 = ctx.r22.u64 + ctx.r23.u64;
	// lbz r21,0(r8)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// add r3,r20,r3
	ctx.r3.u64 = ctx.r20.u64 + ctx.r3.u64;
	// lbz r22,0(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r24,r30,r31
	ctx.r24.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mullw r30,r3,r27
	ctx.r30.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// rlwinm r3,r24,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mullw r3,r3,r28
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// stb r3,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r3.u8);
	// beq cr6,0x8278a934
	if (ctx.cr6.eq) goto loc_8278A934;
loc_8278A87C:
	// lbz r31,1(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// lbz r30,1(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r26,-1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r24,-1(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r31,r9,2
	ctx.r31.s64 = ctx.r9.s64 + 2;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lbz r22,0(r8)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbz r23,1(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,1(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lbz r21,2(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r25,-1(r8)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,-1(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lbz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r23,r20
	ctx.r3.u64 = ctx.r23.u64 + ctx.r20.u64;
	// lbz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r21,r30,r21
	ctx.r21.u64 = ctx.r30.u64 + ctx.r21.u64;
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r31,r3,r22
	ctx.r31.u64 = ctx.r3.u64 + ctx.r22.u64;
	// rlwinm r3,r21,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mullw r31,r31,r27
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r27.s32);
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mullw r3,r3,r28
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r3,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r3.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bne 0x8278a87c
	if (!ctx.cr0.eq) goto loc_8278A87C;
loc_8278A934:
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lbz r31,-1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r30,1(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,1(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// add r25,r5,r26
	ctx.r25.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r26,-1(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lbz r9,-1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 + ctx.r31.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r25,r3
	ctx.r10.u64 = ctx.r25.u64 + ctx.r3.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r11,r9,r28
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stb r3,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r3.u8);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8278a7c4
	if (ctx.cr6.lt) goto loc_8278A7C4;
loc_8278A9D0:
	// b 0x823d921c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278A9D4"))) PPC_WEAK_FUNC(sub_8278A9D4);
PPC_FUNC_IMPL(__imp__sub_8278A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278A9D8"))) PPC_WEAK_FUNC(sub_8278A9D8);
PPC_FUNC_IMPL(__imp__sub_8278A9D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x8278A9E0;
	__savegprlr_21(ctx, base);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// subf. r9,r7,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ble 0x8278aa3c
	if (!ctx.cr0.gt) goto loc_8278AA3C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278aa3c
	if (!ctx.cr6.gt) goto loc_8278AA3C;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8278AA0C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x8278aa30
	if (ctx.cr6.eq) goto loc_8278AA30;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8278AA24:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278aa24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278AA24;
loc_8278AA30:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8278aa0c
	if (!ctx.cr0.eq) goto loc_8278AA0C;
loc_8278AA3C:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subfic r9,r11,128
	ctx.xer.ca = ctx.r11.u32 <= 128;
	ctx.r9.s64 = 128 - ctx.r11.s64;
	// rlwinm r28,r11,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r27,r9,9,0,22
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8278ab88
	if (!ctx.cr6.gt) goto loc_8278AB88;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r22,r30,-2
	ctx.r22.s64 = ctx.r30.s64 + -2;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r29,r5,4
	ctx.r29.s64 = ctx.r5.s64 + 4;
	// ori r7,r11,32768
	ctx.r7.u64 = ctx.r11.u64 | 32768;
loc_8278AA70:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// lbz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// mullw r25,r5,r27
	ctx.r25.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// lbz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r24,r31,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// subf r5,r5,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r5.s64;
	// add r26,r5,r10
	ctx.r26.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mullw r26,r26,r28
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 + ctx.r7.u64;
	// srawi r26,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 16;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// beq cr6,0x8278ab48
	if (ctx.cr6.eq) goto loc_8278AB48;
loc_8278AAEC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r30,r10,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r10.s64;
	// mullw r26,r10,r27
	ctx.r26.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// lbz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mullw r30,r30,r28
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r30,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r30.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bne 0x8278aaec
	if (!ctx.cr0.eq) goto loc_8278AAEC;
loc_8278AB48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mullw r10,r9,r27
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// mullw r11,r5,r28
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r21,r8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8278aa70
	if (ctx.cr6.lt) goto loc_8278AA70;
loc_8278AB88:
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278AB8C"))) PPC_WEAK_FUNC(sub_8278AB8C);
PPC_FUNC_IMPL(__imp__sub_8278AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278AB90"))) PPC_WEAK_FUNC(sub_8278AB90);
PPC_FUNC_IMPL(__imp__sub_8278AB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x8278AB98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278ABC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-32135
	ctx.r8.s64 = -2105999360;
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
	// addi r7,r9,0
	ctx.r7.s64 = ctx.r9.s64 + 0;
	// addi r6,r8,-23888
	ctx.r6.s64 = ctx.r8.s64 + -23888;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// stb r5,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r5.u8);
	// lbz r4,179(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 179);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8278ac14
	if (ctx.cr6.eq) goto loc_8278AC14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278AC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278AC14:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8278ad98
	if (!ctx.cr6.gt) goto loc_8278AD98;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// li r24,38
	ctx.r24.s64 = 38;
loc_8278AC34:
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8278ac84
	if (!ctx.cr6.eq) goto loc_8278AC84;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8278ac84
	if (!ctx.cr6.eq) goto loc_8278AC84;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278ac74
	if (ctx.cr6.eq) goto loc_8278AC74;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-22056
	ctx.r10.s64 = ctx.r11.s64 + -22056;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stb r25,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r25.u8);
	// b 0x8278ad80
	goto loc_8278AD80;
loc_8278AC74:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-23376
	ctx.r10.s64 = ctx.r11.s64 + -23376;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8278ad80
	goto loc_8278AD80;
loc_8278AC84:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8278ad00
	if (!ctx.cr6.eq) goto loc_8278AD00;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8278acb4
	if (!ctx.cr6.eq) goto loc_8278ACB4;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,-23224
	ctx.r10.s64 = ctx.r11.s64 + -23224;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8278ad80
	goto loc_8278AD80;
loc_8278ACB4:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8278ad00
	if (!ctx.cr6.eq) goto loc_8278AD00;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8278ad00
	if (!ctx.cr6.eq) goto loc_8278AD00;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278acf0
	if (ctx.cr6.eq) goto loc_8278ACF0;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-22752
	ctx.r10.s64 = ctx.r11.s64 + -22752;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stb r25,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r25.u8);
	// b 0x8278ad80
	goto loc_8278AD80;
loc_8278ACF0:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-23000
	ctx.r10.s64 = ctx.r11.s64 + -23000;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8278ad80
	goto loc_8278AD80;
loc_8278AD00:
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r8,r11,r10
	ctx.r8.s32 = ctx.r11.s32 / ctx.r10.s32;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// andc r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// twllei r10,0
	// subf. r5,r7,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// twlgei r4,-1
	// bne 0x8278ad64
	if (!ctx.cr0.eq) goto loc_8278AD64;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// andc r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// twllei r9,0
	// subf. r4,r6,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// twlgei r5,-1
	// bne 0x8278ad64
	if (!ctx.cr0.eq) goto loc_8278AD64;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,-23744
	ctx.r10.s64 = ctx.r11.s64 + -23744;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8278ad80
	goto loc_8278AD80;
loc_8278AD64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8278AD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278AD80:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278ac34
	if (ctx.cr6.lt) goto loc_8278AC34;
loc_8278AD98:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278add4
	if (ctx.cr6.eq) goto loc_8278ADD4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278add4
	if (!ctx.cr6.eq) goto loc_8278ADD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,99
	ctx.r10.s64 = 99;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278ADD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278ADD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278ADDC"))) PPC_WEAK_FUNC(sub_8278ADDC);
PPC_FUNC_IMPL(__imp__sub_8278ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278ADE0"))) PPC_WEAK_FUNC(sub_8278ADE0);
PPC_FUNC_IMPL(__imp__sub_8278ADE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x8278ADE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// lwz r31,336(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278AE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r11,r3,2048
	ctx.r11.s64 = ctx.r3.s64 + 2048;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r30,r9,32768
	ctx.r30.u64 = ctx.r9.u64 | 32768;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lis r28,29
	ctx.r28.s64 = 1900544;
	// ori r29,r3,38470
	ctx.r29.u64 = ctx.r3.u64 | 38470;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r5,r5,32767
	ctx.r5.u64 = ctx.r5.u64 | 32767;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ori r3,r28,37329
	ctx.r3.u64 = ctx.r28.u64 | 37329;
loc_8278AE4C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r10,7471
	ctx.r10.s64 = ctx.r10.s64 + 7471;
	// stw r9,-2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2048, ctx.r9.u32);
	// addi r9,r9,19595
	ctx.r9.s64 = ctx.r9.s64 + 19595;
	// stw r8,-1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1024, ctx.r8.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// stw r7,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r7.u32);
	// addi r7,r7,-11059
	ctx.r7.s64 = ctx.r7.s64 + -11059;
	// stw r6,2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2048, ctx.r6.u32);
	// addi r6,r6,-21709
	ctx.r6.s64 = ctx.r6.s64 + -21709;
	// stw r5,3072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3072, ctx.r5.u32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// stw r4,4096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4096, ctx.r4.u32);
	// addi r4,r4,-27439
	ctx.r4.s64 = ctx.r4.s64 + -27439;
	// stw r31,5120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5120, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r31,-5329
	ctx.r31.s64 = ctx.r31.s64 + -5329;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8278ae4c
	if (!ctx.cr6.gt) goto loc_8278AE4C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278AEA0"))) PPC_WEAK_FUNC(sub_8278AEA0);
PPC_FUNC_IMPL(__imp__sub_8278AEA0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x8278AEA8;
	__savegprlr_21(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addic. r24,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r24.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r25,28(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blt 0x8278afb4
	if (ctx.cr0.lt) goto loc_8278AFB4;
	// rlwinm r26,r6,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8278AEC0:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lwzx r8,r26,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lwzx r10,r26,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// lwzx r7,r6,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// beq cr6,0x8278afac
	if (ctx.cr6.eq) goto loc_8278AFAC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r28,r10,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r27,r10,r7
	ctx.r27.s64 = ctx.r7.s64 - ctx.r10.s64;
loc_8278AEF8:
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// addi r31,r8,256
	ctx.r31.s64 = ctx.r8.s64 + 256;
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r30,r7,512
	ctx.r30.s64 = ctx.r7.s64 + 512;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r6,768
	ctx.r29.s64 = ctx.r6.s64 + 768;
	// rotlwi r23,r6,2
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r21,r29,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r22,r7,1280
	ctx.r22.s64 = ctx.r7.s64 + 1280;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r7,r7,1792
	ctx.r7.s64 = ctx.r7.s64 + 1792;
	// addi r6,r6,1280
	ctx.r6.s64 = ctx.r6.s64 + 1280;
	// lwzx r30,r23,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r23,r8,1024
	ctx.r23.s64 = ctx.r8.s64 + 1024;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r30,r23,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r31,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 16;
	// rlwinm r29,r22,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r31,r28,r10
	PPC_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r31.u8);
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r21,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// addi r8,r8,1536
	ctx.r8.s64 = ctx.r8.s64 + 1536;
	// rlwinm r23,r6,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwzx r7,r23,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stbx r7,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8278aef8
	if (!ctx.cr0.eq) goto loc_8278AEF8;
loc_8278AFAC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge 0x8278aec0
	if (!ctx.cr0.lt) goto loc_8278AEC0;
loc_8278AFB4:
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278AFB8"))) PPC_WEAK_FUNC(sub_8278AFB8);
PPC_FUNC_IMPL(__imp__sub_8278AFB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8278AFC0;
	__savegprlr_29(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addic. r29,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r29.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blt 0x8278b04c
	if (ctx.cr0.lt) goto loc_8278B04C;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8278AFD8:
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r31,r8,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x8278b044
	if (ctx.cr6.eq) goto loc_8278B044;
loc_8278AFF8:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// stbx r7,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8278aff8
	if (ctx.cr6.lt) goto loc_8278AFF8;
loc_8278B044:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8278afd8
	if (!ctx.cr0.lt) goto loc_8278AFD8;
loc_8278B04C:
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278B050"))) PPC_WEAK_FUNC(sub_8278B050);
PPC_FUNC_IMPL(__imp__sub_8278B050) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x8278B058;
	__savegprlr_20(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addic. r23,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r23.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r24,28(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blt 0x8278b184
	if (ctx.cr0.lt) goto loc_8278B184;
	// rlwinm r25,r6,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8278B070:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lwzx r10,r25,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// lwzx r8,r25,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// lwzx r7,r7,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r6,r25,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r6.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// beq cr6,0x8278b17c
	if (ctx.cr6.eq) goto loc_8278B17C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r28,r10,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r27,r10,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r26,r10,r7
	ctx.r26.s64 = ctx.r7.s64 - ctx.r10.s64;
loc_8278B0B4:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r6,3(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// subfic r8,r8,255
	ctx.xer.ca = ctx.r8.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r8.s64;
	// lbz r31,2(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r7,r7,255
	ctx.xer.ca = ctx.r7.u32 <= 255;
	ctx.r7.s64 = 255 - ctx.r7.s64;
	// stbx r6,r28,r10
	PPC_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r6.u8);
	// subfic r6,r31,255
	ctx.xer.ca = ctx.r31.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r31.s64;
	// addi r31,r7,256
	ctx.r31.s64 = ctx.r7.s64 + 256;
	// addi r29,r6,512
	ctx.r29.s64 = ctx.r6.s64 + 512;
	// lwzx r30,r30,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r8,768
	ctx.r22.s64 = ctx.r8.s64 + 768;
	// addi r21,r7,1024
	ctx.r21.s64 = ctx.r7.s64 + 1024;
	// addi r20,r7,1536
	ctx.r20.s64 = ctx.r7.s64 + 1536;
	// lwzx r31,r31,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r31,r6,1280
	ctx.r31.s64 = ctx.r6.s64 + 1280;
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// rlwinm r30,r21,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r22,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// addi r29,r8,1280
	ctx.r29.s64 = ctx.r8.s64 + 1280;
	// addi r6,r6,1792
	ctx.r6.s64 = ctx.r6.s64 + 1792;
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r6,r20,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stbx r8,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 16;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stbx r8,r26,r10
	PPC_STORE_U8(ctx.r26.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8278b0b4
	if (!ctx.cr0.eq) goto loc_8278B0B4;
loc_8278B17C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge 0x8278b070
	if (!ctx.cr0.lt) goto loc_8278B070;
loc_8278B184:
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278B188"))) PPC_WEAK_FUNC(sub_8278B188);
PPC_FUNC_IMPL(__imp__sub_8278B188) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addic. r31,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r31.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blt 0x8278b1e0
	if (ctx.cr0.lt) goto loc_8278B1E0;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8278B1A0:
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// beq cr6,0x8278b1d8
	if (ctx.cr6.eq) goto loc_8278B1D8;
loc_8278B1C0:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stbx r6,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8278b1c0
	if (ctx.cr6.lt) goto loc_8278B1C0;
loc_8278B1D8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8278b1a0
	if (!ctx.cr0.lt) goto loc_8278B1A0;
loc_8278B1E0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278B1E8"))) PPC_WEAK_FUNC(sub_8278B1E8);
PPC_FUNC_IMPL(__imp__sub_8278B1E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8278B1F0;
	__savegprlr_29(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r30,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r30.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blt 0x8278b26c
	if (ctx.cr0.lt) goto loc_8278B26C;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8278B208:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8278b25c
	if (!ctx.cr6.gt) goto loc_8278B25C;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_8278B218:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// beq cr6,0x8278b24c
	if (ctx.cr6.eq) goto loc_8278B24C;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_8278B234:
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stbx r29,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8278b234
	if (ctx.cr6.lt) goto loc_8278B234;
loc_8278B24C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8278b218
	if (ctx.cr6.lt) goto loc_8278B218;
loc_8278B25C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bge 0x8278b208
	if (!ctx.cr0.lt) goto loc_8278B208;
loc_8278B26C:
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278B270"))) PPC_WEAK_FUNC(sub_8278B270);
PPC_FUNC_IMPL(__imp__sub_8278B270) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278B2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// addi r8,r9,0
	ctx.r8.s64 = ctx.r9.s64 + 0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8278b320
	if (ctx.cr6.gt) goto loc_8278B320;
	// lis r12,-32135
	ctx.r12.s64 = -2105999360;
	// addi r12,r12,-19748
	ctx.r12.s64 = ctx.r12.s64 + -19748;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8278B2F0;
	case 1:
		goto loc_8278B300;
	case 2:
		goto loc_8278B300;
	case 3:
		goto loc_8278B310;
	case 4:
		goto loc_8278B310;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-19728(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19728);
	// lwz r19,-19712(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19712);
	// lwz r19,-19712(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19712);
	// lwz r19,-19696(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19696);
	// lwz r19,-19696(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19696);
loc_8278B2F0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8278b34c
	if (ctx.cr6.eq) goto loc_8278B34C;
	// b 0x8278b32c
	goto loc_8278B32C;
loc_8278B300:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8278b34c
	if (ctx.cr6.eq) goto loc_8278B34C;
	// b 0x8278b32c
	goto loc_8278B32C;
loc_8278B310:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8278b34c
	if (ctx.cr6.eq) goto loc_8278B34C;
	// b 0x8278b32c
	goto loc_8278B32C;
loc_8278B320:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8278b34c
	if (!ctx.cr6.lt) goto loc_8278B34C;
loc_8278B32C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B34C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8278b5bc
	if (ctx.cr6.gt) goto loc_8278B5BC;
	// lis r12,-32135
	ctx.r12.s64 = -2105999360;
	// addi r12,r12,-19596
	ctx.r12.s64 = ctx.r12.s64 + -19596;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8278B388;
	case 1:
		goto loc_8278B404;
	case 2:
		goto loc_8278B460;
	case 3:
		goto loc_8278B4E0;
	case 4:
		goto loc_8278B53C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-19576(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19576);
	// lwz r19,-19452(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19452);
	// lwz r19,-19360(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19360);
	// lwz r19,-19232(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19232);
	// lwz r19,-19140(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19140);
loc_8278B388:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8278b3b4
	if (ctx.cr6.eq) goto loc_8278B3B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B3B4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8278b3cc
	if (!ctx.cr6.eq) goto loc_8278B3CC;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-20088
	ctx.r10.s64 = ctx.r11.s64 + -20088;
	// b 0x8278b600
	goto loc_8278B600;
loc_8278B3CC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8278b3f0
	if (!ctx.cr6.eq) goto loc_8278B3F0;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// addi r9,r11,-21024
	ctx.r9.s64 = ctx.r11.s64 + -21024;
	// addi r8,r10,-20552
	ctx.r8.s64 = ctx.r10.s64 + -20552;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x8278b604
	goto loc_8278B604;
loc_8278B3F0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8278b43c
	if (!ctx.cr6.eq) goto loc_8278B43C;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-20088
	ctx.r10.s64 = ctx.r11.s64 + -20088;
	// b 0x8278b600
	goto loc_8278B600;
loc_8278B404:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8278b430
	if (ctx.cr6.eq) goto loc_8278B430;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B430:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8278b5f8
	if (ctx.cr6.eq) goto loc_8278B5F8;
loc_8278B43C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8278b604
	goto loc_8278B604;
loc_8278B460:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8278b48c
	if (ctx.cr6.eq) goto loc_8278B48C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B48C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8278b4b4
	if (!ctx.cr6.eq) goto loc_8278B4B4;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// addi r9,r11,-21024
	ctx.r9.s64 = ctx.r11.s64 + -21024;
	// addi r8,r10,-20832
	ctx.r8.s64 = ctx.r10.s64 + -20832;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x8278b604
	goto loc_8278B604;
loc_8278B4B4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8278b5f8
	if (ctx.cr6.eq) goto loc_8278B5F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8278b604
	goto loc_8278B604;
loc_8278B4E0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8278b50c
	if (ctx.cr6.eq) goto loc_8278B50C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B50C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8278b5f8
	if (ctx.cr6.eq) goto loc_8278B5F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8278b604
	goto loc_8278B604;
loc_8278B53C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8278b568
	if (ctx.cr6.eq) goto loc_8278B568;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B568:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8278b590
	if (!ctx.cr6.eq) goto loc_8278B590;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// addi r9,r11,-21024
	ctx.r9.s64 = ctx.r11.s64 + -21024;
	// addi r8,r10,-20400
	ctx.r8.s64 = ctx.r10.s64 + -20400;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x8278b604
	goto loc_8278B604;
loc_8278B590:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8278b5f8
	if (ctx.cr6.eq) goto loc_8278B5F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8278b604
	goto loc_8278B604;
loc_8278B5BC:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8278b5d8
	if (!ctx.cr6.eq) goto loc_8278B5D8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8278b5f8
	if (ctx.cr6.eq) goto loc_8278B5F8;
loc_8278B5D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B5F8:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-19992
	ctx.r10.s64 = ctx.r11.s64 + -19992;
loc_8278B600:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8278B604:
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

__attribute__((alias("__imp__sub_8278B61C"))) PPC_WEAK_FUNC(sub_8278B61C);
PPC_FUNC_IMPL(__imp__sub_8278B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278B620"))) PPC_WEAK_FUNC(sub_8278B620);
PPC_FUNC_IMPL(__imp__sub_8278B620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8278B628;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8278b660
	if (!ctx.cr6.gt) goto loc_8278B660;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8278b660
	if (!ctx.cr6.gt) goto loc_8278B660;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278b660
	if (!ctx.cr6.gt) goto loc_8278B660;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8278b680
	if (ctx.cr6.gt) goto loc_8278B680;
loc_8278B660:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B680:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r11,r11,65500
	ctx.r11.u64 = ctx.r11.u64 | 65500;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8278b6a0
	if (ctx.cr6.gt) goto loc_8278B6A0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8278b6c8
	if (!ctx.cr6.gt) goto loc_8278B6C8;
loc_8278B6A0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,41
	ctx.r9.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8278B6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B6C8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8278b700
	if (ctx.cr6.eq) goto loc_8278B700;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8278B700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B700:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x8278b744
	if (!ctx.cr6.gt) goto loc_8278B744;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,10
	ctx.r9.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8278B744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B744:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r27,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r27.u32);
	// ble cr6,0x8278b7f4
	if (!ctx.cr6.gt) goto loc_8278B7F4;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// li r28,18
	ctx.r28.s64 = 18;
loc_8278B76C:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278b794
	if (!ctx.cr6.gt) goto loc_8278B794;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8278b794
	if (ctx.cr6.gt) goto loc_8278B794;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278b794
	if (!ctx.cr6.gt) goto loc_8278B794;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8278b7b0
	if (!ctx.cr6.gt) goto loc_8278B7B0;
loc_8278B794:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8278B7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B7B0:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8278b7c4
	if (ctx.cr6.gt) goto loc_8278B7C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8278B7C4:
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8278b7dc
	if (ctx.cr6.gt) goto loc_8278B7DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8278B7DC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278b76c
	if (ctx.cr6.lt) goto loc_8278B76C;
loc_8278B7F4:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8278b898
	if (!ctx.cr6.gt) goto loc_8278B898;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// li r28,8
	ctx.r28.s64 = 8;
loc_8278B810:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r29,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r29.u32);
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8277a320
	ctx.lr = 0x8278B830;
	sub_8277A320(ctx, base);
	// stw r3,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r3.u32);
	// lwz r8,-24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r3,r8,r6
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// bl 0x8277a320
	ctx.lr = 0x8278B84C;
	sub_8277A320(ctx, base);
	// stw r3,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r3.u32);
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r5,-28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r3,r5,r3
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// bl 0x8277a320
	ctx.lr = 0x8278B864;
	sub_8277A320(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,-24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x8277a320
	ctx.lr = 0x8278B87C;
	sub_8277A320(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stb r27,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r27.u8);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8278b810
	if (ctx.cr6.lt) goto loc_8278B810;
loc_8278B898:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8277a320
	ctx.lr = 0x8278B8A8;
	sub_8277A320(ctx, base);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278B8B4"))) PPC_WEAK_FUNC(sub_8278B8B4);
PPC_FUNC_IMPL(__imp__sub_8278B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278B8B8"))) PPC_WEAK_FUNC(sub_8278B8B8);
PPC_FUNC_IMPL(__imp__sub_8278B8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c4
	ctx.lr = 0x8278B8C0;
	__savegprlr_15(ctx, base);
	// stwu r1,-2800(r1)
	ea = -2800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r19,19
	ctx.r19.s64 = 19;
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8278b8fc
	if (ctx.cr6.gt) goto loc_8278B8FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r19,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r19.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r15,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r15.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278B8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B8FC:
	// lwz r20,172(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278b954
	if (!ctx.cr6.eq) goto loc_8278B954;
	// lwz r11,24(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bne cr6,0x8278b954
	if (!ctx.cr6.eq) goto loc_8278B954;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stb r15,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r15.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278b98c
	if (!ctx.cr6.gt) goto loc_8278B98C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8278b98c
	if (ctx.cr6.eq) goto loc_8278B98C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278B944:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278b944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278B944;
	// b 0x8278b98c
	goto loc_8278B98C;
loc_8278B954:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stb r18,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r18.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278b98c
	if (!ctx.cr6.gt) goto loc_8278B98C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r10,6,2,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3FFFFFC0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8278b98c
	if (ctx.cr6.eq) goto loc_8278B98C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278B980:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8278b980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278B980;
loc_8278B98C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8278bcc0
	if (ctx.cr6.lt) goto loc_8278BCC0;
	// li r16,26
	ctx.r16.s64 = 26;
	// li r17,4
	ctx.r17.s64 = 4;
	// li r21,17
	ctx.r21.s64 = 17;
loc_8278B9A8:
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8278b9bc
	if (!ctx.cr6.gt) goto loc_8278B9BC;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x8278b9e8
	if (!ctx.cr6.gt) goto loc_8278B9E8;
loc_8278B9BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r16,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r16.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r29.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r17,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r17.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8278B9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278B9E8:
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8278ba7c
	if (!ctx.cr6.gt) goto loc_8278BA7C;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_8278B9F8:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8278ba10
	if (ctx.cr6.lt) goto loc_8278BA10;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278ba34
	if (ctx.cr6.lt) goto loc_8278BA34;
loc_8278BA10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r19.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r22.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278BA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BA34:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8278ba6c
	if (!ctx.cr6.gt) goto loc_8278BA6C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8278ba6c
	if (ctx.cr6.gt) goto loc_8278BA6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r19.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r22.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278BA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BA6C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8278b9f8
	if (ctx.cr6.lt) goto loc_8278B9F8;
loc_8278BA7C:
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// lwz r28,20(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r26,24(r20)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r25,28(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r24,32(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// beq cr6,0x8278bc14
	if (ctx.cr6.eq) goto loc_8278BC14;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8278bad8
	if (ctx.cr6.lt) goto loc_8278BAD8;
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// bge cr6,0x8278bad8
	if (!ctx.cr6.lt) goto loc_8278BAD8;
	// cmpw cr6,r26,r28
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8278bad8
	if (ctx.cr6.lt) goto loc_8278BAD8;
	// cmpwi cr6,r26,64
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 64, ctx.xer);
	// bge cr6,0x8278bad8
	if (!ctx.cr6.lt) goto loc_8278BAD8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x8278bad8
	if (ctx.cr6.lt) goto loc_8278BAD8;
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// bgt cr6,0x8278bad8
	if (ctx.cr6.gt) goto loc_8278BAD8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x8278bad8
	if (ctx.cr6.lt) goto loc_8278BAD8;
	// cmpwi cr6,r24,10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 10, ctx.xer);
	// ble cr6,0x8278bafc
	if (!ctx.cr6.gt) goto loc_8278BAFC;
loc_8278BAD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r21.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r22.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278BAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BAFC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8278bb0c
	if (!ctx.cr6.eq) goto loc_8278BB0C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// b 0x8278bb10
	goto loc_8278BB10;
loc_8278BB0C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
loc_8278BB10:
	// beq cr6,0x8278bb38
	if (ctx.cr6.eq) goto loc_8278BB38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r21.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r22.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278BB38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BB38:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8278bcac
	if (!ctx.cr6.gt) goto loc_8278BCAC;
	// addi r27,r20,4
	ctx.r27.s64 = ctx.r20.s64 + 4;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_8278BB48:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8278bb90
	if (ctx.cr6.eq) goto loc_8278BB90;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8278bb90
	if (!ctx.cr6.lt) goto loc_8278BB90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r21.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r22.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278BB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BB90:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8278bc04
	if (ctx.cr6.gt) goto loc_8278BC04;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r28,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r28.s64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_8278BBA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8278bbbc
	if (!ctx.cr6.lt) goto loc_8278BBBC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// b 0x8278bbcc
	goto loc_8278BBCC;
loc_8278BBBC:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8278bbd0
	if (!ctx.cr6.eq) goto loc_8278BBD0;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
loc_8278BBCC:
	// beq cr6,0x8278bbf4
	if (ctx.cr6.eq) goto loc_8278BBF4;
loc_8278BBD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r21.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r22.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278BBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BBF4:
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8278bba8
	if (!ctx.cr0.eq) goto loc_8278BBA8;
loc_8278BC04:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8278bb48
	if (!ctx.cr0.eq) goto loc_8278BB48;
	// b 0x8278bcac
	goto loc_8278BCAC;
loc_8278BC14:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8278bc34
	if (!ctx.cr6.eq) goto loc_8278BC34;
	// cmpwi cr6,r26,63
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 63, ctx.xer);
	// bne cr6,0x8278bc34
	if (!ctx.cr6.eq) goto loc_8278BC34;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8278bc34
	if (!ctx.cr6.eq) goto loc_8278BC34;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8278bc58
	if (ctx.cr6.eq) goto loc_8278BC58;
loc_8278BC34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r21.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r22.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278BC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BC58:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8278bcac
	if (!ctx.cr6.gt) goto loc_8278BCAC;
	// addi r30,r20,4
	ctx.r30.s64 = ctx.r20.s64 + 4;
loc_8278BC64:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278bc9c
	if (ctx.cr6.eq) goto loc_8278BC9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r19.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r22.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278BC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BC9C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stbx r18,r28,r27
	PPC_STORE_U8(ctx.r28.u32 + ctx.r27.u32, ctx.r18.u8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8278bc64
	if (!ctx.cr0.eq) goto loc_8278BC64;
loc_8278BCAC:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r20,r20,36
	ctx.r20.s64 = ctx.r20.s64 + 36;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8278b9a8
	if (!ctx.cr6.gt) goto loc_8278B9A8;
loc_8278BCC0:
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// beq cr6,0x8278bd28
	if (ctx.cr6.eq) goto loc_8278BD28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278bd70
	if (!ctx.cr6.gt) goto loc_8278BD70;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// li r28,45
	ctx.r28.s64 = 45;
loc_8278BCE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8278bd0c
	if (!ctx.cr6.lt) goto loc_8278BD0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8278BD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BD0C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278bce4
	if (ctx.cr6.lt) goto loc_8278BCE4;
	// addi r1,r1,2800
	ctx.r1.s64 = ctx.r1.s64 + 2800;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
loc_8278BD28:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278bd70
	if (!ctx.cr6.gt) goto loc_8278BD70;
	// li r28,45
	ctx.r28.s64 = 45;
loc_8278BD34:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278bd60
	if (!ctx.cr6.eq) goto loc_8278BD60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8278BD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BD60:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278bd34
	if (ctx.cr6.lt) goto loc_8278BD34;
loc_8278BD70:
	// addi r1,r1,2800
	ctx.r1.s64 = ctx.r1.s64 + 2800;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278BD78"))) PPC_WEAK_FUNC(sub_8278BD78);
PPC_FUNC_IMPL(__imp__sub_8278BD78) {
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
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8278be1c
	if (ctx.cr6.eq) goto loc_8278BE1C;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8278bdfc
	if (!ctx.cr6.gt) goto loc_8278BDFC;
	// addi r9,r31,232
	ctx.r9.s64 = ctx.r31.s64 + 232;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8278BDD0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r7,r7,84
	ctx.r7.s64 = ctx.r7.s64 * 84;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8278bdd0
	if (ctx.cr6.lt) goto loc_8278BDD0;
loc_8278BDFC:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r8.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8278beb4
	goto loc_8278BEB4;
loc_8278BE1C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8278be60
	if (!ctx.cr6.gt) goto loc_8278BE60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8278BE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BE60:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// ble cr6,0x8278bea4
	if (!ctx.cr6.gt) goto loc_8278BEA4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r31,232
	ctx.r10.s64 = ctx.r31.s64 + 232;
loc_8278BE80:
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8278be80
	if (ctx.cr6.lt) goto loc_8278BE80;
loc_8278BEA4:
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r7,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r7.u32);
	// stw r7,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r7.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_8278BEB4:
	// stw r7,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8278BECC"))) PPC_WEAK_FUNC(sub_8278BECC);
PPC_FUNC_IMPL(__imp__sub_8278BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278BED0"))) PPC_WEAK_FUNC(sub_8278BED0);
PPC_FUNC_IMPL(__imp__sub_8278BED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8278BED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8278bf50
	if (!ctx.cr6.eq) goto loc_8278BF50;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r7,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r7.u32);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r6,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r6.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// twllei r9,0
	// divwu r4,r5,r9
	ctx.r4.u32 = ctx.r5.u32 / ctx.r9.u32;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// subf. r8,r3,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8278bf3c
	if (!ctx.cr0.eq) goto loc_8278BF3C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8278BF3C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// b 0x8278c0ac
	goto loc_8278C0AC;
loc_8278BF50:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278bf60
	if (!ctx.cr6.gt) goto loc_8278BF60;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8278bf98
	if (!ctx.cr6.gt) goto loc_8278BF98;
loc_8278BF60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8278BF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278BF98:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8277a320
	ctx.lr = 0x8278BFA8;
	sub_8277A320(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8277a320
	ctx.lr = 0x8278BFBC;
	sub_8277A320(ctx, base);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// ble cr6,0x8278c0ac
	if (!ctx.cr6.gt) goto loc_8278C0AC;
	// addi r28,r31,232
	ctx.r28.s64 = ctx.r31.s64 + 232;
	// li r27,13
	ctx.r27.s64 = 13;
loc_8278BFDC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// divwu r6,r8,r10
	ctx.r6.u32 = ctx.r8.u32 / ctx.r10.u32;
	// mullw r30,r9,r10
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8278c01c
	if (!ctx.cr0.eq) goto loc_8278C01C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8278C01C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// twllei r9,0
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf. r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8278c03c
	if (!ctx.cr0.eq) goto loc_8278C03C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8278C03C:
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x8278c06c
	if (!ctx.cr6.gt) goto loc_8278C06C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8278C06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278C06C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8278c098
	if (!ctx.cr6.gt) goto loc_8278C098;
loc_8278C074:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,65
	ctx.r11.s64 = ctx.r11.s64 + 65;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// bgt 0x8278c074
	if (ctx.cr0.gt) goto loc_8278C074;
loc_8278C098:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8278bfdc
	if (ctx.cr6.lt) goto loc_8278BFDC;
loc_8278C0AC:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278c0d8
	if (!ctx.cr6.gt) goto loc_8278C0D8;
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r8,65535
	ctx.r10.u64 = ctx.r8.u64 | 65535;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8278c0d4
	if (ctx.cr6.lt) goto loc_8278C0D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8278C0D4:
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_8278C0D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278C0E0"))) PPC_WEAK_FUNC(sub_8278C0E0);
PPC_FUNC_IMPL(__imp__sub_8278C0E0) {
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
	// lwz r30,316(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8278c244
	if (ctx.cr6.lt) goto loc_8278C244;
	// beq cr6,0x8278c134
	if (ctx.cr6.eq) goto loc_8278C134;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8278c17c
	if (ctx.cr6.lt) goto loc_8278C17C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278C130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8278c324
	goto loc_8278C324;
loc_8278C134:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278bd78
	ctx.lr = 0x8278C13C;
	sub_8278BD78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278bed0
	ctx.lr = 0x8278C144;
	sub_8278BED0(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278c208
	if (!ctx.cr6.eq) goto loc_8278C208;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278c208
	if (ctx.cr6.eq) goto loc_8278C208;
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278c208
	if (!ctx.cr6.eq) goto loc_8278C208;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
loc_8278C17C:
	// lbz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 178);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278c198
	if (!ctx.cr6.eq) goto loc_8278C198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278bd78
	ctx.lr = 0x8278C190;
	sub_8278BD78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278bed0
	ctx.lr = 0x8278C198;
	sub_8278BED0(ctx, base);
loc_8278C198:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278C1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8278c1e8
	if (!ctx.cr6.eq) goto loc_8278C1E8;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278C1E8:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r9.u8);
	// b 0x8278c324
	goto loc_8278C324;
loc_8278C208:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278C238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r7.u8);
	// b 0x8278c324
	goto loc_8278C324;
loc_8278C244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278bd78
	ctx.lr = 0x8278C24C;
	sub_8278BD78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278bed0
	ctx.lr = 0x8278C254;
	sub_8278BED0(ctx, base);
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278c2a0
	if (!ctx.cr6.eq) goto loc_8278C2A0;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278C288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,324(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8278C2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278C2A0:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lbz r4,178(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 178);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278C2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bgt cr6,0x8278c2e0
	if (ctx.cr6.gt) goto loc_8278C2E0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8278C2E0:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278C30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,178(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 178);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8278c320
	if (!ctx.cr6.eq) goto loc_8278C320;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8278C320:
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
loc_8278C324:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r7.u8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8278c360
	if (ctx.cr6.eq) goto loc_8278C360;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
loc_8278C360:
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

__attribute__((alias("__imp__sub_8278C378"))) PPC_WEAK_FUNC(sub_8278C378);
PPC_FUNC_IMPL(__imp__sub_8278C378) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// lwz r9,332(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8278C3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,332(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8278C3BC;
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

__attribute__((alias("__imp__sub_8278C3D0"))) PPC_WEAK_FUNC(sub_8278C3D0);
PPC_FUNC_IMPL(__imp__sub_8278C3D0) {
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
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r31,316(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8278c438
	if (ctx.cr6.lt) goto loc_8278C438;
	// beq cr6,0x8278c42c
	if (ctx.cr6.eq) goto loc_8278C42C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8278c458
	if (!ctx.cr6.lt) goto loc_8278C458;
	// lbz r11,178(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 178);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278c44c
	if (ctx.cr6.eq) goto loc_8278C44C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8278c44c
	goto loc_8278C44C;
loc_8278C42C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8278c458
	goto loc_8278C458;
loc_8278C438:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lbz r10,178(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 178);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278c458
	if (!ctx.cr6.eq) goto loc_8278C458;
loc_8278C44C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8278C458:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8278C47C"))) PPC_WEAK_FUNC(sub_8278C47C);
PPC_FUNC_IMPL(__imp__sub_8278C47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278C480"))) PPC_WEAK_FUNC(sub_8278C480);
PPC_FUNC_IMPL(__imp__sub_8278C480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8278C488;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278C4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32135
	ctx.r9.s64 = -2105999360;
	// lis r8,-32135
	ctx.r8.s64 = -2105999360;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// lis r7,-32135
	ctx.r7.s64 = -2105999360;
	// addi r6,r9,-16160
	ctx.r6.s64 = ctx.r9.s64 + -16160;
	// addi r5,r8,-15496
	ctx.r5.s64 = ctx.r8.s64 + -15496;
	// addi r4,r7,-15408
	ctx.r4.s64 = ctx.r7.s64 + -15408;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r29.u8);
	// bl 0x8278b620
	ctx.lr = 0x8278C4E8;
	sub_8278B620(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8278c504
	if (ctx.cr6.eq) goto loc_8278C504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278b8b8
	ctx.lr = 0x8278C500;
	sub_8278B8B8(ctx, base);
	// b 0x8278c50c
	goto loc_8278C50C;
loc_8278C504:
	// stb r29,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r29.u8);
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
loc_8278C50C:
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278c51c
	if (ctx.cr6.eq) goto loc_8278C51C;
	// stb r28,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r28.u8);
loc_8278C51C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278c548
	if (ctx.cr6.eq) goto loc_8278C548;
	// lbz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 178);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278c53c
	if (ctx.cr6.eq) goto loc_8278C53C;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// b 0x8278c54c
	goto loc_8278C54C;
loc_8278C53C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x8278c54c
	goto loc_8278C54C;
loc_8278C548:
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_8278C54C:
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lbz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 178);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// beq cr6,0x8278c574
	if (ctx.cr6.eq) goto loc_8278C574;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8278C574:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278C580"))) PPC_WEAK_FUNC(sub_8278C580);
PPC_FUNC_IMPL(__imp__sub_8278C580) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c8
	ctx.lr = 0x8278C588;
	__savegprlr_16(ctx, base);
	// lwz r8,288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r11,r1,-400
	ctx.r11.s64 = ctx.r1.s64 + -400;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// li r19,8
	ctx.r19.s64 = 8;
loc_8278C5A0:
	// lhz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8278c62c
	if (!ctx.cr6.eq) goto loc_8278C62C;
	// lhz r5,32(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278c62c
	if (!ctx.cr6.eq) goto loc_8278C62C;
	// lhz r5,48(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 48);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278c62c
	if (!ctx.cr6.eq) goto loc_8278C62C;
	// lhz r5,64(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278c62c
	if (!ctx.cr6.eq) goto loc_8278C62C;
	// lhz r5,80(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278c62c
	if (!ctx.cr6.eq) goto loc_8278C62C;
	// lhz r5,96(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278c62c
	if (!ctx.cr6.eq) goto loc_8278C62C;
	// lhz r5,112(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 112);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278c62c
	if (!ctx.cr6.eq) goto loc_8278C62C;
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mullw r5,r3,r4
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r4,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r4,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r4.u32);
	// stw r4,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r4.u32);
	// stw r4,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r4.u32);
	// stw r4,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r4.u32);
	// b 0x8278c7b8
	goto loc_8278C7B8;
loc_8278C62C:
	// lhz r5,112(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 112);
	// lhz r4,80(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwz r30,224(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// lhz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 48);
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r28,160(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r26,96(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lhz r30,32(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// lhz r25,96(r9)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r9.u32 + 96);
	// lwz r24,64(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r23,192(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lhz r22,0(r9)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r21,64(r9)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// lwz r20,0(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
	// lwz r18,128(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// mullw r3,r5,r3
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// mullw r31,r29,r28
	ctx.r31.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// mullw r5,r27,r26
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// extsh r28,r30
	ctx.r28.s64 = ctx.r30.s16;
	// extsh r27,r25
	ctx.r27.s64 = ctx.r25.s16;
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r29,r31,r3
	ctx.r29.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mullw r28,r28,r24
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r24.s32);
	// mullw r27,r27,r23
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r23.s32);
	// extsh r25,r21
	ctx.r25.s64 = ctx.r21.s16;
	// extsh r26,r22
	ctx.r26.s64 = ctx.r22.s16;
	// add r24,r29,r30
	ctx.r24.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r22,r27,r28
	ctx.r22.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mullw r26,r26,r20
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r20.s32);
	// mullw r25,r25,r18
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r18.s32);
	// mulli r21,r29,3196
	ctx.r21.s64 = ctx.r29.s64 * 3196;
	// mulli r20,r24,9633
	ctx.r20.s64 = ctx.r24.s64 * 9633;
	// mulli r29,r22,4433
	ctx.r29.s64 = ctx.r22.s64 * 4433;
	// mulli r23,r28,6270
	ctx.r23.s64 = ctx.r28.s64 * 6270;
	// mulli r17,r30,16069
	ctx.r17.s64 = ctx.r30.s64 * 16069;
	// add r18,r25,r26
	ctx.r18.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r28,r4,r3
	ctx.r28.u64 = ctx.r4.u64 + ctx.r3.u64;
	// subf r24,r21,r20
	ctx.r24.s64 = ctx.r20.s64 - ctx.r21.s64;
	// mulli r22,r3,12299
	ctx.r22.s64 = ctx.r3.s64 * 12299;
	// add r3,r23,r29
	ctx.r3.u64 = ctx.r23.u64 + ctx.r29.u64;
	// subf r16,r25,r26
	ctx.r16.s64 = ctx.r26.s64 - ctx.r25.s64;
	// subf r23,r17,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r17.s64;
	// rlwinm r30,r18,13,0,18
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 13) & 0xFFFFE000;
	// mulli r26,r28,-7373
	ctx.r26.s64 = ctx.r28.s64 * -7373;
	// add r20,r22,r24
	ctx.r20.u64 = ctx.r22.u64 + ctx.r24.u64;
	// mulli r27,r27,15137
	ctx.r27.s64 = ctx.r27.s64 * 15137;
	// add r25,r31,r5
	ctx.r25.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mulli r21,r5,25172
	ctx.r21.s64 = ctx.r5.s64 * 25172;
	// add r5,r30,r3
	ctx.r5.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subf r22,r3,r30
	ctx.r22.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subf r28,r27,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r27.s64;
	// add r30,r20,r26
	ctx.r30.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r29,r21,r23
	ctx.r29.u64 = ctx.r21.u64 + ctx.r23.u64;
	// rlwinm r27,r16,13,0,18
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 13) & 0xFFFFE000;
	// mulli r25,r25,-20995
	ctx.r25.s64 = ctx.r25.s64 * -20995;
	// add r21,r5,r30
	ctx.r21.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r30.s64;
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r20,r5,1024
	ctx.r20.s64 = ctx.r5.s64 + 1024;
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mulli r5,r4,2446
	ctx.r5.s64 = ctx.r4.s64 * 2446;
	// addi r21,r21,1024
	ctx.r21.s64 = ctx.r21.s64 + 1024;
	// mulli r4,r31,16819
	ctx.r4.s64 = ctx.r31.s64 * 16819;
	// addi r31,r30,1024
	ctx.r31.s64 = ctx.r30.s64 + 1024;
	// srawi r30,r21,11
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r21.s32 >> 11;
	// srawi r21,r20,11
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FF) != 0);
	ctx.r21.s64 = ctx.r20.s32 >> 11;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// srawi r30,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 11;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// stw r21,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r21.u32);
	// add r4,r4,r24
	ctx.r4.u64 = ctx.r4.u64 + ctx.r24.u64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// subf r31,r28,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r28.s64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// subf r3,r29,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r29.s64;
	// add r30,r31,r4
	ctx.r30.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addi r29,r3,1024
	ctx.r29.s64 = ctx.r3.s64 + 1024;
	// subf r4,r4,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r4.s64;
	// add r3,r22,r5
	ctx.r3.u64 = ctx.r22.u64 + ctx.r5.u64;
	// addi r31,r30,1024
	ctx.r31.s64 = ctx.r30.s64 + 1024;
	// subf r5,r5,r22
	ctx.r5.s64 = ctx.r22.s64 - ctx.r5.s64;
	// addi r4,r4,1024
	ctx.r4.s64 = ctx.r4.s64 + 1024;
	// srawi r30,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 11;
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// srawi r31,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 11;
	// stw r30,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r30.u32);
	// addi r5,r5,1024
	ctx.r5.s64 = ctx.r5.s64 + 1024;
	// srawi r4,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 11;
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// srawi r3,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 11;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
loc_8278C7B8:
	// stw r4,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bgt 0x8278c5a0
	if (ctx.cr0.gt) goto loc_8278C5A0;
	// addi r11,r1,-400
	ctx.r11.s64 = ctx.r1.s64 + -400;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r20,8
	ctx.r20.s64 = 8;
	// lis r9,2
	ctx.r9.s64 = 131072;
loc_8278C7E0:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8278c874
	if (!ctx.cr6.eq) goto loc_8278C874;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8278c874
	if (!ctx.cr6.eq) goto loc_8278C874;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8278c874
	if (!ctx.cr6.eq) goto loc_8278C874;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8278c874
	if (!ctx.cr6.eq) goto loc_8278C874;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8278c874
	if (!ctx.cr6.eq) goto loc_8278C874;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8278c874
	if (!ctx.cr6.eq) goto loc_8278C874;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8278c874
	if (!ctx.cr6.eq) goto loc_8278C874;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// srawi r5,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r4,r5,22
	ctx.r4.u64 = ctx.r5.u32 & 0x3FF;
	// lbzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// stb r3,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// stb r3,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r3.u8);
	// stb r3,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// b 0x8278c9e8
	goto loc_8278C9E8;
loc_8278C874:
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r28,r3,12299
	ctx.r28.s64 = ctx.r3.s64 * 12299;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r24,24(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r23,16(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r31,r4,r3
	ctx.r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r27,r24,r29
	ctx.r27.u64 = ctx.r24.u64 + ctx.r29.u64;
	// add r26,r31,r30
	ctx.r26.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mulli r19,r31,3196
	ctx.r19.s64 = ctx.r31.s64 * 3196;
	// mulli r18,r26,9633
	ctx.r18.s64 = ctx.r26.s64 * 9633;
	// mulli r25,r27,4433
	ctx.r25.s64 = ctx.r27.s64 * 4433;
	// mulli r29,r29,6270
	ctx.r29.s64 = ctx.r29.s64 * 6270;
	// add r27,r22,r23
	ctx.r27.u64 = ctx.r22.u64 + ctx.r23.u64;
	// add r31,r5,r3
	ctx.r31.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// subf r26,r19,r18
	ctx.r26.s64 = ctx.r18.s64 - ctx.r19.s64;
	// rlwinm r29,r27,13,0,18
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 13) & 0xFFFFE000;
	// mulli r27,r31,-7373
	ctx.r27.s64 = ctx.r31.s64 * -7373;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r31,r29,r3
	ctx.r31.u64 = ctx.r29.u64 + ctx.r3.u64;
	// subf r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mulli r30,r30,16069
	ctx.r30.s64 = ctx.r30.s64 * 16069;
	// add r28,r31,r3
	ctx.r28.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r31,r28,r9
	ctx.r31.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// clrlwi r31,r31,22
	ctx.r31.u64 = ctx.r31.u32 & 0x3FF;
	// clrlwi r19,r3,22
	ctx.r19.u64 = ctx.r3.u32 & 0x3FF;
	// add r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mulli r6,r6,25172
	ctx.r6.s64 = ctx.r6.s64 * 25172;
	// lbzx r31,r31,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// mulli r31,r24,15137
	ctx.r31.s64 = ctx.r24.s64 * 15137;
	// subf r24,r23,r22
	ctx.r24.s64 = ctx.r22.s64 - ctx.r23.s64;
	// subf r28,r30,r18
	ctx.r28.s64 = ctx.r18.s64 - ctx.r30.s64;
	// mulli r30,r3,-20995
	ctx.r30.s64 = ctx.r3.s64 * -20995;
	// subf r25,r31,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r31.s64;
	// lbzx r23,r19,r8
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r8.u32);
	// add r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 + ctx.r28.u64;
	// rlwinm r31,r24,13,0,18
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 13) & 0xFFFFE000;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r6,r31,r25
	ctx.r6.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mulli r4,r4,16819
	ctx.r4.s64 = ctx.r4.s64 * 16819;
	// stb r23,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r23.u8);
	// add r24,r6,r3
	ctx.r24.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + ctx.r26.u64;
	// add r26,r24,r9
	ctx.r26.u64 = ctx.r24.u64 + ctx.r9.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// srawi r30,r26,18
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r26.s32 >> 18;
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// clrlwi r3,r30,22
	ctx.r3.u64 = ctx.r30.u32 & 0x3FF;
	// subf r31,r25,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r25.s64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r30,r31,r4
	ctx.r30.u64 = ctx.r31.u64 + ctx.r4.u64;
	// srawi r6,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 18;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// clrlwi r26,r6,22
	ctx.r26.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// mulli r6,r5,2446
	ctx.r6.s64 = ctx.r5.s64 * 2446;
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lbzx r5,r26,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// stb r5,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r5.u8);
	// subf r4,r4,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r4.s64;
	// clrlwi r3,r30,22
	ctx.r3.u64 = ctx.r30.u32 & 0x3FF;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// lbzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// add r5,r29,r6
	ctx.r5.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// subf r3,r6,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r6.s64;
	// clrlwi r6,r4,22
	ctx.r6.u64 = ctx.r4.u32 & 0x3FF;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r6,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 18;
	// srawi r5,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 18;
	// clrlwi r3,r6,22
	ctx.r3.u64 = ctx.r6.u32 & 0x3FF;
	// clrlwi r6,r5,22
	ctx.r6.u64 = ctx.r5.u32 & 0x3FF;
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// lbzx r5,r3,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
loc_8278C9E8:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// bne 0x8278c7e0
	if (!ctx.cr0.eq) goto loc_8278C7E0;
	// b 0x823d9218
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278C9FC"))) PPC_WEAK_FUNC(sub_8278C9FC);
PPC_FUNC_IMPL(__imp__sub_8278C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278CA00"))) PPC_WEAK_FUNC(sub_8278CA00);
PPC_FUNC_IMPL(__imp__sub_8278CA00) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d0
	ctx.lr = 0x8278CA08;
	__savegprlr_18(ctx, base);
	// lwz r8,288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// li r24,8
	ctx.r24.s64 = 8;
loc_8278CA20:
	// lhz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8278caa8
	if (!ctx.cr6.eq) goto loc_8278CAA8;
	// lhz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8278caa8
	if (!ctx.cr6.eq) goto loc_8278CAA8;
	// lhz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8278caa8
	if (!ctx.cr6.eq) goto loc_8278CAA8;
	// lhz r4,64(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8278caa8
	if (!ctx.cr6.eq) goto loc_8278CAA8;
	// lhz r4,80(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8278caa8
	if (!ctx.cr6.eq) goto loc_8278CAA8;
	// lhz r4,96(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8278caa8
	if (!ctx.cr6.eq) goto loc_8278CAA8;
	// lhz r4,112(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8278caa8
	if (!ctx.cr6.eq) goto loc_8278CAA8;
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mullw r5,r3,r4
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r5,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// stw r5,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r5.u32);
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
	// stw r5,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r5.u32);
	// stw r5,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r5.u32);
	// b 0x8278cbd8
	goto loc_8278CBD8;
loc_8278CAA8:
	// lhz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 48);
	// lhz r30,96(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 96);
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// lwz r29,32(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lhz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// extsh r25,r30
	ctx.r25.s64 = ctx.r30.s16;
	// lhz r31,112(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 112);
	// mullw r30,r29,r5
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// lhz r3,80(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// lwz r5,224(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// lwz r26,96(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r23,64(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r22,192(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lhz r21,0(r9)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r20,64(r9)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// lwz r19,0(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r18,128(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// extsh r27,r4
	ctx.r27.s64 = ctx.r4.s16;
	// lwz r4,160(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r29,r31,r5
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r5,r28,r26
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r26.s32);
	// mullw r28,r27,r23
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r23.s32);
	// mullw r27,r25,r22
	ctx.r27.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r22.s32);
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r31,r29,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r29.s64;
	// subf r26,r27,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r25,r31,r3
	ctx.r25.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mulli r26,r26,362
	ctx.r26.s64 = ctx.r26.s64 * 362;
	// mulli r30,r25,473
	ctx.r30.s64 = ctx.r25.s64 * 473;
	// mulli r3,r3,-669
	ctx.r3.s64 = ctx.r3.s64 * -669;
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// subf r29,r5,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r5.s64;
	// srawi r30,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// extsh r25,r21
	ctx.r25.s64 = ctx.r21.s16;
	// extsh r23,r20
	ctx.r23.s64 = ctx.r20.s16;
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r3,r5,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r5.s64;
	// mulli r29,r29,362
	ctx.r29.s64 = ctx.r29.s64 * 362;
	// mullw r27,r23,r18
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r18.s32);
	// mullw r28,r25,r19
	ctx.r28.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r19.s32);
	// mulli r31,r31,277
	ctx.r31.s64 = ctx.r31.s64 * 277;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// srawi r25,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r29.s32 >> 8;
	// add r29,r27,r28
	ctx.r29.u64 = ctx.r27.u64 + ctx.r28.u64;
	// srawi r23,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r31.s32 >> 8;
	// subf r28,r27,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r27.s64;
	// subf r27,r4,r26
	ctx.r27.s64 = ctx.r26.s64 - ctx.r4.s64;
	// subf r31,r3,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r3.s64;
	// subf r25,r30,r23
	ctx.r25.s64 = ctx.r23.s64 - ctx.r30.s64;
	// add r30,r4,r29
	ctx.r30.u64 = ctx.r4.u64 + ctx.r29.u64;
	// subf r26,r4,r29
	ctx.r26.s64 = ctx.r29.s64 - ctx.r4.s64;
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r28,r27,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r27,r5,r30
	ctx.r27.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r5,r5,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r5.s64;
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r5,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r5.u32);
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// add r29,r25,r31
	ctx.r29.u64 = ctx.r25.u64 + ctx.r31.u64;
	// stw r4,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r4.u32);
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// add r4,r29,r26
	ctx.r4.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subf r3,r29,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r29.s64;
	// stw r4,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r4.u32);
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
loc_8278CBD8:
	// stw r5,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt 0x8278ca20
	if (ctx.cr0.gt) goto loc_8278CA20;
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r25,8
	ctx.r25.s64 = 8;
loc_8278CBFC:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8278cc8c
	if (!ctx.cr6.eq) goto loc_8278CC8C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278cc8c
	if (!ctx.cr6.eq) goto loc_8278CC8C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278cc8c
	if (!ctx.cr6.eq) goto loc_8278CC8C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278cc8c
	if (!ctx.cr6.eq) goto loc_8278CC8C;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278cc8c
	if (!ctx.cr6.eq) goto loc_8278CC8C;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278cc8c
	if (!ctx.cr6.eq) goto loc_8278CC8C;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278cc8c
	if (!ctx.cr6.eq) goto loc_8278CC8C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r6,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 5;
	// clrlwi r5,r6,22
	ctx.r5.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// stb r4,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// stb r4,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r4.u8);
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// b 0x8278cdc4
	goto loc_8278CDC4;
loc_8278CC8C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r3,r9,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r9.s64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r31,r5,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r5.s64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r30,r4
	ctx.r9.u64 = ctx.r30.u64 + ctx.r4.u64;
	// subf r27,r30,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r30.s64;
	// add r30,r31,r3
	ctx.r30.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r24,r6,r5
	ctx.r24.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mulli r27,r27,362
	ctx.r27.s64 = ctx.r27.s64 * 362;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r30,r30,473
	ctx.r30.s64 = ctx.r30.s64 * 473;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mulli r23,r3,-669
	ctx.r23.s64 = ctx.r3.s64 * -669;
	// srawi r27,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 8;
	// mulli r24,r24,362
	ctx.r24.s64 = ctx.r24.s64 * 362;
	// srawi r3,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 8;
	// mulli r31,r31,277
	ctx.r31.s64 = ctx.r31.s64 * 277;
	// add r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// srawi r23,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 8;
	// srawi r24,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 8;
	// srawi r22,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r22.s64 = ctx.r31.s32 >> 8;
	// srawi r31,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 5;
	// subf r30,r29,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r29.s64;
	// clrlwi r31,r31,22
	ctx.r31.u64 = ctx.r31.u32 & 0x3FF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r29,r9,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r9.s64;
	// subf r6,r6,r23
	ctx.r6.s64 = ctx.r23.s64 - ctx.r6.s64;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// lbzx r28,r31,r8
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// clrlwi r27,r5,22
	ctx.r27.u64 = ctx.r5.u32 & 0x3FF;
	// add r23,r6,r31
	ctx.r23.u64 = ctx.r6.u64 + ctx.r31.u64;
	// subf r5,r6,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r6.s64;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// subf r3,r3,r22
	ctx.r3.s64 = ctx.r22.s64 - ctx.r3.s64;
	// subf r31,r6,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r6.s64;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// subf r6,r9,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r9.s64;
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r5,r5,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r5.s64;
	// srawi r29,r23,5
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r23.s32 >> 5;
	// add r30,r9,r6
	ctx.r30.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r3,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 5;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// srawi r6,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 5;
	// clrlwi r31,r29,22
	ctx.r31.u64 = ctx.r29.u32 & 0x3FF;
	// clrlwi r3,r3,22
	ctx.r3.u64 = ctx.r3.u32 & 0x3FF;
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// clrlwi r6,r6,22
	ctx.r6.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r30,r27,r8
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r8.u32);
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// stb r30,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r30.u8);
	// lbzx r31,r31,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// stb r31,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r31.u8);
	// lbzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// stb r3,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r3.u8);
	// lbzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// lbzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r6,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// lbzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
loc_8278CDC4:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8278cbfc
	if (!ctx.cr0.eq) goto loc_8278CBFC;
	// b 0x823d9220
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278CDD8"))) PPC_WEAK_FUNC(sub_8278CDD8);
PPC_FUNC_IMPL(__imp__sub_8278CDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8278CDE0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823db9d0
	ctx.lr = 0x8278CDE8;
	sub_823DB9D0(ctx, base);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r9,288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// addi r11,r1,-352
	ctx.r11.s64 = ctx.r1.s64 + -352;
	// lfs f11,-30108(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30108);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// lfs f12,-30112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -30112);
	ctx.f12.f64 = double(temp.f32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f13,-30116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -30116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12512);
	ctx.f0.f64 = double(temp.f32);
loc_8278CE24:
	// lhz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8278cebc
	if (!ctx.cr6.eq) goto loc_8278CEBC;
	// lhz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8278cebc
	if (!ctx.cr6.eq) goto loc_8278CEBC;
	// lhz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8278cebc
	if (!ctx.cr6.eq) goto loc_8278CEBC;
	// lhz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8278cebc
	if (!ctx.cr6.eq) goto loc_8278CEBC;
	// lhz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8278cebc
	if (!ctx.cr6.eq) goto loc_8278CEBC;
	// lhz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8278cebc
	if (!ctx.cr6.eq) goto loc_8278CEBC;
	// lhz r6,112(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8278cebc
	if (!ctx.cr6.eq) goto loc_8278CEBC;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,-368(r1)
	PPC_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// lfd f9,-368(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f6,96(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f6,128(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f6,160(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f6,192(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// stfs f6,224(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// b 0x8278d04c
	goto loc_8278D04C;
loc_8278CEBC:
	// lhz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// lhz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lfs f10,64(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r28,80(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// lhz r30,64(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// lfs f5,192(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// std r6,-376(r1)
	PPC_STORE_U64(ctx.r1.u32 + -376, ctx.r6.u64);
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// lhz r31,32(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// std r6,-384(r1)
	PPC_STORE_U64(ctx.r1.u32 + -384, ctx.r6.u64);
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// lhz r29,48(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// lfd f8,-384(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -384);
	// std r6,-408(r1)
	PPC_STORE_U64(ctx.r1.u32 + -408, ctx.r6.u64);
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// std r4,-424(r1)
	PPC_STORE_U64(ctx.r1.u32 + -424, ctx.r4.u64);
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// std r6,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.r6.u64);
	// lfd f26,-432(r1)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -432);
	// std r30,-400(r1)
	PPC_STORE_U64(ctx.r1.u32 + -400, ctx.r30.u64);
	// lfd f7,-400(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -400);
	// std r4,-416(r1)
	PPC_STORE_U64(ctx.r1.u32 + -416, ctx.r4.u64);
	// lfd f2,-416(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -416);
	// lfd f1,-408(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -408);
	// lhz r27,112(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// lfd f6,-424(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -424);
	// lfd f9,-376(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -376);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f26,f26
	ctx.f26.f64 = double(ctx.f26.s64);
	// extsh r4,r27
	ctx.r4.s64 = ctx.r27.s16;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// std r4,-392(r1)
	PPC_STORE_U64(ctx.r1.u32 + -392, ctx.r4.u64);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// lfd f27,-392(r1)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -392);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// lfs f3,128(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lfs f31,96(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f30,160(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 160);
	ctx.f30.f64 = double(temp.f32);
	// fcfid f27,f27
	ctx.f27.f64 = double(ctx.f27.s64);
	// lfs f29,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// frsp f26,f26
	ctx.f26.f64 = double(float(ctx.f26.f64));
	// lfs f28,224(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 224);
	ctx.f28.f64 = double(temp.f32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f5,f9,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// frsp f27,f27
	ctx.f27.f64 = double(float(ctx.f27.f64));
	// fmuls f10,f26,f10
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// fmuls f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f9,f29,f6
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f6.f64));
	// fmuls f8,f27,f28
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fadds f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fsubs f6,f10,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fadds f5,f3,f4
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fsubs f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fadds f3,f1,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmsubs f1,f6,f0,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f7.f64));
	// fadds f10,f7,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fadds f6,f1,f4
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fsubs f5,f4,f1
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fsubs f4,f9,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f1,f8,f9
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fadds f8,f1,f3
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fsubs f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f9,f8,f10
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f9,f2,f12,f1
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f12.f64 - ctx.f1.f64)));
	// fmsubs f4,f4,f11,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f1.f64));
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f10,224(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// fsubs f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmsubs f1,f3,f0,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 - ctx.f2.f64));
	// fadds f10,f2,f6
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// stfs f9,192(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// fadds f8,f4,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fadds f6,f1,f5
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f5,f5,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f5,160(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// fadds f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f4,128(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// fsubs f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f3,96(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
loc_8278D04C:
	// stfs f6,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8278ce24
	if (ctx.cr0.gt) goto loc_8278CE24;
	// addi r11,r1,-344
	ctx.r11.s64 = ctx.r1.s64 + -344;
	// li r6,8
	ctx.r6.s64 = 8;
loc_8278D06C:
	// lfs f10,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f6,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f8,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f8,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// fsubs f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f10,f4,f7
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fmsubs f1,f6,f0,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fadds f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fsubs f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fadds f31,f8,f6
	ctx.f31.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fnmsubs f1,f7,f12,f10
	ctx.f1.f64 = double(float(-(ctx.f7.f64 * ctx.f12.f64 - ctx.f10.f64)));
	// fmsubs f10,f4,f11,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f10.f64));
	// fctiwz f7,f31
	ctx.f7.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f7,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f7.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// fsubs f4,f1,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fctiwz f1,f6
	ctx.f1.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f1,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f1.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// clrlwi r3,r4,22
	ctx.r3.u64 = ctx.r4.u32 & 0x3FF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// lbzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// fadds f8,f4,f9
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// clrlwi r5,r4,22
	ctx.r5.u64 = ctx.r4.u32 & 0x3FF;
	// fsubs f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmsubs f6,f5,f0,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 - ctx.f4.f64));
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f5.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// fctiwz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f4,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f4.u64);
	// lwz r4,-428(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// fadds f1,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fsubs f9,f2,f6
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// fadds f8,f10,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// lbzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// fctiwz f7,f1
	ctx.f7.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f7,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f7.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// addi r31,r5,4
	ctx.r31.s64 = ctx.r5.s64 + 4;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f6.u64);
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// srawi r3,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 3;
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r3,r3,22
	ctx.r3.u64 = ctx.r3.u32 & 0x3FF;
	// lbzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r4,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r4.u8);
	// lbzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fadds f5,f8,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fsubs f4,f3,f8
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// clrlwi r3,r4,22
	ctx.r3.u64 = ctx.r4.u32 & 0x3FF;
	// lbzx r5,r3,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r5,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r5.u8);
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f3,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f3.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// fctiwz f2,f4
	ctx.f2.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// stfd f2,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f2.u64);
	// clrlwi r5,r3,22
	ctx.r5.u64 = ctx.r3.u32 & 0x3FF;
	// lbzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// lwz r4,-428(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r4,r5,22
	ctx.r4.u64 = ctx.r5.u32 & 0x3FF;
	// lbzx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r3,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// bne 0x8278d06c
	if (!ctx.cr0.eq) goto loc_8278D06C;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823dba1c
	ctx.lr = 0x8278D224;
	__restfpr_26(ctx, base);
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278D228"))) PPC_WEAK_FUNC(sub_8278D228);
PPC_FUNC_IMPL(__imp__sub_8278D228) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x8278D230;
	__savegprlr_20(ctx, base);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r29,8
	ctx.r29.s64 = 8;
	// subf r8,r11,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r11.s64;
	// addi r30,r10,128
	ctx.r30.s64 = ctx.r10.s64 + 128;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8278D250:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x8278d3c0
	if (ctx.cr6.eq) goto loc_8278D3C0;
	// lhz r8,-80(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -80);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8278d2c8
	if (!ctx.cr6.eq) goto loc_8278D2C8;
	// lhz r5,-64(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d2c8
	if (!ctx.cr6.eq) goto loc_8278D2C8;
	// lhz r5,-48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d2c8
	if (!ctx.cr6.eq) goto loc_8278D2C8;
	// lhz r5,-16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d2c8
	if (!ctx.cr6.eq) goto loc_8278D2C8;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d2c8
	if (!ctx.cr6.eq) goto loc_8278D2C8;
	// lhz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d2c8
	if (!ctx.cr6.eq) goto loc_8278D2C8;
	// lhz r8,-96(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -96);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,-32(r9)
	PPC_STORE_U32(ctx.r9.u32 + -32, ctx.r8.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r8,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r8.u32);
	// b 0x8278d3bc
	goto loc_8278D3BC;
loc_8278D2C8:
	// lhz r5,-48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// lhz r4,-16(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwz r28,96(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r3,-64(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -64);
	// mullw r28,r5,r28
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// lhz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r26,160(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lhz r25,-96(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + -96);
	// lwz r24,64(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r23,192(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lhz r22,16(r10)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r20,224(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mullw r27,r27,r8
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// mullw r4,r4,r26
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r26.s32);
	// mulli r8,r28,7373
	ctx.r8.s64 = ctx.r28.s64 * 7373;
	// mulli r5,r27,20995
	ctx.r5.s64 = ctx.r27.s64 * 20995;
	// extsh r26,r25
	ctx.r26.s64 = ctx.r25.s16;
	// mullw r3,r3,r24
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r24.s32);
	// mullw r31,r23,r31
	ctx.r31.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r31.s32);
	// add r23,r5,r8
	ctx.r23.u64 = ctx.r5.u64 + ctx.r8.u64;
	// extsh r25,r22
	ctx.r25.s64 = ctx.r22.s16;
	// mullw r5,r26,r21
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r21.s32);
	// mulli r26,r3,15137
	ctx.r26.s64 = ctx.r3.s64 * 15137;
	// mulli r24,r4,11893
	ctx.r24.s64 = ctx.r4.s64 * 11893;
	// mulli r31,r31,6270
	ctx.r31.s64 = ctx.r31.s64 * 6270;
	// mulli r28,r28,17799
	ctx.r28.s64 = ctx.r28.s64 * 17799;
	// mulli r22,r4,4926
	ctx.r22.s64 = ctx.r4.s64 * 4926;
	// mullw r25,r25,r20
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r20.s32);
	// subf r4,r31,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r31.s64;
	// subf r3,r28,r24
	ctx.r3.s64 = ctx.r24.s64 - ctx.r28.s64;
	// mulli r8,r27,8697
	ctx.r8.s64 = ctx.r27.s64 * 8697;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// subf r31,r22,r23
	ctx.r31.s64 = ctx.r23.s64 - ctx.r22.s64;
	// mulli r28,r25,4176
	ctx.r28.s64 = ctx.r25.s64 * 4176;
	// add r27,r3,r8
	ctx.r27.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mulli r26,r25,1730
	ctx.r26.s64 = ctx.r25.s64 * 1730;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r3,r28,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r5,r26,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r26.s64;
	// add r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// addi r4,r8,2048
	ctx.r4.s64 = ctx.r8.s64 + 2048;
	// addi r3,r3,2048
	ctx.r3.s64 = ctx.r3.s64 + 2048;
	// srawi r8,r31,12
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 12;
	// srawi r4,r4,12
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 12;
	// srawi r3,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 12;
	// stw r8,-32(r9)
	PPC_STORE_U32(ctx.r9.u32 + -32, ctx.r8.u32);
	// addi r5,r5,2048
	ctx.r5.s64 = ctx.r5.s64 + 2048;
	// stw r4,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r4.u32);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// srawi r8,r5,12
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 12;
loc_8278D3BC:
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
loc_8278D3C0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bgt 0x8278d250
	if (ctx.cr0.gt) goto loc_8278D250;
	// addi r11,r1,-240
	ctx.r11.s64 = ctx.r1.s64 + -240;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// lis r4,4
	ctx.r4.s64 = 262144;
loc_8278D3E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8278d45c
	if (!ctx.cr6.eq) goto loc_8278D45C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278d45c
	if (!ctx.cr6.eq) goto loc_8278D45C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278d45c
	if (!ctx.cr6.eq) goto loc_8278D45C;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278d45c
	if (!ctx.cr6.eq) goto loc_8278D45C;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278d45c
	if (!ctx.cr6.eq) goto loc_8278D45C;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278d45c
	if (!ctx.cr6.eq) goto loc_8278D45C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r6,r8,22
	ctx.r6.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// b 0x8278d524
	goto loc_8278D524;
loc_8278D45C:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r8,r3,20995
	ctx.r8.s64 = ctx.r3.s64 * 20995;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r27,20(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,28(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r9,r31,7373
	ctx.r9.s64 = ctx.r31.s64 * 7373;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r8,r6,15137
	ctx.r8.s64 = ctx.r6.s64 * 15137;
	// mulli r5,r5,6270
	ctx.r5.s64 = ctx.r5.s64 * 6270;
	// mulli r24,r27,4926
	ctx.r24.s64 = ctx.r27.s64 * 4926;
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rlwinm r6,r25,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 14) & 0xFFFFC000;
	// subf r8,r24,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r24.s64;
	// mulli r25,r26,4176
	ctx.r25.s64 = ctx.r26.s64 * 4176;
	// mulli r27,r27,11893
	ctx.r27.s64 = ctx.r27.s64 * 11893;
	// mulli r31,r31,17799
	ctx.r31.s64 = ctx.r31.s64 * 17799;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r8,r25,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r25.s64;
	// subf r31,r31,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r31.s64;
	// mulli r3,r3,8697
	ctx.r3.s64 = ctx.r3.s64 * 8697;
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mulli r31,r26,1730
	ctx.r31.s64 = ctx.r26.s64 * 1730;
	// add r27,r25,r4
	ctx.r27.u64 = ctx.r25.u64 + ctx.r4.u64;
	// subf r26,r8,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// srawi r27,r27,19
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 19;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r6,r27,22
	ctx.r6.u64 = ctx.r27.u32 & 0x3FF;
	// add r3,r26,r4
	ctx.r3.u64 = ctx.r26.u64 + ctx.r4.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64;
	// srawi r5,r3,19
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 19;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lbzx r3,r6,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// srawi r8,r8,19
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 19;
	// clrlwi r6,r5,22
	ctx.r6.u64 = ctx.r5.u32 & 0x3FF;
	// srawi r5,r9,19
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 19;
	// clrlwi r9,r8,22
	ctx.r9.u64 = ctx.r8.u32 & 0x3FF;
	// clrlwi r8,r5,22
	ctx.r8.u64 = ctx.r5.u32 & 0x3FF;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbzx r6,r6,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lbzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lbzx r3,r8,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
loc_8278D524:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8278d3e4
	if (!ctx.cr0.eq) goto loc_8278D3E4;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278D538"))) PPC_WEAK_FUNC(sub_8278D538);
PPC_FUNC_IMPL(__imp__sub_8278D538) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x8278D540;
	__savegprlr_25(ctx, base);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r9,r1,-124
	ctx.r9.s64 = ctx.r1.s64 + -124;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r3,6
	ctx.r3.s64 = 6;
	// subf r8,r10,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r10.s64;
	// addi r31,r11,128
	ctx.r31.s64 = ctx.r11.s64 + 128;
	// addi r11,r5,48
	ctx.r11.s64 = ctx.r5.s64 + 48;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8278D560:
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// beq cr6,0x8278d654
	if (ctx.cr6.eq) goto loc_8278D654;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x8278d654
	if (ctx.cr6.eq) goto loc_8278D654;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8278d654
	if (ctx.cr6.eq) goto loc_8278D654;
	// lhz r8,-32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8278d5cc
	if (!ctx.cr6.eq) goto loc_8278D5CC;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d5cc
	if (!ctx.cr6.eq) goto loc_8278D5CC;
	// lhz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d5cc
	if (!ctx.cr6.eq) goto loc_8278D5CC;
	// lhz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d5cc
	if (!ctx.cr6.eq) goto loc_8278D5CC;
	// lhz r8,-48(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -48);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r5.u32);
	// b 0x8278d650
	goto loc_8278D650;
loc_8278D5CC:
	// lhz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// lhz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// lwz r30,160(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r29,224(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r5,r5,r30
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// lwz r30,96(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lhz r27,-48(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + -48);
	// lwz r26,32(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// mulli r4,r4,5906
	ctx.r4.s64 = ctx.r4.s64 * 5906;
	// mulli r5,r5,6967
	ctx.r5.s64 = ctx.r5.s64 * 6967;
	// mullw r30,r30,r29
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r4,r30,10426
	ctx.r4.s64 = ctx.r30.s64 * 10426;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r8,r8,29692
	ctx.r8.s64 = ctx.r8.s64 * 29692;
	// mullw r5,r29,r25
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r5,r5,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// srawi r5,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// srawi r4,r8,13
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 13;
	// stw r4,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r4.u32);
loc_8278D650:
	// stw r5,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r5.u32);
loc_8278D654:
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// beq cr6,0x8278d748
	if (ctx.cr6.eq) goto loc_8278D748;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x8278d748
	if (ctx.cr6.eq) goto loc_8278D748;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8278d748
	if (ctx.cr6.eq) goto loc_8278D748;
	// lhz r8,-30(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -30);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8278d6c0
	if (!ctx.cr6.eq) goto loc_8278D6C0;
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d6c0
	if (!ctx.cr6.eq) goto loc_8278D6C0;
	// lhz r5,34(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d6c0
	if (!ctx.cr6.eq) goto loc_8278D6C0;
	// lhz r5,66(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d6c0
	if (!ctx.cr6.eq) goto loc_8278D6C0;
	// lhz r8,-46(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -46);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r5.u32);
	// b 0x8278d744
	goto loc_8278D744;
loc_8278D6C0:
	// lhz r5,34(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// lhz r4,66(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// lwz r30,164(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r29,228(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// lhz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r5,r5,r30
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// lwz r30,100(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lhz r27,-46(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + -46);
	// lwz r26,36(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// mulli r4,r4,5906
	ctx.r4.s64 = ctx.r4.s64 * 5906;
	// mulli r5,r5,6967
	ctx.r5.s64 = ctx.r5.s64 * 6967;
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r4,r30,10426
	ctx.r4.s64 = ctx.r30.s64 * 10426;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r8,r8,29692
	ctx.r8.s64 = ctx.r8.s64 * 29692;
	// mullw r5,r29,r25
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r5,r5,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// srawi r5,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// srawi r4,r8,13
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 13;
	// stw r4,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r4.u32);
loc_8278D744:
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
loc_8278D748:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8278d838
	if (ctx.cr6.eq) goto loc_8278D838;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8278d838
	if (ctx.cr6.eq) goto loc_8278D838;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8278d838
	if (ctx.cr6.eq) goto loc_8278D838;
	// lhz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -28);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8278d7b0
	if (!ctx.cr6.eq) goto loc_8278D7B0;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d7b0
	if (!ctx.cr6.eq) goto loc_8278D7B0;
	// lhz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d7b0
	if (!ctx.cr6.eq) goto loc_8278D7B0;
	// lhz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d7b0
	if (!ctx.cr6.eq) goto loc_8278D7B0;
	// lhz r8,-44(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -44);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r5.u32);
	// b 0x8278d834
	goto loc_8278D834;
loc_8278D7B0:
	// lhz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// lhz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// lwz r30,168(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r29,232(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// lhz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r5,r5,r30
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// lwz r30,104(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lhz r27,-44(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + -44);
	// lwz r26,40(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// mulli r4,r4,5906
	ctx.r4.s64 = ctx.r4.s64 * 5906;
	// mulli r5,r5,6967
	ctx.r5.s64 = ctx.r5.s64 * 6967;
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r4,r30,10426
	ctx.r4.s64 = ctx.r30.s64 * 10426;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r8,r8,29692
	ctx.r8.s64 = ctx.r8.s64 * 29692;
	// mullw r5,r29,r25
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r5,r5,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// srawi r5,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// srawi r4,r8,13
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 13;
	// stw r4,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r4.u32);
loc_8278D834:
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
loc_8278D838:
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// beq cr6,0x8278d92c
	if (ctx.cr6.eq) goto loc_8278D92C;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x8278d92c
	if (ctx.cr6.eq) goto loc_8278D92C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8278d92c
	if (ctx.cr6.eq) goto loc_8278D92C;
	// lhz r8,-26(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -26);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8278d8a4
	if (!ctx.cr6.eq) goto loc_8278D8A4;
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d8a4
	if (!ctx.cr6.eq) goto loc_8278D8A4;
	// lhz r5,38(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d8a4
	if (!ctx.cr6.eq) goto loc_8278D8A4;
	// lhz r5,70(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 70);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8278d8a4
	if (!ctx.cr6.eq) goto loc_8278D8A4;
	// lhz r8,-42(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -42);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r5.u32);
	// b 0x8278d928
	goto loc_8278D928;
loc_8278D8A4:
	// lhz r5,38(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// lhz r4,70(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 70);
	// lwz r30,172(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwz r29,236(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r5,r5,r30
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// lwz r30,108(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r26,44(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lhz r27,-42(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + -42);
	// lwz r25,12(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// mulli r4,r4,5906
	ctx.r4.s64 = ctx.r4.s64 * 5906;
	// mulli r5,r5,6967
	ctx.r5.s64 = ctx.r5.s64 * 6967;
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// mulli r30,r30,10426
	ctx.r30.s64 = ctx.r30.s64 * 10426;
	// mulli r4,r8,29692
	ctx.r4.s64 = ctx.r8.s64 * 29692;
	// subf r8,r30,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r30.s64;
	// mullw r29,r29,r25
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r5,r29,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// srawi r5,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// srawi r4,r8,13
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 13;
	// stw r4,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r4.u32);
loc_8278D928:
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
loc_8278D92C:
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addic. r8,r3,2
	ctx.xer.ca = ctx.r3.u32 > 4294967293;
	ctx.r8.s64 = ctx.r3.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bgt 0x8278d560
	if (ctx.cr0.gt) goto loc_8278D560;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lwz r10,-124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r5,-100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,-108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r4,-116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	// bne cr6,0x8278d9a0
	if (!ctx.cr6.eq) goto loc_8278D9A0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8278d9a0
	if (!ctx.cr6.eq) goto loc_8278D9A0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278d9a0
	if (!ctx.cr6.eq) goto loc_8278D9A0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8278d9a0
	if (!ctx.cr6.eq) goto loc_8278D9A0;
	// lwz r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// srawi r5,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 5;
	// clrlwi r4,r5,22
	ctx.r4.u64 = ctx.r5.u32 & 0x3FF;
	// lbzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r31.u32);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// b 0x8278d9f4
	goto loc_8278D9F4;
loc_8278D9A0:
	// mulli r10,r10,29692
	ctx.r10.s64 = ctx.r10.s64 * 29692;
	// lwz r3,-128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// mulli r4,r4,10426
	ctx.r4.s64 = ctx.r4.s64 * 10426;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// mulli r9,r9,6967
	ctx.r9.s64 = ctx.r9.s64 * 6967;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r5,r5,5906
	ctx.r5.s64 = ctx.r5.s64 * 5906;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r9,r3,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r5,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 20;
	// srawi r4,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 20;
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// clrlwi r10,r4,22
	ctx.r10.u64 = ctx.r4.u32 & 0x3FF;
	// lbzx r9,r3,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
loc_8278D9F4:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,-92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r6,-68(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,-76(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r5,-84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// bne cr6,0x8278da4c
	if (!ctx.cr6.eq) goto loc_8278DA4C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8278da4c
	if (!ctx.cr6.eq) goto loc_8278DA4C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8278da4c
	if (!ctx.cr6.eq) goto loc_8278DA4C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8278da4c
	if (!ctx.cr6.eq) goto loc_8278DA4C;
	// lwz r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,22
	ctx.r7.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8278DA4C:
	// mulli r10,r10,29692
	ctx.r10.s64 = ctx.r10.s64 * 29692;
	// lwz r7,-96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// mulli r9,r9,6967
	ctx.r9.s64 = ctx.r9.s64 * 6967;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r3,r6,5906
	ctx.r3.s64 = ctx.r6.s64 * 5906;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mulli r6,r5,10426
	ctx.r6.s64 = ctx.r5.s64 * 10426;
	// rlwinm r9,r7,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF8000;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r9,r3,20
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 20;
	// srawi r8,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 20;
	// clrlwi r7,r9,22
	ctx.r7.u64 = ctx.r9.u32 & 0x3FF;
	// clrlwi r6,r8,22
	ctx.r6.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lbzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278DAA4"))) PPC_WEAK_FUNC(sub_8278DAA4);
PPC_FUNC_IMPL(__imp__sub_8278DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278DAA8"))) PPC_WEAK_FUNC(sub_8278DAA8);
PPC_FUNC_IMPL(__imp__sub_8278DAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r5,r8
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// clrlwi r11,r3,22
	ctx.r11.u64 = ctx.r3.u32 & 0x3FF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// stbx r10,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278DAE0"))) PPC_WEAK_FUNC(sub_8278DAE0);
PPC_FUNC_IMPL(__imp__sub_8278DAE0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x8278DAE8;
	__savegprlr_20(ctx, base);
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_8278DAF0:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r7,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r7.s64;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r7,r31,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r31.s64;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// subf r9,r30,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r28,r7,r8
	ctx.r28.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r25,r28,r29
	ctx.r25.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r26,r31,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r27,r30,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r30.s64;
	// mulli r24,r25,9633
	ctx.r24.s64 = ctx.r25.s64 * 9633;
	// add r23,r26,r27
	ctx.r23.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mulli r29,r29,16069
	ctx.r29.s64 = ctx.r29.s64 * 16069;
	// mulli r28,r28,3196
	ctx.r28.s64 = ctx.r28.s64 * 3196;
	// add r22,r9,r8
	ctx.r22.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r25,r9,2446
	ctx.r25.s64 = ctx.r9.s64 * 2446;
	// subf r29,r29,r24
	ctx.r29.s64 = ctx.r24.s64 - ctx.r29.s64;
	// mulli r9,r23,4433
	ctx.r9.s64 = ctx.r23.s64 * 4433;
	// mulli r27,r27,6270
	ctx.r27.s64 = ctx.r27.s64 * 6270;
	// subf r28,r28,r24
	ctx.r28.s64 = ctx.r24.s64 - ctx.r28.s64;
	// mulli r20,r26,15137
	ctx.r20.s64 = ctx.r26.s64 * 15137;
	// add r21,r7,r10
	ctx.r21.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r26,r10,25172
	ctx.r26.s64 = ctx.r10.s64 * 25172;
	// mulli r24,r7,16819
	ctx.r24.s64 = ctx.r7.s64 * 16819;
	// add r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 + ctx.r9.u64;
	// mulli r7,r22,-7373
	ctx.r7.s64 = ctx.r22.s64 * -7373;
	// subf r9,r20,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r20.s64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r26,r25,r7
	ctx.r26.u64 = ctx.r25.u64 + ctx.r7.u64;
	// mulli r8,r8,12299
	ctx.r8.s64 = ctx.r8.s64 * 12299;
	// addi r27,r27,1024
	ctx.r27.s64 = ctx.r27.s64 + 1024;
	// mulli r10,r21,-20995
	ctx.r10.s64 = ctx.r21.s64 * -20995;
	// addi r25,r9,1024
	ctx.r25.s64 = ctx.r9.s64 + 1024;
	// add r24,r24,r28
	ctx.r24.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r9,r31,r4
	ctx.r9.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// srawi r4,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 11;
	// add r28,r24,r10
	ctx.r28.u64 = ctx.r24.u64 + ctx.r10.u64;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// srawi r31,r25,11
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 11;
	// add r10,r30,r5
	ctx.r10.u64 = ctx.r30.u64 + ctx.r5.u64;
	// addi r5,r26,1024
	ctx.r5.s64 = ctx.r26.s64 + 1024;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r28,1024
	ctx.r7.s64 = ctx.r28.s64 + 1024;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r4,r29,1024
	ctx.r4.s64 = ctx.r29.s64 + 1024;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// addi r9,r8,1024
	ctx.r9.s64 = ctx.r8.s64 + 1024;
	// srawi r8,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 11;
	// srawi r7,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 11;
	// srawi r5,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 11;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bge 0x8278daf0
	if (!ctx.cr0.lt) goto loc_8278DAF0;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
loc_8278DC2C:
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r8,-64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r26,96(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r28,64(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r3,-32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// subf r10,r26,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r26.s64;
	// lwz r4,128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mulli r25,r9,12299
	ctx.r25.s64 = ctx.r9.s64 * 12299;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r8,r28,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r28.s64;
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r3,r26,r27
	ctx.r3.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r26,r29,r30
	ctx.r26.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mulli r24,r30,16069
	ctx.r24.s64 = ctx.r30.s64 * 16069;
	// mulli r23,r26,9633
	ctx.r23.s64 = ctx.r26.s64 * 9633;
	// mulli r29,r29,3196
	ctx.r29.s64 = ctx.r29.s64 * 3196;
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r27,r31,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r31.s64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r30,r8,2446
	ctx.r30.s64 = ctx.r8.s64 * 2446;
	// subf r3,r24,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r24.s64;
	// subf r8,r29,r23
	ctx.r8.s64 = ctx.r23.s64 - ctx.r29.s64;
	// add r24,r10,r7
	ctx.r24.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r22,r28,r27
	ctx.r22.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mulli r23,r28,15137
	ctx.r23.s64 = ctx.r28.s64 * 15137;
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mulli r7,r7,25172
	ctx.r7.s64 = ctx.r7.s64 * 25172;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r26,r27,6270
	ctx.r26.s64 = ctx.r27.s64 * 6270;
	// mulli r31,r22,4433
	ctx.r31.s64 = ctx.r22.s64 * 4433;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// mulli r27,r10,16819
	ctx.r27.s64 = ctx.r10.s64 * 16819;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// mulli r9,r9,-7373
	ctx.r9.s64 = ctx.r9.s64 * -7373;
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
	// add r30,r26,r31
	ctx.r30.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mulli r10,r24,-20995
	ctx.r10.s64 = ctx.r24.s64 * -20995;
	// add r5,r27,r8
	ctx.r5.u64 = ctx.r27.u64 + ctx.r8.u64;
	// srawi r29,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 2;
	// subf r31,r23,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r23.s64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r29,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r29.u32);
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// add r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 + ctx.r8.u64;
	// addi r30,r30,16384
	ctx.r30.s64 = ctx.r30.s64 + 16384;
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r31,r31,16384
	ctx.r31.s64 = ctx.r31.s64 + 16384;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r4,r4,16384
	ctx.r4.s64 = ctx.r4.s64 + 16384;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r3,r30,15
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 15;
	// addi r9,r5,16384
	ctx.r9.s64 = ctx.r5.s64 + 16384;
	// srawi r8,r31,15
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 15;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// srawi r5,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 15;
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// stw r8,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// stw r5,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r5.u32);
	// srawi r3,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 15;
	// srawi r10,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 15;
	// srawi r9,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 15;
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bge 0x8278dc2c
	if (!ctx.cr0.lt) goto loc_8278DC2C;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278DD6C"))) PPC_WEAK_FUNC(sub_8278DD6C);
PPC_FUNC_IMPL(__imp__sub_8278DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278DD70"))) PPC_WEAK_FUNC(sub_8278DD70);
PPC_FUNC_IMPL(__imp__sub_8278DD70) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x8278DD78;
	__savegprlr_14(ctx, base);
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r6,2
	ctx.r6.s64 = 2;
loc_8278DD84:
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r28,r7,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r31,r4
	ctx.r7.u64 = ctx.r31.u64 + ctx.r4.u64;
	// subf r27,r31,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r31.s64;
	// lwz r22,44(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r5,r29,r30
	ctx.r5.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r25,52(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r26,24(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r31,r5,r9
	ctx.r31.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lwz r23,28(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lwz r21,40(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r31,r4,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r4.s64;
	// stw r3,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r20,36(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// lwz r19,56(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r17,72(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// subf r4,r7,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r18,84(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r8,r8,181
	ctx.r8.s64 = ctx.r8.s64 * 181;
	// lwz r16,68(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r15,64(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mulli r4,r4,98
	ctx.r4.s64 = ctx.r4.s64 * 98;
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mulli r5,r5,139
	ctx.r5.s64 = ctx.r5.s64 * 139;
	// mulli r31,r7,334
	ctx.r31.s64 = ctx.r7.s64 * 334;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// mulli r30,r3,181
	ctx.r30.s64 = ctx.r3.s64 * 181;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// srawi r3,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 8;
	// srawi r5,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 8;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r31,r5,r10
	ctx.r31.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// subf r7,r4,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r4.s64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r3,r10,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r10.s64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// add r5,r22,r29
	ctx.r5.u64 = ctx.r22.u64 + ctx.r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// subf r28,r24,r23
	ctx.r28.s64 = ctx.r23.s64 - ctx.r24.s64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// add r7,r25,r26
	ctx.r7.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r30,r20,r21
	ctx.r30.u64 = ctx.r20.u64 + ctx.r21.u64;
	// subf r10,r25,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r25.s64;
	// subf r29,r22,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r22.s64;
	// add r8,r23,r24
	ctx.r8.u64 = ctx.r23.u64 + ctx.r24.u64;
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r14,r29,r28
	ctx.r14.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r9,r30,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r30.s64;
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r28,r21,r20
	ctx.r28.s64 = ctx.r20.s64 - ctx.r21.s64;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// subf r3,r5,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lwz r25,60(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// add r5,r4,r7
	ctx.r5.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r27,76(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r26,80(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r5,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r5.u32);
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lwz r8,-176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// add r5,r18,r19
	ctx.r5.u64 = ctx.r18.u64 + ctx.r19.u64;
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// add r7,r28,r29
	ctx.r7.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r28,-168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// add r4,r16,r17
	ctx.r4.u64 = ctx.r16.u64 + ctx.r17.u64;
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// subf r28,r31,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r31.s64;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// add r29,r25,r26
	ctx.r29.u64 = ctx.r25.u64 + ctx.r26.u64;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r30,r27,r15
	ctx.r30.u64 = ctx.r27.u64 + ctx.r15.u64;
	// std r6,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r6.u64);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r23,88(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mulli r5,r3,181
	ctx.r5.s64 = ctx.r3.s64 * 181;
	// lwz r24,116(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r21,112(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r22,92(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r20,100(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mulli r7,r7,139
	ctx.r7.s64 = ctx.r7.s64 * 139;
	// add r28,r30,r29
	ctx.r28.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r3,r30,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r30.s64;
	// lwz r30,-168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// add r6,r28,r4
	ctx.r6.u64 = ctx.r28.u64 + ctx.r4.u64;
	// subf r28,r28,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r28.s64;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// subf r7,r18,r19
	ctx.r7.s64 = ctx.r19.s64 - ctx.r18.s64;
	// stw r28,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
	// stw r4,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r4.u32);
	// mulli r30,r30,98
	ctx.r30.s64 = ctx.r30.s64 * 98;
	// mulli r19,r14,181
	ctx.r19.s64 = ctx.r14.s64 * 181;
	// lwz r14,-168(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// mulli r31,r31,334
	ctx.r31.s64 = ctx.r31.s64 * 334;
	// srawi r4,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 8;
	// srawi r3,r14,8
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r14.s32 >> 8;
	// lwz r14,-176(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// subf r26,r26,r25
	ctx.r26.s64 = ctx.r25.s64 - ctx.r26.s64;
	// lwz r25,96(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// srawi r28,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r31.s32 >> 8;
	// subf r27,r27,r15
	ctx.r27.s64 = ctx.r15.s64 - ctx.r27.s64;
	// subf r30,r17,r16
	ctx.r30.s64 = ctx.r16.s64 - ctx.r17.s64;
	// srawi r31,r19,8
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r19.s32 >> 8;
	// add r19,r5,r9
	ctx.r19.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r5,r5,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r29,r26,r7
	ctx.r29.u64 = ctx.r26.u64 + ctx.r7.u64;
	// stw r19,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r19.u32);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r19,r29,r30
	ctx.r19.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r5,r28,r4
	ctx.r5.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r28,r27,r26
	ctx.r28.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lwz r26,108(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mulli r18,r14,181
	ctx.r18.s64 = ctx.r14.s64 * 181;
	// mulli r27,r19,98
	ctx.r27.s64 = ctx.r19.s64 * 98;
	// add r19,r9,r5
	ctx.r19.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r31,r31,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// stw r19,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r19.u32);
	// srawi r4,r18,8
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r18.s32 >> 8;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// mulli r30,r30,139
	ctx.r30.s64 = ctx.r30.s64 * 139;
	// mulli r29,r29,334
	ctx.r29.s64 = ctx.r29.s64 * 334;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// add r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// mulli r10,r28,181
	ctx.r10.s64 = ctx.r28.s64 * 181;
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// ld r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// srawi r5,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 8;
	// srawi r19,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r30.s32 >> 8;
	// srawi r18,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r29.s32 >> 8;
	// srawi r31,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 8;
	// add r9,r3,r20
	ctx.r9.u64 = ctx.r3.u64 + ctx.r20.u64;
	// add r29,r25,r26
	ctx.r29.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r10,r23,r24
	ctx.r10.u64 = ctx.r23.u64 + ctx.r24.u64;
	// add r30,r21,r22
	ctx.r30.u64 = ctx.r21.u64 + ctx.r22.u64;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r27,r29,r30
	ctx.r27.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r26,r26,r25
	ctx.r26.s64 = ctx.r25.s64 - ctx.r26.s64;
	// add r25,r27,r28
	ctx.r25.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r28,r27,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r27.s64;
	// stw r25,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r25.u32);
	// subf r10,r24,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r24.s64;
	// subf r3,r3,r20
	ctx.r3.s64 = ctx.r20.s64 - ctx.r3.s64;
	// stw r28,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r28.u32);
	// subf r24,r21,r22
	ctx.r24.s64 = ctx.r22.s64 - ctx.r21.s64;
	// subf r27,r29,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r29.s64;
	// add r29,r3,r26
	ctx.r29.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r28,r24,r10
	ctx.r28.u64 = ctx.r24.u64 + ctx.r10.u64;
	// add r3,r27,r30
	ctx.r3.u64 = ctx.r27.u64 + ctx.r30.u64;
	// subf r30,r28,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r28.s64;
	// mulli r3,r3,181
	ctx.r3.s64 = ctx.r3.s64 * 181;
	// mulli r27,r30,98
	ctx.r27.s64 = ctx.r30.s64 * 98;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// add r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 + ctx.r24.u64;
	// srawi r30,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 8;
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// mulli r25,r29,139
	ctx.r25.s64 = ctx.r29.s64 * 139;
	// srawi r29,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 8;
	// mulli r24,r28,334
	ctx.r24.s64 = ctx.r28.s64 * 334;
	// mulli r27,r26,181
	ctx.r27.s64 = ctx.r26.s64 * 181;
	// add r8,r31,r7
	ctx.r8.u64 = ctx.r31.u64 + ctx.r7.u64;
	// subf r3,r31,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r31.s64;
	// add r4,r19,r5
	ctx.r4.u64 = ctx.r19.u64 + ctx.r5.u64;
	// srawi r28,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r25.s32 >> 8;
	// srawi r31,r24,8
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r24.s32 >> 8;
	// srawi r7,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 8;
	// add r5,r18,r5
	ctx.r5.u64 = ctx.r18.u64 + ctx.r5.u64;
	// add r27,r3,r4
	ctx.r27.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r27,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r27.u32);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r5,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r8,r28,r29
	ctx.r8.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// add r5,r31,r29
	ctx.r5.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// subf r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r7,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r3,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bne 0x8278dd84
	if (!ctx.cr0.eq) goto loc_8278DD84;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
loc_8278E13C:
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r10,-64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r7,128(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r5,-32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// subf r29,r7,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lwz r27,-60(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// add r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r26,164(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r23,100(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// add r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r22,68(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lwz r21,36(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r5,r31,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r31,r4,r3
	ctx.r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwz r25,132(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lwz r24,-28(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r31,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r31.u32);
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lwz r19,-56(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lwz r17,72(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// subf r4,r7,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r18,168(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mulli r8,r8,181
	ctx.r8.s64 = ctx.r8.s64 * 181;
	// lwz r20,40(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r16,8(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r4,r4,98
	ctx.r4.s64 = ctx.r4.s64 * 98;
	// add r3,r28,r29
	ctx.r3.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mulli r5,r5,139
	ctx.r5.s64 = ctx.r5.s64 * 139;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mulli r31,r7,334
	ctx.r31.s64 = ctx.r7.s64 * 334;
	// srawi r7,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 8;
	// mulli r3,r3,181
	ctx.r3.s64 = ctx.r3.s64 * 181;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r10,r31,r7
	ctx.r10.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r31,r5,r4
	ctx.r31.u64 = ctx.r5.u64 + ctx.r4.u64;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r31,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r31.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// subf r4,r10,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r10.s64;
	// stw r9,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// add r7,r26,r27
	ctx.r7.u64 = ctx.r26.u64 + ctx.r27.u64;
	// stw r8,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r8.u32);
	// add r31,r21,r22
	ctx.r31.u64 = ctx.r21.u64 + ctx.r22.u64;
	// stw r4,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r4.u32);
	// add r5,r23,r30
	ctx.r5.u64 = ctx.r23.u64 + ctx.r30.u64;
	// subf r29,r25,r24
	ctx.r29.s64 = ctx.r24.s64 - ctx.r25.s64;
	// subf r10,r26,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r26.s64;
	// add r8,r24,r25
	ctx.r8.u64 = ctx.r24.u64 + ctx.r25.u64;
	// subf r30,r23,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r23.s64;
	// subf r9,r31,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r31.s64;
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r3,r29,r10
	ctx.r3.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r15,r30,r29
	ctx.r15.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r27,r22,r21
	ctx.r27.s64 = ctx.r21.s64 - ctx.r22.s64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// subf r25,r5,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r5.s64;
	// lwz r29,104(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// add r14,r4,r7
	ctx.r14.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r28,136(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lwz r26,-24(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// add r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 + ctx.r8.u64;
	// stw r14,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r14.u32);
	// add r4,r18,r19
	ctx.r4.u64 = ctx.r18.u64 + ctx.r19.u64;
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// add r31,r20,r17
	ctx.r31.u64 = ctx.r20.u64 + ctx.r17.u64;
	// stw r8,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// add r8,r29,r16
	ctx.r8.u64 = ctx.r29.u64 + ctx.r16.u64;
	// lwz r21,-52(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + -52);
	// subf r7,r31,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r31.s64;
	// lwz r23,12(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwz r20,172(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// subf r29,r8,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r22,-20(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// add r30,r26,r28
	ctx.r30.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lwz r25,76(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r29.u32);
	// subf r28,r3,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r3.s64;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lwz r27,140(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mulli r28,r28,98
	ctx.r28.s64 = ctx.r28.s64 * 98;
	// lwz r24,44(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r26,108(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mulli r16,r5,139
	ctx.r16.s64 = ctx.r5.s64 * 139;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r14,-168(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// std r6,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// add r31,r8,r30
	ctx.r31.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwz r8,-24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// stw r14,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r14.u32);
	// mulli r3,r3,334
	ctx.r3.s64 = ctx.r3.s64 * 334;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// stw r28,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r28.u32);
	// lwz r14,-176(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// subf r29,r5,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r14,r14,181
	ctx.r14.s64 = ctx.r14.s64 * 181;
	// subf r28,r8,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r8.s64;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r8,r18,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r18.s64;
	// subf r19,r17,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r17.s64;
	// add r18,r31,r4
	ctx.r18.u64 = ctx.r31.u64 + ctx.r4.u64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// srawi r5,r14,8
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r14.s32 >> 8;
	// lwz r14,-160(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// add r31,r19,r28
	ctx.r31.u64 = ctx.r19.u64 + ctx.r28.u64;
	// srawi r4,r14,8
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r14.s32 >> 8;
	// stw r18,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r18.u32);
	// srawi r19,r16,8
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r16.s32 >> 8;
	// mulli r17,r15,181
	ctx.r17.s64 = ctx.r15.s64 * 181;
	// add r16,r5,r9
	ctx.r16.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r5,r5,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r18,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r3.s32 >> 8;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// srawi r3,r17,8
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 8;
	// stw r5,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r5.u32);
	// add r5,r18,r4
	ctx.r5.u64 = ctx.r18.u64 + ctx.r4.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r17,r6,r30
	ctx.r17.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r18,r9,r5
	ctx.r18.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r30,r29,r8
	ctx.r30.u64 = ctx.r29.u64 + ctx.r8.u64;
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r18,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r18.u32);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r10,r19,r4
	ctx.r10.u64 = ctx.r19.u64 + ctx.r4.u64;
	// mulli r4,r17,181
	ctx.r4.s64 = ctx.r17.s64 * 181;
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// subf r19,r30,r31
	ctx.r19.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mulli r5,r19,98
	ctx.r5.s64 = ctx.r19.s64 * 98;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// add r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// mulli r19,r31,139
	ctx.r19.s64 = ctx.r31.s64 * 139;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// mulli r3,r30,334
	ctx.r3.s64 = ctx.r30.s64 * 334;
	// add r31,r27,r22
	ctx.r31.u64 = ctx.r27.u64 + ctx.r22.u64;
	// add r30,r26,r23
	ctx.r30.u64 = ctx.r26.u64 + ctx.r23.u64;
	// add r9,r25,r24
	ctx.r9.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r10,r21,r20
	ctx.r10.u64 = ctx.r21.u64 + ctx.r20.u64;
	// mulli r17,r29,181
	ctx.r17.s64 = ctx.r29.s64 * 181;
	// add r28,r30,r31
	ctx.r28.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r27,r27,r22
	ctx.r27.s64 = ctx.r22.s64 - ctx.r27.s64;
	// subf r26,r26,r23
	ctx.r26.s64 = ctx.r23.s64 - ctx.r26.s64;
	// subf r9,r20,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r20.s64;
	// subf r25,r25,r24
	ctx.r25.s64 = ctx.r24.s64 - ctx.r25.s64;
	// add r24,r28,r29
	ctx.r24.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r23,r28,r29
	ctx.r23.s64 = ctx.r29.s64 - ctx.r28.s64;
	// subf r28,r30,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r30.s64;
	// stw r24,-52(r11)
	PPC_STORE_U32(ctx.r11.u32 + -52, ctx.r24.u32);
	// add r29,r27,r9
	ctx.r29.u64 = ctx.r27.u64 + ctx.r9.u64;
	// stw r23,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r23.u32);
	// add r30,r25,r26
	ctx.r30.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// subf r28,r29,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r29.s64;
	// srawi r18,r19,8
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r19.s32 >> 8;
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// srawi r19,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r19.s64 = ctx.r3.s32 >> 8;
	// mulli r31,r31,181
	ctx.r31.s64 = ctx.r31.s64 * 181;
	// stw r7,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r7.u32);
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// srawi r3,r17,8
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 8;
	// mulli r28,r28,98
	ctx.r28.s64 = ctx.r28.s64 * 98;
	// mulli r26,r30,139
	ctx.r26.s64 = ctx.r30.s64 * 139;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// mulli r29,r29,334
	ctx.r29.s64 = ctx.r29.s64 * 334;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r30,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 8;
	// mulli r27,r27,181
	ctx.r27.s64 = ctx.r27.s64 * 181;
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// add r4,r18,r5
	ctx.r4.u64 = ctx.r18.u64 + ctx.r5.u64;
	// srawi r28,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r26.s32 >> 8;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// srawi r8,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 8;
	// add r5,r19,r5
	ctx.r5.u64 = ctx.r19.u64 + ctx.r5.u64;
	// add r27,r3,r4
	ctx.r27.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r27,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r27.u32);
	// subf r5,r5,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// stw r3,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r3.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r5,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r5.u32);
	// add r7,r28,r30
	ctx.r7.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r5,r29,r30
	ctx.r5.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r3,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r3.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8278e13c
	if (!ctx.cr0.eq) goto loc_8278E13C;
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278E4F8"))) PPC_WEAK_FUNC(sub_8278E4F8);
PPC_FUNC_IMPL(__imp__sub_8278E4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823db9a0
	ctx.lr = 0x8278E508;
	sub_823DB9A0(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f30,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// fadds f10,f13,f5
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fadds f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// lfs f27,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// fadds f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f7,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fadds f28,f30,f7
	ctx.f28.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 - ctx.f7.f64));
	// lfs f29,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
	// fadds f31,f9,f11
	ctx.f31.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f23,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f23.f64 = double(temp.f32);
	// lfs f26,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f25,f27,f29
	ctx.f25.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// fadds f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// lfs f0,32232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32232);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f27,f29
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// lfs f13,-30096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30096);
	ctx.f13.f64 = double(temp.f32);
	// fadds f24,f1,f2
	ctx.f24.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f12,-30100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30100);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// lfs f22,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f20,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f21,f10,f3
	ctx.f21.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f0,-228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// lfs f5,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// lfs f10,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f23,f26
	ctx.f27.f64 = double(float(ctx.f23.f64 + ctx.f26.f64));
	// stfs f13,-232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f11,-30104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f26,f23,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 - ctx.f26.f64));
	// stfs f12,-240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fsubs f23,f31,f28
	ctx.f23.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// stfs f11,-236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// fsubs f30,f4,f24
	ctx.f30.f64 = double(float(ctx.f4.f64 - ctx.f24.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f31,f28,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fadds f8,f8,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f21.f64));
	// fadds f28,f6,f3
	ctx.f28.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f28,0(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f6,f25,f9
	ctx.f6.f64 = double(float(ctx.f25.f64 + ctx.f9.f64));
	// fadds f28,f26,f25
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// fadds f3,f27,f29
	ctx.f3.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// fmuls f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fsubs f25,f2,f1
	ctx.f25.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fadds f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f8,f4,f12,f30
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f4,f24,f11,f30
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 + ctx.f30.f64));
	// fadds f30,f1,f21
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f21.f64));
	// stfs f30,8(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f1,f21,f1
	ctx.f1.f64 = double(float(ctx.f21.f64 - ctx.f1.f64));
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f1,f25,f8
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f8.f64));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f8,f25,f8
	ctx.f8.f64 = double(float(ctx.f25.f64 - ctx.f8.f64));
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f8,f10,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f1,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fadds f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// lfs f24,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f24.f64 = double(temp.f32);
	// lfs f30,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f19,f24,f1
	ctx.f19.f64 = double(float(ctx.f24.f64 - ctx.f1.f64));
	// lfs f10,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f25,f22,f30
	ctx.f25.f64 = double(float(ctx.f22.f64 - ctx.f30.f64));
	// fsubs f21,f10,f20
	ctx.f21.f64 = double(float(ctx.f10.f64 - ctx.f20.f64));
	// lfs f18,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f18.f64 = double(temp.f32);
	// fadds f30,f22,f30
	ctx.f30.f64 = double(float(ctx.f22.f64 + ctx.f30.f64));
	// lfs f22,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f22.f64 = double(temp.f32);
	// fadds f1,f24,f1
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f1.f64));
	// lfs f24,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// fadds f10,f10,f20
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f20.f64));
	// lfs f20,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f20.f64 = double(temp.f32);
	// fadds f7,f7,f26
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// lfs f26,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f26.f64 = double(temp.f32);
	// fadds f16,f2,f4
	ctx.f16.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f16,4(r3)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// stfs f4,28(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f17,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f17.f64 = double(temp.f32);
	// fadds f4,f19,f8
	ctx.f4.f64 = double(float(ctx.f19.f64 + ctx.f8.f64));
	// lfs f15,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f29,f29,f27
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f27.f64));
	// lfs f27,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// fadds f2,f21,f25
	ctx.f2.f64 = double(float(ctx.f21.f64 + ctx.f25.f64));
	// fadds f8,f8,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f21.f64));
	// fsubs f19,f30,f1
	ctx.f19.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// fsubs f21,f10,f5
	ctx.f21.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fsubs f16,f7,f6
	ctx.f16.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// fadds f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f10,f28,f9
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f9.f64));
	// fsubs f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fadds f28,f3,f31
	ctx.f28.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// stfs f28,32(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f30,f4,f2
	ctx.f30.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fadds f29,f29,f23
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f23.f64));
	// fsubs f3,f31,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f28,f21,f19
	ctx.f28.f64 = double(float(ctx.f21.f64 + ctx.f19.f64));
	// fmuls f21,f16,f13
	ctx.f21.f64 = double(float(ctx.f16.f64 * ctx.f13.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f3,f22,f18
	ctx.f3.f64 = double(float(ctx.f22.f64 + ctx.f18.f64));
	// fsubs f31,f22,f18
	ctx.f31.f64 = double(float(ctx.f22.f64 - ctx.f18.f64));
	// fadds f22,f5,f1
	ctx.f22.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f22,64(r3)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fsubs f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f1,80(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fmuls f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f5,f28,f0
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmadds f1,f7,f12,f21
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f21.f64));
	// fmadds f7,f6,f11,f21
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f21.f64));
	// fsubs f22,f25,f8
	ctx.f22.f64 = double(float(ctx.f25.f64 - ctx.f8.f64));
	// fadds f8,f8,f25
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f25.f64));
	// fadds f28,f27,f26
	ctx.f28.f64 = double(float(ctx.f27.f64 + ctx.f26.f64));
	// fmadds f4,f4,f12,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fadds f6,f29,f23
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f23.f64));
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fsubs f6,f23,f29
	ctx.f6.f64 = double(float(ctx.f23.f64 - ctx.f29.f64));
	// stfs f6,56(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fadds f25,f5,f19
	ctx.f25.f64 = double(float(ctx.f5.f64 + ctx.f19.f64));
	// stfs f25,72(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fadds f25,f9,f1
	ctx.f25.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f25,52(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fadds f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f7,60(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f5,f19,f5
	ctx.f5.f64 = double(float(ctx.f19.f64 - ctx.f5.f64));
	// stfs f5,88(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fadds f6,f24,f20
	ctx.f6.f64 = double(float(ctx.f24.f64 + ctx.f20.f64));
	// fsubs f29,f24,f20
	ctx.f29.f64 = double(float(ctx.f24.f64 - ctx.f20.f64));
	// fmadds f2,f2,f11,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f30.f64));
	// fadds f1,f22,f4
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f4.f64));
	// fsubs f11,f27,f26
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f26.f64));
	// stfd f13,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f13.u64);
	// fsubs f9,f15,f17
	ctx.f9.f64 = double(float(ctx.f15.f64 - ctx.f17.f64));
	// stfd f12,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f12.u64);
	// fadds f5,f15,f17
	ctx.f5.f64 = double(float(ctx.f15.f64 + ctx.f17.f64));
	// lfs f10,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f29,f31
	ctx.f27.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// lfs f7,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f25,f6,f28
	ctx.f25.f64 = double(float(ctx.f6.f64 - ctx.f28.f64));
	// lfs f30,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f30.f64 = double(temp.f32);
	// lfs f24,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f24.f64 = double(temp.f32);
	// fadds f21,f10,f30
	ctx.f21.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// lfs f20,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// lfs f18,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f18.f64 = double(temp.f32);
	// fadds f6,f28,f6
	ctx.f6.f64 = double(float(ctx.f28.f64 + ctx.f6.f64));
	// lfs f26,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f26.f64 = double(temp.f32);
	// fadds f16,f18,f7
	ctx.f16.f64 = double(float(ctx.f18.f64 + ctx.f7.f64));
	// lfs f23,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f23.f64 = double(temp.f32);
	// fadds f19,f24,f26
	ctx.f19.f64 = double(float(ctx.f24.f64 + ctx.f26.f64));
	// fadds f29,f11,f29
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// lfs f30,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f30.f64 = double(temp.f32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f13,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// stfs f12,-224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fadds f17,f20,f23
	ctx.f17.f64 = double(float(ctx.f20.f64 + ctx.f23.f64));
	// stfs f1,84(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f7,f18,f7
	ctx.f7.f64 = double(float(ctx.f18.f64 - ctx.f7.f64));
	// stfs f30,-216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f13,-220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fsubs f4,f22,f4
	ctx.f4.f64 = double(float(ctx.f22.f64 - ctx.f4.f64));
	// stfs f4,76(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fsubs f26,f24,f26
	ctx.f26.f64 = double(float(ctx.f24.f64 - ctx.f26.f64));
	// lfs f15,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f15.f64 = double(temp.f32);
	// fadds f1,f16,f21
	ctx.f1.f64 = double(float(ctx.f16.f64 + ctx.f21.f64));
	// lfs f24,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f23,f20,f23
	ctx.f23.f64 = double(float(ctx.f20.f64 - ctx.f23.f64));
	// lfs f9,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fsubs f18,f11,f27
	ctx.f18.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// lfs f14,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f14.f64 = double(temp.f32);
	// fadds f25,f25,f12
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f12.f64));
	// lfd f12,-176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fadds f30,f17,f19
	ctx.f30.f64 = double(float(ctx.f17.f64 + ctx.f19.f64));
	// stfs f9,-208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fadds f4,f8,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f4,68(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fsubs f2,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// stfs f2,92(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fadds f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f8,96(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fsubs f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f6,112(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fsubs f19,f19,f17
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f17.f64));
	// stfs f19,-212(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// lfs f20,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f20.f64 = double(temp.f32);
	// fadds f17,f23,f26
	ctx.f17.f64 = double(float(ctx.f23.f64 + ctx.f26.f64));
	// lfs f28,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f28.f64 = double(temp.f32);
	// fadds f19,f24,f15
	ctx.f19.f64 = double(float(ctx.f24.f64 + ctx.f15.f64));
	// fmuls f22,f18,f13
	ctx.f22.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// lfs f3,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fsubs f2,f1,f30
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// stfs f2,144(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// fadds f5,f30,f1
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// lfs f2,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f2.f64 = double(temp.f32);
	// stfs f5,128(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fadds f9,f14,f9
	ctx.f9.f64 = double(float(ctx.f14.f64 + ctx.f9.f64));
	// fsubs f21,f21,f16
	ctx.f21.f64 = double(float(ctx.f21.f64 - ctx.f16.f64));
	// fsubs f4,f31,f29
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fadds f1,f29,f31
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// fadds f8,f26,f10
	ctx.f8.f64 = double(float(ctx.f26.f64 + ctx.f10.f64));
	// fsubs f6,f24,f15
	ctx.f6.f64 = double(float(ctx.f24.f64 - ctx.f15.f64));
	// fmadds f5,f11,f12,f22
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f22.f64));
	// fadds f12,f25,f2
	ctx.f12.f64 = double(float(ctx.f25.f64 + ctx.f2.f64));
	// stfs f12,104(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fsubs f11,f2,f25
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f25.f64));
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f2,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f2.f64 = double(temp.f32);
	// fadds f31,f3,f20
	ctx.f31.f64 = double(float(ctx.f3.f64 + ctx.f20.f64));
	// fadds f11,f2,f28
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f28.f64));
	// lfs f30,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f30.f64 = double(temp.f32);
	// fadds f7,f7,f23
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f23.f64));
	// lfs f16,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f16.f64 = double(temp.f32);
	// fadds f26,f4,f5
	ctx.f26.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f18,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f5,108(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fsubs f4,f2,f28
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f28.f64));
	// lfs f28,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f30,f27,f30,f22
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f30.f64 + ctx.f22.f64));
	// lfs f27,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f28,f14,f28
	ctx.f28.f64 = double(float(ctx.f14.f64 - ctx.f28.f64));
	// lfs f2,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f29,f19,f9
	ctx.f29.f64 = double(float(ctx.f19.f64 - ctx.f9.f64));
	// stfs f26,116(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fsubs f3,f3,f20
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f20.f64));
	// lfs f20,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f20.f64 = double(temp.f32);
	// fadds f27,f27,f21
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f21.f64));
	// lfs f26,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f24,f11,f31
	ctx.f24.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// lfs f25,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f22,f7,f8
	ctx.f22.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f23,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f12,f17,f0
	ctx.f12.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// lfs f15,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f15.f64 = double(temp.f32);
	// fadds f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f11.f64));
	// fadds f14,f6,f4
	ctx.f14.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f9,f9,f19
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f19.f64));
	// lfs f19,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f19.f64 = double(temp.f32);
	// fadds f6,f28,f6
	ctx.f6.f64 = double(float(ctx.f28.f64 + ctx.f6.f64));
	// fadds f5,f16,f18
	ctx.f5.f64 = double(float(ctx.f16.f64 + ctx.f18.f64));
	// fadds f3,f3,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// lfs f28,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// stfs f28,-216(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f29,f29,f24
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f24.f64));
	// lfs f28,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f22,f22,f13
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// lfs f13,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f13.f64 = double(temp.f32);
	// fadds f17,f12,f10
	ctx.f17.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f28,-224(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f12,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f18,f16,f18
	ctx.f18.f64 = double(float(ctx.f16.f64 - ctx.f18.f64));
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// stfd f11,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f11.u64);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f11,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-212(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fadds f28,f20,f23
	ctx.f28.f64 = double(float(ctx.f20.f64 + ctx.f23.f64));
	// fsubs f16,f3,f14
	ctx.f16.f64 = double(float(ctx.f3.f64 - ctx.f14.f64));
	// lfs f11,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fadds f11,f25,f26
	ctx.f11.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f11,-208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmadds f7,f7,f2,f22
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f22.f64));
	// lfs f11,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// fadds f29,f1,f30
	ctx.f29.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// stfs f29,100(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// stfs f1,124(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// fadds f1,f27,f21
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f21.f64));
	// stfs f1,136(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// fsubs f1,f21,f27
	ctx.f1.f64 = double(float(ctx.f21.f64 - ctx.f27.f64));
	// stfs f1,152(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// fadds f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// stfs f1,160(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// fsubs f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stfs f9,176(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fsubs f23,f20,f23
	ctx.f23.f64 = double(float(ctx.f20.f64 - ctx.f23.f64));
	// fmadds f2,f8,f13,f22
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f22.f64));
	// fadds f20,f19,f15
	ctx.f20.f64 = double(float(ctx.f19.f64 + ctx.f15.f64));
	// fadds f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f9,148(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// fsubs f8,f25,f26
	ctx.f8.f64 = double(float(ctx.f25.f64 - ctx.f26.f64));
	// fmuls f1,f16,f12
	ctx.f1.f64 = double(float(ctx.f16.f64 * ctx.f12.f64));
	// fsubs f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f11,-204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fadds f10,f17,f2
	ctx.f10.f64 = double(float(ctx.f17.f64 + ctx.f2.f64));
	// fsubs f9,f17,f2
	ctx.f9.f64 = double(float(ctx.f17.f64 - ctx.f2.f64));
	// lfd f11,-168(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// stfs f9,156(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fsubs f9,f4,f6
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f10,132(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fadds f10,f6,f4
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f7,140(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// fmadds f4,f3,f11,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fadds f7,f0,f24
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// stfs f7,168(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// fsubs f2,f24,f0
	ctx.f2.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// stfs f2,184(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// fmadds f3,f14,f13,f1
	ctx.f3.f64 = double(float(ctx.f14.f64 * ctx.f13.f64 + ctx.f1.f64));
	// lfs f1,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f19,f15
	ctx.f7.f64 = double(float(ctx.f19.f64 - ctx.f15.f64));
	// lfs f27,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f27.f64 = double(temp.f32);
	// fadds f6,f5,f28
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f28.f64));
	// lfs f24,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f2,f28,f5
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f5.f64));
	// lfs f29,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f29.f64 = double(temp.f32);
	// fadds f5,f20,f1
	ctx.f5.f64 = double(float(ctx.f20.f64 + ctx.f1.f64));
	// lfs f28,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f1,f1,f20
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f20.f64));
	// lfs f21,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f21.f64 = double(temp.f32);
	// fadds f30,f23,f8
	ctx.f30.f64 = double(float(ctx.f23.f64 + ctx.f8.f64));
	// lfs f25,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f25.f64 = double(temp.f32);
	// fadds f31,f18,f23
	ctx.f31.f64 = double(float(ctx.f18.f64 + ctx.f23.f64));
	// lfs f23,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f26,f27,f28
	ctx.f26.f64 = double(float(ctx.f27.f64 - ctx.f28.f64));
	// lfs f0,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f22,f23,f24
	ctx.f22.f64 = double(float(ctx.f23.f64 - ctx.f24.f64));
	// fsubs f17,f21,f25
	ctx.f17.f64 = double(float(ctx.f21.f64 - ctx.f25.f64));
	// fadds f28,f27,f28
	ctx.f28.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fadds f27,f23,f24
	ctx.f27.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// lfs f20,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f20.f64 = double(temp.f32);
	// fadds f25,f21,f25
	ctx.f25.f64 = double(float(ctx.f21.f64 + ctx.f25.f64));
	// fsubs f19,f29,f20
	ctx.f19.f64 = double(float(ctx.f29.f64 - ctx.f20.f64));
	// fadds f29,f29,f20
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f20.f64));
	// fadds f7,f7,f18
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f18.f64));
	// fadds f21,f9,f4
	ctx.f21.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f21,180(r3)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// fsubs f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// stfs f9,172(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// fadds f24,f22,f26
	ctx.f24.f64 = double(float(ctx.f22.f64 + ctx.f26.f64));
	// fadds f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fadds f20,f10,f3
	ctx.f20.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f20,164(r3)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// fsubs f21,f28,f25
	ctx.f21.f64 = double(float(ctx.f28.f64 - ctx.f25.f64));
	// fadds f23,f19,f22
	ctx.f23.f64 = double(float(ctx.f19.f64 + ctx.f22.f64));
	// fadds f22,f17,f19
	ctx.f22.f64 = double(float(ctx.f17.f64 + ctx.f19.f64));
	// fsubs f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f30.f64));
	// fsubs f9,f27,f29
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// fsubs f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f3,188(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// fadds f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f10,192(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// fsubs f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f6,208(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f2,f31,f8
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// fsubs f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fmuls f3,f23,f0
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// fsubs f10,f22,f24
	ctx.f10.f64 = double(float(ctx.f22.f64 - ctx.f24.f64));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fadds f9,f9,f21
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f21.f64));
	// fadds f6,f29,f27
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// fadds f31,f25,f28
	ctx.f31.f64 = double(float(ctx.f25.f64 + ctx.f28.f64));
	// fadds f29,f3,f26
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f26.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fsubs f10,f26,f3
	ctx.f10.f64 = double(float(ctx.f26.f64 - ctx.f3.f64));
	// fadds f3,f5,f1
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f3,200(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// fmadds f7,f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fsubs f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f1,216(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// fmadds f4,f30,f13,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fadds f9,f6,f31
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fmadds f1,f24,f13,f12
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f9,224(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// fmadds f5,f22,f11,f12
	ctx.f5.f64 = double(float(ctx.f22.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f15,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f15.f64 = double(temp.f32);
	// fadds f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// fsubs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// fsubs f6,f31,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// stfs f6,240(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// fadds f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f11,196(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// fsubs f9,f2,f4
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// stfs f9,220(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// fadds f8,f3,f21
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f21.f64));
	// stfs f8,232(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// fsubs f7,f21,f3
	ctx.f7.f64 = double(float(ctx.f21.f64 - ctx.f3.f64));
	// stfs f7,248(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// fmr f30,f20
	ctx.f30.f64 = ctx.f20.f64;
	// fadds f4,f29,f1
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// stfs f4,228(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// fadds f6,f10,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f6,244(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// fsubs f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f2,236(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// fsubs f3,f29,f1
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// stfs f3,252(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f26,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f26.f64 = double(temp.f32);
	// lfs f12,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f22,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f22.f64 = double(temp.f32);
	// fadds f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// lfs f20,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f10,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f5,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// fadds f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f18,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f13,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f27,f12,f31
	ctx.f27.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// lfs f17,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f17.f64 = double(temp.f32);
	// fadds f19,f1,f11
	ctx.f19.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f25,f28,f30
	ctx.f25.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fadds f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fadds f29,f2,f10
	ctx.f29.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fsubs f24,f8,f6
	ctx.f24.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f21,f3,f4
	ctx.f21.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fadds f23,f26,f5
	ctx.f23.f64 = double(float(ctx.f26.f64 + ctx.f5.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f7,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fadds f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f6,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// lfs f31,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f31.f64 = double(temp.f32);
	// fadds f16,f25,f27
	ctx.f16.f64 = double(float(ctx.f25.f64 + ctx.f27.f64));
	// fsubs f30,f28,f30
	ctx.f30.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// lfs f28,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f24,f24,f21
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f21.f64));
	// fadds f14,f23,f29
	ctx.f14.f64 = double(float(ctx.f23.f64 + ctx.f29.f64));
	// fsubs f5,f26,f5
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f5.f64));
	// fsubs f1,f9,f19
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f19.f64));
	// fsubs f27,f27,f25
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f25.f64));
	// fadds f26,f8,f4
	ctx.f26.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f26,0(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f8,128(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fmuls f8,f24,f0
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fadds f4,f16,f14
	ctx.f4.f64 = double(float(ctx.f16.f64 + ctx.f14.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f29,f29,f23
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f23.f64));
	// stfs f29,-204(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fsubs f4,f14,f16
	ctx.f4.f64 = double(float(ctx.f14.f64 - ctx.f16.f64));
	// stfs f4,132(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f14,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f14.f64 = double(temp.f32);
	// fadds f24,f2,f11
	ctx.f24.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f14,-216(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fsubs f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// lfs f16,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f16.f64 = double(temp.f32);
	// fadds f26,f18,f6
	ctx.f26.f64 = double(float(ctx.f18.f64 + ctx.f6.f64));
	// fadds f4,f20,f22
	ctx.f4.f64 = double(float(ctx.f20.f64 + ctx.f22.f64));
	// fadds f2,f12,f10
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f23,f8,f21
	ctx.f23.f64 = double(float(ctx.f8.f64 + ctx.f21.f64));
	// stfs f23,64(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fsubs f8,f21,f8
	ctx.f8.f64 = double(float(ctx.f21.f64 - ctx.f8.f64));
	// stfs f8,192(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// fadds f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// lfs f21,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f21.f64 = double(temp.f32);
	// fadds f25,f30,f12
	ctx.f25.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// fadds f8,f7,f17
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f17.f64));
	// fadds f12,f3,f31
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fmadds f9,f9,f15,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f15.f64 + ctx.f1.f64));
	// fsubs f23,f20,f22
	ctx.f23.f64 = double(float(ctx.f20.f64 - ctx.f22.f64));
	// lfs f20,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f1,f19,f28,f1
	ctx.f1.f64 = double(float(ctx.f19.f64 * ctx.f28.f64 + ctx.f1.f64));
	// lfs f19,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f19.f64 = double(temp.f32);
	// fadds f22,f26,f4
	ctx.f22.f64 = double(float(ctx.f26.f64 + ctx.f4.f64));
	// stfs f22,-208(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fsubs f6,f18,f6
	ctx.f6.f64 = double(float(ctx.f18.f64 - ctx.f6.f64));
	// lfs f18,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f4,f4,f26
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f26.f64));
	// lfs f26,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f28,f5,f2
	ctx.f28.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fsubs f3,f3,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// lfs f31,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f7,f7,f17
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f17.f64));
	// lfs f17,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f22,f12,f8
	ctx.f22.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f22,-224(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f30,f27,f29
	ctx.f30.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// lfs f27,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fmr f29,f15
	ctx.f29.f64 = ctx.f15.f64;
	// fadds f14,f19,f20
	ctx.f14.f64 = double(float(ctx.f19.f64 + ctx.f20.f64));
	// fadds f15,f27,f21
	ctx.f15.f64 = double(float(ctx.f27.f64 + ctx.f21.f64));
	// fmuls f8,f28,f13
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f6,f23
	ctx.f28.f64 = double(float(ctx.f6.f64 + ctx.f23.f64));
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f4,f22
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f22.f64));
	// lfs f22,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f22.f64 = double(temp.f32);
	// fadds f23,f23,f3
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f3.f64));
	// stfs f22,-220(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fadds f22,f25,f10
	ctx.f22.f64 = double(float(ctx.f25.f64 + ctx.f10.f64));
	// stfs f6,-212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fsubs f10,f10,f25
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f25.f64));
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fadds f25,f13,f18
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f18.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fsubs f13,f13,f18
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f18.f64));
	// fmadds f2,f2,f31,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmuls f31,f28,f0
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmadds f5,f5,f29,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f8.f64));
	// lfs f29,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f28,f19,f20
	ctx.f28.f64 = double(float(ctx.f19.f64 - ctx.f20.f64));
	// lfs f20,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f17,f26
	ctx.f8.f64 = double(float(ctx.f17.f64 + ctx.f26.f64));
	// fsubs f19,f7,f23
	ctx.f19.f64 = double(float(ctx.f7.f64 - ctx.f23.f64));
	// fadds f18,f11,f9
	ctx.f18.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fsubs f9,f24,f1
	ctx.f9.f64 = double(float(ctx.f24.f64 - ctx.f1.f64));
	// stfs f9,224(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// fadds f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f9,164(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// fsubs f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f18,160(r3)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// fadds f10,f20,f12
	ctx.f10.f64 = double(float(ctx.f20.f64 + ctx.f12.f64));
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f9,f12,f20
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f20.f64));
	// stfs f9,136(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// fsubs f11,f29,f30
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// stfs f11,196(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// fsubs f12,f17,f26
	ctx.f12.f64 = double(float(ctx.f17.f64 - ctx.f26.f64));
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f18,f24,f1
	ctx.f18.f64 = double(float(ctx.f24.f64 + ctx.f1.f64));
	// lfs f24,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f24.f64 = double(temp.f32);
	// fadds f1,f30,f29
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// stfs f1,68(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fsubs f11,f22,f2
	ctx.f11.f64 = double(float(ctx.f22.f64 - ctx.f2.f64));
	// stfs f11,228(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// fsubs f9,f27,f21
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f21.f64));
	// lfs f27,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f30,f19,f0
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// lfs f19,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f19.f64 = double(temp.f32);
	// fadds f1,f22,f2
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f2.f64));
	// lfs f22,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f11,f14,f25
	ctx.f11.f64 = double(float(ctx.f14.f64 - ctx.f25.f64));
	// lfs f29,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// fadds f5,f25,f14
	ctx.f5.f64 = double(float(ctx.f25.f64 + ctx.f14.f64));
	// lfs f25,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f25.f64 = double(temp.f32);
	// fadds f26,f27,f16
	ctx.f26.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// stfs f18,32(r3)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fadds f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f27,f27,f16
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f16.f64));
	// lfs f20,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f20.f64 = double(temp.f32);
	// fadds f21,f6,f22
	ctx.f21.f64 = double(float(ctx.f6.f64 + ctx.f22.f64));
	// lfs f17,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f17.f64 = double(temp.f32);
	// fadds f16,f24,f25
	ctx.f16.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// lfs f14,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f14.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f8,f15
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f15.f64));
	// fsubs f8,f15,f8
	ctx.f8.f64 = double(float(ctx.f15.f64 - ctx.f8.f64));
	// lfs f15,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f15.f64 = double(temp.f32);
	// fadds f18,f29,f19
	ctx.f18.f64 = double(float(ctx.f29.f64 + ctx.f19.f64));
	// stfs f8,-196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fsubs f6,f6,f22
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f22.f64));
	// lfs f22,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f29,f29,f19
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f19.f64));
	// stfs f6,-200(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fsubs f25,f24,f25
	ctx.f25.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// lfs f24,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f24.f64 = double(temp.f32);
	// fadds f28,f28,f9
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f9.f64));
	// lfs f19,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f7,f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f30.f64));
	// lfs f13,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fsubs f13,f21,f16
	ctx.f13.f64 = double(float(ctx.f21.f64 - ctx.f16.f64));
	// stfs f13,-204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fsubs f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fadds f3,f31,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f3.f64));
	// stfs f3,-208(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfd f13,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f13.u64);
	// fmadds f3,f23,f20,f30
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f20.f64 + ctx.f30.f64));
	// stfs f3,-212(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fadds f13,f22,f15
	ctx.f13.f64 = double(float(ctx.f22.f64 + ctx.f15.f64));
	// lfs f3,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// lfs f30,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f22,f22,f15
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f15.f64));
	// lfs f20,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f20.f64 = double(temp.f32);
	// lfs f8,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f31,f12,f28
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fsubs f23,f26,f18
	ctx.f23.f64 = double(float(ctx.f26.f64 - ctx.f18.f64));
	// fadds f6,f27,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 + ctx.f6.f64));
	// fadds f25,f25,f29
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f29.f64));
	// fadds f15,f17,f24
	ctx.f15.f64 = double(float(ctx.f17.f64 + ctx.f24.f64));
	// fadds f29,f29,f27
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lfs f27,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f27.f64 = double(temp.f32);
	// stfs f30,-220(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f20,-204(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fadds f23,f23,f27
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f27.f64));
	// stfs f15,-216(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f15,f3,f19
	ctx.f15.f64 = double(float(ctx.f3.f64 + ctx.f19.f64));
	// stfs f27,-192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fsubs f3,f3,f19
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f19.f64));
	// lfs f27,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f19,f25,f6
	ctx.f19.f64 = double(float(ctx.f25.f64 - ctx.f6.f64));
	// stfs f25,-224(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fadds f25,f4,f27
	ctx.f25.f64 = double(float(ctx.f4.f64 + ctx.f27.f64));
	// stfs f6,-188(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fsubs f4,f27,f4
	ctx.f4.f64 = double(float(ctx.f27.f64 - ctx.f4.f64));
	// lfs f6,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f6.f64 = double(temp.f32);
	// fadds f27,f5,f2
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f30,f20,f30
	ctx.f30.f64 = double(float(ctx.f20.f64 + ctx.f30.f64));
	// stfs f13,-208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// lfs f20,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// stfs f2,140(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// fadds f2,f6,f20
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f20.f64));
	// stfs f4,200(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// fsubs f4,f1,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// stfs f2,40(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmadds f2,f28,f8,f31
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f4,104(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fsubs f8,f17,f24
	ctx.f8.f64 = double(float(ctx.f17.f64 - ctx.f24.f64));
	// fmadds f4,f12,f14,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f14.f64 + ctx.f31.f64));
	// stfs f25,72(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fsubs f12,f15,f13
	ctx.f12.f64 = double(float(ctx.f15.f64 - ctx.f13.f64));
	// lfd f13,-168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fadds f5,f1,f7
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// lfs f0,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f0.f64 = double(temp.f32);
	// fadds f7,f18,f26
	ctx.f7.f64 = double(float(ctx.f18.f64 + ctx.f26.f64));
	// stfs f27,12(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f26,f19,f13
	ctx.f26.f64 = double(float(ctx.f19.f64 * ctx.f13.f64));
	// lfs f18,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f18.f64 = double(temp.f32);
	// fadds f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f5,168(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f25,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f24,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f25,f24,f25
	ctx.f25.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// stfd f13,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f13.u64);
	// fmr f24,f14
	ctx.f24.f64 = ctx.f14.f64;
	// lfs f14,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f29,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f29.f64 = double(temp.f32);
	// fadds f31,f22,f3
	ctx.f31.f64 = double(float(ctx.f22.f64 + ctx.f3.f64));
	// lfs f19,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f27,f23,f0
	ctx.f27.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// lfs f13,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f29,f30
	ctx.f28.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f23,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f23.f64 = double(temp.f32);
	// fadds f5,f16,f21
	ctx.f5.f64 = double(float(ctx.f16.f64 + ctx.f21.f64));
	// fadds f23,f23,f15
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f15.f64));
	// lfs f16,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f16.f64 = double(temp.f32);
	// fadds f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// stfs f23,-204(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// stfs f30,-208(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fsubs f6,f6,f20
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f20.f64));
	// lfs f30,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// fadds f25,f25,f22
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f22.f64));
	// fmadds f24,f19,f24,f26
	ctx.f24.f64 = double(float(ctx.f19.f64 * ctx.f24.f64 + ctx.f26.f64));
	// lfs f19,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f19.f64 = double(temp.f32);
	// fadds f15,f18,f19
	ctx.f15.f64 = double(float(ctx.f18.f64 + ctx.f19.f64));
	// lfs f23,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f23.f64 = double(temp.f32);
	// lfs f20,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f19,f18,f19
	ctx.f19.f64 = double(float(ctx.f18.f64 - ctx.f19.f64));
	// fadds f18,f14,f16
	ctx.f18.f64 = double(float(ctx.f14.f64 + ctx.f16.f64));
	// lfs f29,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f29.f64 = double(temp.f32);
	// lfs f22,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f22.f64 = double(temp.f32);
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fsubs f21,f23,f11
	ctx.f21.f64 = double(float(ctx.f23.f64 - ctx.f11.f64));
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fadds f17,f30,f20
	ctx.f17.f64 = double(float(ctx.f30.f64 + ctx.f20.f64));
	// fsubs f16,f14,f16
	ctx.f16.f64 = double(float(ctx.f14.f64 - ctx.f16.f64));
	// stfs f17,-200(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fadds f17,f22,f29
	ctx.f17.f64 = double(float(ctx.f22.f64 + ctx.f29.f64));
	// fsubs f29,f22,f29
	ctx.f29.f64 = double(float(ctx.f22.f64 - ctx.f29.f64));
	// lfs f22,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f22.f64 = double(temp.f32);
	// stfs f17,-212(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f22,-224(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fsubs f30,f30,f20
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f20.f64));
	// lfs f22,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f22.f64 = double(temp.f32);
	// fadds f11,f11,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f23.f64));
	// stfs f29,-216(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fadds f29,f9,f22
	ctx.f29.f64 = double(float(ctx.f9.f64 + ctx.f22.f64));
	// stfs f16,-196(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fsubs f9,f22,f9
	ctx.f9.f64 = double(float(ctx.f22.f64 - ctx.f9.f64));
	// lfs f22,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f22.f64 = double(temp.f32);
	// lfs f16,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f16.f64 = double(temp.f32);
	// stfs f22,-220(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// stfs f16,-184(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fadds f16,f10,f4
	ctx.f16.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f6,232(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// fsubs f4,f10,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// lfs f6,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f6.f64 = double(temp.f32);
	// stfs f3,-176(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fsubs f3,f25,f3
	ctx.f3.f64 = double(float(ctx.f25.f64 - ctx.f3.f64));
	// stfs f25,-204(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fadds f25,f1,f2
	ctx.f25.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// stfs f9,204(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// fadds f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fsubs f9,f5,f7
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f7,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f1.f64 = double(temp.f32);
	// fadds f5,f27,f7
	ctx.f5.f64 = double(float(ctx.f27.f64 + ctx.f7.f64));
	// stfs f4,108(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fsubs f4,f7,f27
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f27.f64));
	// stfs f11,-188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fadds f7,f21,f24
	ctx.f7.f64 = double(float(ctx.f21.f64 + ctx.f24.f64));
	// lfs f11,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f27,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f27.f64 = double(temp.f32);
	// stfs f9,144(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// fmadds f9,f1,f13,f26
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f26.f64));
	// fsubs f26,f11,f27
	ctx.f26.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// stfs f5,80(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f27,f11
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f11.f64));
	// lfs f12,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f31,f8
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// stfs f2,236(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// fadds f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f29,76(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fadds f29,f12,f19
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f19.f64));
	// stfs f4,208(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// fsubs f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fadds f23,f11,f12
	ctx.f23.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f25,44(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f22,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f31,f15,f18
	ctx.f31.f64 = double(float(ctx.f15.f64 - ctx.f18.f64));
	// lfs f12,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f12.f64 = double(temp.f32);
	// fadds f25,f18,f15
	ctx.f25.f64 = double(float(ctx.f18.f64 + ctx.f15.f64));
	// stfs f28,-168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f16,172(r3)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f2,f19,f30
	ctx.f2.f64 = double(float(ctx.f19.f64 + ctx.f30.f64));
	// lfs f14,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f14.f64 = double(temp.f32);
	// fadds f19,f12,f22
	ctx.f19.f64 = double(float(ctx.f12.f64 + ctx.f22.f64));
	// lfs f17,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f22,f12,f22
	ctx.f22.f64 = double(float(ctx.f12.f64 - ctx.f22.f64));
	// lfs f28,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f28.f64 = double(temp.f32);
	// fadds f8,f17,f14
	ctx.f8.f64 = double(float(ctx.f17.f64 + ctx.f14.f64));
	// lfs f20,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f20.f64 = double(temp.f32);
	// lfd f13,-160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfs f18,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f16,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f16.f64 = double(temp.f32);
	// stfs f7,176(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fadds f7,f20,f28
	ctx.f7.f64 = double(float(ctx.f20.f64 + ctx.f28.f64));
	// lfs f11,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f11.f64 = double(temp.f32);
	// fadds f15,f16,f18
	ctx.f15.f64 = double(float(ctx.f16.f64 + ctx.f18.f64));
	// fsubs f17,f17,f14
	ctx.f17.f64 = double(float(ctx.f17.f64 - ctx.f14.f64));
	// stfs f4,-184(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fsubs f28,f20,f28
	ctx.f28.f64 = double(float(ctx.f20.f64 - ctx.f28.f64));
	// lfs f20,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f18,f16,f18
	ctx.f18.f64 = double(float(ctx.f16.f64 - ctx.f18.f64));
	// stfs f26,-192(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fsubs f14,f23,f2
	ctx.f14.f64 = double(float(ctx.f23.f64 - ctx.f2.f64));
	// stfs f1,-188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f13,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f31,f26
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// lfs f12,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f16,f8,f7
	ctx.f16.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f26,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f26.f64 = double(temp.f32);
	// lfs f4,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f1,f19,f15
	ctx.f1.f64 = double(float(ctx.f19.f64 - ctx.f15.f64));
	// fmadds f4,f4,f12,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f26,f26,f13,f3
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fadds f3,f17,f22
	ctx.f3.f64 = double(float(ctx.f17.f64 + ctx.f22.f64));
	// fadds f17,f28,f17
	ctx.f17.f64 = double(float(ctx.f28.f64 + ctx.f17.f64));
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f28,f18,f28
	ctx.f28.f64 = double(float(ctx.f18.f64 + ctx.f28.f64));
	// fmuls f7,f14,f11
	ctx.f7.f64 = double(float(ctx.f14.f64 * ctx.f11.f64));
	// fadds f18,f29,f30
	ctx.f18.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fadds f29,f16,f1
	ctx.f29.f64 = double(float(ctx.f16.f64 + ctx.f1.f64));
	// fsubs f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// stfs f6,148(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// fsubs f24,f21,f24
	ctx.f24.f64 = double(float(ctx.f21.f64 - ctx.f24.f64));
	// stfs f24,112(r3)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f10,f17,f0
	ctx.f10.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// fadds f19,f15,f19
	ctx.f19.f64 = double(float(ctx.f15.f64 + ctx.f19.f64));
	// fsubs f6,f28,f3
	ctx.f6.f64 = double(float(ctx.f28.f64 - ctx.f3.f64));
	// fmadds f24,f23,f13,f7
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f2,f2,f12,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fadds f7,f20,f9
	ctx.f7.f64 = double(float(ctx.f20.f64 + ctx.f9.f64));
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fsubs f9,f20,f9
	ctx.f9.f64 = double(float(ctx.f20.f64 - ctx.f9.f64));
	// stfs f9,240(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f9,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f29,f0
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fadds f0,f5,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// stfs f9,212(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f9,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f9.f64 = double(temp.f32);
	// fadds f5,f25,f27
	ctx.f5.f64 = double(float(ctx.f25.f64 + ctx.f27.f64));
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f5,f9,f26
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f26.f64));
	// fmuls f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f5,116(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fadds f6,f9,f26
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f26.f64));
	// lfs f9,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f9.f64 = double(temp.f32);
	// stfs f6,180(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// fadds f6,f9,f4
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fsubs f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// lfs f4,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f27,f25
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f25.f64));
	// stfs f11,152(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fadds f11,f31,f4
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fsubs f9,f4,f31
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// stfs f5,244(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// fadds f6,f8,f19
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f19.f64));
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fsubs f5,f19,f8
	ctx.f5.f64 = double(float(ctx.f19.f64 - ctx.f8.f64));
	// stfs f9,216(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fadds f4,f30,f24
	ctx.f4.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// stfs f5,156(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fsubs f11,f30,f24
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f24.f64));
	// fadds f9,f18,f2
	ctx.f9.f64 = double(float(ctx.f18.f64 + ctx.f2.f64));
	// stfs f4,184(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// fsubs f8,f18,f2
	ctx.f8.f64 = double(float(ctx.f18.f64 - ctx.f2.f64));
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fadds f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,248(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// fsubs f5,f1,f7
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// stfs f6,92(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fmadds f1,f28,f13,f0
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f5,220(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// fsubs f2,f22,f10
	ctx.f2.f64 = double(float(ctx.f22.f64 - ctx.f10.f64));
	// fmadds f0,f3,f12,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f4,f10,f22
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f22.f64));
	// fadds f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f13,188(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f12,124(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// fadds f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f10,252(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823db9ec
	ctx.lr = 0x8278F330;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278F33C"))) PPC_WEAK_FUNC(sub_8278F33C);
PPC_FUNC_IMPL(__imp__sub_8278F33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F340"))) PPC_WEAK_FUNC(sub_8278F340);
PPC_FUNC_IMPL(__imp__sub_8278F340) {
	PPC_FUNC_PROLOGUE();
loc_8278F340:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8278f368
	if (!ctx.cr6.lt) goto loc_8278F368;
loc_8278F354:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8278f354
	if (ctx.cr6.lt) goto loc_8278F354;
loc_8278F368:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8278f390
	if (!ctx.cr6.lt) goto loc_8278F390;
loc_8278F37C:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8278f37c
	if (ctx.cr6.lt) goto loc_8278F37C;
loc_8278F390:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x8278f340
	goto loc_8278F340;
}

__attribute__((alias("__imp__sub_8278F3B0"))) PPC_WEAK_FUNC(sub_8278F3B0);
PPC_FUNC_IMPL(__imp__sub_8278F3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278F3B4"))) PPC_WEAK_FUNC(sub_8278F3B4);
PPC_FUNC_IMPL(__imp__sub_8278F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F3B8"))) PPC_WEAK_FUNC(sub_8278F3B8);
PPC_FUNC_IMPL(__imp__sub_8278F3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x8278F3C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8278f404
	if (ctx.cr6.eq) goto loc_8278F404;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8278f404
	if (ctx.cr6.eq) goto loc_8278F404;
loc_8278F3E4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273d8f8
	ctx.lr = 0x8278F3F8;
	sub_8273D8F8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8278f3e4
	if (!ctx.cr6.eq) goto loc_8278F3E4;
loc_8278F404:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278F40C"))) PPC_WEAK_FUNC(sub_8278F40C);
PPC_FUNC_IMPL(__imp__sub_8278F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F410"))) PPC_WEAK_FUNC(sub_8278F410);
PPC_FUNC_IMPL(__imp__sub_8278F410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8278F418;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8273c5e0
	ctx.lr = 0x8278F43C;
	sub_8273C5E0(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8278f488
	if (!ctx.cr6.lt) goto loc_8278F488;
loc_8278F448:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8278f47c
	if (!ctx.cr6.lt) goto loc_8278F47C;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273c3f0
	ctx.lr = 0x8278F47C;
	sub_8273C3F0(ctx, base);
loc_8278F47C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8278f448
	if (ctx.cr6.lt) goto loc_8278F448;
loc_8278F488:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273db48
	ctx.lr = 0x8278F498;
	sub_8273DB48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278F4A0"))) PPC_WEAK_FUNC(sub_8278F4A0);
PPC_FUNC_IMPL(__imp__sub_8278F4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8278F4A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x8278f5a8
	if (!ctx.cr6.gt) goto loc_8278F5A8;
loc_8278F4CC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8278f590
	if (ctx.cr6.eq) goto loc_8278F590;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8278f52c
	if (!ctx.cr6.lt) goto loc_8278F52C;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8278f544
	if (ctx.cr6.lt) goto loc_8278F544;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8278f548
	if (ctx.cr6.lt) goto loc_8278F548;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8278f548
	goto loc_8278F548;
loc_8278F52C:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8278f53c
	if (!ctx.cr6.lt) goto loc_8278F53C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8278f548
	goto loc_8278F548;
loc_8278F53C:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8278f548
	if (ctx.cr6.lt) goto loc_8278F548;
loc_8278F544:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8278F548:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278f340
	ctx.lr = 0x8278F55C;
	sub_8278F340(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8278f4a0
	ctx.lr = 0x8278F574;
	sub_8278F4A0(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8278f4cc
	if (ctx.cr6.gt) goto loc_8278F4CC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8278F590:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278f410
	ctx.lr = 0x8278F5A8;
	sub_8278F410(ctx, base);
loc_8278F5A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278F5B0"))) PPC_WEAK_FUNC(sub_8278F5B0);
PPC_FUNC_IMPL(__imp__sub_8278F5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x8278F5B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8278f658
	if (ctx.cr6.eq) goto loc_8278F658;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r29,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8278f5f8
	if (ctx.cr6.eq) goto loc_8278F5F8;
loc_8278F5E8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8278f5e8
	if (!ctx.cr6.eq) goto loc_8278F5E8;
loc_8278F5F8:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278f4a0
	ctx.lr = 0x8278F610;
	sub_8278F4A0(ctx, base);
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ble cr6,0x8278f64c
	if (!ctx.cr6.gt) goto loc_8278F64C;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8278f3b8
	ctx.lr = 0x8278F630;
	sub_8278F3B8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8273c390
	ctx.lr = 0x8278F644;
	sub_8273C390(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8278F64C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278f3b8
	ctx.lr = 0x8278F658;
	sub_8278F3B8(ctx, base);
loc_8278F658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278F660"))) PPC_WEAK_FUNC(sub_8278F660);
PPC_FUNC_IMPL(__imp__sub_8278F660) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8278f5b0
	ctx.lr = 0x8278F680;
	sub_8278F5B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278F690"))) PPC_WEAK_FUNC(sub_8278F690);
PPC_FUNC_IMPL(__imp__sub_8278F690) {
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
	// lfs f2,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823dcdd8
	ctx.lr = 0x8278F6A8;
	sub_823DCDD8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,18204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18204);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x8278f6d0
	if (ctx.cr6.gt) goto loc_8278F6D0;
loc_8278F6C4:
	// fadds f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x8278f6c4
	if (!ctx.cr6.gt) goto loc_8278F6C4;
loc_8278F6D0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8278f6e4
	if (!ctx.cr6.gt) goto loc_8278F6E4;
loc_8278F6D8:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8278f6d8
	if (ctx.cr6.gt) goto loc_8278F6D8;
loc_8278F6E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278F6F4"))) PPC_WEAK_FUNC(sub_8278F6F4);
PPC_FUNC_IMPL(__imp__sub_8278F6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F6F8"))) PPC_WEAK_FUNC(sub_8278F6F8);
PPC_FUNC_IMPL(__imp__sub_8278F6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// lfs f11,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,18204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18204);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x8278f724
	if (ctx.cr6.gt) goto loc_8278F724;
loc_8278F718:
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x8278f718
	if (!ctx.cr6.gt) goto loc_8278F718;
loc_8278F724:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8278f738
	if (!ctx.cr6.gt) goto loc_8278F738;
loc_8278F72C:
	// fsubs f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8278f72c
	if (ctx.cr6.gt) goto loc_8278F72C;
loc_8278F738:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8278f74c
	if (ctx.cr6.gt) goto loc_8278F74C;
loc_8278F740:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x8278f740
	if (!ctx.cr6.gt) goto loc_8278F740;
loc_8278F74C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8278f760
	if (!ctx.cr6.gt) goto loc_8278F760;
loc_8278F754:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8278f754
	if (ctx.cr6.gt) goto loc_8278F754;
loc_8278F760:
	// fsubs f1,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2432);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8278f780
	if (!ctx.cr6.lt) goto loc_8278F780;
loc_8278F774:
	// fadds f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8278f774
	if (ctx.cr6.lt) goto loc_8278F774;
loc_8278F780:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,14980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14980);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8278F790:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8278f790
	if (!ctx.cr6.lt) goto loc_8278F790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278F7A0"))) PPC_WEAK_FUNC(sub_8278F7A0);
PPC_FUNC_IMPL(__imp__sub_8278F7A0) {
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
	// lis r12,0
	ctx.r12.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r12,r12,38368
	ctx.r12.u64 = ctx.r12.u64 | 38368;
	// and r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278f7f0
	if (!ctx.cr6.eq) goto loc_8278F7F0;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-7572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7572);
	// bl 0x822f2300
	ctx.lr = 0x8278F7D8;
	sub_822F2300(ctx, base);
	// lis r30,-32120
	ctx.r30.s64 = -2105016320;
	// lwz r3,-7436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7436);
	// bl 0x822f7ce0
	ctx.lr = 0x8278F7E4;
	sub_822F7CE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-7436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7436);
	// bl 0x822f7480
	ctx.lr = 0x8278F7F0;
	sub_822F7480(ctx, base);
loc_8278F7F0:
	// lis r12,281
	ctx.r12.s64 = 18415616;
	// and r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278f80c
	if (ctx.cr6.eq) goto loc_8278F80C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82311450
	ctx.lr = 0x8278F80C;
	sub_82311450(ctx, base);
loc_8278F80C:
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

__attribute__((alias("__imp__sub_8278F824"))) PPC_WEAK_FUNC(sub_8278F824);
PPC_FUNC_IMPL(__imp__sub_8278F824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F828"))) PPC_WEAK_FUNC(sub_8278F828);
PPC_FUNC_IMPL(__imp__sub_8278F828) {
	PPC_FUNC_PROLOGUE();
	// b 0x822e6ad0
	sub_822E6AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278F82C"))) PPC_WEAK_FUNC(sub_8278F82C);
PPC_FUNC_IMPL(__imp__sub_8278F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F830"))) PPC_WEAK_FUNC(sub_8278F830);
PPC_FUNC_IMPL(__imp__sub_8278F830) {
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
	// lis r31,-32111
	ctx.r31.s64 = -2104426496;
	// lwz r3,-3788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3788);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8278f864
	if (ctx.cr6.eq) goto loc_8278F864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278F864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278F864:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3788, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8278F880"))) PPC_WEAK_FUNC(sub_8278F880);
PPC_FUNC_IMPL(__imp__sub_8278F880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8278F888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r12,5600
	ctx.r12.s64 = 5600;
	// lis r31,-32120
	ctx.r31.s64 = -2105016320;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278f8c4
	if (!ctx.cr6.eq) goto loc_8278F8C4;
	// lwz r3,-7572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7572);
	// bl 0x822f2300
	ctx.lr = 0x8278F8AC;
	sub_822F2300(ctx, base);
	// lis r29,-32120
	ctx.r29.s64 = -2105016320;
	// lwz r3,-7436(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7436);
	// bl 0x822f7ce0
	ctx.lr = 0x8278F8B8;
	sub_822F7CE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-7436(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7436);
	// bl 0x822f7480
	ctx.lr = 0x8278F8C4;
	sub_822F7480(ctx, base);
loc_8278F8C4:
	// lis r12,2073
	ctx.r12.s64 = 135856128;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278f8e0
	if (ctx.cr6.eq) goto loc_8278F8E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82311450
	ctx.lr = 0x8278F8E0;
	sub_82311450(ctx, base);
loc_8278F8E0:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8278f8fc
	if (!ctx.cr6.eq) goto loc_8278F8FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-7572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7572);
	// lfs f1,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f0f38
	ctx.lr = 0x8278F8FC;
	sub_822F0F38(ctx, base);
loc_8278F8FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278F904"))) PPC_WEAK_FUNC(sub_8278F904);
PPC_FUNC_IMPL(__imp__sub_8278F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F908"))) PPC_WEAK_FUNC(sub_8278F908);
PPC_FUNC_IMPL(__imp__sub_8278F908) {
	PPC_FUNC_PROLOGUE();
	// b 0x822e6a10
	sub_822E6A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278F90C"))) PPC_WEAK_FUNC(sub_8278F90C);
PPC_FUNC_IMPL(__imp__sub_8278F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F910"))) PPC_WEAK_FUNC(sub_8278F910);
PPC_FUNC_IMPL(__imp__sub_8278F910) {
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
	// lis r31,-32111
	ctx.r31.s64 = -2104426496;
	// lwz r3,-3784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8278f944
	if (ctx.cr6.eq) goto loc_8278F944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278F944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278F944:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3784, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8278F960"))) PPC_WEAK_FUNC(sub_8278F960);
PPC_FUNC_IMPL(__imp__sub_8278F960) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r9,r11,-29780
	ctx.r9.s64 = ctx.r11.s64 + -29780;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8092(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8092);
	// bl 0x822e5148
	ctx.lr = 0x8278F998;
	sub_822E5148(ctx, base);
	// lis r8,-32111
	ctx.r8.s64 = -2104426496;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-3780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3780, ctx.r11.u32);
	// bl 0x822e6940
	ctx.lr = 0x8278F9AC;
	sub_822E6940(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8278f9c4
	if (ctx.cr6.eq) goto loc_8278F9C4;
	// bl 0x82130588
	ctx.lr = 0x8278F9C0;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8278F9C4:
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

__attribute__((alias("__imp__sub_8278F9DC"))) PPC_WEAK_FUNC(sub_8278F9DC);
PPC_FUNC_IMPL(__imp__sub_8278F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278F9E0"))) PPC_WEAK_FUNC(sub_8278F9E0);
PPC_FUNC_IMPL(__imp__sub_8278F9E0) {
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
	// bl 0x822e6b38
	ctx.lr = 0x8278F9F8;
	sub_822E6B38(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-29780
	ctx.r8.s64 = ctx.r11.s64 + -29780;
	// ori r7,r10,1520
	ctx.r7.u64 = ctx.r10.u64 | 1520;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r6,-32120
	ctx.r6.s64 = -2105016320;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,-8092(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8092);
	// bl 0x822e5138
	ctx.lr = 0x8278FA2C;
	sub_822E5138(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r4,r5,-29732
	ctx.r4.s64 = ctx.r5.s64 + -29732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_8278FA50"))) PPC_WEAK_FUNC(sub_8278FA50);
PPC_FUNC_IMPL(__imp__sub_8278FA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-29712
	ctx.r3.s64 = ctx.r11.s64 + -29712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278FA5C"))) PPC_WEAK_FUNC(sub_8278FA5C);
PPC_FUNC_IMPL(__imp__sub_8278FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278FA60"))) PPC_WEAK_FUNC(sub_8278FA60);
PPC_FUNC_IMPL(__imp__sub_8278FA60) {
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
	// bl 0x822e6b38
	ctx.lr = 0x8278FA78;
	sub_822E6B38(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,273
	ctx.r10.s64 = 17891328;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-29756
	ctx.r8.s64 = ctx.r11.s64 + -29756;
	// ori r7,r10,32770
	ctx.r7.u64 = ctx.r10.u64 | 32770;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r6,-32120
	ctx.r6.s64 = -2105016320;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,-8092(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8092);
	// bl 0x822e5138
	ctx.lr = 0x8278FAAC;
	sub_822E5138(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r4,r5,-29684
	ctx.r4.s64 = ctx.r5.s64 + -29684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_8278FAD0"))) PPC_WEAK_FUNC(sub_8278FAD0);
PPC_FUNC_IMPL(__imp__sub_8278FAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278FADC"))) PPC_WEAK_FUNC(sub_8278FADC);
PPC_FUNC_IMPL(__imp__sub_8278FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278FAE0"))) PPC_WEAK_FUNC(sub_8278FAE0);
PPC_FUNC_IMPL(__imp__sub_8278FAE0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r9,r11,-29756
	ctx.r9.s64 = ctx.r11.s64 + -29756;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8092(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8092);
	// bl 0x822e5148
	ctx.lr = 0x8278FB18;
	sub_822E5148(ctx, base);
	// lis r8,-32111
	ctx.r8.s64 = -2104426496;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-3776(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3776, ctx.r11.u32);
	// bl 0x822e6940
	ctx.lr = 0x8278FB2C;
	sub_822E6940(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8278fb44
	if (ctx.cr6.eq) goto loc_8278FB44;
	// bl 0x82130588
	ctx.lr = 0x8278FB40;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8278FB44:
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

__attribute__((alias("__imp__sub_8278FB5C"))) PPC_WEAK_FUNC(sub_8278FB5C);
PPC_FUNC_IMPL(__imp__sub_8278FB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278FB60"))) PPC_WEAK_FUNC(sub_8278FB60);
PPC_FUNC_IMPL(__imp__sub_8278FB60) {
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
	// lis r12,0
	ctx.r12.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r12,r12,38368
	ctx.r12.u64 = ctx.r12.u64 | 38368;
	// lis r31,-32120
	ctx.r31.s64 = -2105016320;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278fba8
	if (!ctx.cr6.eq) goto loc_8278FBA8;
	// lwz r3,-7572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7572);
	// bl 0x822f21e8
	ctx.lr = 0x8278FB98;
	sub_822F21E8(ctx, base);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7436);
	// bl 0x822f7480
	ctx.lr = 0x8278FBA8;
	sub_822F7480(ctx, base);
loc_8278FBA8:
	// rlwinm r11,r30,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F0000;
	// rlwinm r11,r11,0,15,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF9FFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278fbe8
	if (ctx.cr6.eq) goto loc_8278FBE8;
	// lwz r3,-7572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7572);
	// bl 0x82205248
	ctx.lr = 0x8278FBC0;
	sub_82205248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82311450
	ctx.lr = 0x8278FBCC;
	sub_82311450(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8217f768
	ctx.lr = 0x8278FBD8;
	sub_8217F768(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8217f768
	ctx.lr = 0x8278FBE4;
	sub_8217F768(ctx, base);
	// b 0x8278fc00
	goto loc_8278FC00;
loc_8278FBE8:
	// rlwinm r11,r30,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278fc00
	if (ctx.cr6.eq) goto loc_8278FC00;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82311450
	ctx.lr = 0x8278FC00;
	sub_82311450(ctx, base);
loc_8278FC00:
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

__attribute__((alias("__imp__sub_8278FC18"))) PPC_WEAK_FUNC(sub_8278FC18);
PPC_FUNC_IMPL(__imp__sub_8278FC18) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82130528
	ctx.lr = 0x8278FC2C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8278fc50
	if (ctx.cr6.eq) goto loc_8278FC50;
	// bl 0x8278f9e0
	ctx.lr = 0x8278FC38;
	sub_8278F9E0(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-3788(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8278FC50:
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3788, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278FC6C"))) PPC_WEAK_FUNC(sub_8278FC6C);
PPC_FUNC_IMPL(__imp__sub_8278FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278FC70"))) PPC_WEAK_FUNC(sub_8278FC70);
PPC_FUNC_IMPL(__imp__sub_8278FC70) {
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
	// li r12,5600
	ctx.r12.s64 = 5600;
	// lis r31,-32120
	ctx.r31.s64 = -2105016320;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278fcb4
	if (!ctx.cr6.eq) goto loc_8278FCB4;
	// lwz r3,-7572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7572);
	// bl 0x822f21e8
	ctx.lr = 0x8278FCA4;
	sub_822F21E8(ctx, base);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7436);
	// bl 0x822f7480
	ctx.lr = 0x8278FCB4;
	sub_822F7480(ctx, base);
loc_8278FCB4:
	// rlwinm r11,r30,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F0000;
	// rlwinm r11,r11,0,15,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF9FFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278fcec
	if (ctx.cr6.eq) goto loc_8278FCEC;
	// lwz r3,-7572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7572);
	// bl 0x82205248
	ctx.lr = 0x8278FCCC;
	sub_82205248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82311450
	ctx.lr = 0x8278FCD8;
	sub_82311450(ctx, base);
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278fd04
	if (ctx.cr6.eq) goto loc_8278FD04;
	// bl 0x82322e50
	ctx.lr = 0x8278FCE8;
	sub_82322E50(ctx, base);
	// b 0x8278fd04
	goto loc_8278FD04;
loc_8278FCEC:
	// rlwinm r11,r30,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278fd04
	if (ctx.cr6.eq) goto loc_8278FD04;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82311450
	ctx.lr = 0x8278FD04;
	sub_82311450(ctx, base);
loc_8278FD04:
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

__attribute__((alias("__imp__sub_8278FD1C"))) PPC_WEAK_FUNC(sub_8278FD1C);
PPC_FUNC_IMPL(__imp__sub_8278FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278FD20"))) PPC_WEAK_FUNC(sub_8278FD20);
PPC_FUNC_IMPL(__imp__sub_8278FD20) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82130528
	ctx.lr = 0x8278FD34;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8278fd58
	if (ctx.cr6.eq) goto loc_8278FD58;
	// bl 0x8278fa60
	ctx.lr = 0x8278FD40;
	sub_8278FA60(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-3784(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8278FD58:
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3784, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278FD74"))) PPC_WEAK_FUNC(sub_8278FD74);
PPC_FUNC_IMPL(__imp__sub_8278FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278FD78"))) PPC_WEAK_FUNC(sub_8278FD78);
PPC_FUNC_IMPL(__imp__sub_8278FD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278FD8C"))) PPC_WEAK_FUNC(sub_8278FD8C);
PPC_FUNC_IMPL(__imp__sub_8278FD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8278FD90"))) PPC_WEAK_FUNC(sub_8278FD90);
PPC_FUNC_IMPL(__imp__sub_8278FD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x8278FD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 393216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,16952
	ctx.r11.s64 = ctx.r11.s64 + 16952;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f0,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x8278fdc8
	if (!ctx.cr6.lt) goto loc_8278FDC8;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_8278FDC8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8278fddc
	if (!ctx.cr6.lt) goto loc_8278FDDC;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8278FDDC:
	// lbz r11,58(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8278ff58
	if (!ctx.cr6.eq) goto loc_8278FF58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278FE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8278fe6c
	if (!ctx.cr6.eq) goto loc_8278FE6C;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278fe28
	if (!ctx.cr6.eq) goto loc_8278FE28;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8278fe2c
	if (ctx.cr6.eq) goto loc_8278FE2C;
loc_8278FE28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8278FE2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278fe6c
	if (!ctx.cr6.eq) goto loc_8278FE6C;
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
	// ble cr6,0x8278ff58
	if (!ctx.cr6.gt) goto loc_8278FF58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278FE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8278ff58
	goto loc_8278FF58;
loc_8278FE6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278FE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8278feb8
	if (ctx.cr6.eq) goto loc_8278FEB8;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278fea8
	if (!ctx.cr6.eq) goto loc_8278FEA8;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8278feac
	if (ctx.cr6.eq) goto loc_8278FEAC;
loc_8278FEA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8278FEAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278ff54
	if (ctx.cr6.eq) goto loc_8278FF54;
loc_8278FEB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278FECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8278ff04
	if (!ctx.cr6.eq) goto loc_8278FF04;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278fef4
	if (!ctx.cr6.eq) goto loc_8278FEF4;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8278fef8
	if (ctx.cr6.eq) goto loc_8278FEF8;
loc_8278FEF4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8278FEF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278ff58
	if (!ctx.cr6.eq) goto loc_8278FF58;
loc_8278FF04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278FF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8278ff58
	if (ctx.cr6.eq) goto loc_8278FF58;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278ff40
	if (!ctx.cr6.eq) goto loc_8278FF40;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8278ff44
	if (ctx.cr6.eq) goto loc_8278FF44;
loc_8278FF40:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8278FF44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278ff58
	if (ctx.cr6.eq) goto loc_8278FF58;
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
loc_8278FF54:
	// stb r29,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r29.u8);
loc_8278FF58:
	// lbz r11,59(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82790100
	if (!ctx.cr6.eq) goto loc_82790100;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8278ff7c
	if (ctx.cr6.gt) goto loc_8278FF7C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8278FF7C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8278FF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8278ffd8
	if (!ctx.cr6.eq) goto loc_8278FFD8;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278ffbc
	if (!ctx.cr6.eq) goto loc_8278FFBC;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8278ffc0
	if (ctx.cr6.eq) goto loc_8278FFC0;
loc_8278FFBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8278FFC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278ffd8
	if (!ctx.cr6.eq) goto loc_8278FFD8;
	// stb r29,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8278FFD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278FFEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82790074
	if (ctx.cr6.eq) goto loc_82790074;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82790014
	if (!ctx.cr6.eq) goto loc_82790014;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x82790018
	if (ctx.cr6.eq) goto loc_82790018;
loc_82790014:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82790018:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82790074
	if (!ctx.cr6.eq) goto loc_82790074;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82790044
	if (ctx.cr6.eq) goto loc_82790044;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82790044:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bne 0x82790100
	if (!ctx.cr0.eq) goto loc_82790100;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279006C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82790074:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82790088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827900d0
	if (ctx.cr6.eq) goto loc_827900D0;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827900b0
	if (!ctx.cr6.eq) goto loc_827900B0;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x827900b4
	if (ctx.cr6.eq) goto loc_827900B4;
loc_827900B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827900B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827900d0
	if (ctx.cr6.eq) goto loc_827900D0;
	// stb r29,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r29.u8);
	// stb r29,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_827900D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827900E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82790100
	if (ctx.cr6.eq) goto loc_82790100;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82790100
	if (!ctx.cr6.eq) goto loc_82790100;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
loc_82790100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82790108"))) PPC_WEAK_FUNC(sub_82790108);
PPC_FUNC_IMPL(__imp__sub_82790108) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82790124
	if (!ctx.cr6.eq) goto loc_82790124;
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82790128
	if (ctx.cr6.eq) goto loc_82790128;
loc_82790124:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82790128:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,59(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 59);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,58(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r11.u8);
	// stb r10,59(r3)
	PPC_STORE_U8(ctx.r3.u32 + 59, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790160"))) PPC_WEAK_FUNC(sub_82790160);
PPC_FUNC_IMPL(__imp__sub_82790160) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8279017c
	if (!ctx.cr6.eq) goto loc_8279017C;
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82790180
	if (ctx.cr6.eq) goto loc_82790180;
loc_8279017C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82790180:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,58(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,59(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 59);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r10.u8);
	// stb r9,59(r3)
	PPC_STORE_U8(ctx.r3.u32 + 59, ctx.r9.u8);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827901C4"))) PPC_WEAK_FUNC(sub_827901C4);
PPC_FUNC_IMPL(__imp__sub_827901C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827901C8"))) PPC_WEAK_FUNC(sub_827901C8);
PPC_FUNC_IMPL(__imp__sub_827901C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822e6d98
	ctx.lr = 0x827901E8;
	sub_822E6D98(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r6,-29276
	ctx.r5.s64 = ctx.r6.s64 + -29276;
	// lfs f13,7444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7444);
	ctx.f13.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f12,-26872(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26872);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,31304(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31304);
	ctx.f11.f64 = double(temp.f32);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stb r4,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r4.u8);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stb r11,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stb r11,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r11.u8);
	// stb r11,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stb r11,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82790274"))) PPC_WEAK_FUNC(sub_82790274);
PPC_FUNC_IMPL(__imp__sub_82790274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790278"))) PPC_WEAK_FUNC(sub_82790278);
PPC_FUNC_IMPL(__imp__sub_82790278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lwz r3,-3772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3772);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790284"))) PPC_WEAK_FUNC(sub_82790284);
PPC_FUNC_IMPL(__imp__sub_82790284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790288"))) PPC_WEAK_FUNC(sub_82790288);
PPC_FUNC_IMPL(__imp__sub_82790288) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-29276
	ctx.r9.s64 = ctx.r11.s64 + -29276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x822e6bc0
	ctx.lr = 0x827902BC;
	sub_822E6BC0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827902d4
	if (ctx.cr6.eq) goto loc_827902D4;
	// bl 0x82130588
	ctx.lr = 0x827902D0;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827902D4:
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

__attribute__((alias("__imp__sub_827902EC"))) PPC_WEAK_FUNC(sub_827902EC);
PPC_FUNC_IMPL(__imp__sub_827902EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827902F0"))) PPC_WEAK_FUNC(sub_827902F0);
PPC_FUNC_IMPL(__imp__sub_827902F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x827902F8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32130
	ctx.r30.s64 = -2105671680;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// clrlwi r28,r7,24
	ctx.r28.u64 = ctx.r7.u32 & 0xFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,22080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22080);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,-8092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8092);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r9,r11,45
	ctx.r9.s64 = ctx.r11.s64 + 45;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// beq cr6,0x82790344
	if (ctx.cr6.eq) goto loc_82790344;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-12284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12284);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
loc_82790344:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-31400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8217c1d8
	ctx.lr = 0x82790380;
	sub_8217C1D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279046c
	if (ctx.cr6.eq) goto loc_8279046C;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r4,22080(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22080);
	// li r7,2
	ctx.r7.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,-17628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17628);
	// bl 0x82175f20
	ctx.lr = 0x827903A4;
	sub_82175F20(ctx, base);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// rlwinm r9,r3,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x827903c8
	if (ctx.cr6.eq) goto loc_827903C8;
	// rlwinm r11,r3,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000000;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827903cc
	if (!ctx.cr6.eq) goto loc_827903CC;
loc_827903C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827903CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279046c
	if (ctx.cr6.eq) goto loc_8279046C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,40(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f12,12880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12880);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82790400
	if (ctx.cr6.eq) goto loc_82790400;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f11,12424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12424);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,30120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_82790400:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8279041c
	if (!ctx.cr6.gt) goto loc_8279041C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_8279041C:
	// lfs f12,44(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8279043c
	if (!ctx.cr6.lt) goto loc_8279043C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_8279043C:
	// lfs f12,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8279045c
	if (!ctx.cr6.lt) goto loc_8279045C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_8279045C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_8279046C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279047C"))) PPC_WEAK_FUNC(sub_8279047C);
PPC_FUNC_IMPL(__imp__sub_8279047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790480"))) PPC_WEAK_FUNC(sub_82790480);
PPC_FUNC_IMPL(__imp__sub_82790480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,6
	ctx.r11.s64 = 393216;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,16952
	ctx.r11.u64 = ctx.r11.u64 | 16952;
	// lfsx f0,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r10.u8);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279049C"))) PPC_WEAK_FUNC(sub_8279049C);
PPC_FUNC_IMPL(__imp__sub_8279049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827904A0"))) PPC_WEAK_FUNC(sub_827904A0);
PPC_FUNC_IMPL(__imp__sub_827904A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,6
	ctx.r11.s64 = 393216;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,16952
	ctx.r11.u64 = ctx.r11.u64 | 16952;
	// lfsx f0,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r10.u8);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827904BC"))) PPC_WEAK_FUNC(sub_827904BC);
PPC_FUNC_IMPL(__imp__sub_827904BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827904C0"))) PPC_WEAK_FUNC(sub_827904C0);
PPC_FUNC_IMPL(__imp__sub_827904C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827904D0"))) PPC_WEAK_FUNC(sub_827904D0);
PPC_FUNC_IMPL(__imp__sub_827904D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r8,-29200
	ctx.r4.s64 = ctx.r8.s64 + -29200;
	// lwz r6,-3772(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3772);
	// lwz r3,2828(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2828);
	// addi r5,r9,5276
	ctx.r5.s64 = ctx.r9.s64 + 5276;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821bf658
	sub_821BF658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827904FC"))) PPC_WEAK_FUNC(sub_827904FC);
PPC_FUNC_IMPL(__imp__sub_827904FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790500"))) PPC_WEAK_FUNC(sub_82790500);
PPC_FUNC_IMPL(__imp__sub_82790500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r8,-29200
	ctx.r4.s64 = ctx.r8.s64 + -29200;
	// lwz r6,-3772(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3772);
	// lwz r3,2828(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2828);
	// addi r5,r9,5276
	ctx.r5.s64 = ctx.r9.s64 + 5276;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821c04b0
	sub_821C04B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279052C"))) PPC_WEAK_FUNC(sub_8279052C);
PPC_FUNC_IMPL(__imp__sub_8279052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790530"))) PPC_WEAK_FUNC(sub_82790530);
PPC_FUNC_IMPL(__imp__sub_82790530) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r31,r11,-3772
	ctx.r31.s64 = ctx.r11.s64 + -3772;
	// lwz r11,-3772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82790640
	if (!ctx.cr6.eq) goto loc_82790640;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82130528
	ctx.lr = 0x8279055C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279056c
	if (ctx.cr6.eq) goto loc_8279056C;
	// bl 0x821d5408
	ctx.lr = 0x82790568;
	sub_821D5408(ctx, base);
	// b 0x82790570
	goto loc_82790570;
loc_8279056C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82790570:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r9,r11,1216
	ctx.r9.s64 = ctx.r11.s64 + 1216;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r8,-29200
	ctx.r11.s64 = ctx.r8.s64 + -29200;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32125
	ctx.r7.s64 = -2105344000;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lis r5,-32125
	ctx.r5.s64 = -2105344000;
	// lis r4,-32125
	ctx.r4.s64 = -2105344000;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r5,r5,1068
	ctx.r5.s64 = ctx.r5.s64 + 1068;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r4,1092
	ctx.r4.s64 = ctx.r4.s64 + 1092;
	// std r6,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r6.u64);
	// addi r7,r7,1044
	ctx.r7.s64 = ctx.r7.s64 + 1044;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,40
	ctx.r10.s64 = 40;
	// li r9,44
	ctx.r9.s64 = 44;
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// bl 0x821d4458
	ctx.lr = 0x827905EC;
	sub_821D4458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d4100
	ctx.lr = 0x827905FC;
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
	ctx.lr = 0x82790618;
	sub_821D41D0(ctx, base);
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r8,1116
	ctx.r4.s64 = ctx.r8.s64 + 1116;
	// bl 0x821d4b00
	ctx.lr = 0x82790628;
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
	ctx.lr = 0x82790640;
	sub_821C0548(ctx, base);
loc_82790640:
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

__attribute__((alias("__imp__sub_82790654"))) PPC_WEAK_FUNC(sub_82790654);
PPC_FUNC_IMPL(__imp__sub_82790654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790658"))) PPC_WEAK_FUNC(sub_82790658);
PPC_FUNC_IMPL(__imp__sub_82790658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82790660;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82178f38
	ctx.lr = 0x82790680;
	sub_82178F38(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r9,r31,21,0,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 21) & 0xFFE00000;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// or r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 | ctx.r30.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r6,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// addi r4,r11,512
	ctx.r4.s64 = ctx.r11.s64 + 512;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827906B4"))) PPC_WEAK_FUNC(sub_827906B4);
PPC_FUNC_IMPL(__imp__sub_827906B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827906B8"))) PPC_WEAK_FUNC(sub_827906B8);
PPC_FUNC_IMPL(__imp__sub_827906B8) {
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
	// lis r31,-32111
	ctx.r31.s64 = -2104426496;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-3756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3756);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827906f4
	if (!ctx.cr6.eq) goto loc_827906F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-24500
	ctx.r3.s64 = ctx.r11.s64 + -24500;
	// bl 0x8218a4e8
	ctx.lr = 0x827906F0;
	sub_8218A4E8(ctx, base);
	// stw r3,-3756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3756, ctx.r3.u32);
loc_827906F4:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218aef8
	ctx.lr = 0x82790704;
	sub_8218AEF8(ctx, base);
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

__attribute__((alias("__imp__sub_8279071C"))) PPC_WEAK_FUNC(sub_8279071C);
PPC_FUNC_IMPL(__imp__sub_8279071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790720"))) PPC_WEAK_FUNC(sub_82790720);
PPC_FUNC_IMPL(__imp__sub_82790720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827907b0
	if (ctx.cr6.eq) goto loc_827907B0;
	// lbz r11,269(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 269);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827907b0
	if (ctx.cr6.eq) goto loc_827907B0;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827907b0
	if (ctx.cr6.eq) goto loc_827907B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// rlwinm r9,r11,0,2,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827907b0
	if (!ctx.cr6.eq) goto loc_827907B0;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827907b0
	if (ctx.cr6.eq) goto loc_827907B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,2,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827907b0
	if (!ctx.cr6.eq) goto loc_827907B0;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827907b0
	if (ctx.cr6.eq) goto loc_827907B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,2,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827907b0
	if (!ctx.cr6.eq) goto loc_827907B0;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827907b0
	if (ctx.cr6.eq) goto loc_827907B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,2,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x827907b4
	if (ctx.cr6.eq) goto loc_827907B4;
loc_827907B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827907B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827907BC"))) PPC_WEAK_FUNC(sub_827907BC);
PPC_FUNC_IMPL(__imp__sub_827907BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827907C0"))) PPC_WEAK_FUNC(sub_827907C0);
PPC_FUNC_IMPL(__imp__sub_827907C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827907d8
	if (ctx.cr6.eq) goto loc_827907D8;
	// lbz r11,269(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 269);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82790848
	if (!ctx.cr6.eq) goto loc_82790848;
loc_827907D8:
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827907f4
	if (ctx.cr6.eq) goto loc_827907F4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,2,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82790848
	if (!ctx.cr6.eq) goto loc_82790848;
loc_827907F4:
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82790810
	if (ctx.cr6.eq) goto loc_82790810;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,2,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82790848
	if (!ctx.cr6.eq) goto loc_82790848;
loc_82790810:
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279082c
	if (ctx.cr6.eq) goto loc_8279082C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,2,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82790848
	if (!ctx.cr6.eq) goto loc_82790848;
loc_8279082C:
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82790854
	if (ctx.cr6.eq) goto loc_82790854;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,2,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82790854
	if (ctx.cr6.eq) goto loc_82790854;
loc_82790848:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82790854:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790860"))) PPC_WEAK_FUNC(sub_82790860);
PPC_FUNC_IMPL(__imp__sub_82790860) {
	PPC_FUNC_PROLOGUE();
	// b 0x8278fd78
	sub_8278FD78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82790864"))) PPC_WEAK_FUNC(sub_82790864);
PPC_FUNC_IMPL(__imp__sub_82790864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790868"))) PPC_WEAK_FUNC(sub_82790868);
PPC_FUNC_IMPL(__imp__sub_82790868) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// lwz r11,160(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82790894
	if (ctx.cr6.eq) goto loc_82790894;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r11,0,2,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82790894
	if (!ctx.cr6.eq) goto loc_82790894;
	// rlwinm r3,r11,0,5,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFE0;
loc_82790894:
	// lwz r11,164(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827908b8
	if (ctx.cr6.eq) goto loc_827908B8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r11,0,2,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827908b8
	if (!ctx.cr6.eq) goto loc_827908B8;
	// rlwinm r11,r11,0,5,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFE0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_827908B8:
	// lwz r11,168(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827908dc
	if (ctx.cr6.eq) goto loc_827908DC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r11,0,2,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827908dc
	if (!ctx.cr6.eq) goto loc_827908DC;
	// rlwinm r11,r11,0,5,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFE0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_827908DC:
	// lwz r11,172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,2,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r11,r11,0,5,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFE0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790904"))) PPC_WEAK_FUNC(sub_82790904);
PPC_FUNC_IMPL(__imp__sub_82790904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790908"))) PPC_WEAK_FUNC(sub_82790908);
PPC_FUNC_IMPL(__imp__sub_82790908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82790910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,232(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279095c
	if (ctx.cr6.eq) goto loc_8279095C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x821ce100
	ctx.lr = 0x82790930;
	sub_821CE100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82790958
	if (!ctx.cr6.eq) goto loc_82790958;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82790958
	if (ctx.cr6.eq) goto loc_82790958;
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
	ctx.lr = 0x82790958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82790958:
	// stw r29,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r29.u32);
loc_8279095C:
	// lwz r31,224(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279099c
	if (ctx.cr6.eq) goto loc_8279099C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x821ce100
	ctx.lr = 0x82790970;
	sub_821CE100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82790998
	if (!ctx.cr6.eq) goto loc_82790998;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82790998
	if (ctx.cr6.eq) goto loc_82790998;
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
	ctx.lr = 0x82790998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82790998:
	// stw r29,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r29.u32);
loc_8279099C:
	// lwz r31,228(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827909dc
	if (ctx.cr6.eq) goto loc_827909DC;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x821ce100
	ctx.lr = 0x827909B0;
	sub_821CE100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827909d8
	if (!ctx.cr6.eq) goto loc_827909D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827909d8
	if (ctx.cr6.eq) goto loc_827909D8;
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
	ctx.lr = 0x827909D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827909D8:
	// stw r29,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r29.u32);
loc_827909DC:
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3784);
	// bl 0x8278f908
	ctx.lr = 0x827909EC;
	sub_8278F908(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827909F4"))) PPC_WEAK_FUNC(sub_827909F4);
PPC_FUNC_IMPL(__imp__sub_827909F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827909F8"))) PPC_WEAK_FUNC(sub_827909F8);
PPC_FUNC_IMPL(__imp__sub_827909F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8278fd90
	sub_8278FD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827909FC"))) PPC_WEAK_FUNC(sub_827909FC);
PPC_FUNC_IMPL(__imp__sub_827909FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790A00"))) PPC_WEAK_FUNC(sub_82790A00);
PPC_FUNC_IMPL(__imp__sub_82790A00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 + 44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790A14"))) PPC_WEAK_FUNC(sub_82790A14);
PPC_FUNC_IMPL(__imp__sub_82790A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790A18"))) PPC_WEAK_FUNC(sub_82790A18);
PPC_FUNC_IMPL(__imp__sub_82790A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790A24"))) PPC_WEAK_FUNC(sub_82790A24);
PPC_FUNC_IMPL(__imp__sub_82790A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790A28"))) PPC_WEAK_FUNC(sub_82790A28);
PPC_FUNC_IMPL(__imp__sub_82790A28) {
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
	ctx.lr = 0x82790A40;
	sub_823DB9D8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f31,31344(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31344);
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x823dc480
	ctx.lr = 0x82790A64;
	sub_823DC480(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// frsp f29,f1
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x823dc480
	ctx.lr = 0x82790A78;
	sub_823DC480(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x823dc480
	ctx.lr = 0x82790A8C;
	sub_823DC480(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f28,4(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823dba24
	ctx.lr = 0x82790AB0;
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

__attribute__((alias("__imp__sub_82790AC4"))) PPC_WEAK_FUNC(sub_82790AC4);
PPC_FUNC_IMPL(__imp__sub_82790AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790AC8"))) PPC_WEAK_FUNC(sub_82790AC8);
PPC_FUNC_IMPL(__imp__sub_82790AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82790AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-3728
	ctx.r31.s64 = ctx.r11.s64 + -3728;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823da950
	ctx.lr = 0x82790AF0;
	sub_823DA950(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x823da950
	ctx.lr = 0x82790B00;
	sub_823DA950(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82790B08"))) PPC_WEAK_FUNC(sub_82790B08);
PPC_FUNC_IMPL(__imp__sub_82790B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82790B10;
	__savegprlr_29(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,492
	ctx.r11.s64 = 492;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lvlx128 v63,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v127,v63,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// bl 0x826e9f88
	ctx.lr = 0x82790B40;
	sub_826E9F88(ctx, base);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// vmulfp128 v61,v127,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v127.f32)));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,-26876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26876);
	// lfs f0,-12072(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12072);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v58,r11,r9
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v57,v59,v59
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v59.f32)));
	// vsubfp128 v56,v58,v62
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// vmsum3fp128 v55,v56,v56
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vsubfp128 v54,v55,v61
	_mm_store_ps(ctx.v54.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v61.f32)));
	// vcmpgefp128. v53,v57,v54
	_mm_store_ps(ctx.v53.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v54.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v53.f32), 0xF);
	// mfocrf r6,2
	ctx.r6.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r5,r6,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82790ba4
	if (!ctx.cr6.eq) goto loc_82790BA4;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lbz r10,-6747(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6747);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82790bc4
	if (!ctx.cr6.eq) goto loc_82790BC4;
loc_82790BA4:
	// lbz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 556);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82790bc4
	if (ctx.cr6.eq) goto loc_82790BC4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8237ac90
	ctx.lr = 0x82790BC4;
	sub_8237AC90(ctx, base);
loc_82790BC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82790BD4"))) PPC_WEAK_FUNC(sub_82790BD4);
PPC_FUNC_IMPL(__imp__sub_82790BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790BD8"))) PPC_WEAK_FUNC(sub_82790BD8);
PPC_FUNC_IMPL(__imp__sub_82790BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// subfic r6,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// clrlwi r5,r9,27
	ctx.r5.u64 = ctx.r9.u32 & 0x1F;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r3,r7,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// xor r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// and r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 & ctx.r7.u64;
	// xor r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790C24"))) PPC_WEAK_FUNC(sub_82790C24);
PPC_FUNC_IMPL(__imp__sub_82790C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790C28"))) PPC_WEAK_FUNC(sub_82790C28);
PPC_FUNC_IMPL(__imp__sub_82790C28) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82790c44
	if (!ctx.cr6.lt) goto loc_82790C44;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82790C44:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82790C54:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// bne 0x82790c54
	if (!ctx.cr0.eq) goto loc_82790C54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790C80"))) PPC_WEAK_FUNC(sub_82790C80);
PPC_FUNC_IMPL(__imp__sub_82790C80) {
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
	// bl 0x827904d0
	ctx.lr = 0x82790C98;
	sub_827904D0(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r8,-28788
	ctx.r4.s64 = ctx.r8.s64 + -28788;
	// addi r5,r9,5276
	ctx.r5.s64 = ctx.r9.s64 + 5276;
	// lwz r6,-3760(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3760);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,2828(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2828);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x821bf658
	ctx.lr = 0x82790CC4;
	sub_821BF658(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x827946e8
	ctx.lr = 0x82790CCC;
	sub_827946E8(ctx, base);
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

__attribute__((alias("__imp__sub_82790CE0"))) PPC_WEAK_FUNC(sub_82790CE0);
PPC_FUNC_IMPL(__imp__sub_82790CE0) {
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
	// bl 0x82790500
	ctx.lr = 0x82790CF8;
	sub_82790500(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r8,-28788
	ctx.r4.s64 = ctx.r8.s64 + -28788;
	// addi r5,r9,5276
	ctx.r5.s64 = ctx.r9.s64 + 5276;
	// lwz r6,-3760(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3760);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,2828(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2828);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x821c04b0
	ctx.lr = 0x82790D24;
	sub_821C04B0(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x82794680
	ctx.lr = 0x82790D2C;
	sub_82794680(ctx, base);
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

__attribute__((alias("__imp__sub_82790D40"))) PPC_WEAK_FUNC(sub_82790D40);
PPC_FUNC_IMPL(__imp__sub_82790D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82790D4C"))) PPC_WEAK_FUNC(sub_82790D4C);
PPC_FUNC_IMPL(__imp__sub_82790D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790D50"))) PPC_WEAK_FUNC(sub_82790D50);
PPC_FUNC_IMPL(__imp__sub_82790D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82790D58;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r30,r26,160
	ctx.r30.s64 = ctx.r26.s64 + 160;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82790D70:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82130528
	ctx.lr = 0x82790D78;
	sub_82130528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82790d94
	if (ctx.cr6.eq) goto loc_82790D94;
	// bl 0x821e2748
	ctx.lr = 0x82790D88;
	sub_821E2748(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// b 0x82790d98
	goto loc_82790D98;
loc_82790D94:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82790D98:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82790d70
	if (!ctx.cr0.eq) goto loc_82790D70;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82130528
	ctx.lr = 0x82790DB0;
	sub_82130528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82790dcc
	if (ctx.cr6.eq) goto loc_82790DCC;
	// bl 0x821e2748
	ctx.lr = 0x82790DC0;
	sub_821E2748(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// b 0x82790dd0
	goto loc_82790DD0;
loc_82790DCC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82790DD0:
	// stw r11,172(r26)
	PPC_STORE_U32(ctx.r26.u32 + 172, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r11,-26428
	ctx.r29.s64 = ctx.r11.s64 + -26428;
	// addi r28,r10,-26464
	ctx.r28.s64 = ctx.r10.s64 + -26464;
loc_82790DE4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82790DFC;
	sub_82137A08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,63
	ctx.r6.s64 = 63;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821e2940
	ctx.lr = 0x82790E14;
	sub_821E2940(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82790de4
	if (ctx.cr6.lt) goto loc_82790DE4;
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r5,r11,-26492
	ctx.r5.s64 = ctx.r11.s64 + -26492;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82790E40;
	sub_82137A08(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,172(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// addi r5,r10,-26496
	ctx.r5.s64 = ctx.r10.s64 + -26496;
	// li r6,83
	ctx.r6.s64 = 83;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821e2940
	ctx.lr = 0x82790E5C;
	sub_821E2940(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82790E64"))) PPC_WEAK_FUNC(sub_82790E64);
PPC_FUNC_IMPL(__imp__sub_82790E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790E68"))) PPC_WEAK_FUNC(sub_82790E68);
PPC_FUNC_IMPL(__imp__sub_82790E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82790E70;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r11,31528
	ctx.r5.s64 = ctx.r11.s64 + 31528;
	// addi r4,r10,-28688
	ctx.r4.s64 = ctx.r10.s64 + -28688;
	// addi r3,r9,31520
	ctx.r3.s64 = ctx.r9.s64 + 31520;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r11,r8,-28696
	ctx.r11.s64 = ctx.r8.s64 + -28696;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r10,r7,-28704
	ctx.r10.s64 = ctx.r7.s64 + -28704;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r9,r6,-28712
	ctx.r9.s64 = ctx.r6.s64 + -28712;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r29,r28,176
	ctx.r29.s64 = ctx.r28.s64 + 176;
	// li r31,6
	ctx.r31.s64 = 6;
loc_82790ECC:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,156(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// bl 0x8274a228
	ctx.lr = 0x82790ED8;
	sub_8274A228(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82790ecc
	if (!ctx.cr0.eq) goto loc_82790ECC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,156(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// addi r4,r11,-28724
	ctx.r4.s64 = ctx.r11.s64 + -28724;
	// bl 0x8274a228
	ctx.lr = 0x82790EFC;
	sub_8274A228(ctx, base);
	// stw r3,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82790f18
	if (!ctx.cr6.eq) goto loc_82790F18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,-28756
	ctx.r3.s64 = ctx.r11.s64 + -28756;
	// bl 0x82130000
	ctx.lr = 0x82790F18;
	sub_82130000(ctx, base);
loc_82790F18:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,156(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// addi r4,r11,-28764
	ctx.r4.s64 = ctx.r11.s64 + -28764;
	// bl 0x8274a228
	ctx.lr = 0x82790F28;
	sub_8274A228(ctx, base);
	// stw r3,204(r28)
	PPC_STORE_U32(ctx.r28.u32 + 204, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82790F34"))) PPC_WEAK_FUNC(sub_82790F34);
PPC_FUNC_IMPL(__imp__sub_82790F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82790F38"))) PPC_WEAK_FUNC(sub_82790F38);
PPC_FUNC_IMPL(__imp__sub_82790F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82790F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lbz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82791018
	if (ctx.cr6.eq) goto loc_82791018;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// stb r29,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r29.u8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,-28680
	ctx.r5.s64 = ctx.r10.s64 + -28680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,-25232(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25232);
	// bl 0x82137a08
	ctx.lr = 0x82790F7C;
	sub_82137A08(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82790f8c
	if (ctx.cr6.eq) goto loc_82790F8C;
	// bl 0x82177a08
	ctx.lr = 0x82790F8C;
	sub_82177A08(ctx, base);
loc_82790F8C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r5,r11,-18100
	ctx.r5.s64 = ctx.r11.s64 + -18100;
	// addi r3,r10,30576
	ctx.r3.s64 = ctx.r10.s64 + 30576;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821ca778
	ctx.lr = 0x82790FA4;
	sub_821CA778(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82791000
	if (ctx.cr6.eq) goto loc_82791000;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r11,-3024
	ctx.r10.s64 = ctx.r11.s64 + -3024;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82791000
	if (!ctx.cr6.eq) goto loc_82791000;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82790FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82791000:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-8596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8596);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821ce0d8
	ctx.lr = 0x82791018;
	sub_821CE0D8(ctx, base);
loc_82791018:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82791020"))) PPC_WEAK_FUNC(sub_82791020);
PPC_FUNC_IMPL(__imp__sub_82791020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lbz r11,273(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 273);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82791088
	if (ctx.cr6.eq) goto loc_82791088;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r11,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r11.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,-28636
	ctx.r5.s64 = ctx.r10.s64 + -28636;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82791060;
	sub_82137A08(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82791070
	if (ctx.cr6.eq) goto loc_82791070;
	// bl 0x82177a08
	ctx.lr = 0x82791070;
	sub_82177A08(ctx, base);
loc_82791070:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-8592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8592);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821ce0d8
	ctx.lr = 0x82791088;
	sub_821CE0D8(ctx, base);
loc_82791088:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279109C"))) PPC_WEAK_FUNC(sub_8279109C);
PPC_FUNC_IMPL(__imp__sub_8279109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

