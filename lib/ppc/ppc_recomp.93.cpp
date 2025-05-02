#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824A0248"))) PPC_WEAK_FUNC(sub_824A0248);
PPC_FUNC_IMPL(__imp__sub_824A0248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A0250;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x824A0260;
	sub_82130528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x824a02e0
	if (!ctx.cr6.gt) goto loc_824A02E0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_824A0278:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a02d4
	if (ctx.cr6.eq) goto loc_824A02D4;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,60
	ctx.r10.s64 = 60;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a02d0
	if (ctx.cr6.eq) goto loc_824A02D0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824a02d0
	if (ctx.cr6.eq) goto loc_824A02D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82187a38
	ctx.lr = 0x824A02AC;
	sub_82187A38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824a02d0
	if (ctx.cr6.eq) goto loc_824A02D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217d890
	ctx.lr = 0x824A02C0;
	sub_8217D890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x824a02d4
	goto loc_824A02D4;
loc_824A02D0:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_824A02D4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x824a0278
	if (!ctx.cr0.eq) goto loc_824A0278;
loc_824A02E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A02EC"))) PPC_WEAK_FUNC(sub_824A02EC);
PPC_FUNC_IMPL(__imp__sub_824A02EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A02F0"))) PPC_WEAK_FUNC(sub_824A02F0);
PPC_FUNC_IMPL(__imp__sub_824A02F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A02F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821c00e8
	ctx.lr = 0x824A0308;
	sub_821C00E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8249ed78
	ctx.lr = 0x824A031C;
	sub_8249ED78(ctx, base);
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,2828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0340
	if (ctx.cr6.eq) goto loc_824A0340;
	// bl 0x821bbea8
	ctx.lr = 0x824A0340;
	sub_821BBEA8(ctx, base);
loc_824A0340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5c70
	ctx.lr = 0x824A0348;
	sub_821C5C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130588
	ctx.lr = 0x824A0350;
	sub_82130588(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824a035c
	if (ctx.cr6.eq) goto loc_824A035C;
	// bl 0x821bbf00
	ctx.lr = 0x824A035C;
	sub_821BBF00(ctx, base);
loc_824A035C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A0368"))) PPC_WEAK_FUNC(sub_824A0368);
PPC_FUNC_IMPL(__imp__sub_824A0368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A0370;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29624
	ctx.r4.s64 = ctx.r11.s64 + -29624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x821cfe80
	ctx.lr = 0x824A0390;
	sub_821CFE80(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2828(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2828);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x824a02f0
	ctx.lr = 0x824A03AC;
	sub_824A02F0(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r8,-29628
	ctx.r4.s64 = ctx.r8.s64 + -29628;
	// bl 0x821cfe80
	ctx.lr = 0x824A03C0;
	sub_821CFE80(ctx, base);
	// li r3,364
	ctx.r3.s64 = 364;
	// bl 0x82130528
	ctx.lr = 0x824A03C8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a03d8
	if (ctx.cr6.eq) goto loc_824A03D8;
	// bl 0x823d69a8
	ctx.lr = 0x824A03D4;
	sub_823D69A8(ctx, base);
	// b 0x824a03dc
	goto loc_824A03DC;
loc_824A03D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A03DC:
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x824cffd8
	ctx.lr = 0x824A03E8;
	sub_824CFFD8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x824a5490
	ctx.lr = 0x824A03F4;
	sub_824A5490(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A03FC"))) PPC_WEAK_FUNC(sub_824A03FC);
PPC_FUNC_IMPL(__imp__sub_824A03FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0400"))) PPC_WEAK_FUNC(sub_824A0400);
PPC_FUNC_IMPL(__imp__sub_824A0400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A0408;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-30040
	ctx.r4.s64 = ctx.r11.s64 + -30040;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0430;
	sub_821C2FB0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r5,r9,3664
	ctx.r5.s64 = ctx.r9.s64 + 3664;
	// addi r4,r8,1612
	ctx.r4.s64 = ctx.r8.s64 + 1612;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r8,r7,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0460;
	sub_82614440(ctx, base);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-29592
	ctx.r4.s64 = ctx.r4.s64 + -29592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A047C;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r29,r10,11856
	ctx.r29.s64 = ctx.r10.s64 + 11856;
	// addi r4,r9,1604
	ctx.r4.s64 = ctx.r9.s64 + 1604;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82614440
	ctx.lr = 0x824A04B0;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-10096
	ctx.r4.s64 = ctx.r4.s64 + -10096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A04CC;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r9,1592
	ctx.r4.s64 = ctx.r9.s64 + 1592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r10,1584
	ctx.r5.s64 = ctx.r10.s64 + 1584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A04FC;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-9960
	ctx.r4.s64 = ctx.r4.s64 + -9960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0518;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r28,r10,996
	ctx.r28.s64 = ctx.r10.s64 + 996;
	// addi r5,r9,1576
	ctx.r5.s64 = ctx.r9.s64 + 1576;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82614440
	ctx.lr = 0x824A054C;
	sub_82614440(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,-14648
	ctx.r4.s64 = ctx.r4.s64 + -14648;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0568;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1560
	ctx.r5.s64 = ctx.r10.s64 + 1560;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0594;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-9888
	ctx.r4.s64 = ctx.r4.s64 + -9888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A05B0;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1552
	ctx.r5.s64 = ctx.r10.s64 + 1552;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A05DC;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-14576
	ctx.r4.s64 = ctx.r4.s64 + -14576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A05F8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1536
	ctx.r5.s64 = ctx.r10.s64 + 1536;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0624;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-14504
	ctx.r4.s64 = ctx.r4.s64 + -14504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0640;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r10,1524
	ctx.r5.s64 = ctx.r10.s64 + 1524;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A066C;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r4,-14112
	ctx.r4.s64 = ctx.r4.s64 + -14112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0688;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r10,1508
	ctx.r5.s64 = ctx.r10.s64 + 1508;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82614440
	ctx.lr = 0x824A06B4;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-14424
	ctx.r4.s64 = ctx.r4.s64 + -14424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A06D0;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1492
	ctx.r5.s64 = ctx.r10.s64 + 1492;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A06FC;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-14320
	ctx.r4.s64 = ctx.r4.s64 + -14320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0718;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1472
	ctx.r5.s64 = ctx.r10.s64 + 1472;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0744;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-14032
	ctx.r4.s64 = ctx.r4.s64 + -14032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0760;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1452
	ctx.r5.s64 = ctx.r10.s64 + 1452;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A078C;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13960
	ctx.r4.s64 = ctx.r4.s64 + -13960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A07A8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r10,1420
	ctx.r5.s64 = ctx.r10.s64 + 1420;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A07D4;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-14216
	ctx.r4.s64 = ctx.r4.s64 + -14216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A07F0;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1396
	ctx.r5.s64 = ctx.r10.s64 + 1396;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A081C;
	sub_82614440(ctx, base);
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,0
	ctx.r4.s64 = ctx.r4.s64 + 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0838;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1380
	ctx.r5.s64 = ctx.r10.s64 + 1380;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0864;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13888
	ctx.r4.s64 = ctx.r4.s64 + -13888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0880;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1360
	ctx.r5.s64 = ctx.r10.s64 + 1360;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A08AC;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13856
	ctx.r4.s64 = ctx.r4.s64 + -13856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A08C8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1340
	ctx.r5.s64 = ctx.r10.s64 + 1340;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A08F4;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13784
	ctx.r4.s64 = ctx.r4.s64 + -13784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0910;
	sub_821C2FB0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r11,1324
	ctx.r5.s64 = ctx.r11.s64 + 1324;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82614440
	ctx.lr = 0x824A093C;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13752
	ctx.r4.s64 = ctx.r4.s64 + -13752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0958;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1308
	ctx.r5.s64 = ctx.r10.s64 + 1308;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0984;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13720
	ctx.r4.s64 = ctx.r4.s64 + -13720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A09A0;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1292
	ctx.r5.s64 = ctx.r10.s64 + 1292;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A09CC;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13688
	ctx.r4.s64 = ctx.r4.s64 + -13688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A09E8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1276
	ctx.r5.s64 = ctx.r10.s64 + 1276;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0A14;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13656
	ctx.r4.s64 = ctx.r4.s64 + -13656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0A30;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r10,1260
	ctx.r5.s64 = ctx.r10.s64 + 1260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0A5C;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13624
	ctx.r4.s64 = ctx.r4.s64 + -13624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0A78;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1240
	ctx.r5.s64 = ctx.r10.s64 + 1240;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0AA4;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13592
	ctx.r4.s64 = ctx.r4.s64 + -13592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0AC0;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1220
	ctx.r5.s64 = ctx.r10.s64 + 1220;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0AEC;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-9776
	ctx.r4.s64 = ctx.r4.s64 + -9776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0B08;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1204
	ctx.r5.s64 = ctx.r10.s64 + 1204;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0B34;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-9640
	ctx.r4.s64 = ctx.r4.s64 + -9640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0B50;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r10,1192
	ctx.r5.s64 = ctx.r10.s64 + 1192;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0B7C;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r4,872
	ctx.r4.s64 = ctx.r4.s64 + 872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0B98;
	sub_821C2FB0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r11,1176
	ctx.r5.s64 = ctx.r11.s64 + 1176;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82614440
	ctx.lr = 0x824A0BC4;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r4,-13504
	ctx.r4.s64 = ctx.r4.s64 + -13504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0BE0;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1160
	ctx.r5.s64 = ctx.r10.s64 + 1160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0C0C;
	sub_82614440(ctx, base);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-29448
	ctx.r4.s64 = ctx.r4.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0C28;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,1152
	ctx.r4.s64 = ctx.r10.s64 + 1152;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0C54;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13328
	ctx.r4.s64 = ctx.r4.s64 + -13328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0C70;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-20884
	ctx.r4.s64 = ctx.r10.s64 + -20884;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0C9C;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13344
	ctx.r4.s64 = ctx.r4.s64 + -13344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0CB8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,2068
	ctx.r4.s64 = ctx.r10.s64 + 2068;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0CE4;
	sub_82614440(ctx, base);
	// lis r4,-32179
	ctx.r4.s64 = -2108882944;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,31816
	ctx.r4.s64 = ctx.r4.s64 + 31816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0D00;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,1136
	ctx.r4.s64 = ctx.r10.s64 + 1136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0D2C;
	sub_82614440(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A0D34"))) PPC_WEAK_FUNC(sub_824A0D34);
PPC_FUNC_IMPL(__imp__sub_824A0D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0D38"))) PPC_WEAK_FUNC(sub_824A0D38);
PPC_FUNC_IMPL(__imp__sub_824A0D38) {
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
	// bl 0x8249fe58
	ctx.lr = 0x824A0D58;
	sub_8249FE58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a0d70
	if (ctx.cr6.eq) goto loc_824A0D70;
	// bl 0x82130588
	ctx.lr = 0x824A0D6C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824A0D70:
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

__attribute__((alias("__imp__sub_824A0D88"))) PPC_WEAK_FUNC(sub_824A0D88);
PPC_FUNC_IMPL(__imp__sub_824A0D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x824A0D90;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,56576
	ctx.r12.u64 = ctx.r12.u64 | 56576;
	// subf r31,r12,r1
	ctx.r31.s64 = ctx.r1.s64 - ctx.r12.s64;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,8960
	ctx.r12.u64 = ctx.r12.u64 | 8960;
	// bl 0x823dbff4
	ctx.lr = 0x824A0DB4;
	sub_823DBFF4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r14,0(r13)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// li r21,60
	ctx.r21.s64 = 60;
	// stb r25,302(r30)
	PPC_STORE_U8(ctx.r30.u32 + 302, ctx.r25.u8);
	// addi r29,r31,1648
	ctx.r29.s64 = ctx.r31.s64 + 1648;
	// stb r25,303(r30)
	PPC_STORE_U8(ctx.r30.u32 + 303, ctx.r25.u8);
	// li r26,254
	ctx.r26.s64 = 254;
	// stb r25,306(r30)
	PPC_STORE_U8(ctx.r30.u32 + 306, ctx.r25.u8);
	// stw r25,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r25.u32);
loc_824A0DEC:
	// lwzx r28,r21,r14
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r14.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824a0e3c
	if (ctx.cr6.eq) goto loc_824A0E3C;
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824a0e3c
	if (ctx.cr6.eq) goto loc_824A0E3C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82187a38
	ctx.lr = 0x824A0E10;
	sub_82187A38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824a0e3c
	if (ctx.cr6.eq) goto loc_824A0E3C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217d890
	ctx.lr = 0x824A0E24;
	sub_8217D890(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r21,r14
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r14.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// bl 0x824d0fc8
	ctx.lr = 0x824A0E38;
	sub_824D0FC8(ctx, base);
	// b 0x824a0e40
	goto loc_824A0E40;
loc_824A0E3C:
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
loc_824A0E40:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bge 0x824a0dec
	if (!ctx.cr0.lt) goto loc_824A0DEC;
	// bl 0x821bbea8
	ctx.lr = 0x824A0E50;
	sub_821BBEA8(ctx, base);
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x824a0248
	ctx.lr = 0x824A0E5C;
	sub_824A0248(ctx, base);
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r3,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r3.u32);
	// sth r29,222(r30)
	PPC_STORE_U16(ctx.r30.u32 + 222, ctx.r29.u16);
	// bl 0x821bbf00
	ctx.lr = 0x824A0E6C;
	sub_821BBF00(ctx, base);
	// addi r11,r31,1648
	ctx.r11.s64 = ctx.r31.s64 + 1648;
	// addi r10,r31,624
	ctx.r10.s64 = ctx.r31.s64 + 624;
	// stw r11,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r11.u32);
	// li r3,240
	ctx.r3.s64 = 240;
	// stw r10,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r10.u32);
	// stw r25,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r25.u32);
	// bl 0x82130528
	ctx.lr = 0x824A0E88;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a0e9c
	if (ctx.cr6.eq) goto loc_824A0E9C;
	// bl 0x824d9240
	ctx.lr = 0x824A0E94;
	sub_824D9240(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x824a0ea0
	goto loc_824A0EA0;
loc_824A0E9C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_824A0EA0:
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82614ac0
	ctx.lr = 0x824A0EAC;
	sub_82614AC0(ctx, base);
	// addi r4,r31,2672
	ctx.r4.s64 = ctx.r31.s64 + 2672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a0400
	ctx.lr = 0x824A0EB8;
	sub_824A0400(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82614588
	ctx.lr = 0x824A0EC8;
	sub_82614588(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r8,304(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 304);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r15,16
	ctx.r15.s64 = 16;
	// lfs f31,3796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// li r17,32
	ctx.r17.s64 = 32;
	// li r16,48
	ctx.r16.s64 = 48;
	// addi r19,r11,1788
	ctx.r19.s64 = ctx.r11.s64 + 1788;
	// addi r20,r10,11856
	ctx.r20.s64 = ctx.r10.s64 + 11856;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824a12a0
	if (!ctx.cr6.eq) goto loc_824A12A0;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82614a10
	ctx.lr = 0x824A0F04;
	sub_82614A10(ctx, base);
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82130528
	ctx.lr = 0x824A0F0C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a0f20
	if (ctx.cr6.eq) goto loc_824A0F20;
	// bl 0x824d9240
	ctx.lr = 0x824A0F18;
	sub_824D9240(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x824a0f24
	goto loc_824A0F24;
loc_824A0F20:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_824A0F24:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-31000
	ctx.r4.s64 = ctx.r11.s64 + -31000;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0F40;
	sub_821C2FB0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r9,19832
	ctx.r4.s64 = ctx.r9.s64 + 19832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0F6C;
	sub_82614440(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,180(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-13312
	ctx.r4.s64 = ctx.r4.s64 + -13312;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0F88;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0FB0;
	sub_82614440(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,180(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,-13296
	ctx.r4.s64 = ctx.r9.s64 + -13296;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x821c2fb0
	ctx.lr = 0x824A0FCC;
	sub_821C2FB0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r6,1780
	ctx.r4.s64 = ctx.r6.s64 + 1780;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A0FF8;
	sub_82614440(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821cf7f0
	ctx.lr = 0x824A1000;
	sub_821CF7F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82614588
	ctx.lr = 0x824A1010;
	sub_82614588(ctx, base);
	// stw r25,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r25.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82130528
	ctx.lr = 0x824A101C;
	sub_82130528(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f29,14192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14192);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x824a1054
	if (ctx.cr6.eq) goto loc_824A1054;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d9798
	ctx.lr = 0x824A104C;
	sub_824D9798(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x824a1058
	goto loc_824A1058;
loc_824A1054:
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_824A1058:
	// stw r27,144(r24)
	PPC_STORE_U32(ctx.r24.u32 + 144, ctx.r27.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824d9a58
	ctx.lr = 0x824A1068;
	sub_824D9A58(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f30,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x824a1084
	if (ctx.cr6.eq) goto loc_824A1084;
	// stfs f1,8(r24)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// stfs f1,4(r24)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// b 0x824a108c
	goto loc_824A108C;
loc_824A1084:
	// stfs f30,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// stfs f30,4(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
loc_824A108C:
	// stfs f31,316(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 316, temp.u32);
	// stb r25,309(r30)
	PPC_STORE_U8(ctx.r30.u32 + 309, ctx.r25.u8);
	// stb r25,311(r30)
	PPC_STORE_U8(ctx.r30.u32 + 311, ctx.r25.u8);
	// li r3,128
	ctx.r3.s64 = 128;
	// stb r28,304(r30)
	PPC_STORE_U8(ctx.r30.u32 + 304, ctx.r28.u8);
	// stb r28,302(r30)
	PPC_STORE_U8(ctx.r30.u32 + 302, ctx.r28.u8);
	// bl 0x82130528
	ctx.lr = 0x824A10A8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1114
	if (ctx.cr6.eq) goto loc_824A1114;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r25,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r25.u8);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// stb r29,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r29.u8);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// stb r29,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r29.u8);
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// lfs f3,31308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31308);
	ctx.f3.f64 = double(temp.f32);
	// stb r29,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r29.u8);
	// stb r25,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r25.u8);
	// lfs f1,30712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30712);
	ctx.f1.f64 = double(temp.f32);
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// stb r28,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r28.u8);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x824d0b38
	ctx.lr = 0x824A1110;
	sub_824D0B38(ctx, base);
	// b 0x824a1118
	goto loc_824A1118;
loc_824A1114:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A1118:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r25,70(r9)
	PPC_STORE_U8(ctx.r9.u32 + 70, ctx.r25.u8);
	// lwz r8,208(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lhz r11,208(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 208);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,71(r5)
	PPC_STORE_U8(ctx.r5.u32 + 71, ctx.r7.u8);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stb r25,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r25.u8);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,68(r10)
	PPC_STORE_U8(ctx.r10.u32 + 68, ctx.r29.u8);
	// lwz r9,208(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stb r29,69(r8)
	PPC_STORE_U8(ctx.r8.u32 + 69, ctx.r29.u8);
	// lwz r7,208(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stfs f31,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lhz r11,208(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824a123c
	if (!ctx.cr6.gt) goto loc_824A123C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_824A1188:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82130528
	ctx.lr = 0x824A1190;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a11a4
	if (ctx.cr6.eq) goto loc_824A11A4;
	// bl 0x824d9240
	ctx.lr = 0x824A119C;
	sub_824D9240(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x824a11a8
	goto loc_824A11A8;
loc_824A11A4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_824A11A8:
	// lwz r10,196(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r29,128
	ctx.r11.s64 = ctx.r29.s64 + 128;
	// li r3,192
	ctx.r3.s64 = 192;
	// lwzx r8,r28,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stw r8,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r8.u32);
	// lwz r7,196(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// stwx r9,r28,r7
	PPC_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r10,204(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r15
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r17
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r10,r16
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82130528
	ctx.lr = 0x824A11F4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1220
	if (ctx.cr6.eq) goto loc_824A1220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,14(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 14);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f2,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824d9798
	ctx.lr = 0x824A121C;
	sub_824D9798(ctx, base);
	// b 0x824a1224
	goto loc_824A1224;
loc_824A1220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A1224:
	// addi r11,r31,628
	ctx.r11.s64 = ctx.r31.s64 + 628;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// stwx r3,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x824a1188
	if (!ctx.cr0.eq) goto loc_824A1188;
loc_824A123C:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823db6d0
	ctx.lr = 0x824A1248;
	sub_823DB6D0(ctx, base);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a127c
	if (ctx.cr6.eq) goto loc_824A127C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x823db670
	ctx.lr = 0x824A1268;
	sub_823DB670(ctx, base);
	// lwz r9,208(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stb r10,127(r8)
	PPC_STORE_U8(ctx.r8.u32 + 127, ctx.r10.u8);
	// b 0x824a1288
	goto loc_824A1288;
loc_824A127C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,84(r9)
	PPC_STORE_U8(ctx.r9.u32 + 84, ctx.r10.u8);
loc_824A1288:
	// lhz r11,208(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 208);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,303(r30)
	PPC_STORE_U8(ctx.r30.u32 + 303, ctx.r9.u8);
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
loc_824A12A0:
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r25,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r25.u32);
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
	// stw r25,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2610
	if (ctx.cr6.eq) goto loc_824A2610;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x824A12C4;
	sub_82130528(ctx, base);
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// addi r4,r31,624
	ctx.r4.s64 = ctx.r31.s64 + 624;
	// stw r3,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r3.u32);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x823da950
	ctx.lr = 0x824A12D8;
	sub_823DA950(ctx, base);
	// lbz r29,302(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x824a12ec
	if (!ctx.cr6.gt) goto loc_824A12EC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824A12EC:
	// bl 0x82130528
	ctx.lr = 0x824A12F0;
	sub_82130528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824a1374
	if (ctx.cr6.eq) goto loc_824A1374;
	// addic. r26,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r26.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// blt 0x824a136c
	if (ctx.cr0.lt) goto loc_824A136C;
loc_824A130C:
	// lwzx r28,r21,r14
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r14.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824a135c
	if (ctx.cr6.eq) goto loc_824A135C;
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824a135c
	if (ctx.cr6.eq) goto loc_824A135C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82187a38
	ctx.lr = 0x824A1330;
	sub_82187A38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824a135c
	if (ctx.cr6.eq) goto loc_824A135C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217d890
	ctx.lr = 0x824A1344;
	sub_8217D890(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwzx r4,r21,r14
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r14.u32);
	// bl 0x824d0fc8
	ctx.lr = 0x824A1358;
	sub_824D0FC8(ctx, base);
	// b 0x824a1360
	goto loc_824A1360;
loc_824A135C:
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_824A1360:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bge 0x824a130c
	if (!ctx.cr0.lt) goto loc_824A130C;
loc_824A136C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x824a1378
	goto loc_824A1378;
loc_824A1374:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_824A1378:
	// stw r4,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r4.u32);
	// addi r7,r31,368
	ctx.r7.s64 = ctx.r31.s64 + 368;
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lbz r5,302(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// bl 0x8249daa0
	ctx.lr = 0x824A1390;
	sub_8249DAA0(ctx, base);
	// lbz r11,302(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a142c
	if (ctx.cr6.eq) goto loc_824A142C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r25,r11,1704
	ctx.r25.s64 = ctx.r11.s64 + 1704;
loc_824A13AC:
	// lbz r11,302(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1418
	if (ctx.cr6.eq) goto loc_824A1418;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_824A13C0:
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x824a1404
	if (ctx.cr6.eq) goto loc_824A1404;
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwzx r11,r27,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// addi r3,r10,84
	ctx.r3.s64 = ctx.r10.s64 + 84;
	// bl 0x823db730
	ctx.lr = 0x824A13E0;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824a1404
	if (!ctx.cr6.eq) goto loc_824A1404;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r6,r11,84
	ctx.r6.s64 = ctx.r11.s64 + 84;
	// bl 0x82130000
	ctx.lr = 0x824A1404;
	sub_82130000(ctx, base);
loc_824A1404:
	// lbz r11,302(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a13c0
	if (ctx.cr6.lt) goto loc_824A13C0;
loc_824A1418:
	// lbz r11,302(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a13ac
	if (ctx.cr6.lt) goto loc_824A13AC;
loc_824A142C:
	// lbz r10,300(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 300);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a1478
	if (ctx.cr6.eq) goto loc_824A1478;
loc_824A143C:
	// lwz r10,256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r9,r31,368
	ctx.r9.s64 = ctx.r31.s64 + 368;
	// addi r8,r31,368
	ctx.r8.s64 = ctx.r31.s64 + 368;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r6,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// lbz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 300);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x824a143c
	if (ctx.cr6.lt) goto loc_824A143C;
loc_824A1478:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x824a1490
	if (ctx.cr6.gt) goto loc_824A1490;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A1490:
	// lbz r8,303(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a14cc
	if (ctx.cr6.eq) goto loc_824A14CC;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
loc_824A14A8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,144(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// lfs f0,112(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x824a14c0
	if (!ctx.cr6.gt) goto loc_824A14C0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824A14C0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x824a14a8
	if (!ctx.cr0.eq) goto loc_824A14A8;
loc_824A14CC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a153c
	if (!ctx.cr6.eq) goto loc_824A153C;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82614a10
	ctx.lr = 0x824A14E0;
	sub_82614A10(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-5344
	ctx.r4.s64 = ctx.r11.s64 + -5344;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x821c2fb0
	ctx.lr = 0x824A14FC;
	sub_821C2FB0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x82614440
	ctx.lr = 0x824A1524;
	sub_82614440(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821cf7f0
	ctx.lr = 0x824A152C;
	sub_821CF7F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82614588
	ctx.lr = 0x824A153C;
	sub_82614588(ctx, base);
loc_824A153C:
	// lwz r29,192(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x824a1720
	if (!ctx.cr6.gt) goto loc_824A1720;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x824a155c
	if (!ctx.cr6.gt) goto loc_824A155C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A155C:
	// bl 0x82130528
	ctx.lr = 0x824A1560;
	sub_82130528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x824a16bc
	if (ctx.cr6.eq) goto loc_824A16BC;
	// addic. r28,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r28.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// blt 0x824a1604
	if (ctx.cr0.lt) goto loc_824A1604;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,-26560
	ctx.r27.s64 = ctx.r11.s64 + -26560;
loc_824A1580:
	// lwzx r3,r21,r14
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r14.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a15f4
	if (ctx.cr6.eq) goto loc_824A15F4;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824a15f4
	if (ctx.cr6.eq) goto loc_824A15F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble 0x824a15f4
	if (!ctx.cr0.gt) goto loc_824A15F4;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_824A15B4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a15d4
	if (ctx.cr6.lt) goto loc_824A15D4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a15d8
	if (ctx.cr6.lt) goto loc_824A15D8;
loc_824A15D4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A15D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a160c
	if (!ctx.cr6.eq) goto loc_824A160C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a15b4
	if (ctx.cr6.lt) goto loc_824A15B4;
loc_824A15F4:
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_824A15F8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bge 0x824a1580
	if (!ctx.cr0.lt) goto loc_824A1580;
loc_824A1604:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x824a16c0
	goto loc_824A16C0;
loc_824A160C:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x824a15f4
	if (ctx.cr6.eq) goto loc_824A15F4;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lhz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add. r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x824a1670
	if (!ctx.cr0.gt) goto loc_824A1670;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
loc_824A1630:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a1650
	if (ctx.cr6.lt) goto loc_824A1650;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a1654
	if (ctx.cr6.lt) goto loc_824A1654;
loc_824A1650:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A1654:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a1694
	if (!ctx.cr6.eq) goto loc_824A1694;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824a1630
	if (ctx.cr6.lt) goto loc_824A1630;
loc_824A1670:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821d2378
	ctx.lr = 0x824A1678;
	sub_821D2378(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A167C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwzx r4,r21,r14
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r14.u32);
	// bl 0x824d9688
	ctx.lr = 0x824A1690;
	sub_824D9688(ctx, base);
	// b 0x824a15f8
	goto loc_824A15F8;
loc_824A1694:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x824a1670
	if (ctx.cr6.eq) goto loc_824A1670;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x824a167c
	goto loc_824A167C;
loc_824A16BC:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_824A16C0:
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823da950
	ctx.lr = 0x824A16D4;
	sub_823DA950(ctx, base);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x824a16e8
	if (!ctx.cr6.gt) goto loc_824A16E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A16E8:
	// bl 0x82130528
	ctx.lr = 0x824A16EC;
	sub_82130528(ctx, base);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823da950
	ctx.lr = 0x824A1700;
	sub_823DA950(ctx, base);
	// bl 0x821bbea8
	ctx.lr = 0x824A1704;
	sub_821BBEA8(ctx, base);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x82130588
	ctx.lr = 0x824A170C;
	sub_82130588(ctx, base);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x824A1714;
	sub_82130588(ctx, base);
	// bl 0x821bbf00
	ctx.lr = 0x824A1718;
	sub_821BBF00(ctx, base);
	// stw r29,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r29.u32);
	// stw r28,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r28.u32);
loc_824A1720:
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82130528
	ctx.lr = 0x824A1728;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1738
	if (ctx.cr6.eq) goto loc_824A1738;
	// bl 0x82599ca8
	ctx.lr = 0x824A1734;
	sub_82599CA8(ctx, base);
	// b 0x824a173c
	goto loc_824A173C;
loc_824A1738:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_824A173C:
	// stw r3,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r3.u32);
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// ble cr6,0x824a175c
	if (!ctx.cr6.gt) goto loc_824A175C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A175C:
	// bl 0x82130528
	ctx.lr = 0x824A1760;
	sub_82130528(ctx, base);
	// stw r3,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,303(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// bl 0x8259b0a0
	ctx.lr = 0x824A1774;
	sub_8259B0A0(ctx, base);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r29,r11,-31280
	ctx.r29.s64 = ctx.r11.s64 + -31280;
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a181c
	if (ctx.cr6.eq) goto loc_824A181C;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_824A1794:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,236(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r11,132(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 132);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// lvx128 v59,r0,r10
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r10,r15
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r10,r17
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r10,r16
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvx128 v63,r0,r29
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r29,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r29,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r29,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r6,303(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824a1794
	if (ctx.cr6.lt) goto loc_824A1794;
loc_824A181C:
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82130528
	ctx.lr = 0x824A1824;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1834
	if (ctx.cr6.eq) goto loc_824A1834;
	// bl 0x8258f620
	ctx.lr = 0x824A1830;
	sub_8258F620(ctx, base);
	// b 0x824a1838
	goto loc_824A1838;
loc_824A1834:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_824A1838:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// stw r3,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lbz r9,-2084(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2084);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a185c
	if (ctx.cr6.eq) goto loc_824A185C;
	// lhz r11,26(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r11.u16);
loc_824A185C:
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a187c
	if (ctx.cr6.eq) goto loc_824A187C;
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x823db6d0
	ctx.lr = 0x824A1870;
	sub_823DB6D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x824a1880
	if (!ctx.cr6.eq) goto loc_824A1880;
loc_824A187C:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
loc_824A1880:
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lis r9,4095
	ctx.r9.s64 = 268369920;
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r8,228(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lfs f0,324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x824a18b0
	if (!ctx.cr6.gt) goto loc_824A18B0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A18B0:
	// bl 0x82130528
	ctx.lr = 0x824A18B4;
	sub_82130528(ctx, base);
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// stw r3,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r3.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x824a18cc
	if (!ctx.cr6.gt) goto loc_824A18CC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A18CC:
	// bl 0x82130528
	ctx.lr = 0x824A18D0;
	sub_82130528(ctx, base);
	// stw r3,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r3.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r23,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r23.u32);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// beq cr6,0x824a1ac0
	if (ctx.cr6.eq) goto loc_824A1AC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r29,20(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 20);
	// addi r8,r31,352
	ctx.r8.s64 = ctx.r31.s64 + 352;
	// addi r7,r31,272
	ctx.r7.s64 = ctx.r31.s64 + 272;
	// addi r6,r31,240
	ctx.r6.s64 = ctx.r31.s64 + 240;
	// addi r5,r31,216
	ctx.r5.s64 = ctx.r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249ce60
	ctx.lr = 0x824A190C;
	sub_8249CE60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1924
	if (ctx.cr6.eq) goto loc_824A1924;
	// lbz r11,307(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 307);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,307(r30)
	PPC_STORE_U8(ctx.r30.u32 + 307, ctx.r10.u8);
loc_824A1924:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82130528
	ctx.lr = 0x824A192C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1944
	if (ctx.cr6.eq) goto loc_824A1944;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821b5e40
	ctx.lr = 0x824A1940;
	sub_821B5E40(ctx, base);
	// b 0x824a1948
	goto loc_824A1948;
loc_824A1944:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_824A1948:
	// stw r3,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x821b5c60
	ctx.lr = 0x824A1960;
	sub_821B5C60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a15b8
	ctx.lr = 0x824A1968;
	sub_821A15B8(ctx, base);
	// stw r3,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r3.u32);
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a1998
	if (!ctx.cr6.eq) goto loc_824A1998;
	// lfs f0,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x824a1990
	if (ctx.cr6.gt) goto loc_824A1990;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A1990:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// b 0x824a19a8
	goto loc_824A19A8;
loc_824A1998:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
loc_824A19A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,284(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// bl 0x821a1848
	ctx.lr = 0x824A19B8;
	sub_821A1848(ctx, base);
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x824A19C8;
	sub_823DBFF4(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lhz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 20);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// beq cr6,0x824a1a3c
	if (ctx.cr6.eq) goto loc_824A1A3C;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// subfic r8,r10,-32
	ctx.xer.ca = ctx.r10.u32 <= 4294967264;
	ctx.r8.s64 = -32 - ctx.r10.s64;
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-16
	ctx.r7.s64 = -16;
loc_824A19F8:
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v55,r0,r10
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r15
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r10,r17
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r10,r16
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r11,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lhz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 20);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x824a19f8
	if (ctx.cr6.lt) goto loc_824A19F8;
loc_824A1A3C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82130528
	ctx.lr = 0x824A1A44;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1a5c
	if (ctx.cr6.eq) goto loc_824A1A5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821b5e40
	ctx.lr = 0x824A1A58;
	sub_821B5E40(ctx, base);
	// b 0x824a1a60
	goto loc_824A1A60;
loc_824A1A5C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_824A1A60:
	// stw r3,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x821b5c60
	ctx.lr = 0x824A1A78;
	sub_821B5C60(ctx, base);
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1ac0
	if (ctx.cr6.eq) goto loc_824A1AC0;
	// addi r11,r31,624
	ctx.r11.s64 = ctx.r31.s64 + 624;
loc_824A1A8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,144(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// stw r28,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r28.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,148(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a1aac
	if (ctx.cr6.eq) goto loc_824A1AAC;
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
loc_824A1AAC:
	// lbz r10,303(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a1a8c
	if (ctx.cr6.lt) goto loc_824A1A8C;
loc_824A1AC0:
	// bl 0x821bbea8
	ctx.lr = 0x824A1AC4;
	sub_821BBEA8(ctx, base);
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82130528
	ctx.lr = 0x824A1ACC;
	sub_82130528(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82130528
	ctx.lr = 0x824A1AD8;
	sub_82130528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// bl 0x821bbf00
	ctx.lr = 0x824A1AE4;
	sub_821BBF00(ctx, base);
	// stw r23,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r23.u32);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// subf r9,r29,r14
	ctx.r9.s64 = ctx.r14.s64 - ctx.r29.s64;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// li r15,-1
	ctx.r15.s64 = -1;
loc_824A1AFC:
	// stwx r15,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r15.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x824a1afc
	if (!ctx.cr0.eq) goto loc_824A1AFC;
	// lbz r11,302(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824a1b2c
	if (!ctx.cr6.gt) goto loc_824A1B2C;
	// lbz r11,307(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 307);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,307(r30)
	PPC_STORE_U8(ctx.r30.u32 + 307, ctx.r10.u8);
loc_824A1B2C:
	// stb r23,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r23.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r23,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r23.u32);
	// beq cr6,0x824a1e8c
	if (ctx.cr6.eq) goto loc_824A1E8C;
	// li r12,-32768
	ctx.r12.s64 = -32768;
	// bl 0x823dbff4
	ctx.lr = 0x824A1B44;
	sub_823DBFF4(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// li r12,-8192
	ctx.r12.s64 = -8192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// bl 0x823dbff4
	ctx.lr = 0x824A1B5C;
	sub_823DBFF4(ctx, base);
	// lwz r10,0(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// stwux r10,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// addi r22,r1,192
	ctx.r22.s64 = ctx.r1.s64 + 192;
	// bl 0x8244d150
	ctx.lr = 0x824A1B78;
	sub_8244D150(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8244d150
	ctx.lr = 0x824A1B88;
	sub_8244D150(ctx, base);
	// lbz r9,303(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r27,212(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// beq cr6,0x824a1e8c
	if (ctx.cr6.eq) goto loc_824A1E8C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lis r10,-32122
	ctx.r10.s64 = -2105147392;
	// lis r9,-32122
	ctx.r9.s64 = -2105147392;
	// lwz r26,200(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// subf r17,r22,r11
	ctx.r17.s64 = ctx.r11.s64 - ctx.r22.s64;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lis r8,-32122
	ctx.r8.s64 = -2105147392;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// li r18,80
	ctx.r18.s64 = 80;
	// addi r19,r11,-31664
	ctx.r19.s64 = ctx.r11.s64 + -31664;
	// addi r24,r10,2352
	ctx.r24.s64 = ctx.r10.s64 + 2352;
	// addi r23,r9,2384
	ctx.r23.s64 = ctx.r9.s64 + 2384;
	// addi r16,r8,2256
	ctx.r16.s64 = ctx.r8.s64 + 2256;
loc_824A1BD0:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r31,197
	ctx.r9.s64 = ctx.r31.s64 + 197;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r8,r31,196
	ctx.r8.s64 = ctx.r31.s64 + 196;
	// addi r7,r31,198
	ctx.r7.s64 = ctx.r31.s64 + 198;
	// addi r6,r31,195
	ctx.r6.s64 = ctx.r31.s64 + 195;
	// addi r5,r31,193
	ctx.r5.s64 = ctx.r31.s64 + 193;
	// lhz r10,14(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// addi r4,r31,194
	ctx.r4.s64 = ctx.r31.s64 + 194;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// mulli r10,r29,224
	ctx.r10.s64 = ctx.r29.s64 * 224;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8249cc20
	ctx.lr = 0x824A1C08;
	sub_8249CC20(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x824a1dbc
	if (ctx.cr6.eq) goto loc_824A1DBC;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1c2c
	if (ctx.cr6.eq) goto loc_824A1C2C;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r14
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824a1dbc
	if (ctx.cr6.eq) goto loc_824A1DBC;
loc_824A1C2C:
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r14
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r14.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824a1cb8
	if (!ctx.cr6.eq) goto loc_824A1CB8;
	// lbz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
loc_824A1C44:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824a1ca0
	if (ctx.cr6.eq) goto loc_824A1CA0;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// beq cr6,0x824a1ca0
	if (ctx.cr6.eq) goto loc_824A1CA0;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r5,70(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 70);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r14
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r14.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x824a1c90
	if (ctx.cr6.eq) goto loc_824A1C90;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x824a1c94
	goto loc_824A1C94;
loc_824A1C90:
	// lbz r9,69(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
loc_824A1C94:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x824a1c44
	if (ctx.cr6.eq) goto loc_824A1C44;
	// b 0x824a1cac
	goto loc_824A1CAC;
loc_824A1CA0:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x824a1cac
	if (!ctx.cr6.eq) goto loc_824A1CAC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_824A1CAC:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r14
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// stwx r10,r8,r14
	PPC_STORE_U32(ctx.r8.u32 + ctx.r14.u32, ctx.r10.u32);
loc_824A1CB8:
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r31,228
	ctx.r10.s64 = ctx.r31.s64 + 228;
	// lwzx r11,r8,r14
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r14.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r23
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v62,r0,r24
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,144(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 144);
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r31,224
	ctx.r6.s64 = ctx.r31.s64 + 224;
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// addi r11,r10,128
	ctx.r11.s64 = ctx.r10.s64 + 128;
	// lwz r28,200(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lfsx f13,r4,r22
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r5,48
	ctx.r5.s64 = 48;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lwz r4,192(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// stfs f13,228(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lvlx128 v34,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r31,220
	ctx.r29.s64 = ctx.r31.s64 + 220;
	// lvx128 v47,r11,r3
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lvx128 v51,r11,r7
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lvx128 v50,r0,r11
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r5
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v48,v50,v51
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// lvx128 v45,r4,r18
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v44,v47,v49
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vand128 v43,v45,v63
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vmrglw128 v46,v50,v51
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrglw128 v42,v47,v49
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// lvlx128 v33,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v33,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), 0xFF));
	// lvx128 v41,r0,r10
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v39,v62,v43
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// vmrglw128 v40,v48,v44
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v38,v46,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vrefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v63.f32)));
	// vmrghw128 v37,v48,v44
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v62,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vor128 v11,v63,v63
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmsum4fp128 v36,v39,v40
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// lvx128 v13,r0,r19
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v35,v39,v38
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vspltw128 v12,v34,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), 0xFF));
	// vmsum4fp128 v32,v39,v37
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmulfp128 v10,v41,v61
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v61.f32)));
	// vnmsubfp v7,v0,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmrghw128 v60,v36,v39
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v59,v32,v35
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmaddfp v5,v0,v7,v0
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmrghw128 v8,v59,v60
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmaddfp v6,v8,v12,v10
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v58,v6,v5
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v58,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r11,r8,r14
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r14.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r22
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r22.u32, temp.u32);
	// b 0x824a1e78
	goto loc_824A1E78;
loc_824A1DBC:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r17,r25
	PPC_STORE_U32(ctx.r17.u32 + ctx.r25.u32, ctx.r20.u32);
	// stwx r21,r11,r14
	PPC_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r21.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// lwz r11,192(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bne cr6,0x824a1de4
	if (!ctx.cr6.eq) goto loc_824A1DE4;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_824A1DE4:
	// lvx128 v57,r0,r11
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v57,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// vor128 v56,v57,v57
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lvx128 v63,r0,r23
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v55,v56,v63
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvx128 v62,r0,r24
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,144(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// vor128 v54,v62,v55
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lvx128 v53,r0,r11
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r11,r10
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r11,r9
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r11,r8
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v48,v51,v52
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v49,v53,v50
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrglw128 v47,v53,v50
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrglw128 v46,v51,v52
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrglw128 v45,v49,v48
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v44,v49,v48
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v43,v47,v46
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v42,v54,v45
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v41,v54,v44
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v40,v54,v43
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmrghw128 v39,v42,v54
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmrghw128 v38,v41,v40
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v37,v38,v39
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// stvx128 v37,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_824A1E78:
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a1bd0
	if (ctx.cr6.lt) goto loc_824A1BD0;
loc_824A1E8C:
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r29,212(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2414
	if (ctx.cr6.eq) goto loc_824A2414;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r19,128
	ctx.r19.s64 = 128;
	// addi r18,r11,-31584
	ctx.r18.s64 = ctx.r11.s64 + -31584;
	// addi r17,r10,1024
	ctx.r17.s64 = ctx.r10.s64 + 1024;
loc_824A1EC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r26,16
	ctx.r26.s64 = 16;
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r24,32
	ctx.r24.s64 = 32;
	// li r23,48
	ctx.r23.s64 = 48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r28,14(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// beq cr6,0x824a1fd0
	if (ctx.cr6.eq) goto loc_824A1FD0;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// lwz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r8,r31,288
	ctx.r8.s64 = ctx.r31.s64 + 288;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r31,304
	ctx.r7.s64 = ctx.r31.s64 + 304;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r6,r31,320
	ctx.r6.s64 = ctx.r31.s64 + 320;
	// addi r5,r31,336
	ctx.r5.s64 = ctx.r31.s64 + 336;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r23
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r10,r26
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v36,r0,r11
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r11,r26
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v34,v36,0
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), 0xFF));
	// lvx128 v33,r11,r24
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v32,v35,0
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), 0xFF));
	// lvx128 v63,r11,r23
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v62,v33,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), 0xFF));
	// vspltw128 v11,v63,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmulfp128 v10,v0,v34
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v34.f32)));
	// vspltw128 v9,v36,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), 0xAA));
	// vmulfp128 v8,v0,v32
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v32.f32)));
	// vspltw128 v7,v35,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), 0xAA));
	// vmulfp128 v6,v0,v62
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v62.f32)));
	// vspltw128 v5,v33,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), 0xAA));
	// vmaddfp v4,v0,v11,v12
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v3,v63,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v2,v36,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), 0x55));
	// lvx128 v0,r10,r24
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v1,v35,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), 0x55));
	// vspltw128 v31,v33,2
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), 0x55));
	// vspltw128 v30,v63,2
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vmaddfp v29,v13,v9,v10
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v28,v13,v7,v8
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v27,v13,v5,v6
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v26,v13,v3,v4
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v13,v0,v2,v29
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v29.f32)));
	// vmaddfp v12,v0,v1,v28
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v11,v0,v31,v27
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v27.f32)));
	// vmaddfp v0,v0,v30,v26
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v26.f32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x821713c0
	ctx.lr = 0x824A1FC0;
	sub_821713C0(ctx, base);
	// lbz r11,306(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 306);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r4,306(r30)
	PPC_STORE_U8(ctx.r30.u32 + 306, ctx.r4.u8);
	// b 0x824a2004
	goto loc_824A2004;
loc_824A1FD0:
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// vupkd3d128 v60,v61,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v61.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v61.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// vpermwi128 v59,v60,234
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x15));
	// vpermwi128 v58,v60,186
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x45));
	// vpermwi128 v57,v60,174
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x51));
	// stvx128 v59,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824A2004:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a22d4
	if (ctx.cr6.eq) goto loc_824A22D4;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r31,194
	ctx.r9.s64 = ctx.r31.s64 + 194;
	// mulli r10,r28,224
	ctx.r10.s64 = ctx.r28.s64 * 224;
	// addi r8,r31,193
	ctx.r8.s64 = ctx.r31.s64 + 193;
	// addi r7,r31,195
	ctx.r7.s64 = ctx.r31.s64 + 195;
	// addi r6,r31,198
	ctx.r6.s64 = ctx.r31.s64 + 198;
	// addi r5,r31,196
	ctx.r5.s64 = ctx.r31.s64 + 196;
	// addi r4,r31,197
	ctx.r4.s64 = ctx.r31.s64 + 197;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8249cc20
	ctx.lr = 0x824A203C;
	sub_8249CC20(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824a20b0
	if (ctx.cr6.eq) goto loc_824A20B0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2060
	if (ctx.cr6.eq) goto loc_824A2060;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r14
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x824a20b0
	if (!ctx.cr6.eq) goto loc_824A20B0;
loc_824A2060:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r8,212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lwzx r7,r10,r14
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lvx128 v56,r0,r10
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r10,r26
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r24
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r10,r23
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a2164
	goto loc_824A2164;
loc_824A20B0:
	// vspltisw128 v52,0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_set1_epi32(int(0x0)));
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// vupkd3d128 v51,v52,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v52.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v52.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v51 = vTemp;
	// lwzx r21,r10,r14
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// vpermwi128 v50,v51,234
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x15));
	// vpermwi128 v49,v51,186
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x45));
	// vpermwi128 v48,v51,174
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x51));
	// stvx128 v50,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,144(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// lwz r8,192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824a2164
	if (ctx.cr6.eq) goto loc_824A2164;
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r7,r21,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// lvx128 v47,r11,r23
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r7,r8
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v45,v46,v47
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v45.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v47.f32)));
	// lvx128 v44,r0,r11
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r11,r26
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r11,r24
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r10,r23
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r0,r10
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r10,r26
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r24
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v37,v43,v45
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v45.f32), 0xEF));
	// vmsum3fp128 v36,v42,v45
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v45.f32), 0xEF));
	// vmsum3fp128 v35,v44,v45
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v45.f32), 0xEF));
	// vmrghw128 v34,v37,v37
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v33,v35,v36
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v32,v33,v34
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vsubfp128 v63,v32,v41
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v41.f32)));
	// vmsum3fp128 v62,v39,v63
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v61,v38,v63
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v60,v40,v63
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmrghw128 v59,v62,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v58,v60,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v57,v58,v59
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v57,r9,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824A2164:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// vspltisw128 v56,0
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_set1_epi32(int(0x0)));
	// lwz r10,248(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lvx128 v55,r0,r11
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r11,r26
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r10,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r11,r24
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r10,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r11,r23
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r10,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lvx128 v51,r0,r11
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lvx128 v50,r0,r9
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r0,r8
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r0,r10
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v47,v51,v48
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v48.f32), 0xEF));
	// vmsum3fp128 v46,v50,v48
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v48.f32), 0xEF));
	// vmrghw128 v45,v51,v50
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmsum3fp128 v44,v49,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v48.f32), 0xEF));
	// vmrghw128 v43,v49,v48
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrglw128 v42,v49,v48
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrglw128 v41,v51,v50
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v40,v45,v43
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrglw128 v39,v45,v43
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v38,v41,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// stvx128 v40,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v37,v47,v46
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v36,v44,v37
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrghw128 v35,v37,v36
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vor128 v34,v35,v35
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_load_si128((__m128i*)ctx.v35.u8));
	// stvx128 v35,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v33,v56,v34
	_mm_store_ps(ctx.v33.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v34.f32)));
	// stvx128 v33,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lvx128 v63,r10,r24
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// lvx128 v60,r0,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r10,r26
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// lvx128 v32,r0,r11
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r10,r23
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r9
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v56,v58,v57
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vmsum3fp128 v55,v62,v63
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v54,v62,v60
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmsum3fp128 v53,v62,v59
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vmsum3fp128 v52,v61,v63
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v51,v61,v60
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmsum3fp128 v50,v61,v59
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vmsum3fp128 v49,v56,v63
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v48,v56,v60
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmsum3fp128 v47,v56,v59
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vmsum3fp128 v46,v32,v59
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vmsum3fp128 v45,v32,v63
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v44,v32,v60
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmrghw128 v43,v54,v55
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v42,v53,v62
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v41,v51,v52
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v40,v50,v61
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v39,v43,v42
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v38,v48,v49
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v37,v47,v58
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v36,v41,v40
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v34,v46,v32
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v35,v38,v37
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v33,v44,v45
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stvx128 v39,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v32,v33,v34
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// stvx128 v32,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x824a22d4
	if (ctx.cr6.eq) goto loc_824A22D4;
	// lbz r11,307(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 307);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,307(r30)
	PPC_STORE_U8(ctx.r30.u32 + 307, ctx.r10.u8);
loc_824A22D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a23a4
	if (ctx.cr6.eq) goto loc_824A23A4;
	// lwz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// lwzx r28,r8,r20
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r20.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824a2310
	if (ctx.cr6.eq) goto loc_824A2310;
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2370
	if (ctx.cr6.eq) goto loc_824A2370;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824a2364
	goto loc_824A2364;
loc_824A2310:
	// lwz r28,192(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x824a23a4
	if (ctx.cr6.eq) goto loc_824A23A4;
	// lbz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a2348
	if (!ctx.cr6.eq) goto loc_824A2348;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x824a2348
	if (!ctx.cr6.eq) goto loc_824A2348;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stb r11,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r11.u8);
	// bl 0x82130000
	ctx.lr = 0x824A2348;
	sub_82130000(ctx, base);
loc_824A2348:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82599f48
	ctx.lr = 0x824A235C;
	sub_82599F48(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
loc_824A2364:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2370
	if (ctx.cr6.eq) goto loc_824A2370;
	// lwz r26,192(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
loc_824A2370:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824a23a4
	if (ctx.cr6.eq) goto loc_824A23A4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A2394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r22,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a23b0
	goto loc_824A23B0;
loc_824A23A4:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// lvx128 v63,r0,r18
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r22,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824A23B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x824a23e8
	if (ctx.cr6.eq) goto loc_824A23E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A23D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,244(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r22,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a23f4
	goto loc_824A23F4;
loc_824A23E8:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// lvx128 v63,r0,r18
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r22,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824A23F4:
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a1ec4
	if (ctx.cr6.lt) goto loc_824A1EC4;
loc_824A2414:
	// bl 0x821bbea8
	ctx.lr = 0x824A2418;
	sub_821BBEA8(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82130588
	ctx.lr = 0x824A2420;
	sub_82130588(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130588
	ctx.lr = 0x824A2428;
	sub_82130588(ctx, base);
	// bl 0x821bbf00
	ctx.lr = 0x824A242C;
	sub_821BBF00(ctx, base);
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a24a8
	if (ctx.cr6.eq) goto loc_824A24A8;
	// lwz r8,240(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// lbz r9,303(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_824A2450:
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fsel f6,f12,f0,f13
	ctx.f6.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsel f4,f5,f6,f11
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f6.f64 : ctx.f11.f64;
	// fsubs f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsel f2,f3,f4,f10
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : ctx.f10.f64;
	// fsubs f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fsel f0,f1,f2,f9
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f2.f64 : ctx.f9.f64;
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f12,f13,f0,f8
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsubs f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fsel f0,f11,f12,f7
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// bne 0x824a2450
	if (!ctx.cr0.eq) goto loc_824A2450;
loc_824A24A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,307(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 307);
	// stfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,8884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// beq cr6,0x824a24f8
	if (ctx.cr6.eq) goto loc_824A24F8;
	// lwz r29,200(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825832c8
	ctx.lr = 0x824A24DC;
	sub_825832C8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v61,r0,r29
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v61,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r29
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r30,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a2500
	goto loc_824A2500;
loc_824A24F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259a580
	ctx.lr = 0x824A2500;
	sub_8259A580(ctx, base);
loc_824A2500:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249dc08
	ctx.lr = 0x824A2508;
	sub_8249DC08(ctx, base);
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// bl 0x8259a740
	ctx.lr = 0x824A2510;
	sub_8259A740(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// bl 0x8259ada8
	ctx.lr = 0x824A251C;
	sub_8259ADA8(ctx, base);
	// lwz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// bl 0x8258e6b8
	ctx.lr = 0x824A2528;
	sub_8258E6B8(ctx, base);
	// lbz r8,303(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// li r9,0
	ctx.r9.s64 = 0;
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// neg r6,r7
	ctx.r6.s64 = -ctx.r7.s64;
	// rlwinm r12,r6,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x824A2540;
	sub_823DBFF4(ctx, base);
	// lwz r5,0(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stwux r5,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// beq cr6,0x824a2594
	if (ctx.cr6.eq) goto loc_824A2594;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A255C:
	// lwz r8,212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// lwz r6,144(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// lwz r5,192(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x824a2580
	if (!ctx.cr6.eq) goto loc_824A2580;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824A2580:
	// lbz r8,303(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824a255c
	if (ctx.cr6.lt) goto loc_824A255C;
loc_824A2594:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a25ac
	if (!ctx.cr6.eq) goto loc_824A25AC;
	// lwz r5,240(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// bl 0x8258e7f0
	ctx.lr = 0x824A25AC;
	sub_8258E7F0(ctx, base);
loc_824A25AC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// li r15,16
	ctx.r15.s64 = 16;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r24,r8,65535
	ctx.r24.u64 = ctx.r8.u64 | 65535;
	// lbz r10,18244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18244);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a25f4
	if (ctx.cr6.eq) goto loc_824A25F4;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r11,19620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19620);
	// lwz r7,768(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// lwz r11,19620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19620);
	// lwz r6,228(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r5,772(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// stw r5,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r5.u32);
	// b 0x824a27e4
	goto loc_824A27E4;
loc_824A25F4:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r7,228(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r9,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r9.u32);
	// b 0x824a27e4
	goto loc_824A27E4;
loc_824A2610:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a27e4
	if (ctx.cr6.eq) goto loc_824A27E4;
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824a2660
	if (!ctx.cr6.eq) goto loc_824A2660;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r11,1624
	ctx.r3.s64 = ctx.r11.s64 + 1624;
	// bl 0x82130000
	ctx.lr = 0x824A2640;
	sub_82130000(ctx, base);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82614a50
	ctx.lr = 0x824A2648;
	sub_82614A50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
loc_824A2660:
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82130528
	ctx.lr = 0x824A2668;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2678
	if (ctx.cr6.eq) goto loc_824A2678;
	// bl 0x8258f620
	ctx.lr = 0x824A2674;
	sub_8258F620(ctx, base);
	// b 0x824a267c
	goto loc_824A267C;
loc_824A2678:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A267C:
	// stw r3,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r3.u32);
	// lis r28,-32112
	ctx.r28.s64 = -2104492032;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lbz r11,-2084(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -2084);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a26a0
	if (ctx.cr6.eq) goto loc_824A26A0;
	// lhz r11,26(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r11.u16);
loc_824A26A0:
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a26c0
	if (ctx.cr6.eq) goto loc_824A26C0;
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x823db6d0
	ctx.lr = 0x824A26B4;
	sub_823DB6D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x824a26c4
	if (!ctx.cr6.eq) goto loc_824A26C4;
loc_824A26C0:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
loc_824A26C4:
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lfs f0,324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r7,144(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r4,192(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// bl 0x8258e6b8
	ctx.lr = 0x824A26EC;
	sub_8258E6B8(ctx, base);
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r6,200(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824A2708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32115
	ctx.r29.s64 = -2104688640;
	// lwz r11,19620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19620);
	// lwz r3,768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r11,19620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19620);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r9,772(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r7,148(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a27e4
	if (ctx.cr6.eq) goto loc_824A27E4;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82130528
	ctx.lr = 0x824A2744;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2754
	if (ctx.cr6.eq) goto loc_824A2754;
	// bl 0x8258f620
	ctx.lr = 0x824A2750;
	sub_8258F620(ctx, base);
	// b 0x824a2758
	goto loc_824A2758;
loc_824A2754:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A2758:
	// stw r3,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lbz r11,-2084(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -2084);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2778
	if (ctx.cr6.eq) goto loc_824A2778;
	// lhz r11,26(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r11.u16);
loc_824A2778:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,232(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// bl 0x824896e8
	ctx.lr = 0x824A2784;
	sub_824896E8(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lfs f0,324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r4,192(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// bl 0x8258e6b8
	ctx.lr = 0x824A27A8;
	sub_8258E6B8(ctx, base);
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824A27C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,19620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19620);
	// lwz r4,228(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r5,768(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// stw r5,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r5.u32);
	// lwz r11,19620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19620);
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r11,772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_824A27E4:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x824a2804
	if (!ctx.cr6.gt) goto loc_824A2804;
	// lvx128 v59,r11,r15
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r30,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// b 0x824a2860
	goto loc_824A2860;
loc_824A2804:
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2824
	if (ctx.cr6.eq) goto loc_824A2824;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lvx128 v58,r10,r15
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r30,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x824a285c
	goto loc_824A285C;
loc_824A2824:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,70(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 70);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r5,144(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 144);
	// lvx128 v57,r5,r15
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r30,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,70(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 70);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
loc_824A285C:
	// lfs f0,112(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
loc_824A2860:
	// stfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82130528
	ctx.lr = 0x824A2870;
	sub_82130528(ctx, base);
	// stw r3,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249d240
	ctx.lr = 0x824A2884;
	sub_8249D240(ctx, base);
	// lbz r11,302(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x824a289c
	if (!ctx.cr6.gt) goto loc_824A289C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824A289C:
	// bl 0x82130528
	ctx.lr = 0x824A28A0;
	sub_82130528(ctx, base);
	// lbz r11,302(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// stw r3,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r3.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a28f0
	if (ctx.cr6.eq) goto loc_824A28F0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_824A28B8:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r8,208(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwzx r3,r29,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// bl 0x824d0d10
	ctx.lr = 0x824A28DC;
	sub_824D0D10(ctx, base);
	// lbz r7,302(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a28b8
	if (ctx.cr6.lt) goto loc_824A28B8;
loc_824A28F0:
	// lbz r11,302(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,204(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r10,472
	ctx.r7.s64 = ctx.r10.s64 + 472;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2924
	if (ctx.cr6.eq) goto loc_824A2924;
	// lhz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824a2928
	if (!ctx.cr6.eq) goto loc_824A2928;
loc_824A2924:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_824A2928:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2980
	if (ctx.cr6.eq) goto loc_824A2980;
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a2980
	if (ctx.cr6.eq) goto loc_824A2980;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82130528
	ctx.lr = 0x824A2948;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2958
	if (ctx.cr6.eq) goto loc_824A2958;
	// bl 0x82519b70
	ctx.lr = 0x824A2954;
	sub_82519B70(ctx, base);
	// b 0x824a295c
	goto loc_824A295C;
loc_824A2958:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A295C:
	// stw r3,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82527b48
	ctx.lr = 0x824A2980;
	sub_82527B48(ctx, base);
loc_824A2980:
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82614a50
	ctx.lr = 0x824A2988;
	sub_82614A50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A29A0"))) PPC_WEAK_FUNC(sub_824A29A0);
PPC_FUNC_IMPL(__imp__sub_824A29A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A29A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// xori r26,r10,1
	ctx.r26.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x824a2a1c
	if (ctx.cr6.eq) goto loc_824A2A1C;
	// bl 0x821bbea8
	ctx.lr = 0x824A29D8;
	sub_821BBEA8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824a2a04
	if (!ctx.cr6.eq) goto loc_824A2A04;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82130528
	ctx.lr = 0x824A29E8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2a00
	if (ctx.cr6.eq) goto loc_824A2A00;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8249ee08
	ctx.lr = 0x824A29F8;
	sub_8249EE08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x824a2a04
	goto loc_824A2A04;
loc_824A2A00:
	// li r28,0
	ctx.r28.s64 = 0;
loc_824A2A04:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824a0d88
	ctx.lr = 0x824A2A18;
	sub_824A0D88(ctx, base);
	// bl 0x821bbf00
	ctx.lr = 0x824A2A1C;
	sub_821BBF00(ctx, base);
loc_824A2A1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x824a2a48
	if (!ctx.cr6.eq) goto loc_824A2A48;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82130528
	ctx.lr = 0x824A2A2C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2a44
	if (ctx.cr6.eq) goto loc_824A2A44;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8249ee08
	ctx.lr = 0x824A2A3C;
	sub_8249EE08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x824a2a48
	goto loc_824A2A48;
loc_824A2A44:
	// li r29,0
	ctx.r29.s64 = 0;
loc_824A2A48:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824A2A4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a2a4c
	if (!ctx.cr6.eq) goto loc_824A2A4C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82130528
	ctx.lr = 0x824A2A74;
	sub_82130528(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824A2A78:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x824a2a78
	if (!ctx.cr6.eq) goto loc_824A2A78;
	// stw r11,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a0d88
	ctx.lr = 0x824A2AA8;
	sub_824A0D88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2ac4
	if (!ctx.cr6.eq) goto loc_824A2AC4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1800
	ctx.r3.s64 = ctx.r11.s64 + 1800;
	// bl 0x82130000
	ctx.lr = 0x824A2AC4;
	sub_82130000(ctx, base);
loc_824A2AC4:
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a2ad8
	if (ctx.cr6.eq) goto loc_824A2AD8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_824A2AD8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x824a2b1c
	if (ctx.cr6.eq) goto loc_824A2B1C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8249dca0
	ctx.lr = 0x824A2AEC;
	sub_8249DCA0(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2b18
	if (!ctx.cr6.eq) goto loc_824A2B18;
	// bl 0x821bbea8
	ctx.lr = 0x824A2AFC;
	sub_821BBEA8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A2B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821bbf00
	ctx.lr = 0x824A2B18;
	sub_821BBF00(ctx, base);
loc_824A2B18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_824A2B1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A2B24"))) PPC_WEAK_FUNC(sub_824A2B24);
PPC_FUNC_IMPL(__imp__sub_824A2B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2B28"))) PPC_WEAK_FUNC(sub_824A2B28);
PPC_FUNC_IMPL(__imp__sub_824A2B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x824A2B30;
	__savegprlr_21(ctx, base);
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,30576
	ctx.r30.s64 = ctx.r11.s64 + 30576;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r10,-13284
	ctx.r5.s64 = ctx.r10.s64 + -13284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821ca6a8
	ctx.lr = 0x824A2B64;
	sub_821CA6A8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82183870
	ctx.lr = 0x824A2B78;
	sub_82183870(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823db6d0
	ctx.lr = 0x824A2B84;
	sub_823DB6D0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
loc_824A2B90:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x824a2b90
	if (!ctx.cr6.eq) goto loc_824A2B90;
	// li r4,47
	ctx.r4.s64 = 47;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823db6d0
	ctx.lr = 0x824A2BB8;
	sub_823DB6D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2bcc
	if (ctx.cr6.eq) goto loc_824A2BCC;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 1;
	// b 0x824a2bd0
	goto loc_824A2BD0;
loc_824A2BCC:
	// addi r24,r1,336
	ctx.r24.s64 = ctx.r1.s64 + 336;
loc_824A2BD0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x824a2be4
	if (!ctx.cr6.eq) goto loc_824A2BE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
loc_824A2BE4:
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// stw r29,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r29.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,-29924
	ctx.r25.s64 = ctx.r11.s64 + -29924;
	// lwz r11,19684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19684);
	// stw r25,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2c10
	if (ctx.cr6.eq) goto loc_824A2C10;
	// lwz r4,580(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x824a2c18
	if (!ctx.cr6.eq) goto loc_824A2C18;
loc_824A2C10:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,1952
	ctx.r4.s64 = ctx.r11.s64 + 1952;
loc_824A2C18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ca540
	ctx.lr = 0x824A2C20;
	sub_821CA540(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1944
	ctx.r5.s64 = ctx.r11.s64 + 1944;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821ca6a8
	ctx.lr = 0x824A2C3C;
	sub_821CA6A8(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r9,r10,29968
	ctx.r9.s64 = ctx.r10.s64 + 29968;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2cf4
	if (ctx.cr6.eq) goto loc_824A2CF4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824a2cf4
	if (ctx.cr6.eq) goto loc_824A2CF4;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,2828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// bl 0x821c00e8
	ctx.lr = 0x824A2C6C;
	sub_821C00E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821bbea8
	ctx.lr = 0x824A2C74;
	sub_821BBEA8(ctx, base);
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// bl 0x82130528
	ctx.lr = 0x824A2C7C;
	sub_82130528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bbf00
	ctx.lr = 0x824A2C84;
	sub_821BBF00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r5,80
	ctx.r5.s64 = 5242880;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d9890
	ctx.lr = 0x824A2C94;
	sub_823D9890(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r10,3998
	ctx.r8.s64 = ctx.r10.s64 + 3998;
	// lis r6,80
	ctx.r6.s64 = 5242880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x821cb740
	ctx.lr = 0x824A2CB4;
	sub_821CB740(ctx, base);
	// bl 0x821cad70
	ctx.lr = 0x824A2CB8;
	sub_821CAD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x821be1d0
	ctx.lr = 0x824A2CC4;
	sub_821BE1D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824d7bb0
	ctx.lr = 0x824A2CD0;
	sub_824D7BB0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824a2ce8
	if (ctx.cr6.eq) goto loc_824A2CE8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c5c70
	ctx.lr = 0x824A2CE0;
	sub_821C5C70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82130588
	ctx.lr = 0x824A2CE8;
	sub_82130588(ctx, base);
loc_824A2CE8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821be610
	ctx.lr = 0x824A2CF0;
	sub_821BE610(ctx, base);
	// b 0x824a2d14
	goto loc_824A2D14;
loc_824A2CF4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1936
	ctx.r5.s64 = ctx.r11.s64 + 1936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821ca6a8
	ctx.lr = 0x824A2D10;
	sub_821CA6A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824A2D14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c9a90
	ctx.lr = 0x824A2D1C;
	sub_821C9A90(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,1696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1696, ctx.r29.u32);
	// addi r3,r11,1900
	ctx.r3.s64 = ctx.r11.s64 + 1900;
	// stw r25,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r25.u32);
	// bl 0x82130000
	ctx.lr = 0x824A2D34;
	sub_82130000(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x821cf7b8
	ctx.lr = 0x824A2D44;
	sub_821CF7B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a2d70
	if (ctx.cr6.eq) goto loc_824A2D70;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,1868
	ctx.r3.s64 = ctx.r11.s64 + 1868;
	// bl 0x82130000
	ctx.lr = 0x824A2D5C;
	sub_82130000(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x821cf7b8
	ctx.lr = 0x824A2D6C;
	sub_821CF7B8(ctx, base);
	// addi r29,r1,1152
	ctx.r29.s64 = ctx.r1.s64 + 1152;
loc_824A2D70:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x821ca980
	ctx.lr = 0x824A2D80;
	sub_821CA980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,1968
	ctx.r4.s64 = ctx.r1.s64 + 1968;
	// bl 0x821ca540
	ctx.lr = 0x824A2D8C;
	sub_821CA540(ctx, base);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x824a29a0
	ctx.lr = 0x824A2DA4;
	sub_824A29A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c9a90
	ctx.lr = 0x824A2DB0;
	sub_821C9A90(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a2dc0
	if (ctx.cr6.eq) goto loc_824A2DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821be610
	ctx.lr = 0x824A2DC0;
	sub_821BE610(ctx, base);
loc_824A2DC0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r10,r11,-30140
	ctx.r10.s64 = ctx.r11.s64 + -30140;
	// stw r10,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r10.u32);
	// stw r10,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r10.u32);
	// bl 0x821be610
	ctx.lr = 0x824A2DD8;
	sub_821BE610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A2DE4"))) PPC_WEAK_FUNC(sub_824A2DE4);
PPC_FUNC_IMPL(__imp__sub_824A2DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2DE8"))) PPC_WEAK_FUNC(sub_824A2DE8);
PPC_FUNC_IMPL(__imp__sub_824A2DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r3,20692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20692);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2DF4"))) PPC_WEAK_FUNC(sub_824A2DF4);
PPC_FUNC_IMPL(__imp__sub_824A2DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2DF8"))) PPC_WEAK_FUNC(sub_824A2DF8);
PPC_FUNC_IMPL(__imp__sub_824A2DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f12,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x824a2e20
	if (ctx.cr6.lt) goto loc_824A2E20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2E20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824a2e74
	if (ctx.cr6.eq) goto loc_824A2E74;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x824a2e44
	if (ctx.cr6.lt) goto loc_824A2E44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2E44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2ea8
	if (!ctx.cr6.eq) goto loc_824A2EA8;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a2e60
	if (ctx.cr6.lt) goto loc_824A2E60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2E60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824A2E6C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_824A2E74:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x824a2e80
	if (ctx.cr6.lt) goto loc_824A2E80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2E80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2e6c
	if (!ctx.cr6.eq) goto loc_824A2E6C;
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a2e9c
	if (ctx.cr6.lt) goto loc_824A2E9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2E9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824A2EA8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2EB0"))) PPC_WEAK_FUNC(sub_824A2EB0);
PPC_FUNC_IMPL(__imp__sub_824A2EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x824a2ee8
	if (ctx.cr6.gt) goto loc_824A2EE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2EE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r8,r9,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x824a2f44
	if (ctx.cr6.eq) goto loc_824A2F44;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x824a2f14
	if (ctx.cr6.gt) goto loc_824A2F14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2F14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2f78
	if (!ctx.cr6.eq) goto loc_824A2F78;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a2f30
	if (ctx.cr6.gt) goto loc_824A2F30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2F30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824A2F3C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_824A2F44:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824a2f50
	if (ctx.cr6.gt) goto loc_824A2F50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2F50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2f3c
	if (!ctx.cr6.eq) goto loc_824A2F3C;
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x824a2f6c
	if (ctx.cr6.gt) goto loc_824A2F6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2F6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824A2F78:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2F80"))) PPC_WEAK_FUNC(sub_824A2F80);
PPC_FUNC_IMPL(__imp__sub_824A2F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_824A2F88:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r8,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r6,r7,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x824a2fb0
	if (ctx.cr6.gt) goto loc_824A2FB0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A2FB0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a2fcc
	if (ctx.cr6.eq) goto loc_824A2FCC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// b 0x824a2f88
	goto loc_824A2F88;
loc_824A2FCC:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2FD4"))) PPC_WEAK_FUNC(sub_824A2FD4);
PPC_FUNC_IMPL(__imp__sub_824A2FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2FD8"))) PPC_WEAK_FUNC(sub_824A2FD8);
PPC_FUNC_IMPL(__imp__sub_824A2FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// ble cr6,0x824a3038
	if (!ctx.cr6.gt) goto loc_824A3038;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_824A2FF0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x824a300c
	if (ctx.cr6.lt) goto loc_824A300C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A300C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a3038
	if (ctx.cr6.eq) goto loc_824A3038;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// bgt cr6,0x824a2ff0
	if (ctx.cr6.gt) goto loc_824A2FF0;
loc_824A3038:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3044"))) PPC_WEAK_FUNC(sub_824A3044);
PPC_FUNC_IMPL(__imp__sub_824A3044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3048"))) PPC_WEAK_FUNC(sub_824A3048);
PPC_FUNC_IMPL(__imp__sub_824A3048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// ble cr6,0x824a30bc
	if (!ctx.cr6.gt) goto loc_824A30BC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A3064:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824a3090
	if (ctx.cr6.gt) goto loc_824A3090;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A3090:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a30bc
	if (ctx.cr6.eq) goto loc_824A30BC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// bgt cr6,0x824a3064
	if (ctx.cr6.gt) goto loc_824A3064;
loc_824A30BC:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A30CC"))) PPC_WEAK_FUNC(sub_824A30CC);
PPC_FUNC_IMPL(__imp__sub_824A30CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A30D0"))) PPC_WEAK_FUNC(sub_824A30D0);
PPC_FUNC_IMPL(__imp__sub_824A30D0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
loc_824A30E8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r8,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFC;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824a3150
	if (!ctx.cr6.eq) goto loc_824A3150;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824a3140
	if (!ctx.cr6.lt) goto loc_824A3140;
loc_824A3114:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824a3114
	if (ctx.cr6.lt) goto loc_824A3114;
loc_824A3140:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// b 0x824a3158
	goto loc_824A3158;
loc_824A3150:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
loc_824A3158:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a30e8
	if (ctx.cr6.lt) goto loc_824A30E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A316C"))) PPC_WEAK_FUNC(sub_824A316C);
PPC_FUNC_IMPL(__imp__sub_824A316C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3170"))) PPC_WEAK_FUNC(sub_824A3170);
PPC_FUNC_IMPL(__imp__sub_824A3170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_824A317C:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_824A318C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x824a31a4
	if (ctx.cr6.lt) goto loc_824A31A4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A31A4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a31c0
	if (ctx.cr6.eq) goto loc_824A31C0;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// b 0x824a318c
	goto loc_824A318C;
loc_824A31C0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824a317c
	if (!ctx.cr6.eq) goto loc_824A317C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A31D4"))) PPC_WEAK_FUNC(sub_824A31D4);
PPC_FUNC_IMPL(__imp__sub_824A31D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A31D8"))) PPC_WEAK_FUNC(sub_824A31D8);
PPC_FUNC_IMPL(__imp__sub_824A31D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824a324c
	if (ctx.cr6.eq) goto loc_824A324C;
loc_824A31E8:
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A31F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r5,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r9,r31,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x824a3220
	if (ctx.cr6.gt) goto loc_824A3220;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A3220:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a323c
	if (ctx.cr6.eq) goto loc_824A323C;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// b 0x824a31f8
	goto loc_824A31F8;
loc_824A323C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824a31e8
	if (!ctx.cr6.eq) goto loc_824A31E8;
loc_824A324C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3254"))) PPC_WEAK_FUNC(sub_824A3254);
PPC_FUNC_IMPL(__imp__sub_824A3254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3258"))) PPC_WEAK_FUNC(sub_824A3258);
PPC_FUNC_IMPL(__imp__sub_824A3258) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824a32e0
	if (!ctx.cr6.lt) goto loc_824A32E0;
loc_824A3280:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x824a32a8
	if (ctx.cr6.lt) goto loc_824A32A8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A32A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a32b8
	if (ctx.cr6.eq) goto loc_824A32B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824A32B8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x824a3280
	if (ctx.cr6.lt) goto loc_824A3280;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
loc_824A32E0:
	// bne cr6,0x824a32fc
	if (!ctx.cr6.eq) goto loc_824A32FC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_824A32FC:
	// bl 0x824a2fd8
	ctx.lr = 0x824A3300;
	sub_824A2FD8(ctx, base);
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

__attribute__((alias("__imp__sub_824A3314"))) PPC_WEAK_FUNC(sub_824A3314);
PPC_FUNC_IMPL(__imp__sub_824A3314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3318"))) PPC_WEAK_FUNC(sub_824A3318);
PPC_FUNC_IMPL(__imp__sub_824A3318) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824a33b0
	if (!ctx.cr6.lt) goto loc_824A33B0;
loc_824A3340:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x824a3378
	if (ctx.cr6.gt) goto loc_824A3378;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A3378:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a3388
	if (ctx.cr6.eq) goto loc_824A3388;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824A3388:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x824a3340
	if (ctx.cr6.lt) goto loc_824A3340;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
loc_824A33B0:
	// bne cr6,0x824a33cc
	if (!ctx.cr6.eq) goto loc_824A33CC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_824A33CC:
	// bl 0x824a3048
	ctx.lr = 0x824A33D0;
	sub_824A3048(ctx, base);
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

__attribute__((alias("__imp__sub_824A33E4"))) PPC_WEAK_FUNC(sub_824A33E4);
PPC_FUNC_IMPL(__imp__sub_824A33E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A33E8"))) PPC_WEAK_FUNC(sub_824A33E8);
PPC_FUNC_IMPL(__imp__sub_824A33E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A340C"))) PPC_WEAK_FUNC(sub_824A340C);
PPC_FUNC_IMPL(__imp__sub_824A340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3410"))) PPC_WEAK_FUNC(sub_824A3410);
PPC_FUNC_IMPL(__imp__sub_824A3410) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8262e420
	ctx.lr = 0x824A3434;
	sub_8262E420(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lhz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x8262e420
	ctx.lr = 0x824A344C;
	sub_8262E420(ctx, base);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_824A3474"))) PPC_WEAK_FUNC(sub_824A3474);
PPC_FUNC_IMPL(__imp__sub_824A3474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3478"))) PPC_WEAK_FUNC(sub_824A3478);
PPC_FUNC_IMPL(__imp__sub_824A3478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A3480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824a30d0
	ctx.lr = 0x824A3494;
	sub_824A30D0(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bne cr6,0x824a34c8
	if (!ctx.cr6.eq) goto loc_824A34C8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// sth r29,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r29.u16);
	// beq cr6,0x824a34c0
	if (ctx.cr6.eq) goto loc_824A34C0;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x824A34BC;
	sub_82130528(ctx, base);
	// b 0x824a34c4
	goto loc_824A34C4;
loc_824A34C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A34C4:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_824A34C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r29,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r29.u16);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A34DC"))) PPC_WEAK_FUNC(sub_824A34DC);
PPC_FUNC_IMPL(__imp__sub_824A34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A34E0"))) PPC_WEAK_FUNC(sub_824A34E0);
PPC_FUNC_IMPL(__imp__sub_824A34E0) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82130528
	ctx.lr = 0x824A34F4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a352c
	if (ctx.cr6.eq) goto loc_824A352C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824A352C:
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

__attribute__((alias("__imp__sub_824A3540"))) PPC_WEAK_FUNC(sub_824A3540);
PPC_FUNC_IMPL(__imp__sub_824A3540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A3548;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x824a35bc
	if (ctx.cr6.lt) goto loc_824A35BC;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x824a3258
	ctx.lr = 0x824A358C;
	sub_824A3258(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x824a35bc
	if (ctx.cr6.eq) goto loc_824A35BC;
loc_824A3594:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824a3258
	ctx.lr = 0x824A35B4;
	sub_824A3258(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824a3594
	if (!ctx.cr6.eq) goto loc_824A3594;
loc_824A35BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A35C4"))) PPC_WEAK_FUNC(sub_824A35C4);
PPC_FUNC_IMPL(__imp__sub_824A35C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A35C8"))) PPC_WEAK_FUNC(sub_824A35C8);
PPC_FUNC_IMPL(__imp__sub_824A35C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A35D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x824a3644
	if (ctx.cr6.lt) goto loc_824A3644;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x824a3318
	ctx.lr = 0x824A3614;
	sub_824A3318(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x824a3644
	if (ctx.cr6.eq) goto loc_824A3644;
loc_824A361C:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824a3318
	ctx.lr = 0x824A363C;
	sub_824A3318(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824a361c
	if (!ctx.cr6.eq) goto loc_824A361C;
loc_824A3644:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A364C"))) PPC_WEAK_FUNC(sub_824A364C);
PPC_FUNC_IMPL(__imp__sub_824A364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3650"))) PPC_WEAK_FUNC(sub_824A3650);
PPC_FUNC_IMPL(__imp__sub_824A3650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_824A3654:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x824a366c
	if (ctx.cr6.lt) goto loc_824A366C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A366C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3680
	if (ctx.cr6.eq) goto loc_824A3680;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x824a3654
	goto loc_824A3654;
loc_824A3680:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x824a369c
	if (ctx.cr6.lt) goto loc_824A369C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A369C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a3680
	if (!ctx.cr6.eq) goto loc_824A3680;
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
	// b 0x824a3654
	goto loc_824A3654;
}

__attribute__((alias("__imp__sub_824A36C8"))) PPC_WEAK_FUNC(sub_824A36C8);
PPC_FUNC_IMPL(__imp__sub_824A36C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A36CC"))) PPC_WEAK_FUNC(sub_824A36CC);
PPC_FUNC_IMPL(__imp__sub_824A36CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A36D0"))) PPC_WEAK_FUNC(sub_824A36D0);
PPC_FUNC_IMPL(__imp__sub_824A36D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A36D4:
	// lwzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_824A36DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r8,r9,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lfs f13,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824a36fc
	if (ctx.cr6.gt) goto loc_824A36FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A36FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3710
	if (ctx.cr6.eq) goto loc_824A3710;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x824a36dc
	goto loc_824A36DC;
loc_824A3710:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r8,r9,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lfs f13,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x824a3734
	if (ctx.cr6.gt) goto loc_824A3734;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A3734:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a3710
	if (!ctx.cr6.eq) goto loc_824A3710;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x824a36d4
	goto loc_824A36D4;
}

__attribute__((alias("__imp__sub_824A3760"))) PPC_WEAK_FUNC(sub_824A3760);
PPC_FUNC_IMPL(__imp__sub_824A3760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3764"))) PPC_WEAK_FUNC(sub_824A3764);
PPC_FUNC_IMPL(__imp__sub_824A3764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3768"))) PPC_WEAK_FUNC(sub_824A3768);
PPC_FUNC_IMPL(__imp__sub_824A3768) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x824a37a0
	if (ctx.cr6.lt) goto loc_824A37A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A37A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a37cc
	if (ctx.cr6.eq) goto loc_824A37CC;
	// subf. r5,r31,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x824a37c4
	if (!ctx.cr0.gt) goto loc_824A37C4;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823db5b0
	ctx.lr = 0x824A37C4;
	sub_823DB5B0(ctx, base);
loc_824A37C4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824a380c
	goto loc_824A380C;
loc_824A37CC:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
loc_824A37D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x824a37ec
	if (ctx.cr6.lt) goto loc_824A37EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A37EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a3808
	if (ctx.cr6.eq) goto loc_824A3808;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// b 0x824a37d4
	goto loc_824A37D4;
loc_824A3808:
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
loc_824A380C:
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

__attribute__((alias("__imp__sub_824A3824"))) PPC_WEAK_FUNC(sub_824A3824);
PPC_FUNC_IMPL(__imp__sub_824A3824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3828"))) PPC_WEAK_FUNC(sub_824A3828);
PPC_FUNC_IMPL(__imp__sub_824A3828) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r7,r9,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x824a3874
	if (ctx.cr6.gt) goto loc_824A3874;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A3874:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a38a0
	if (ctx.cr6.eq) goto loc_824A38A0;
	// subf. r5,r31,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x824a3898
	if (!ctx.cr0.gt) goto loc_824A3898;
	// subf r11,r5,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r5.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823db5b0
	ctx.lr = 0x824A3898;
	sub_823DB5B0(ctx, base);
loc_824A3898:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824a38ac
	goto loc_824A38AC;
loc_824A38A0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824a2f80
	ctx.lr = 0x824A38AC;
	sub_824A2F80(ctx, base);
loc_824A38AC:
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

__attribute__((alias("__imp__sub_824A38C4"))) PPC_WEAK_FUNC(sub_824A38C4);
PPC_FUNC_IMPL(__imp__sub_824A38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A38C8"))) PPC_WEAK_FUNC(sub_824A38C8);
PPC_FUNC_IMPL(__imp__sub_824A38C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A38D0;
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
	// beq cr6,0x824a3914
	if (ctx.cr6.eq) goto loc_824A3914;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x824a3914
	if (ctx.cr6.eq) goto loc_824A3914;
loc_824A38F4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a3768
	ctx.lr = 0x824A3908;
	sub_824A3768(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x824a38f4
	if (!ctx.cr6.eq) goto loc_824A38F4;
loc_824A3914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A391C"))) PPC_WEAK_FUNC(sub_824A391C);
PPC_FUNC_IMPL(__imp__sub_824A391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3920"))) PPC_WEAK_FUNC(sub_824A3920);
PPC_FUNC_IMPL(__imp__sub_824A3920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A3928;
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
	// beq cr6,0x824a396c
	if (ctx.cr6.eq) goto loc_824A396C;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x824a396c
	if (ctx.cr6.eq) goto loc_824A396C;
loc_824A394C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a3828
	ctx.lr = 0x824A3960;
	sub_824A3828(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x824a394c
	if (!ctx.cr6.eq) goto loc_824A394C;
loc_824A396C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3974"))) PPC_WEAK_FUNC(sub_824A3974);
PPC_FUNC_IMPL(__imp__sub_824A3974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3978"))) PPC_WEAK_FUNC(sub_824A3978);
PPC_FUNC_IMPL(__imp__sub_824A3978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A3980;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x824a39d4
	if (!ctx.cr6.gt) goto loc_824A39D4;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
loc_824A39A0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r5,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x824a3258
	ctx.lr = 0x824A39C4;
	sub_824A3258(ctx, base);
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x824a39a0
	if (ctx.cr6.gt) goto loc_824A39A0;
loc_824A39D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A39DC"))) PPC_WEAK_FUNC(sub_824A39DC);
PPC_FUNC_IMPL(__imp__sub_824A39DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A39E0"))) PPC_WEAK_FUNC(sub_824A39E0);
PPC_FUNC_IMPL(__imp__sub_824A39E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A39E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x824a3a3c
	if (!ctx.cr6.gt) goto loc_824A3A3C;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
loc_824A3A08:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r5,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x824a3318
	ctx.lr = 0x824A3A2C;
	sub_824A3318(ctx, base);
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x824a3a08
	if (ctx.cr6.gt) goto loc_824A3A08;
loc_824A3A3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3A44"))) PPC_WEAK_FUNC(sub_824A3A44);
PPC_FUNC_IMPL(__imp__sub_824A3A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3A48"))) PPC_WEAK_FUNC(sub_824A3A48);
PPC_FUNC_IMPL(__imp__sub_824A3A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A3A50;
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
	// bl 0x824a3540
	ctx.lr = 0x824A3A74;
	sub_824A3540(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x824a3ad4
	if (!ctx.cr6.lt) goto loc_824A3AD4;
loc_824A3A80:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x824a3aa0
	if (ctx.cr6.lt) goto loc_824A3AA0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A3AA0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a3ac8
	if (ctx.cr6.eq) goto loc_824A3AC8;
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
	// bl 0x824a3258
	ctx.lr = 0x824A3AC8;
	sub_824A3258(ctx, base);
loc_824A3AC8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x824a3a80
	if (ctx.cr6.lt) goto loc_824A3A80;
loc_824A3AD4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a3978
	ctx.lr = 0x824A3AE4;
	sub_824A3978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3AEC"))) PPC_WEAK_FUNC(sub_824A3AEC);
PPC_FUNC_IMPL(__imp__sub_824A3AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3AF0"))) PPC_WEAK_FUNC(sub_824A3AF0);
PPC_FUNC_IMPL(__imp__sub_824A3AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A3AF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x824a35c8
	ctx.lr = 0x824A3B1C;
	sub_824A35C8(ctx, base);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x824a3b8c
	if (!ctx.cr6.lt) goto loc_824A3B8C;
loc_824A3B28:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x824a3b58
	if (ctx.cr6.gt) goto loc_824A3B58;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A3B58:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a3b80
	if (ctx.cr6.eq) goto loc_824A3B80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a3318
	ctx.lr = 0x824A3B80;
	sub_824A3318(ctx, base);
loc_824A3B80:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x824a3b28
	if (ctx.cr6.lt) goto loc_824A3B28;
loc_824A3B8C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a39e0
	ctx.lr = 0x824A3B9C;
	sub_824A39E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3BA4"))) PPC_WEAK_FUNC(sub_824A3BA4);
PPC_FUNC_IMPL(__imp__sub_824A3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3BA8"))) PPC_WEAK_FUNC(sub_824A3BA8);
PPC_FUNC_IMPL(__imp__sub_824A3BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A3BB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x824a3c68
	if (!ctx.cr6.gt) goto loc_824A3C68;
loc_824A3BD4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824a3c54
	if (ctx.cr6.eq) goto loc_824A3C54;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x824a2df8
	ctx.lr = 0x824A3C08;
	sub_824A2DF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x824a3650
	ctx.lr = 0x824A3C20;
	sub_824A3650(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824a3ba8
	ctx.lr = 0x824A3C38;
	sub_824A3BA8(ctx, base);
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rlwinm r5,r6,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// bgt cr6,0x824a3bd4
	if (ctx.cr6.gt) goto loc_824A3BD4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824A3C54:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824a3a48
	ctx.lr = 0x824A3C68;
	sub_824A3A48(ctx, base);
loc_824A3C68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3C70"))) PPC_WEAK_FUNC(sub_824A3C70);
PPC_FUNC_IMPL(__imp__sub_824A3C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A3C78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x824a3d30
	if (!ctx.cr6.gt) goto loc_824A3D30;
loc_824A3C9C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824a3d1c
	if (ctx.cr6.eq) goto loc_824A3D1C;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x824a2eb0
	ctx.lr = 0x824A3CD0;
	sub_824A2EB0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x824a36d0
	ctx.lr = 0x824A3CE8;
	sub_824A36D0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824a3c70
	ctx.lr = 0x824A3D00;
	sub_824A3C70(ctx, base);
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rlwinm r5,r6,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// bgt cr6,0x824a3c9c
	if (ctx.cr6.gt) goto loc_824A3C9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824A3D1C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824a3af0
	ctx.lr = 0x824A3D30;
	sub_824A3AF0(ctx, base);
loc_824A3D30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3D38"))) PPC_WEAK_FUNC(sub_824A3D38);
PPC_FUNC_IMPL(__imp__sub_824A3D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A3D40;
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
	// beq cr6,0x824a3de0
	if (ctx.cr6.eq) goto loc_824A3DE0;
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
	// beq cr6,0x824a3d80
	if (ctx.cr6.eq) goto loc_824A3D80;
loc_824A3D70:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824a3d70
	if (!ctx.cr6.eq) goto loc_824A3D70;
loc_824A3D80:
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
	// bl 0x824a3ba8
	ctx.lr = 0x824A3D98;
	sub_824A3BA8(ctx, base);
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ble cr6,0x824a3dd4
	if (!ctx.cr6.gt) goto loc_824A3DD4;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824a38c8
	ctx.lr = 0x824A3DB8;
	sub_824A38C8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a3170
	ctx.lr = 0x824A3DCC;
	sub_824A3170(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_824A3DD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a38c8
	ctx.lr = 0x824A3DE0;
	sub_824A38C8(ctx, base);
loc_824A3DE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3DE8"))) PPC_WEAK_FUNC(sub_824A3DE8);
PPC_FUNC_IMPL(__imp__sub_824A3DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A3DF0;
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
	// beq cr6,0x824a3e90
	if (ctx.cr6.eq) goto loc_824A3E90;
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
	// beq cr6,0x824a3e30
	if (ctx.cr6.eq) goto loc_824A3E30;
loc_824A3E20:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824a3e20
	if (!ctx.cr6.eq) goto loc_824A3E20;
loc_824A3E30:
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
	// bl 0x824a3c70
	ctx.lr = 0x824A3E48;
	sub_824A3C70(ctx, base);
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ble cr6,0x824a3e84
	if (!ctx.cr6.gt) goto loc_824A3E84;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824a3920
	ctx.lr = 0x824A3E68;
	sub_824A3920(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a31d8
	ctx.lr = 0x824A3E7C;
	sub_824A31D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_824A3E84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a3920
	ctx.lr = 0x824A3E90;
	sub_824A3920(ctx, base);
loc_824A3E90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3E98"))) PPC_WEAK_FUNC(sub_824A3E98);
PPC_FUNC_IMPL(__imp__sub_824A3E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A3EA0;
	__savegprlr_29(ctx, base);
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
	// bne cr6,0x824a3ec0
	if (!ctx.cr6.eq) goto loc_824A3EC0;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824a3f70
	if (ctx.cr6.eq) goto loc_824A3F70;
loc_824A3EC0:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a3ef8
	if (ctx.cr6.eq) goto loc_824A3EF8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bl 0x82130588
	ctx.lr = 0x824A3EE0;
	sub_82130588(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// sth r29,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r29.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r29,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r29.u16);
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x8247bb70
	ctx.lr = 0x824A3EF8;
	sub_8247BB70(ctx, base);
loc_824A3EF8:
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a3f28
	if (ctx.cr6.eq) goto loc_824A3F28;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_824A3F0C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824a3f0c
	if (ctx.cr6.lt) goto loc_824A3F0C;
loc_824A3F28:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a3f68
	if (ctx.cr6.eq) goto loc_824A3F68;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824a3d38
	ctx.lr = 0x824A3F50;
	sub_824A3D38(ctx, base);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x824a3de8
	ctx.lr = 0x824A3F68;
	sub_824A3DE8(ctx, base);
loc_824A3F68:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_824A3F70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3F78"))) PPC_WEAK_FUNC(sub_824A3F78);
PPC_FUNC_IMPL(__imp__sub_824A3F78) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824a3e98
	sub_824A3E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3F80"))) PPC_WEAK_FUNC(sub_824A3F80);
PPC_FUNC_IMPL(__imp__sub_824A3F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A3F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r31,r11,20692
	ctx.r31.s64 = ctx.r11.s64 + 20692;
	// lwz r11,20692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a4100
	if (!ctx.cr6.eq) goto loc_824A4100;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82130528
	ctx.lr = 0x824A3FA8;
	sub_82130528(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a3fbc
	if (ctx.cr6.eq) goto loc_824A3FBC;
	// bl 0x821d5408
	ctx.lr = 0x824A3FB8;
	sub_821D5408(ctx, base);
	// b 0x824a3fc0
	goto loc_824A3FC0;
loc_824A3FBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_824A3FC0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r7,r10,2308
	ctx.r7.s64 = ctx.r10.s64 + 2308;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r9,r11,11752
	ctx.r9.s64 = ctx.r11.s64 + 11752;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lis r3,-32128
	ctx.r3.s64 = -2105540608;
	// addi r4,r8,13536
	ctx.r4.s64 = ctx.r8.s64 + 13536;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r9,r3,18304
	ctx.r9.s64 = ctx.r3.s64 + 18304;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// std r8,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r6,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r6.u64);
	// lwz r11,20376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bne cr6,0x824a403c
	if (!ctx.cr6.eq) goto loc_824A403C;
	// bl 0x824906d8
	ctx.lr = 0x824A4038;
	sub_824906D8(ctx, base);
	// lwz r11,20376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20376);
loc_824A403C:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r10,18260
	ctx.r9.s64 = ctx.r10.s64 + 18260;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// bl 0x821d4458
	ctx.lr = 0x824A4058;
	sub_821D4458(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// bl 0x82130528
	ctx.lr = 0x824A4068;
	sub_82130528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// sth r11,58(r30)
	PPC_STORE_U16(ctx.r30.u32 + 58, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,60(r30)
	PPC_STORE_U8(ctx.r30.u32 + 60, ctx.r11.u8);
	// addi r7,r8,16248
	ctx.r7.s64 = ctx.r8.s64 + 16248;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x82130000
	ctx.lr = 0x824A408C;
	sub_82130000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r6,3520
	ctx.r4.s64 = ctx.r6.s64 + 3520;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82197d98
	ctx.lr = 0x824A40A4;
	sub_82197D98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82196758
	ctx.lr = 0x824A40AC;
	sub_82196758(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d4100
	ctx.lr = 0x824A40BC;
	sub_821D4100(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821d41d0
	ctx.lr = 0x824A40D8;
	sub_821D41D0(ctx, base);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r10,18296
	ctx.r4.s64 = ctx.r10.s64 + 18296;
	// bl 0x821d4b00
	ctx.lr = 0x824A40E8;
	sub_821D4B00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32125
	ctx.r9.s64 = -2105344000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,2828(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2828);
	// bl 0x821c0548
	ctx.lr = 0x824A4100;
	sub_821C0548(ctx, base);
loc_824A4100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A4108"))) PPC_WEAK_FUNC(sub_824A4108);
PPC_FUNC_IMPL(__imp__sub_824A4108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824a417c
	if (ctx.cr6.eq) goto loc_824A417C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r9,352(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_824A4134:
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a4134
	if (ctx.cr6.lt) goto loc_824A4134;
	// blr 
	return;
loc_824A417C:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r9,352(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_824A418C:
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lfs f0,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a418c
	if (ctx.cr6.lt) goto loc_824A418C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A41C8"))) PPC_WEAK_FUNC(sub_824A41C8);
PPC_FUNC_IMPL(__imp__sub_824A41C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A41D0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a42a4
	if (ctx.cr6.eq) goto loc_824A42A4;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a42a4
	if (ctx.cr6.eq) goto loc_824A42A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lfs f31,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
loc_824A4208:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824da8d0
	ctx.lr = 0x824A4210;
	sub_824DA8D0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r30,r10,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a428c
	if (ctx.cr6.eq) goto loc_824A428C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A4254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824A4270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824A428C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A428C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a4208
	if (ctx.cr6.lt) goto loc_824A4208;
loc_824A42A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A42B0"))) PPC_WEAK_FUNC(sub_824A42B0);
PPC_FUNC_IMPL(__imp__sub_824A42B0) {
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
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r7.u32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A4300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_824A4320"))) PPC_WEAK_FUNC(sub_824A4320);
PPC_FUNC_IMPL(__imp__sub_824A4320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A4328;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,340(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824a4380
	if (!ctx.cr6.gt) goto loc_824A4380;
	// addi r10,r28,20
	ctx.r10.s64 = ctx.r28.s64 + 20;
loc_824A4350:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824a4370
	if (ctx.cr6.eq) goto loc_824A4370;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824a4350
	if (ctx.cr6.lt) goto loc_824A4350;
	// b 0x824a4380
	goto loc_824A4380;
loc_824A4370:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addic. r26,r11,20
	ctx.xer.ca = ctx.r11.u32 > 4294967275;
	ctx.r26.s64 = ctx.r11.s64 + 20;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x824a4404
	if (!ctx.cr0.eq) goto loc_824A4404;
loc_824A4380:
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r8,340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 340, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// stw r9,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r9.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824A43C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r10,340(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a4404
	if (!ctx.cr6.gt) goto loc_824A4404;
loc_824A43D8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824a43f8
	if (ctx.cr6.eq) goto loc_824A43F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a43d8
	if (ctx.cr6.lt) goto loc_824A43D8;
	// b 0x824a4404
	goto loc_824A4404;
loc_824A43F8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r26,r11,20
	ctx.r26.s64 = ctx.r11.s64 + 20;
loc_824A4404:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,20(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r8,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A4438"))) PPC_WEAK_FUNC(sub_824A4438);
PPC_FUNC_IMPL(__imp__sub_824A4438) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a4494
	if (!ctx.cr6.gt) goto loc_824A4494;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
loc_824A4468:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824a4488
	if (ctx.cr6.eq) goto loc_824A4488;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a4468
	if (ctx.cr6.lt) goto loc_824A4468;
	// b 0x824a4494
	goto loc_824A4494;
loc_824A4488:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
loc_824A4494:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A44B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,340(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x824a44f0
	if (!ctx.cr6.lt) goto loc_824A44F0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824A44CC:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r6,320(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824a44cc
	if (ctx.cr6.lt) goto loc_824A44CC;
loc_824A44F0:
	// lwz r11,320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824A4514"))) PPC_WEAK_FUNC(sub_824A4514);
PPC_FUNC_IMPL(__imp__sub_824A4514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4518"))) PPC_WEAK_FUNC(sub_824A4518);
PPC_FUNC_IMPL(__imp__sub_824A4518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,18408
	ctx.r3.s64 = ctx.r11.s64 + 18408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4524"))) PPC_WEAK_FUNC(sub_824A4524);
PPC_FUNC_IMPL(__imp__sub_824A4524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4528"))) PPC_WEAK_FUNC(sub_824A4528);
PPC_FUNC_IMPL(__imp__sub_824A4528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,18492
	ctx.r3.s64 = ctx.r11.s64 + 18492;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4534"))) PPC_WEAK_FUNC(sub_824A4534);
PPC_FUNC_IMPL(__imp__sub_824A4534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4538"))) PPC_WEAK_FUNC(sub_824A4538);
PPC_FUNC_IMPL(__imp__sub_824A4538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,18580
	ctx.r3.s64 = ctx.r11.s64 + 18580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4544"))) PPC_WEAK_FUNC(sub_824A4544);
PPC_FUNC_IMPL(__imp__sub_824A4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4548"))) PPC_WEAK_FUNC(sub_824A4548);
PPC_FUNC_IMPL(__imp__sub_824A4548) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-7180
	ctx.r9.s64 = ctx.r11.s64 + -7180;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x824a457c
	if (ctx.cr6.eq) goto loc_824A457C;
	// bl 0x82130588
	ctx.lr = 0x824A4578;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824A457C:
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

__attribute__((alias("__imp__sub_824A4590"))) PPC_WEAK_FUNC(sub_824A4590);
PPC_FUNC_IMPL(__imp__sub_824A4590) {
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
	// bl 0x824da8f8
	ctx.lr = 0x824A45A8;
	sub_824DA8F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r9,39
	ctx.r9.s64 = 39;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_824A45C0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x824a45c0
	if (!ctx.cr0.lt) goto loc_824A45C0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,361(r31)
	PPC_STORE_U8(ctx.r31.u32 + 361, ctx.r11.u8);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// stb r11,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r11.u8);
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,363(r31)
	PPC_STORE_U8(ctx.r31.u32 + 363, ctx.r11.u8);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
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

__attribute__((alias("__imp__sub_824A4614"))) PPC_WEAK_FUNC(sub_824A4614);
PPC_FUNC_IMPL(__imp__sub_824A4614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4618"))) PPC_WEAK_FUNC(sub_824A4618);
PPC_FUNC_IMPL(__imp__sub_824A4618) {
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
	// bl 0x824da8f8
	ctx.lr = 0x824A4630;
	sub_824DA8F8(ctx, base);
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// li r10,39
	ctx.r10.s64 = 39;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A4640:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge 0x824a4640
	if (!ctx.cr0.lt) goto loc_824A4640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_824A4670"))) PPC_WEAK_FUNC(sub_824A4670);
PPC_FUNC_IMPL(__imp__sub_824A4670) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x824a4618
	sub_824A4618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A467C"))) PPC_WEAK_FUNC(sub_824A467C);
PPC_FUNC_IMPL(__imp__sub_824A467C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4680"))) PPC_WEAK_FUNC(sub_824A4680);
PPC_FUNC_IMPL(__imp__sub_824A4680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A4688;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a46bc
	if (ctx.cr6.eq) goto loc_824A46BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824a5038
	ctx.lr = 0x824A46BC;
	sub_824A5038(ctx, base);
loc_824A46BC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stfs f31,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r9,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r9.u8);
	// rlwinm r4,r10,28,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x2;
	// stw r28,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r4.u32);
	// bl 0x824a4108
	ctx.lr = 0x824A46F0;
	sub_824A4108(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824da8d0
	ctx.lr = 0x824A46F8;
	sub_824DA8D0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a47b8
	if (ctx.cr6.eq) goto loc_824A47B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lfs f0,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a48e0
	if (ctx.cr6.eq) goto loc_824A48E0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_824A4734:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824a478c
	if (ctx.cr6.eq) goto loc_824A478C;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_824A478C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a4734
	if (ctx.cr6.lt) goto loc_824A4734;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824A47B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,352(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824a48e0
	if (!ctx.cr6.lt) goto loc_824A48E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f29,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
loc_824A47E0:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a47fc
	if (!ctx.cr6.eq) goto loc_824A47FC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// b 0x824a4810
	goto loc_824A4810;
loc_824A47FC:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
loc_824A4810:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a48c8
	if (ctx.cr6.eq) goto loc_824A48C8;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x824a4834
	if (!ctx.cr6.eq) goto loc_824A4834;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x824a48e0
	if (ctx.cr6.gt) goto loc_824A48E0;
loc_824A4834:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824a4844
	if (!ctx.cr6.eq) goto loc_824A4844;
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x824a48e0
	if (ctx.cr6.lt) goto loc_824A48E0;
loc_824A4844:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a485c
	if (!ctx.cr6.eq) goto loc_824A485C;
	// lhz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a4878
	if (!ctx.cr6.eq) goto loc_824A4878;
loc_824A485C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824a48c8
	if (!ctx.cr6.eq) goto loc_824A48C8;
	// lhz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a48c8
	if (ctx.cr6.eq) goto loc_824A48C8;
loc_824A4878:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x824a48c8
	if (!ctx.cr6.lt) goto loc_824A48C8;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x824a48c8
	if (!ctx.cr6.gt) goto loc_824A48C8;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x824a4898
	if (ctx.cr6.gt) goto loc_824A4898;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x824a48b4
	goto loc_824A48B4;
loc_824A4898:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x824a48a8
	if (ctx.cr6.lt) goto loc_824A48A8;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x824a48b4
	goto loc_824A48B4;
loc_824A48A8:
	// fsubs f12,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_824A48B4:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a42b0
	ctx.lr = 0x824A48C8;
	sub_824A42B0(ctx, base);
loc_824A48C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a47e0
	if (ctx.cr6.lt) goto loc_824A47E0;
loc_824A48E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A48F4"))) PPC_WEAK_FUNC(sub_824A48F4);
PPC_FUNC_IMPL(__imp__sub_824A48F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A48F8"))) PPC_WEAK_FUNC(sub_824A48F8);
PPC_FUNC_IMPL(__imp__sub_824A48F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A4900;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823db9d0
	ctx.lr = 0x824A4908;
	sub_823DB9D0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f0,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x824a492c
	if (!ctx.cr6.lt) goto loc_824A492C;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x824a4938
	goto loc_824A4938;
loc_824A492C:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x824a4938
	if (!ctx.cr6.gt) goto loc_824A4938;
	// li r26,0
	ctx.r26.s64 = 0;
loc_824A4938:
	// lbz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a4960
	if (!ctx.cr6.eq) goto loc_824A4960;
	// addi r11,r26,-2
	ctx.r11.s64 = ctx.r26.s64 + -2;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 ^ 1;
	// bl 0x824a4680
	ctx.lr = 0x824A4960;
	sub_824A4680(ctx, base);
loc_824A4960:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// stb r11,360(r30)
	PPC_STORE_U8(ctx.r30.u32 + 360, ctx.r11.u8);
	// beq cr6,0x824a49a0
	if (ctx.cr6.eq) goto loc_824A49A0;
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824a49a0
	if (ctx.cr6.eq) goto loc_824A49A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,344(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a5038
	ctx.lr = 0x824A498C;
	sub_824A5038(ctx, base);
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,344(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x824a4680
	ctx.lr = 0x824A49A0;
	sub_824A4680(ctx, base);
loc_824A49A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824da8d0
	ctx.lr = 0x824A49A8;
	sub_824DA8D0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f1,344(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x824a4a28
	if (ctx.cr6.eq) goto loc_824A4A28;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a4df8
	if (ctx.cr6.eq) goto loc_824A4DF8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_824A49E8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824a4a0c
	if (ctx.cr6.eq) goto loc_824A4A0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a4320
	ctx.lr = 0x824A4A0C;
	sub_824A4320(ctx, base);
loc_824A4A0C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a49e8
	if (ctx.cr6.lt) goto loc_824A49E8;
	// b 0x824a4df8
	goto loc_824A4DF8;
loc_824A4A28:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a4108
	ctx.lr = 0x824A4A38;
	sub_824A4108(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f26,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f27.f64 = double(temp.f32);
	// lwz r28,352(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A4A54:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824a4df8
	if (!ctx.cr6.lt) goto loc_824A4DF8;
	// lwz r10,348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824a4a7c
	if (!ctx.cr6.eq) goto loc_824A4A7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// b 0x824a4a90
	goto loc_824A4A90;
loc_824A4A7C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r6,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
loc_824A4A90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a4de4
	if (ctx.cr6.eq) goto loc_824A4DE4;
	// lfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f29.f64 = double(temp.f32);
	// blt cr6,0x824a4cc0
	if (ctx.cr6.lt) goto loc_824A4CC0;
	// beq cr6,0x824a4be0
	if (ctx.cr6.eq) goto loc_824A4BE0;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bge cr6,0x824a4de4
	if (!ctx.cr6.lt) goto loc_824A4DE4;
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// bge cr6,0x824a4acc
	if (!ctx.cr6.lt) goto loc_824A4ACC;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x824a4de4
	goto loc_824A4DE4;
loc_824A4ACC:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a4de4
	if (ctx.cr6.eq) goto loc_824A4DE4;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x824a4b24
	if (!ctx.cr6.eq) goto loc_824A4B24;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x824a4de4
	if (!ctx.cr6.lt) goto loc_824A4DE4;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// blt cr6,0x824a4de4
	if (ctx.cr6.lt) goto loc_824A4DE4;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a42b0
	ctx.lr = 0x824A4B10;
	sub_824A42B0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a4320
	ctx.lr = 0x824A4B20;
	sub_824A4320(ctx, base);
	// b 0x824a4dd4
	goto loc_824A4DD4;
loc_824A4B24:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bgt cr6,0x824a4b34
	if (ctx.cr6.gt) goto loc_824A4B34;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x824a4b50
	goto loc_824A4B50;
loc_824A4B34:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x824a4b44
	if (ctx.cr6.lt) goto loc_824A4B44;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x824a4b50
	goto loc_824A4B50;
loc_824A4B44:
	// fsubs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_824A4B50:
	// fsubs f0,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bgt cr6,0x824a4b68
	if (ctx.cr6.gt) goto loc_824A4B68;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x824a4b84
	goto loc_824A4B84;
loc_824A4B68:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// blt cr6,0x824a4b78
	if (ctx.cr6.lt) goto loc_824A4B78;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x824a4b84
	goto loc_824A4B84;
loc_824A4B78:
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_824A4B84:
	// fsubs f0,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x824a4bac
	if (ctx.cr6.gt) goto loc_824A4BAC;
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// ble cr6,0x824a4bac
	if (!ctx.cr6.gt) goto loc_824A4BAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a42b0
	ctx.lr = 0x824A4BAC;
	sub_824A42B0(ctx, base);
loc_824A4BAC:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x824a4bcc
	if (!ctx.cr6.lt) goto loc_824A4BCC;
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// ble cr6,0x824a4bcc
	if (!ctx.cr6.gt) goto loc_824A4BCC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a4320
	ctx.lr = 0x824A4BCC;
	sub_824A4320(ctx, base);
loc_824A4BCC:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// blt cr6,0x824a4de4
	if (ctx.cr6.lt) goto loc_824A4DE4;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x824a4de4
	if (!ctx.cr6.lt) goto loc_824A4DE4;
	// b 0x824a4dd4
	goto loc_824A4DD4;
loc_824A4BE0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824a4bf0
	if (!ctx.cr6.eq) goto loc_824A4BF0;
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bgt cr6,0x824a4c00
	if (ctx.cr6.gt) goto loc_824A4C00;
loc_824A4BF0:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824a4c08
	if (!ctx.cr6.eq) goto loc_824A4C08;
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x824a4c08
	if (!ctx.cr6.lt) goto loc_824A4C08;
loc_824A4C00:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x824a4de4
	goto loc_824A4DE4;
loc_824A4C08:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x824a4de4
	if (!ctx.cr6.gt) goto loc_824A4DE4;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x824a4de4
	if (!ctx.cr6.lt) goto loc_824A4DE4;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bgt cr6,0x824a4c28
	if (ctx.cr6.gt) goto loc_824A4C28;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x824a4c48
	goto loc_824A4C48;
loc_824A4C28:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x824a4c38
	if (ctx.cr6.lt) goto loc_824A4C38;
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x824a4c48
	goto loc_824A4C48;
loc_824A4C38:
	// fsubs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_824A4C48:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bgt cr6,0x824a4c58
	if (ctx.cr6.gt) goto loc_824A4C58;
	// stfs f26,92(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x824a4c78
	goto loc_824A4C78;
loc_824A4C58:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// blt cr6,0x824a4c68
	if (ctx.cr6.lt) goto loc_824A4C68;
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x824a4c78
	goto loc_824A4C78;
loc_824A4C68:
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_824A4C78:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824a4c90
	if (!ctx.cr6.eq) goto loc_824A4C90;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a4cac
	if (!ctx.cr6.eq) goto loc_824A4CAC;
loc_824A4C90:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824a4de4
	if (!ctx.cr6.eq) goto loc_824A4DE4;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a4de4
	if (ctx.cr6.eq) goto loc_824A4DE4;
loc_824A4CAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a4320
	ctx.lr = 0x824A4CBC;
	sub_824A4320(ctx, base);
	// b 0x824a4de4
	goto loc_824A4DE4;
loc_824A4CC0:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// ble cr6,0x824a4cd0
	if (!ctx.cr6.gt) goto loc_824A4CD0;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x824a4de4
	goto loc_824A4DE4;
loc_824A4CD0:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a4de4
	if (ctx.cr6.eq) goto loc_824A4DE4;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x824a4d24
	if (!ctx.cr6.eq) goto loc_824A4D24;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x824a4de4
	if (!ctx.cr6.gt) goto loc_824A4DE4;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bgt cr6,0x824a4de4
	if (ctx.cr6.gt) goto loc_824A4DE4;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a42b0
	ctx.lr = 0x824A4D10;
	sub_824A42B0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a4320
	ctx.lr = 0x824A4D20;
	sub_824A4320(ctx, base);
	// b 0x824a4dd4
	goto loc_824A4DD4;
loc_824A4D24:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bgt cr6,0x824a4d34
	if (ctx.cr6.gt) goto loc_824A4D34;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x824a4d54
	goto loc_824A4D54;
loc_824A4D34:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x824a4d44
	if (ctx.cr6.lt) goto loc_824A4D44;
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x824a4d54
	goto loc_824A4D54;
loc_824A4D44:
	// fsubs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_824A4D54:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bgt cr6,0x824a4d64
	if (ctx.cr6.gt) goto loc_824A4D64;
	// stfs f26,92(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x824a4d84
	goto loc_824A4D84;
loc_824A4D64:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// blt cr6,0x824a4d74
	if (ctx.cr6.lt) goto loc_824A4D74;
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x824a4d84
	goto loc_824A4D84;
loc_824A4D74:
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_824A4D84:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// blt cr6,0x824a4da4
	if (ctx.cr6.lt) goto loc_824A4DA4;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x824a4da4
	if (!ctx.cr6.lt) goto loc_824A4DA4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a42b0
	ctx.lr = 0x824A4DA4;
	sub_824A42B0(ctx, base);
loc_824A4DA4:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x824a4dc4
	if (!ctx.cr6.gt) goto loc_824A4DC4;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x824a4dc4
	if (!ctx.cr6.lt) goto loc_824A4DC4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a4320
	ctx.lr = 0x824A4DC4;
	sub_824A4320(ctx, base);
loc_824A4DC4:
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// bgt cr6,0x824a4de4
	if (ctx.cr6.gt) goto loc_824A4DE4;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x824a4de4
	if (!ctx.cr6.gt) goto loc_824A4DE4;
loc_824A4DD4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a4438
	ctx.lr = 0x824A4DE4;
	sub_824A4438(ctx, base);
loc_824A4DE4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4a54
	if (ctx.cr6.eq) goto loc_824A4A54;
loc_824A4DF8:
	// stfs f28,344(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 344, temp.u32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x824a4e08
	if (ctx.cr6.eq) goto loc_824A4E08;
	// stw r26,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r26.u32);
loc_824A4E08:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823dba1c
	ctx.lr = 0x824A4E14;
	__restfpr_26(ctx, base);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A4E18"))) PPC_WEAK_FUNC(sub_824A4E18);
PPC_FUNC_IMPL(__imp__sub_824A4E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A4E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a4edc
	if (!ctx.cr6.eq) goto loc_824A4EDC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// bl 0x82195e48
	ctx.lr = 0x824A4E48;
	sub_82195E48(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a4ec8
	if (ctx.cr6.eq) goto loc_824A4EC8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_824A4E5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a4e84
	if (ctx.cr6.eq) goto loc_824A4E84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A4E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824a4e88
	goto loc_824A4E88;
loc_824A4E84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A4E88:
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r3,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4eb0
	if (ctx.cr6.eq) goto loc_824A4EB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A4EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A4EB0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a4e5c
	if (ctx.cr6.lt) goto loc_824A4E5C;
loc_824A4EC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823d7598
	ctx.lr = 0x824A4ED8;
	sub_823D7598(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_824A4EDC:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A4EFC"))) PPC_WEAK_FUNC(sub_824A4EFC);
PPC_FUNC_IMPL(__imp__sub_824A4EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4F00"))) PPC_WEAK_FUNC(sub_824A4F00);
PPC_FUNC_IMPL(__imp__sub_824A4F00) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82130528
	ctx.lr = 0x824A4F1C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a4f50
	if (ctx.cr6.eq) goto loc_824A4F50;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r9,r10,2628
	ctx.r9.s64 = ctx.r10.s64 + 2628;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lvx128 v63,r31,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
loc_824A4F50:
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
}

__attribute__((alias("__imp__sub_824A4F68"))) PPC_WEAK_FUNC(sub_824A4F68);
PPC_FUNC_IMPL(__imp__sub_824A4F68) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x824A4F84;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a4fb4
	if (ctx.cr6.eq) goto loc_824A4FB4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,2644
	ctx.r10.s64 = ctx.r11.s64 + 2644;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
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
loc_824A4FB4:
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
}

__attribute__((alias("__imp__sub_824A4FCC"))) PPC_WEAK_FUNC(sub_824A4FCC);
PPC_FUNC_IMPL(__imp__sub_824A4FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4FD0"))) PPC_WEAK_FUNC(sub_824A4FD0);
PPC_FUNC_IMPL(__imp__sub_824A4FD0) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x824A4FEC;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a501c
	if (ctx.cr6.eq) goto loc_824A501C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,2660
	ctx.r10.s64 = ctx.r11.s64 + 2660;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
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
loc_824A501C:
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
}

__attribute__((alias("__imp__sub_824A5034"))) PPC_WEAK_FUNC(sub_824A5034);
PPC_FUNC_IMPL(__imp__sub_824A5034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5038"))) PPC_WEAK_FUNC(sub_824A5038);
PPC_FUNC_IMPL(__imp__sub_824A5038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A5040;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5234
	if (ctx.cr6.eq) goto loc_824A5234;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5080
	if (!ctx.cr6.eq) goto loc_824A5080;
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x824a5080
	if (ctx.cr6.eq) goto loc_824A5080;
	// bl 0x824a48f8
	ctx.lr = 0x824A5080;
	sub_824A48F8(ctx, base);
loc_824A5080:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824da8d0
	ctx.lr = 0x824A5088;
	sub_824DA8D0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5104
	if (ctx.cr6.eq) goto loc_824A5104;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a522c
	if (ctx.cr6.eq) goto loc_824A522C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_824A50C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824a50e8
	if (ctx.cr6.eq) goto loc_824A50E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a4438
	ctx.lr = 0x824A50E8;
	sub_824A4438(ctx, base);
loc_824A50E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a50c4
	if (ctx.cr6.lt) goto loc_824A50C4;
	// b 0x824a522c
	goto loc_824A522C;
loc_824A5104:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,352(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824a522c
	if (!ctx.cr6.lt) goto loc_824A522C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f29,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f30.f64 = double(temp.f32);
loc_824A512C:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a5148
	if (!ctx.cr6.eq) goto loc_824A5148;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// b 0x824a515c
	goto loc_824A515C;
loc_824A5148:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
loc_824A515C:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a5214
	if (ctx.cr6.eq) goto loc_824A5214;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x824a5180
	if (!ctx.cr6.eq) goto loc_824A5180;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x824a522c
	if (ctx.cr6.gt) goto loc_824A522C;
loc_824A5180:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824a5190
	if (!ctx.cr6.eq) goto loc_824A5190;
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x824a522c
	if (ctx.cr6.lt) goto loc_824A522C;
loc_824A5190:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a51a8
	if (!ctx.cr6.eq) goto loc_824A51A8;
	// lhz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a51c4
	if (!ctx.cr6.eq) goto loc_824A51C4;
loc_824A51A8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824a5214
	if (!ctx.cr6.eq) goto loc_824A5214;
	// lhz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a5214
	if (ctx.cr6.eq) goto loc_824A5214;
loc_824A51C4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x824a5214
	if (!ctx.cr6.lt) goto loc_824A5214;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x824a5214
	if (!ctx.cr6.gt) goto loc_824A5214;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x824a51e4
	if (ctx.cr6.gt) goto loc_824A51E4;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x824a5200
	goto loc_824A5200;
loc_824A51E4:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x824a51f4
	if (ctx.cr6.lt) goto loc_824A51F4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x824a5200
	goto loc_824A5200;
loc_824A51F4:
	// fsubs f12,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_824A5200:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a4438
	ctx.lr = 0x824A5214;
	sub_824A4438(ctx, base);
loc_824A5214:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a512c
	if (ctx.cr6.lt) goto loc_824A512C;
loc_824A522C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r11.u8);
loc_824A5234:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A5248"))) PPC_WEAK_FUNC(sub_824A5248);
PPC_FUNC_IMPL(__imp__sub_824A5248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A5250;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5278
	if (!ctx.cr6.eq) goto loc_824A5278;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82608a98
	ctx.lr = 0x824A5278;
	sub_82608A98(ctx, base);
loc_824A5278:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a52a8
	if (!ctx.cr6.eq) goto loc_824A52A8;
	// bl 0x821c9438
	ctx.lr = 0x824A529C;
	sub_821C9438(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bed68
	ctx.lr = 0x824A52A8;
	sub_821BED68(ctx, base);
loc_824A52A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c9550
	ctx.lr = 0x824A52B0;
	sub_821C9550(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r30,r8,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r8.s64;
	// bl 0x821378b8
	ctx.lr = 0x824A52D0;
	sub_821378B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwzx r28,r29,r7
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// bl 0x82130528
	ctx.lr = 0x824A52E8;
	sub_82130528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824a5314
	if (ctx.cr6.eq) goto loc_824A5314;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821378b8
	ctx.lr = 0x824A52FC;
	sub_821378B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// b 0x824a5318
	goto loc_824A5318;
loc_824A5314:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5318:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x821d2aa0
	ctx.lr = 0x824A5328;
	sub_821D2AA0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r29,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A5338"))) PPC_WEAK_FUNC(sub_824A5338);
PPC_FUNC_IMPL(__imp__sub_824A5338) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82183870
	ctx.lr = 0x824A535C;
	sub_82183870(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258f990
	ctx.lr = 0x824A5368;
	sub_8258F990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a5390
	if (ctx.cr6.eq) goto loc_824A5390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,262
	ctx.r11.s64 = ctx.r11.s64 + 262;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x824a53e0
	goto loc_824A53E0;
loc_824A5390:
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r30,r8,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r7,r30,262
	ctx.r7.s64 = ctx.r30.s64 + 262;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// sthx r10,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u16);
	// bl 0x824a5248
	ctx.lr = 0x824A53C4;
	sub_824A5248(ctx, base);
	// addi r5,r30,195
	ctx.r5.s64 = ctx.r30.s64 + 195;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
loc_824A53E0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_824A53F8"))) PPC_WEAK_FUNC(sub_824A53F8);
PPC_FUNC_IMPL(__imp__sub_824A53F8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824a5038
	ctx.lr = 0x824A5418;
	sub_824A5038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6030
	ctx.lr = 0x824A5420;
	sub_824A6030(ctx, base);
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

__attribute__((alias("__imp__sub_824A5434"))) PPC_WEAK_FUNC(sub_824A5434);
PPC_FUNC_IMPL(__imp__sub_824A5434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5438"))) PPC_WEAK_FUNC(sub_824A5438);
PPC_FUNC_IMPL(__imp__sub_824A5438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A5440;
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
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5468
	if (ctx.cr6.eq) goto loc_824A5468;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824a5038
	ctx.lr = 0x824A5468;
	sub_824A5038(ctx, base);
loc_824A5468:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r29,361(r31)
	PPC_STORE_U8(ctx.r31.u32 + 361, ctx.r29.u8);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A5490"))) PPC_WEAK_FUNC(sub_824A5490);
PPC_FUNC_IMPL(__imp__sub_824A5490) {
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
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a54c4
	if (ctx.cr6.eq) goto loc_824A54C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824a5038
	ctx.lr = 0x824A54C4;
	sub_824A5038(ctx, base);
loc_824A54C4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,361(r31)
	PPC_STORE_U8(ctx.r31.u32 + 361, ctx.r11.u8);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
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

__attribute__((alias("__imp__sub_824A54FC"))) PPC_WEAK_FUNC(sub_824A54FC);
PPC_FUNC_IMPL(__imp__sub_824A54FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5500"))) PPC_WEAK_FUNC(sub_824A5500);
PPC_FUNC_IMPL(__imp__sub_824A5500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,20720
	ctx.r3.s64 = ctx.r11.s64 + 20720;
	// b 0x823d75f8
	sub_823D75F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A550C"))) PPC_WEAK_FUNC(sub_824A550C);
PPC_FUNC_IMPL(__imp__sub_824A550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5510"))) PPC_WEAK_FUNC(sub_824A5510);
PPC_FUNC_IMPL(__imp__sub_824A5510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A5518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5578
	if (!ctx.cr6.eq) goto loc_824A5578;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// li r29,128
	ctx.r29.s64 = 128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5554
	if (!ctx.cr6.eq) goto loc_824A5554;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82130528
	ctx.lr = 0x824A5550;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_824A5554:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
loc_824A5560:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,3040(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// blt cr6,0x824a5560
	if (ctx.cr6.lt) goto loc_824A5560;
loc_824A5578:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-27428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27428);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824a5338
	ctx.lr = 0x824A558C;
	sub_824A5338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x824a4e18
	ctx.lr = 0x824A55AC;
	sub_824A4E18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a55d4
	if (ctx.cr6.eq) goto loc_824A55D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_824A55D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b5a60
	ctx.lr = 0x824A55DC;
	sub_821B5A60(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x824A55E4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a560c
	if (ctx.cr6.eq) goto loc_824A560C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,-6884
	ctx.r8.s64 = ctx.r9.s64 + -6884;
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x824a5610
	goto loc_824A5610;
loc_824A560C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5610:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a5634
	if (ctx.cr6.eq) goto loc_824A5634;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A5634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A5634:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A5640"))) PPC_WEAK_FUNC(sub_824A5640);
PPC_FUNC_IMPL(__imp__sub_824A5640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A5648;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a56a8
	if (!ctx.cr6.eq) goto loc_824A56A8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// li r29,128
	ctx.r29.s64 = 128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5684
	if (!ctx.cr6.eq) goto loc_824A5684;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82130528
	ctx.lr = 0x824A5680;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_824A5684:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
loc_824A5690:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,3040(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// blt cr6,0x824a5690
	if (ctx.cr6.lt) goto loc_824A5690;
loc_824A56A8:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-27428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27428);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824a5338
	ctx.lr = 0x824A56BC;
	sub_824A5338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x824a4e18
	ctx.lr = 0x824A56DC;
	sub_824A4E18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a5708
	if (ctx.cr6.eq) goto loc_824A5708;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_824A5708:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b5a60
	ctx.lr = 0x824A5710;
	sub_821B5A60(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82130528
	ctx.lr = 0x824A5718;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a5744
	if (ctx.cr6.eq) goto loc_824A5744;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r9,2628
	ctx.r7.s64 = ctx.r9.s64 + 2628;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stvx128 v62,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a5748
	goto loc_824A5748;
loc_824A5744:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5748:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a576c
	if (ctx.cr6.eq) goto loc_824A576C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A576C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A576C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A5778"))) PPC_WEAK_FUNC(sub_824A5778);
PPC_FUNC_IMPL(__imp__sub_824A5778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A5780;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a57e4
	if (!ctx.cr6.eq) goto loc_824A57E4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// li r29,128
	ctx.r29.s64 = 128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a57c0
	if (!ctx.cr6.eq) goto loc_824A57C0;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82130528
	ctx.lr = 0x824A57BC;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_824A57C0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
loc_824A57CC:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,3040(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// blt cr6,0x824a57cc
	if (ctx.cr6.lt) goto loc_824A57CC;
loc_824A57E4:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-27428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27428);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824a5338
	ctx.lr = 0x824A57F8;
	sub_824A5338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x824a4e18
	ctx.lr = 0x824A5818;
	sub_824A4E18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a5838
	if (ctx.cr6.eq) goto loc_824A5838;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824A5838:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b5a60
	ctx.lr = 0x824A5840;
	sub_821B5A60(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x824A5848;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a5868
	if (ctx.cr6.eq) goto loc_824A5868;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,2644
	ctx.r9.s64 = ctx.r10.s64 + 2644;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x824a586c
	goto loc_824A586C;
loc_824A5868:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_824A586C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a5890
	if (ctx.cr6.eq) goto loc_824A5890;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A5890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A5890:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A589C"))) PPC_WEAK_FUNC(sub_824A589C);
PPC_FUNC_IMPL(__imp__sub_824A589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A58A0"))) PPC_WEAK_FUNC(sub_824A58A0);
PPC_FUNC_IMPL(__imp__sub_824A58A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A58A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a590c
	if (!ctx.cr6.eq) goto loc_824A590C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// li r29,128
	ctx.r29.s64 = 128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a58e8
	if (!ctx.cr6.eq) goto loc_824A58E8;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82130528
	ctx.lr = 0x824A58E4;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_824A58E8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
loc_824A58F4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,3040(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// blt cr6,0x824a58f4
	if (ctx.cr6.lt) goto loc_824A58F4;
loc_824A590C:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-27428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27428);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824a5338
	ctx.lr = 0x824A5920;
	sub_824A5338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x824a4e18
	ctx.lr = 0x824A5940;
	sub_824A4E18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a5960
	if (ctx.cr6.eq) goto loc_824A5960;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824A5960:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b5a60
	ctx.lr = 0x824A5968;
	sub_821B5A60(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x824A5970;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a5990
	if (ctx.cr6.eq) goto loc_824A5990;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,2660
	ctx.r9.s64 = ctx.r10.s64 + 2660;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x824a5994
	goto loc_824A5994;
loc_824A5990:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_824A5994:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a59b8
	if (ctx.cr6.eq) goto loc_824A59B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A59B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A59B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A59C4"))) PPC_WEAK_FUNC(sub_824A59C4);
PPC_FUNC_IMPL(__imp__sub_824A59C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A59C8"))) PPC_WEAK_FUNC(sub_824A59C8);
PPC_FUNC_IMPL(__imp__sub_824A59C8) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,20720
	ctx.r31.s64 = ctx.r11.s64 + 20720;
	// addi r4,r10,2752
	ctx.r4.s64 = ctx.r10.s64 + 2752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5510
	ctx.lr = 0x824A59F0;
	sub_824A5510(ctx, base);
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,2732
	ctx.r4.s64 = ctx.r8.s64 + 2732;
	// stw r11,20708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20708, ctx.r11.u32);
	// bl 0x824a5510
	ctx.lr = 0x824A5A0C;
	sub_824A5510(ctx, base);
	// lis r7,-32115
	ctx.r7.s64 = -2104688640;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,2712
	ctx.r4.s64 = ctx.r6.s64 + 2712;
	// stw r11,20704(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20704, ctx.r11.u32);
	// bl 0x824a5510
	ctx.lr = 0x824A5A28;
	sub_824A5510(ctx, base);
	// lis r5,-32115
	ctx.r5.s64 = -2104688640;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-18184
	ctx.r4.s64 = ctx.r4.s64 + -18184;
	// stw r11,20712(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20712, ctx.r11.u32);
	// bl 0x824a5640
	ctx.lr = 0x824A5A44;
	sub_824A5640(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,2692
	ctx.r4.s64 = ctx.r9.s64 + 2692;
	// stw r11,20700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20700, ctx.r11.u32);
	// bl 0x824a5778
	ctx.lr = 0x824A5A60;
	sub_824A5778(ctx, base);
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,2672
	ctx.r4.s64 = ctx.r7.s64 + 2672;
	// stw r11,20696(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20696, ctx.r11.u32);
	// bl 0x824a58a0
	ctx.lr = 0x824A5A7C;
	sub_824A58A0(ctx, base);
	// lis r6,-32115
	ctx.r6.s64 = -2104688640;
	// stw r3,20716(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20716, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_824A5A98"))) PPC_WEAK_FUNC(sub_824A5A98);
PPC_FUNC_IMPL(__imp__sub_824A5A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// ble cr6,0x824a5af0
	if (!ctx.cr6.gt) goto loc_824A5AF0;
loc_824A5AAC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824a5ac4
	if (ctx.cr6.lt) goto loc_824A5AC4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A5AC4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a5af0
	if (ctx.cr6.eq) goto loc_824A5AF0;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// bgt cr6,0x824a5aac
	if (ctx.cr6.gt) goto loc_824A5AAC;
loc_824A5AF0:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5AFC"))) PPC_WEAK_FUNC(sub_824A5AFC);
PPC_FUNC_IMPL(__imp__sub_824A5AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5B00"))) PPC_WEAK_FUNC(sub_824A5B00);
PPC_FUNC_IMPL(__imp__sub_824A5B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5B20"))) PPC_WEAK_FUNC(sub_824A5B20);
PPC_FUNC_IMPL(__imp__sub_824A5B20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x824a5b30
	if (!ctx.cr6.eq) goto loc_824A5B30;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824A5B30:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5B58"))) PPC_WEAK_FUNC(sub_824A5B58);
PPC_FUNC_IMPL(__imp__sub_824A5B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82183870
	ctx.lr = 0x824A5B78;
	sub_82183870(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258f990
	ctx.lr = 0x824A5B84;
	sub_8258F990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a5ba4
	if (ctx.cr6.eq) goto loc_824A5BA4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5BA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5BBC"))) PPC_WEAK_FUNC(sub_824A5BBC);
PPC_FUNC_IMPL(__imp__sub_824A5BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5BC0"))) PPC_WEAK_FUNC(sub_824A5BC0);
PPC_FUNC_IMPL(__imp__sub_824A5BC0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a5be0
	if (ctx.cr6.lt) goto loc_824A5BE0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A5BE0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x824a5c30
	if (ctx.cr6.eq) goto loc_824A5C30;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x824a5c00
	if (ctx.cr6.lt) goto loc_824A5C00;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A5C00:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a5c68
	if (!ctx.cr6.eq) goto loc_824A5C68;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a5c1c
	if (ctx.cr6.lt) goto loc_824A5C1C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5C1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824A5C28:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
loc_824A5C30:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a5c40
	if (ctx.cr6.lt) goto loc_824A5C40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5C40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5c28
	if (!ctx.cr6.eq) goto loc_824A5C28;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a5c5c
	if (ctx.cr6.lt) goto loc_824A5C5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5C5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824A5C68:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5C70"))) PPC_WEAK_FUNC(sub_824A5C70);
PPC_FUNC_IMPL(__imp__sub_824A5C70) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_824A5C7C:
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
loc_824A5C88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824a5c9c
	if (ctx.cr6.lt) goto loc_824A5C9C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A5C9C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5cb8
	if (ctx.cr6.eq) goto loc_824A5CB8;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// b 0x824a5c88
	goto loc_824A5C88;
loc_824A5CB8:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824a5c7c
	if (!ctx.cr6.eq) goto loc_824A5C7C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5CCC"))) PPC_WEAK_FUNC(sub_824A5CCC);
PPC_FUNC_IMPL(__imp__sub_824A5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5CD0"))) PPC_WEAK_FUNC(sub_824A5CD0);
PPC_FUNC_IMPL(__imp__sub_824A5CD0) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824a5d50
	if (!ctx.cr6.lt) goto loc_824A5D50;
loc_824A5CF8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x824a5d18
	if (ctx.cr6.lt) goto loc_824A5D18;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A5D18:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a5d28
	if (ctx.cr6.eq) goto loc_824A5D28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824A5D28:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x824a5cf8
	if (ctx.cr6.lt) goto loc_824A5CF8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
loc_824A5D50:
	// bne cr6,0x824a5d6c
	if (!ctx.cr6.eq) goto loc_824A5D6C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_824A5D6C:
	// bl 0x824a5a98
	ctx.lr = 0x824A5D70;
	sub_824A5A98(ctx, base);
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

__attribute__((alias("__imp__sub_824A5D84"))) PPC_WEAK_FUNC(sub_824A5D84);
PPC_FUNC_IMPL(__imp__sub_824A5D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5D88"))) PPC_WEAK_FUNC(sub_824A5D88);
PPC_FUNC_IMPL(__imp__sub_824A5D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A5D90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x824a5e04
	if (ctx.cr6.lt) goto loc_824A5E04;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x824a5cd0
	ctx.lr = 0x824A5DD4;
	sub_824A5CD0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x824a5e04
	if (ctx.cr6.eq) goto loc_824A5E04;
loc_824A5DDC:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824a5cd0
	ctx.lr = 0x824A5DFC;
	sub_824A5CD0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824a5ddc
	if (!ctx.cr6.eq) goto loc_824A5DDC;
loc_824A5E04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A5E0C"))) PPC_WEAK_FUNC(sub_824A5E0C);
PPC_FUNC_IMPL(__imp__sub_824A5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5E10"))) PPC_WEAK_FUNC(sub_824A5E10);
PPC_FUNC_IMPL(__imp__sub_824A5E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824A5E18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x824a5e54
	if (!ctx.cr6.eq) goto loc_824A5E54;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5e4c
	if (!ctx.cr6.eq) goto loc_824A5E4C;
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_824A5E4C:
	// sth r25,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r25.u16);
	// b 0x824a5e78
	goto loc_824A5E78;
loc_824A5E54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824a5e6c
	if (ctx.cr6.eq) goto loc_824A5E6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195e48
	ctx.lr = 0x824A5E68;
	sub_82195E48(ctx, base);
	// b 0x824a5e70
	goto loc_824A5E70;
loc_824A5E6C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A5E70:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
loc_824A5E78:
	// lhz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5f04
	if (ctx.cr6.eq) goto loc_824A5F04;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_824A5E8C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r30,r11,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a5ec4
	if (ctx.cr6.eq) goto loc_824A5EC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A5EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824a5ec8
	goto loc_824A5EC8;
loc_824A5EC4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824A5EC8:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stwx r3,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5ef0
	if (ctx.cr6.eq) goto loc_824A5EF0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A5EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A5EF0:
	// lhz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a5e8c
	if (ctx.cr6.lt) goto loc_824A5E8C;
loc_824A5F04:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A5F10"))) PPC_WEAK_FUNC(sub_824A5F10);
PPC_FUNC_IMPL(__imp__sub_824A5F10) {
	PPC_FUNC_PROLOGUE();
loc_824A5F10:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a5f24
	if (ctx.cr6.lt) goto loc_824A5F24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5F24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5f38
	if (ctx.cr6.eq) goto loc_824A5F38;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x824a5f10
	goto loc_824A5F10;
loc_824A5F38:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a5f50
	if (ctx.cr6.lt) goto loc_824A5F50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5F50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5f38
	if (!ctx.cr6.eq) goto loc_824A5F38;
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
	// b 0x824a5f10
	goto loc_824A5F10;
}

__attribute__((alias("__imp__sub_824A5F7C"))) PPC_WEAK_FUNC(sub_824A5F7C);
PPC_FUNC_IMPL(__imp__sub_824A5F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5F80"))) PPC_WEAK_FUNC(sub_824A5F80);
PPC_FUNC_IMPL(__imp__sub_824A5F80) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824a5fb0
	if (ctx.cr6.lt) goto loc_824A5FB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A5FB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5fdc
	if (ctx.cr6.eq) goto loc_824A5FDC;
	// subf. r5,r31,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x824a5fd4
	if (!ctx.cr0.gt) goto loc_824A5FD4;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823db5b0
	ctx.lr = 0x824A5FD4;
	sub_823DB5B0(ctx, base);
loc_824A5FD4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824a6018
	goto loc_824A6018;
loc_824A5FDC:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
loc_824A5FE4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824a5ff8
	if (ctx.cr6.lt) goto loc_824A5FF8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A5FF8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a6014
	if (ctx.cr6.eq) goto loc_824A6014;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// b 0x824a5fe4
	goto loc_824A5FE4;
loc_824A6014:
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
loc_824A6018:
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

__attribute__((alias("__imp__sub_824A6030"))) PPC_WEAK_FUNC(sub_824A6030);
PPC_FUNC_IMPL(__imp__sub_824A6030) {
	PPC_FUNC_PROLOGUE();
	// lhz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823d7598
	sub_823D7598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A6044"))) PPC_WEAK_FUNC(sub_824A6044);
PPC_FUNC_IMPL(__imp__sub_824A6044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6048"))) PPC_WEAK_FUNC(sub_824A6048);
PPC_FUNC_IMPL(__imp__sub_824A6048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A6050;
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
	// beq cr6,0x824a6094
	if (ctx.cr6.eq) goto loc_824A6094;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x824a6094
	if (ctx.cr6.eq) goto loc_824A6094;
loc_824A6074:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a5f80
	ctx.lr = 0x824A6088;
	sub_824A5F80(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x824a6074
	if (!ctx.cr6.eq) goto loc_824A6074;
loc_824A6094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A609C"))) PPC_WEAK_FUNC(sub_824A609C);
PPC_FUNC_IMPL(__imp__sub_824A609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A60A0"))) PPC_WEAK_FUNC(sub_824A60A0);
PPC_FUNC_IMPL(__imp__sub_824A60A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A60A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x824a60fc
	if (!ctx.cr6.gt) goto loc_824A60FC;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
loc_824A60C8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r5,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x824a5cd0
	ctx.lr = 0x824A60EC;
	sub_824A5CD0(ctx, base);
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x824a60c8
	if (ctx.cr6.gt) goto loc_824A60C8;
loc_824A60FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A6104"))) PPC_WEAK_FUNC(sub_824A6104);
PPC_FUNC_IMPL(__imp__sub_824A6104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6108"))) PPC_WEAK_FUNC(sub_824A6108);
PPC_FUNC_IMPL(__imp__sub_824A6108) {
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
	// li r4,128
	ctx.r4.s64 = 128;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
	// stw r30,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// bl 0x821bed68
	ctx.lr = 0x824A6140;
	sub_821BED68(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// bl 0x8244d150
	ctx.lr = 0x824A6150;
	sub_8244D150(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
loc_824A6158:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x824a6158
	if (ctx.cr6.lt) goto loc_824A6158;
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

__attribute__((alias("__imp__sub_824A6188"))) PPC_WEAK_FUNC(sub_824A6188);
PPC_FUNC_IMPL(__imp__sub_824A6188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A6190;
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
	// bl 0x824a5d88
	ctx.lr = 0x824A61B4;
	sub_824A5D88(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x824a620c
	if (!ctx.cr6.lt) goto loc_824A620C;
loc_824A61C0:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a61d8
	if (ctx.cr6.lt) goto loc_824A61D8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A61D8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a6200
	if (ctx.cr6.eq) goto loc_824A6200;
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
	// bl 0x824a5cd0
	ctx.lr = 0x824A6200;
	sub_824A5CD0(ctx, base);
loc_824A6200:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x824a61c0
	if (ctx.cr6.lt) goto loc_824A61C0;
loc_824A620C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a60a0
	ctx.lr = 0x824A621C;
	sub_824A60A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A6224"))) PPC_WEAK_FUNC(sub_824A6224);
PPC_FUNC_IMPL(__imp__sub_824A6224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6228"))) PPC_WEAK_FUNC(sub_824A6228);
PPC_FUNC_IMPL(__imp__sub_824A6228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A6230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x824a62e8
	if (!ctx.cr6.gt) goto loc_824A62E8;
loc_824A6254:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824a62d4
	if (ctx.cr6.eq) goto loc_824A62D4;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x824a5bc0
	ctx.lr = 0x824A6288;
	sub_824A5BC0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x824a5f10
	ctx.lr = 0x824A62A0;
	sub_824A5F10(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824a6228
	ctx.lr = 0x824A62B8;
	sub_824A6228(ctx, base);
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rlwinm r5,r6,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// bgt cr6,0x824a6254
	if (ctx.cr6.gt) goto loc_824A6254;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824A62D4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824a6188
	ctx.lr = 0x824A62E8;
	sub_824A6188(ctx, base);
loc_824A62E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A62F0"))) PPC_WEAK_FUNC(sub_824A62F0);
PPC_FUNC_IMPL(__imp__sub_824A62F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A62F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x824a6398
	if (ctx.cr6.eq) goto loc_824A6398;
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 2;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x824a6338
	if (ctx.cr6.eq) goto loc_824A6338;
loc_824A6328:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824a6328
	if (!ctx.cr6.eq) goto loc_824A6328;
loc_824A6338:
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6228
	ctx.lr = 0x824A634C;
	sub_824A6228(ctx, base);
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ble cr6,0x824a638c
	if (!ctx.cr6.gt) goto loc_824A638C;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824a6048
	ctx.lr = 0x824A6370;
	sub_824A6048(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a5c70
	ctx.lr = 0x824A6384;
	sub_824A5C70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_824A638C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6048
	ctx.lr = 0x824A6398;
	sub_824A6048(ctx, base);
loc_824A6398:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A63A0"))) PPC_WEAK_FUNC(sub_824A63A0);
PPC_FUNC_IMPL(__imp__sub_824A63A0) {
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
	// addi r11,r30,262
	ctx.r11.s64 = ctx.r30.s64 + 262;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r8,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824a6424
	if (!ctx.cr6.eq) goto loc_824A6424;
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// addi r4,r31,520
	ctx.r4.s64 = ctx.r31.s64 + 520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824a62f0
	ctx.lr = 0x824A6410;
	sub_824A62F0(ctx, base);
	// addi r7,r30,195
	ctx.r7.s64 = ctx.r30.s64 + 195;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x821bf8c8
	ctx.lr = 0x824A6424;
	sub_821BF8C8(ctx, base);
loc_824A6424:
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

__attribute__((alias("__imp__sub_824A643C"))) PPC_WEAK_FUNC(sub_824A643C);
PPC_FUNC_IMPL(__imp__sub_824A643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6440"))) PPC_WEAK_FUNC(sub_824A6440);
PPC_FUNC_IMPL(__imp__sub_824A6440) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,3052
	ctx.r9.s64 = ctx.r10.s64 + 3052;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A6458"))) PPC_WEAK_FUNC(sub_824A6458);
PPC_FUNC_IMPL(__imp__sub_824A6458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6480"))) PPC_WEAK_FUNC(sub_824A6480);
PPC_FUNC_IMPL(__imp__sub_824A6480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A64A8"))) PPC_WEAK_FUNC(sub_824A64A8);
PPC_FUNC_IMPL(__imp__sub_824A64A8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,3052
	ctx.r10.s64 = ctx.r11.s64 + 3052;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82130588
	ctx.lr = 0x824A64D8;
	sub_82130588(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a64f0
	if (ctx.cr6.eq) goto loc_824A64F0;
	// bl 0x82130588
	ctx.lr = 0x824A64EC;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824A64F0:
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

__attribute__((alias("__imp__sub_824A6508"))) PPC_WEAK_FUNC(sub_824A6508);
PPC_FUNC_IMPL(__imp__sub_824A6508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A6510;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,3052
	ctx.r6.s64 = ctx.r7.s64 + 3052;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r3,992
	ctx.r3.s64 = 992;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82130528
	ctx.lr = 0x824A65A0;
	sub_82130528(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r5,992
	ctx.r5.s64 = 992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8244d150
	ctx.lr = 0x824A65B0;
	sub_8244D150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A65BC"))) PPC_WEAK_FUNC(sub_824A65BC);
PPC_FUNC_IMPL(__imp__sub_824A65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A65C0"))) PPC_WEAK_FUNC(sub_824A65C0);
PPC_FUNC_IMPL(__imp__sub_824A65C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a65e8
	if (ctx.cr6.eq) goto loc_824A65E8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// blr 
	return;
loc_824A65E8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A65F0"))) PPC_WEAK_FUNC(sub_824A65F0);
PPC_FUNC_IMPL(__imp__sub_824A65F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A65F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3396
	ctx.r9.s64 = ctx.r10.s64 + 3396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// beq cr6,0x824a6638
	if (ctx.cr6.eq) goto loc_824A6638;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x824A6634;
	sub_82130528(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824A6638:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r30.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A664C"))) PPC_WEAK_FUNC(sub_824A664C);
PPC_FUNC_IMPL(__imp__sub_824A664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6650"))) PPC_WEAK_FUNC(sub_824A6650);
PPC_FUNC_IMPL(__imp__sub_824A6650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A6658;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r9,r11,3396
	ctx.r9.s64 = ctx.r11.s64 + 3396;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a66d8
	if (ctx.cr6.eq) goto loc_824A66D8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_824A6684:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a66c4
	if (ctx.cr6.eq) goto loc_824A66C4;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a66a8
	if (ctx.cr6.eq) goto loc_824A66A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x824A66A8;
	sub_82130588(ctx, base);
loc_824A66A8:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// sth r27,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r27.u16);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stb r27,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r27.u8);
	// bl 0x82130588
	ctx.lr = 0x824A66C4;
	sub_82130588(ctx, base);
loc_824A66C4:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a6684
	if (ctx.cr6.lt) goto loc_824A6684;
loc_824A66D8:
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a66ec
	if (ctx.cr6.eq) goto loc_824A66EC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82130588
	ctx.lr = 0x824A66EC;
	sub_82130588(ctx, base);
loc_824A66EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x824A66F4;
	sub_821D2028(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A66FC"))) PPC_WEAK_FUNC(sub_824A66FC);
PPC_FUNC_IMPL(__imp__sub_824A66FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6700"))) PPC_WEAK_FUNC(sub_824A6700);
PPC_FUNC_IMPL(__imp__sub_824A6700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A6708;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,32
	ctx.r30.s64 = ctx.r4.s64 + 32;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a672c
	if (ctx.cr6.eq) goto loc_824A672C;
	// rlwinm r11,r30,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_824A672C:
	// lhz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a6764
	if (!ctx.cr6.gt) goto loc_824A6764;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_824A6744:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x824a6764
	if (!ctx.cr6.lt) goto loc_824A6764;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a6744
	if (ctx.cr6.lt) goto loc_824A6744;
loc_824A6764:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82130528
	ctx.lr = 0x824A676C;
	sub_82130528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a6804
	if (ctx.cr6.eq) goto loc_824A6804;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// beq cr6,0x824a67a8
	if (ctx.cr6.eq) goto loc_824A67A8;
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// bl 0x82130528
	ctx.lr = 0x824A67A4;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_824A67A8:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// stb r7,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r7.u8);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a67fc
	if (ctx.cr6.eq) goto loc_824A67FC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_824A67DC:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a67dc
	if (!ctx.cr6.eq) goto loc_824A67DC;
loc_824A67FC:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x824a6808
	goto loc_824A6808;
loc_824A6804:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_824A6808:
	// lhz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x824a683c
	if (!ctx.cr6.gt) goto loc_824A683C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
loc_824A6820:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// bne 0x824a6820
	if (!ctx.cr0.eq) goto loc_824A6820;
loc_824A683C:
	// lhz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r7.u16);
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A685C"))) PPC_WEAK_FUNC(sub_824A685C);
PPC_FUNC_IMPL(__imp__sub_824A685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6860"))) PPC_WEAK_FUNC(sub_824A6860);
PPC_FUNC_IMPL(__imp__sub_824A6860) {
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
	// bl 0x824a6650
	ctx.lr = 0x824A6880;
	sub_824A6650(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a6898
	if (ctx.cr6.eq) goto loc_824A6898;
	// bl 0x82130588
	ctx.lr = 0x824A6894;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824A6898:
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

__attribute__((alias("__imp__sub_824A68B0"))) PPC_WEAK_FUNC(sub_824A68B0);
PPC_FUNC_IMPL(__imp__sub_824A68B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824A68B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824a6948
	if (!ctx.cr6.gt) goto loc_824A6948;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_824A68E0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824a68fc
	if (ctx.cr6.lt) goto loc_824A68FC;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a6910
	if (!ctx.cr6.eq) goto loc_824A6910;
loc_824A68FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824a68e0
	if (ctx.cr6.lt) goto loc_824A68E0;
	// b 0x824a6948
	goto loc_824A6948;
loc_824A6910:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r6,6(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r4,6(r8)
	PPC_STORE_U16(ctx.r8.u32 + 6, ctx.r4.u16);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r26,r9,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bne cr6,0x824a69cc
	if (!ctx.cr6.eq) goto loc_824A69CC;
loc_824A6948:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a6aa0
	if (ctx.cr6.eq) goto loc_824A6AA0;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824a6aa0
	if (ctx.cr0.lt) goto loc_824A6AA0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_824A696C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824a6994
	if (!ctx.cr6.eq) goto loc_824A6994;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x824a696c
	if (!ctx.cr0.lt) goto loc_824A696C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_824A6994:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r6,6(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r5,6(r8)
	PPC_STORE_U16(ctx.r8.u32 + 6, ctx.r5.u16);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r26,r9,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq cr6,0x824a6aa0
	if (ctx.cr6.eq) goto loc_824A6AA0;
loc_824A69CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x821bbf50
	ctx.lr = 0x824A69D8;
	sub_821BBF50(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824a6a88
	if (ctx.cr6.eq) goto loc_824A6A88;
	// lwz r29,0(r13)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,60
	ctx.r28.s64 = 60;
	// addi r30,r27,12
	ctx.r30.s64 = ctx.r27.s64 + 12;
	// lwzx r31,r28,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a6a30
	if (ctx.cr6.eq) goto loc_824A6A30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82187a38
	ctx.lr = 0x824A6A04;
	sub_82187A38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824a6a30
	if (ctx.cr6.eq) goto loc_824A6A30;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a6a34
	if (ctx.cr6.eq) goto loc_824A6A34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217d890
	ctx.lr = 0x824A6A20;
	sub_8217D890(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x824a6a34
	goto loc_824A6A34;
loc_824A6A30:
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_824A6A34:
	// lwzx r29,r28,r29
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a6a7c
	if (ctx.cr6.eq) goto loc_824A6A7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82187a38
	ctx.lr = 0x824A6A50;
	sub_82187A38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824a6a7c
	if (ctx.cr6.eq) goto loc_824A6A7C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a6a80
	if (ctx.cr6.eq) goto loc_824A6A80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217d890
	ctx.lr = 0x824A6A6C;
	sub_8217D890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x824a6a80
	goto loc_824A6A80;
loc_824A6A7C:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_824A6A80:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_824A6A88:
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_824A6AA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A6AAC"))) PPC_WEAK_FUNC(sub_824A6AAC);
PPC_FUNC_IMPL(__imp__sub_824A6AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6AB0"))) PPC_WEAK_FUNC(sub_824A6AB0);
PPC_FUNC_IMPL(__imp__sub_824A6AB0) {
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82183870
	ctx.lr = 0x824A6AD8;
	sub_82183870(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824A6AE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a6ae0
	if (!ctx.cr6.eq) goto loc_824A6AE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r11,-23528
	ctx.r10.s64 = ctx.r11.s64 + -23528;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r8,-11
	ctx.r11.s64 = ctx.r8.s64 + -11;
loc_824A6B10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x824a6b34
	if (ctx.cr6.eq) goto loc_824A6B34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824a6b10
	if (ctx.cr6.eq) goto loc_824A6B10;
loc_824A6B34:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824a6b44
	if (!ctx.cr6.eq) goto loc_824A6B44;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-12(r8)
	PPC_STORE_U8(ctx.r8.u32 + -12, ctx.r11.u8);
loc_824A6B44:
	// li r4,47
	ctx.r4.s64 = 47;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823db6d0
	ctx.lr = 0x824A6B50;
	sub_823DB6D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x824a6b60
	if (!ctx.cr6.eq) goto loc_824A6B60;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_824A6B60:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r5,20740(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20740);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824a6b90
	if (!ctx.cr6.eq) goto loc_824A6B90;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r9,r10,20744
	ctx.r9.s64 = ctx.r10.s64 + 20744;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824a6b8c
	if (!ctx.cr6.eq) goto loc_824A6B8C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r5,r10,3680
	ctx.r5.s64 = ctx.r10.s64 + 3680;
loc_824A6B8C:
	// stw r5,20740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20740, ctx.r5.u32);
loc_824A6B90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,10784
	ctx.r4.s64 = ctx.r11.s64 + 10784;
	// bl 0x823dc018
	ctx.lr = 0x824A6BA0;
	sub_823DC018(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,3704
	ctx.r5.s64 = ctx.r10.s64 + 3704;
	// li r6,104
	ctx.r6.s64 = 104;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2940
	ctx.lr = 0x824A6BBC;
	sub_821E2940(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
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

__attribute__((alias("__imp__sub_824A6BD8"))) PPC_WEAK_FUNC(sub_824A6BD8);
PPC_FUNC_IMPL(__imp__sub_824A6BD8) {
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
	// bl 0x821e2748
	ctx.lr = 0x824A6BF0;
	sub_821E2748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3998
	ctx.r9.s64 = ctx.r11.s64 + 3998;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_824A6C1C"))) PPC_WEAK_FUNC(sub_824A6C1C);
PPC_FUNC_IMPL(__imp__sub_824A6C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6C20"))) PPC_WEAK_FUNC(sub_824A6C20);
PPC_FUNC_IMPL(__imp__sub_824A6C20) {
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x824a6c80
	if (ctx.cr6.eq) goto loc_824A6C80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x824A6C4C;
	sub_82130588(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rotlwi r3,r10,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// bl 0x82130528
	ctx.lr = 0x824A6C64;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lhz r8,6(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8244d5c0
	ctx.lr = 0x824A6C80;
	sub_8244D5C0(ctx, base);
loc_824A6C80:
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

__attribute__((alias("__imp__sub_824A6C9C"))) PPC_WEAK_FUNC(sub_824A6C9C);
PPC_FUNC_IMPL(__imp__sub_824A6C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6CA0"))) PPC_WEAK_FUNC(sub_824A6CA0);
PPC_FUNC_IMPL(__imp__sub_824A6CA0) {
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
	// bl 0x825b5d78
	ctx.lr = 0x824A6CB8;
	sub_825B5D78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,-31068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31068);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lfs f12,-31400(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31400);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,3796(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,31020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 31020);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,14988(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14988);
	ctx.f10.f64 = double(temp.f32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lfs f9,-31380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31380);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20160(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20160);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,608(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f12,612(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f13,616(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f12,620(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,672(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stfs f10,676(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f0,680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stfs f0,684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stfs f9,688(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stfs f8,692(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
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

__attribute__((alias("__imp__sub_824A6D44"))) PPC_WEAK_FUNC(sub_824A6D44);
PPC_FUNC_IMPL(__imp__sub_824A6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6D48"))) PPC_WEAK_FUNC(sub_824A6D48);
PPC_FUNC_IMPL(__imp__sub_824A6D48) {
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
	// bl 0x825b5d78
	ctx.lr = 0x824A6D60;
	sub_825B5D78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f0,-31068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31068);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-31400(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31400);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,3796(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3796);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lfs f11,-31380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31380);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20160(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20160);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f13,612(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f0,616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f13,620(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,688(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stfs f10,692(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
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

__attribute__((alias("__imp__sub_824A6DC4"))) PPC_WEAK_FUNC(sub_824A6DC4);
PPC_FUNC_IMPL(__imp__sub_824A6DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6DC8"))) PPC_WEAK_FUNC(sub_824A6DC8);
PPC_FUNC_IMPL(__imp__sub_824A6DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A6DD0;
	__savegprlr_29(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r31,303(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 303);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blt cr6,0x824a6f6c
	if (ctx.cr6.lt) goto loc_824A6F6C;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,212(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A6E10:
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r30,r11,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r11,27
	ctx.r29.u64 = ctx.r11.u32 & 0x1F;
	// slw r29,r6,r29
	ctx.r29.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r30,r30,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// and r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824a6e64
	if (!ctx.cr6.eq) goto loc_824A6E64;
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824a6e5c
	if (ctx.cr6.gt) goto loc_824A6E5C;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a6e5c
	if (ctx.cr6.eq) goto loc_824A6E5C;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x824a6e60
	goto loc_824A6E60;
loc_824A6E5C:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_824A6E60:
	// fadds f1,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
loc_824A6E64:
	// lwz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r30,r11,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r11,27
	ctx.r29.u64 = ctx.r11.u32 & 0x1F;
	// slw r29,r6,r29
	ctx.r29.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r30,r30,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// and r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824a6eb8
	if (!ctx.cr6.eq) goto loc_824A6EB8;
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824a6eb0
	if (ctx.cr6.gt) goto loc_824A6EB0;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a6eb0
	if (ctx.cr6.eq) goto loc_824A6EB0;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x824a6eb4
	goto loc_824A6EB4;
loc_824A6EB0:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_824A6EB4:
	// fadds f1,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
loc_824A6EB8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r30,r11,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r11,27
	ctx.r29.u64 = ctx.r11.u32 & 0x1F;
	// slw r29,r6,r29
	ctx.r29.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r30,r30,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// and r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824a6f0c
	if (!ctx.cr6.eq) goto loc_824A6F0C;
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824a6f04
	if (ctx.cr6.gt) goto loc_824A6F04;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a6f04
	if (ctx.cr6.eq) goto loc_824A6F04;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x824a6f08
	goto loc_824A6F08;
loc_824A6F04:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_824A6F08:
	// fadds f1,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
loc_824A6F0C:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r30,r11,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r11,27
	ctx.r29.u64 = ctx.r11.u32 & 0x1F;
	// slw r29,r6,r29
	ctx.r29.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r30,r30,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// and r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824a6f60
	if (!ctx.cr6.eq) goto loc_824A6F60;
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824a6f58
	if (ctx.cr6.gt) goto loc_824A6F58;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a6f58
	if (ctx.cr6.eq) goto loc_824A6F58;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x824a6f5c
	goto loc_824A6F5C;
loc_824A6F58:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_824A6F5C:
	// fadds f1,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
loc_824A6F60:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x824a6e10
	if (!ctx.cr0.eq) goto loc_824A6E10;
loc_824A6F6C:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x824a6fec
	if (!ctx.cr6.lt) goto loc_824A6FEC;
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,212(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// subf r7,r3,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_824A6F8C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// slw r3,r6,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r3.u8 & 0x3F));
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// and r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a6fe0
	if (!ctx.cr6.eq) goto loc_824A6FE0;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r3,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824a6fd8
	if (ctx.cr6.gt) goto loc_824A6FD8;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a6fd8
	if (ctx.cr6.eq) goto loc_824A6FD8;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x824a6fdc
	goto loc_824A6FDC;
loc_824A6FD8:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_824A6FDC:
	// fadds f1,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
loc_824A6FE0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x824a6f8c
	if (!ctx.cr0.eq) goto loc_824A6F8C;
loc_824A6FEC:
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A6FF0"))) PPC_WEAK_FUNC(sub_824A6FF0);
PPC_FUNC_IMPL(__imp__sub_824A6FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r11,19620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19620);
	// lwz r10,752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7008"))) PPC_WEAK_FUNC(sub_824A7008);
PPC_FUNC_IMPL(__imp__sub_824A7008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A7010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,19620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19620);
	// lwz r3,752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// bl 0x824773c0
	ctx.lr = 0x824A7034;
	sub_824773C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a70a8
	if (ctx.cr6.eq) goto loc_824A70A8;
	// lbz r9,302(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 302);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_824A704C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824a7090
	if (!ctx.cr6.lt) goto loc_824A7090;
	// lwz r8,268(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// rlwinm r7,r11,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// slw r5,r3,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r8,r7,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824a7084
	if (!ctx.cr6.eq) goto loc_824A7084;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x824a708c
	if (ctx.cr6.gt) goto loc_824A708C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_824A7084:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x824a704c
	goto loc_824A704C;
loc_824A708C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_824A7090:
	// lwz r11,376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a70a8
	if (ctx.cr6.eq) goto loc_824A70A8;
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x824a70ac
	if (ctx.cr6.lt) goto loc_824A70AC;
loc_824A70A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_824A70AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A70B4"))) PPC_WEAK_FUNC(sub_824A70B4);
PPC_FUNC_IMPL(__imp__sub_824A70B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A70B8"))) PPC_WEAK_FUNC(sub_824A70B8);
PPC_FUNC_IMPL(__imp__sub_824A70B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A70D0"))) PPC_WEAK_FUNC(sub_824A70D0);
PPC_FUNC_IMPL(__imp__sub_824A70D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A70EC;
	sub_8248A510(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8249ce60
	ctx.lr = 0x824A7108;
	sub_8249CE60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7134
	if (ctx.cr6.eq) goto loc_824A7134;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824a7138
	if (!ctx.cr6.eq) goto loc_824A7138;
loc_824A7134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A7138:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A714C"))) PPC_WEAK_FUNC(sub_824A714C);
PPC_FUNC_IMPL(__imp__sub_824A714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7150"))) PPC_WEAK_FUNC(sub_824A7150);
PPC_FUNC_IMPL(__imp__sub_824A7150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824A7158;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r3,232(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x8248a510
	ctx.lr = 0x824A7180;
	sub_8248A510(ctx, base);
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x824a7218
	if (ctx.cr6.eq) goto loc_824A7218;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x825aeb50
	ctx.lr = 0x824A71A0;
	sub_825AEB50(ctx, base);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// lwz r8,108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// lwzx r8,r4,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r8,r8,416
	ctx.r8.s64 = ctx.r8.s64 + 416;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r8,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v58,v60,v60
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r27
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v57,v58,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v59.f32)));
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,232(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// vor128 v56,v57,v57
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// lvx128 v55,r8,r3
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v54,v56,v55
	_mm_store_ps(ctx.v54.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v55.f32)));
	// stvx128 v54,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a7278
	goto loc_824A7278;
loc_824A7218:
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lvx128 v53,r0,r8
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,48
	ctx.r7.s64 = 48;
	// stvx128 v53,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lvx128 v52,r8,r5
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,128
	ctx.r4.s64 = 128;
	// stvx128 v52,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r8,r6
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r8,r7
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v49,v50,v50
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_load_si128((__m128i*)ctx.v50.u8));
	// stvx128 v50,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r8,368(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lvx128 v48,r3,r4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v47,v49,v48
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v48.f32)));
	// stvx128 v47,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824A7278:
	// lvx128 v46,r0,r25
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r0,r11
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v44,v45,v46
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v44.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v46.f32)));
	// stvx128 v44,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v40,v44,v44
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_load_si128((__m128i*)ctx.v44.u8));
	// lvx128 v42,r0,r9
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r26
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r26,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r26,r5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v10,v40,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0xFF));
	// lvx128 v12,r26,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v8,v40,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0xAA));
	// lvx128 v43,r0,r31
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v39,v43,0
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0xFF));
	// lvx128 v41,r0,r10
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v38,v42,0
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), 0xFF));
	// vspltw128 v37,v41,0
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), 0xFF));
	// vmaddfp v9,v0,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v7,v0,v39
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v39.f32)));
	// vspltw128 v6,v43,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0xAA));
	// vspltw128 v4,v41,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), 0xAA));
	// vmulfp128 v5,v0,v38
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v38.f32)));
	// vspltw128 v2,v42,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), 0xAA));
	// vmulfp128 v3,v0,v37
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v37.f32)));
	// vspltw128 v1,v40,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0x55));
	// vspltw128 v31,v43,2
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0x55));
	// vspltw128 v30,v41,2
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), 0x55));
	// vspltw128 v29,v42,2
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), 0x55));
	// vmaddfp v28,v13,v8,v9
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v27,v13,v6,v7
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v26,v13,v2,v5
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v25,v13,v4,v3
	_mm_store_ps(ctx.v25.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v24,v12,v1,v28
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v11,v12,v31,v27
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v27.f32)));
	// vmaddfp v0,v12,v29,v26
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v29.f32)), _mm_load_ps(ctx.v26.f32)));
	// vmaddfp v13,v12,v30,v25
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v25.f32)));
	// stvx128 v24,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v36,v11,v0
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v35,v13,v24
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v34,v11,v0
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrglw128 v33,v13,v24
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw128 v32,v36,v35
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrglw128 v63,v36,v35
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v62,v34,v33
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// stvx128 v32,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A7344"))) PPC_WEAK_FUNC(sub_824A7344);
PPC_FUNC_IMPL(__imp__sub_824A7344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7348"))) PPC_WEAK_FUNC(sub_824A7348);
PPC_FUNC_IMPL(__imp__sub_824A7348) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r7,r3,624
	ctx.r7.s64 = ctx.r3.s64 + 624;
	// li r5,608
	ctx.r5.s64 = 608;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r8,r3,640
	ctx.r8.s64 = ctx.r3.s64 + 640;
	// addi r10,r3,880
	ctx.r10.s64 = ctx.r3.s64 + 880;
	// addi r9,r3,976
	ctx.r9.s64 = ctx.r3.s64 + 976;
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r3,944
	ctx.r7.s64 = ctx.r3.s64 + 944;
	// stvx128 v63,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// stvx128 v63,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r3,672
	ctx.r4.s64 = ctx.r3.s64 + 672;
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// stvx128 v63,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,576
	ctx.r30.s64 = 576;
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r31,0
	ctx.r31.s64 = 0;
	// stvx128 v63,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r3,704
	ctx.r7.s64 = ctx.r3.s64 + 704;
	// stvx128 v63,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r3,592
	ctx.r8.s64 = ctx.r3.s64 + 592;
	// stvx128 v63,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A740C"))) PPC_WEAK_FUNC(sub_824A740C);
PPC_FUNC_IMPL(__imp__sub_824A740C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7410"))) PPC_WEAK_FUNC(sub_824A7410);
PPC_FUNC_IMPL(__imp__sub_824A7410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x824A7418;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825b5d78
	ctx.lr = 0x824A7424;
	sub_825B5D78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f0,31020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f13,14988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14988);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lfs f12,-31380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31380);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r29,r1,104
	ctx.r29.s64 = ctx.r1.s64 + 104;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r28,r1,108
	ctx.r28.s64 = ctx.r1.s64 + 108;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lvx128 v62,r0,r6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v61,r0,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,672
	ctx.r6.s64 = 672;
	// lvx128 v60,r0,r9
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,688
	ctx.r5.s64 = 688;
	// lfs f0,-31400(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -31400);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f13,3796(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r26,704
	ctx.r26.s64 = 704;
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// li r25,720
	ctx.r25.s64 = 720;
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stb r11,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r11.u8);
	// stfs f0,616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stb r11,633(r31)
	PPC_STORE_U8(ctx.r31.u32 + 633, ctx.r11.u8);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stb r11,634(r31)
	PPC_STORE_U8(ctx.r31.u32 + 634, ctx.r11.u8);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// lis r24,-32253
	ctx.r24.s64 = -2113732608;
	// lvlx128 v59,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvlx128 v58,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vspltw128 v56,v58,0
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lvlx128 v55,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v53,v55,0
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v57,v62,7,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 7));
	// vspltw128 v50,v52,0
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vrlimi128 v56,v61,7,0
	_mm_store_ps(ctx.v56.f32, _mm_blend_ps(_mm_load_ps(ctx.v56.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 228), 7));
	// lvlx128 v49,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v47,v49,0
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xFF));
	// lvlx128 v46,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v45,v48,0
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0xFF));
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// vrlimi128 v53,v57,11,0
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 228), 11));
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// vspltw128 v44,v46,0
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), 0xFF));
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// vrlimi128 v51,v56,11,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 11));
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// vrlimi128 v50,v60,7,0
	_mm_store_ps(ctx.v50.f32, _mm_blend_ps(_mm_load_ps(ctx.v50.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 228), 7));
	// stfs f13,652(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// stfs f13,656(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// lfs f0,20160(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v44,v50,11,0
	_mm_store_ps(ctx.v44.f32, _mm_blend_ps(_mm_load_ps(ctx.v44.f32), _mm_permute_ps(_mm_load_ps(ctx.v50.f32), 228), 11));
	// lvlx128 v43,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v42,v43,0
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0xFF));
	// lvlx128 v41,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v47,v53,13,0
	_mm_store_ps(ctx.v47.f32, _mm_blend_ps(_mm_load_ps(ctx.v47.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 13));
	// lvlx128 v40,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v39,v40,0
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0xFF));
	// lvx128 v38,r0,r3
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v37,v41,0
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), 0xFF));
	// vrlimi128 v39,v38,7,0
	_mm_store_ps(ctx.v39.f32, _mm_blend_ps(_mm_load_ps(ctx.v39.f32), _mm_permute_ps(_mm_load_ps(ctx.v38.f32), 228), 7));
	// lvlx128 v36,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v35,v36,0
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), 0xFF));
	// vrlimi128 v45,v51,13,0
	_mm_store_ps(ctx.v45.f32, _mm_blend_ps(_mm_load_ps(ctx.v45.f32), _mm_permute_ps(_mm_load_ps(ctx.v51.f32), 228), 13));
	// li r10,736
	ctx.r10.s64 = 736;
	// stfs f13,660(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// stfs f13,664(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 664, temp.u32);
	// stb r11,635(r31)
	PPC_STORE_U8(ctx.r31.u32 + 635, ctx.r11.u8);
	// vrlimi128 v42,v39,11,0
	_mm_store_ps(ctx.v42.f32, _mm_blend_ps(_mm_load_ps(ctx.v42.f32), _mm_permute_ps(_mm_load_ps(ctx.v39.f32), 228), 11));
	// stfs f13,816(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// vrlimi128 v35,v44,13,0
	_mm_store_ps(ctx.v35.f32, _mm_blend_ps(_mm_load_ps(ctx.v35.f32), _mm_permute_ps(_mm_load_ps(ctx.v44.f32), 228), 13));
	// li r9,752
	ctx.r9.s64 = 752;
	// stvx128 v47,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vrlimi128 v37,v42,13,0
	_mm_store_ps(ctx.v37.f32, _mm_blend_ps(_mm_load_ps(ctx.v37.f32), _mm_permute_ps(_mm_load_ps(ctx.v42.f32), 228), 13));
	// stvx128 v45,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v35,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A7600"))) PPC_WEAK_FUNC(sub_824A7600);
PPC_FUNC_IMPL(__imp__sub_824A7600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A7608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A761C;
	sub_8248A510(ctx, base);
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a768c
	if (ctx.cr6.eq) goto loc_824A768C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_824A763C:
	// lbz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 68);
	// lwz r10,268(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r4,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r6,r28,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a7698
	if (ctx.cr6.eq) goto loc_824A7698;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a7600
	ctx.lr = 0x824A7670;
	sub_824A7600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a7698
	if (!ctx.cr6.eq) goto loc_824A7698;
	// lbz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 72);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a763c
	if (ctx.cr6.lt) goto loc_824A763C;
loc_824A768C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_824A7698:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A76A4"))) PPC_WEAK_FUNC(sub_824A76A4);
PPC_FUNC_IMPL(__imp__sub_824A76A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A76A8"))) PPC_WEAK_FUNC(sub_824A76A8);
PPC_FUNC_IMPL(__imp__sub_824A76A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824A76B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A76C0;
	sub_8248A510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r31,256
	ctx.r26.s64 = ctx.r31.s64 + 256;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7790
	if (ctx.cr6.eq) goto loc_824A7790;
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824a7790
	if (ctx.cr6.eq) goto loc_824A7790;
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7790
	if (ctx.cr6.eq) goto loc_824A7790;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_824A76FC:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// rlwinm r6,r7,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// slw r4,r28,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// and r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a777c
	if (!ctx.cr6.eq) goto loc_824A777C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,83
	ctx.r6.s64 = ctx.r1.s64 + 83;
	// lhz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,85
	ctx.r4.s64 = ctx.r1.s64 + 85;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mulli r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 * 224;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8249cc20
	ctx.lr = 0x824A7760;
	sub_8249CC20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a777c
	if (ctx.cr6.eq) goto loc_824A777C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a779c
	if (!ctx.cr6.eq) goto loc_824A779C;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_824A777C:
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a76fc
	if (ctx.cr6.lt) goto loc_824A76FC;
loc_824A7790:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_824A779C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A77A8"))) PPC_WEAK_FUNC(sub_824A77A8);
PPC_FUNC_IMPL(__imp__sub_824A77A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A77B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A77C4;
	sub_8248A510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lbz r27,302(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x824a77e4
	if (!ctx.cr6.gt) goto loc_824A77E4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824A77E4:
	// bl 0x82130528
	ctx.lr = 0x824A77E8;
	sub_82130528(ctx, base);
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x824A77F4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x824a7810
	if (ctx.cr6.eq) goto loc_824A7810;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r29.u16);
	// b 0x824a7814
	goto loc_824A7814;
loc_824A7810:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_824A7814:
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82130528
	ctx.lr = 0x824A7820;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a7838
	if (ctx.cr6.eq) goto loc_824A7838;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r29.u16);
	// b 0x824a783c
	goto loc_824A783C;
loc_824A7838:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_824A783C:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// beq cr6,0x824a7880
	if (ctx.cr6.eq) goto loc_824A7880;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x824a6c20
	ctx.lr = 0x824A7854;
	sub_824A6C20(ctx, base);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x824a6c20
	ctx.lr = 0x824A7860;
	sub_824A6C20(ctx, base);
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x823da950
	ctx.lr = 0x824A7870;
	sub_823DA950(ctx, base);
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824A7880:
	// lbz r4,302(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 302);
	// bl 0x82160358
	ctx.lr = 0x824A7888;
	sub_82160358(ctx, base);
	// lbz r4,303(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82160358
	ctx.lr = 0x824A7894;
	sub_82160358(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r29,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r29.u8);
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x824a7924
	if (ctx.cr6.lt) goto loc_824A7924;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A78B8:
	// lwz r7,208(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// lwzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lfs f0,80(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r6,208(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f13,80(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lfs f12,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stfsx f12,r8,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lwz r6,208(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lfs f11,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stfsx f11,r10,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// bne 0x824a78b8
	if (!ctx.cr0.eq) goto loc_824A78B8;
loc_824A7924:
	// cmpw cr6,r5,r27
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x824a7954
	if (!ctx.cr6.lt) goto loc_824A7954;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r5,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r5.s64;
loc_824A7934:
	// lwz r9,208(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfs f0,80(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x824a7934
	if (!ctx.cr0.eq) goto loc_824A7934;
loc_824A7954:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A795C"))) PPC_WEAK_FUNC(sub_824A795C);
PPC_FUNC_IMPL(__imp__sub_824A795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7960"))) PPC_WEAK_FUNC(sub_824A7960);
PPC_FUNC_IMPL(__imp__sub_824A7960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A7968;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,232(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A797C;
	sub_8248A510(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r28,236(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	// beq cr6,0x824a7990
	if (ctx.cr6.eq) goto loc_824A7990;
	// lwz r28,20(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
loc_824A7990:
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82130528
	ctx.lr = 0x824A7998;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a79a8
	if (ctx.cr6.eq) goto loc_824A79A8;
	// bl 0x82599ca8
	ctx.lr = 0x824A79A4;
	sub_82599CA8(ctx, base);
	// b 0x824a79ac
	goto loc_824A79AC;
loc_824A79A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A79AC:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// stw r3,276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 276, ctx.r3.u32);
	// stw r3,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r3.u32);
	// lbz r10,-2084(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2084);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a79d0
	if (ctx.cr6.eq) goto loc_824A79D0;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
loc_824A79D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r4,144(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 144);
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// bl 0x8259b0a0
	ctx.lr = 0x824A79E0;
	sub_8259B0A0(ctx, base);
	// lhz r11,146(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 146);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7a20
	if (ctx.cr6.eq) goto loc_824A7A20;
	// li r30,0
	ctx.r30.s64 = 0;
loc_824A79F4:
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82599f48
	ctx.lr = 0x824A7A0C;
	sub_82599F48(ctx, base);
	// lhz r10,146(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 146);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a79f4
	if (ctx.cr6.lt) goto loc_824A79F4;
loc_824A7A20:
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824a7a38
	if (ctx.cr6.eq) goto loc_824A7A38;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x82599d18
	ctx.lr = 0x824A7A34;
	sub_82599D18(ctx, base);
	// b 0x824a7a60
	goto loc_824A7A60;
loc_824A7A38:
	// lwz r4,236(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	// bl 0x82599d18
	ctx.lr = 0x824A7A40;
	sub_82599D18(ctx, base);
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824a7a60
	if (ctx.cr6.eq) goto loc_824A7A60;
	// lhz r11,146(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 146);
	// rotlwi r5,r11,6
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// bl 0x823da950
	ctx.lr = 0x824A7A60;
	sub_823DA950(ctx, base);
loc_824A7A60:
	// lwz r11,236(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8221d420
	ctx.lr = 0x824A7A70;
	sub_8221D420(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A7A78"))) PPC_WEAK_FUNC(sub_824A7A78);
PPC_FUNC_IMPL(__imp__sub_824A7A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A7A80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A7A90;
	sub_8248A510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r27.u32);
	// stw r27,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r27.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7b5c
	if (ctx.cr6.eq) goto loc_824A7B5C;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a7b5c
	if (ctx.cr6.eq) goto loc_824A7B5C;
	// lhz r28,20(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 20);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x824a7b5c
	if (!ctx.cr6.gt) goto loc_824A7B5C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82130528
	ctx.lr = 0x824A7ACC;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a7ae4
	if (ctx.cr6.eq) goto loc_824A7AE4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821b5e40
	ctx.lr = 0x824A7AE0;
	sub_821B5E40(ctx, base);
	// b 0x824a7ae8
	goto loc_824A7AE8;
loc_824A7AE4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_824A7AE8:
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x821b5c60
	ctx.lr = 0x824A7B00;
	sub_821B5C60(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824a7b5c
	if (ctx.cr6.eq) goto loc_824A7B5C;
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a7b5c
	if (ctx.cr6.eq) goto loc_824A7B5C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82130528
	ctx.lr = 0x824A7B28;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a7b40
	if (ctx.cr6.eq) goto loc_824A7B40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821b5e40
	ctx.lr = 0x824A7B3C;
	sub_821B5E40(ctx, base);
	// b 0x824a7b44
	goto loc_824A7B44;
loc_824A7B40:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_824A7B44:
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x821b5c60
	ctx.lr = 0x824A7B5C;
	sub_821B5C60(ctx, base);
loc_824A7B5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A7B64"))) PPC_WEAK_FUNC(sub_824A7B64);
PPC_FUNC_IMPL(__imp__sub_824A7B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7B68"))) PPC_WEAK_FUNC(sub_824A7B68);
PPC_FUNC_IMPL(__imp__sub_824A7B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824A7B70;
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
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7c9c
	if (ctx.cr6.eq) goto loc_824A7C9C;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r6,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r6,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r6,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lhz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// beq cr6,0x824a7c2c
	if (ctx.cr6.eq) goto loc_824A7C2C;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwinm r29,r11,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// bl 0x823da950
	ctx.lr = 0x824A7BF4;
	sub_823DA950(ctx, base);
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x821b4fc8
	ctx.lr = 0x824A7BFC;
	sub_821B4FC8(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7c9c
	if (ctx.cr6.eq) goto loc_824A7C9C;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x823da950
	ctx.lr = 0x824A7C1C;
	sub_823DA950(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// bl 0x821b4fc8
	ctx.lr = 0x824A7C24;
	sub_821B4FC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_824A7C2C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a7c84
	if (ctx.cr6.eq) goto loc_824A7C84;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r30,r11,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x823da950
	ctx.lr = 0x824A7C4C;
	sub_823DA950(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7c68
	if (ctx.cr6.eq) goto loc_824A7C68;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x823da950
	ctx.lr = 0x824A7C68;
	sub_823DA950(ctx, base);
loc_824A7C68:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A7C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_824A7C84:
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x821b4de0
	ctx.lr = 0x824A7C8C;
	sub_821B4DE0(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a7c9c
	if (ctx.cr6.eq) goto loc_824A7C9C;
	// bl 0x821b4de0
	ctx.lr = 0x824A7C9C;
	sub_821B4DE0(ctx, base);
loc_824A7C9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A7CA4"))) PPC_WEAK_FUNC(sub_824A7CA4);
PPC_FUNC_IMPL(__imp__sub_824A7CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7CA8"))) PPC_WEAK_FUNC(sub_824A7CA8);
PPC_FUNC_IMPL(__imp__sub_824A7CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A7CB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,232(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A7CC0;
	sub_8248A510(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r11,309(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 309);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7e40
	if (ctx.cr6.eq) goto loc_824A7E40;
	// lbz r7,303(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 303);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824a7d40
	if (!ctx.cr6.gt) goto loc_824A7D40;
	// lwz r8,268(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,212(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 212);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_824A7CF4:
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lbz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// rlwinm r4,r5,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r3,r5,27
	ctx.r3.u64 = ctx.r5.u32 & 0x1F;
	// slw r6,r26,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r3.u8 & 0x3F));
	// lwzx r5,r4,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a7d30
	if (!ctx.cr6.eq) goto loc_824A7D30;
	// lwz r6,228(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r5,128(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lbz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x824a7df8
	if (!ctx.cr6.eq) goto loc_824A7DF8;
loc_824A7D30:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a7cf4
	if (ctx.cr6.lt) goto loc_824A7CF4;
loc_824A7D40:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824a7de0
	if (!ctx.cr6.gt) goto loc_824A7DE0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,-32112
	ctx.r28.s64 = -2104492032;
loc_824A7D54:
	// lwz r11,212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 212);
	// lwz r10,268(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// rlwinm r6,r7,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// slw r4,r26,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a7dcc
	if (!ctx.cr6.eq) goto loc_824A7DCC;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824A7DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,-2084(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + -2084);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a7dbc
	if (ctx.cr6.eq) goto loc_824A7DBC;
	// lwz r11,124(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,124(r5)
	PPC_STORE_U32(ctx.r5.u32 + 124, ctx.r11.u32);
loc_824A7DBC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82599f48
	ctx.lr = 0x824A7DCC;
	sub_82599F48(ctx, base);
loc_824A7DCC:
	// lbz r11,303(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 303);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a7d54
	if (ctx.cr6.lt) goto loc_824A7D54;
loc_824A7DE0:
	// li r3,3104
	ctx.r3.s64 = 3104;
	// bl 0x82130528
	ctx.lr = 0x824A7DE8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a7e10
	if (ctx.cr6.eq) goto loc_824A7E10;
	// bl 0x825a9218
	ctx.lr = 0x824A7DF4;
	sub_825A9218(ctx, base);
	// b 0x824a7e14
	goto loc_824A7E14;
loc_824A7DF8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r4,176(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// addi r3,r11,4040
	ctx.r3.s64 = ctx.r11.s64 + 4040;
	// bl 0x82130000
	ctx.lr = 0x824A7E08;
	sub_82130000(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_824A7E10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A7E14:
	// stw r3,404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 404, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,232(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f4,31296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31296);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12428);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-30176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30176);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-12084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825a7008
	ctx.lr = 0x824A7E40;
	sub_825A7008(ctx, base);
loc_824A7E40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A7E48"))) PPC_WEAK_FUNC(sub_824A7E48);
PPC_FUNC_IMPL(__imp__sub_824A7E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824A7E50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A7E68;
	sub_8248A510(ctx, base);
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,372(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a7ebc
	if (!ctx.cr6.eq) goto loc_824A7EBC;
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lbz r11,303(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x824a7e98
	if (!ctx.cr6.gt) goto loc_824A7E98;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824A7E98:
	// bl 0x82130528
	ctx.lr = 0x824A7E9C;
	sub_82130528(ctx, base);
	// stw r3,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r3.u32);
	// lwz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// lbz r11,303(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// rotlwi r5,r11,6
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// bl 0x823da950
	ctx.lr = 0x824A7EB0;
	sub_823DA950(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,432(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// bl 0x825ae380
	ctx.lr = 0x824A7EBC;
	sub_825AE380(ctx, base);
loc_824A7EBC:
	// lbz r11,71(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a803c
	if (ctx.cr6.eq) goto loc_824A803C;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// li r25,16
	ctx.r25.s64 = 16;
	// li r26,32
	ctx.r26.s64 = 32;
	// li r27,48
	ctx.r27.s64 = 48;
loc_824A7EE8:
	// lbz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// lwz r9,212(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r7,r25
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r7,r26
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r27
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v56,v59,v59
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// stvx128 v59,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r8
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r9
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r11
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v54,v55,v56
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmsum3fp128 v53,v58,v56
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmrghw128 v52,v55,v58
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmsum3fp128 v51,v57,v56
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmrghw128 v50,v57,v56
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v49,v57,v56
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v48,v55,v58
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v47,v52,v50
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrglw128 v46,v52,v50
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v45,v48,v49
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// stvx128 v47,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v44,v54,v53
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v43,v51,v44
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v42,v44,v43
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vor128 v41,v42,v42
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_load_si128((__m128i*)ctx.v42.u8));
	// stvx128 v42,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v40,v63,v41
	_mm_store_ps(ctx.v40.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v41.f32)));
	// stvx128 v40,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v32,v40,v40
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_load_si128((__m128i*)ctx.v40.u8));
	// lvx128 v39,r0,r29
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r0,r3
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v36,r0,r11
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r0,r9
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v34,r0,r8
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v33,r0,r5
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v62,v32,v33
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v33.f32)));
	// vmsum3fp128 v60,v35,v39
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v39.f32), 0xEF));
	// vmsum3fp128 v59,v35,v38
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v38.f32), 0xEF));
	// vmsum3fp128 v58,v36,v38
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v38.f32), 0xEF));
	// vmsum3fp128 v56,v36,v39
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v39.f32), 0xEF));
	// vmsum3fp128 v51,v62,v39
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v39.f32), 0xEF));
	// vmsum3fp128 v50,v62,v38
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v38.f32), 0xEF));
	// vmsum3fp128 v61,v35,v37
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v37.f32), 0xEF));
	// vmsum3fp128 v57,v36,v37
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v37.f32), 0xEF));
	// vmsum3fp128 v52,v62,v37
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v37.f32), 0xEF));
	// vmsum3fp128 v54,v34,v39
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v39.f32), 0xEF));
	// vmsum3fp128 v53,v34,v38
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v38.f32), 0xEF));
	// vmsum3fp128 v55,v34,v37
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v37.f32), 0xEF));
	// vmrghw128 v48,v59,v35
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v47,v58,v36
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v40,v50,v32
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v49,v60,v61
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v46,v56,v57
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v41,v51,v52
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v45,v49,v48
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v42,v46,v47
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v38,v41,v40
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v44,v54,v55
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v43,v53,v34
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v45,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v39,v44,v43
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// stvx128 v42,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r7,71(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a7ee8
	if (ctx.cr6.lt) goto loc_824A7EE8;
loc_824A803C:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a807c
	if (ctx.cr6.eq) goto loc_824A807C;
loc_824A804C:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,208(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x824a7e48
	ctx.lr = 0x824A806C;
	sub_824A7E48(ctx, base);
	// lbz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a804c
	if (ctx.cr6.lt) goto loc_824A804C;
loc_824A807C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A8084"))) PPC_WEAK_FUNC(sub_824A8084);
PPC_FUNC_IMPL(__imp__sub_824A8084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8088"))) PPC_WEAK_FUNC(sub_824A8088);
PPC_FUNC_IMPL(__imp__sub_824A8088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824A8090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A80A4;
	sub_8248A510(ctx, base);
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,372(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a80f8
	if (!ctx.cr6.eq) goto loc_824A80F8;
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lbz r11,303(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x824a80d4
	if (!ctx.cr6.gt) goto loc_824A80D4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824A80D4:
	// bl 0x82130528
	ctx.lr = 0x824A80D8;
	sub_82130528(ctx, base);
	// stw r3,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r3.u32);
	// lwz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// lbz r11,303(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// rotlwi r5,r11,6
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// bl 0x823da950
	ctx.lr = 0x824A80EC;
	sub_823DA950(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// bl 0x825ae380
	ctx.lr = 0x824A80F8;
	sub_825AE380(ctx, base);
loc_824A80F8:
	// lbz r11,71(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8160
	if (ctx.cr6.eq) goto loc_824A8160;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
loc_824A8114:
	// lbz r10,70(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,432(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r11,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r8,71(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824a8114
	if (ctx.cr6.lt) goto loc_824A8114;
loc_824A8160:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a819c
	if (ctx.cr6.eq) goto loc_824A819C;
loc_824A8170:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,208(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x824a8088
	ctx.lr = 0x824A818C;
	sub_824A8088(ctx, base);
	// lbz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a8170
	if (ctx.cr6.lt) goto loc_824A8170;
loc_824A819C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A81A4"))) PPC_WEAK_FUNC(sub_824A81A4);
PPC_FUNC_IMPL(__imp__sub_824A81A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A81A8"))) PPC_WEAK_FUNC(sub_824A81A8);
PPC_FUNC_IMPL(__imp__sub_824A81A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x824A81B0;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823dd534
	ctx.lr = 0x824A81C4;
	__savevmx_124(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stfs f1,372(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r3,232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A81E4;
	sub_8248A510(ctx, base);
	// li r31,32
	ctx.r31.s64 = 32;
	// lvx128 v63,r0,r26
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,48
	ctx.r30.s64 = 48;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// li r29,16
	ctx.r29.s64 = 16;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1008
	ctx.r3.s64 = 1008;
	// lvx128 v62,r26,r31
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r26,r30
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v59,r26,r29
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v57,v59,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrglw128 v56,v59,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v126,v60,v57
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v125,v60,v57
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v124,v58,v56
	_mm_store_si128((__m128i*)ctx.v124.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// bl 0x82130528
	ctx.lr = 0x824A822C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a8240
	if (ctx.cr6.eq) goto loc_824A8240;
	// bl 0x824a7348
	ctx.lr = 0x824A8238;
	sub_824A7348(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x824a8244
	goto loc_824A8244;
loc_824A8240:
	// li r26,0
	ctx.r26.s64 = 0;
loc_824A8244:
	// addi r10,r1,372
	ctx.r10.s64 = ctx.r1.s64 + 372;
	// li r9,480
	ctx.r9.s64 = 480;
	// li r8,496
	ctx.r8.s64 = 496;
	// addi r11,r26,512
	ctx.r11.s64 = ctx.r26.s64 + 512;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v54,v55,0
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// stvx128 v54,r26,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r25
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r26,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825b1be0
	ctx.lr = 0x824A8280;
	sub_825B1BE0(ctx, base);
	// vupkd3d128 v52,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v52 = vTemp;
	// addi r11,r26,272
	ctx.r11.s64 = ctx.r26.s64 + 272;
	// addi r10,r26,320
	ctx.r10.s64 = ctx.r26.s64 + 320;
	// addi r9,r26,368
	ctx.r9.s64 = ctx.r26.s64 + 368;
	// vpermwi128 v51,v52,234
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0x15));
	// li r3,528
	ctx.r3.s64 = 528;
	// vpermwi128 v50,v52,186
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0x45));
	// vpermwi128 v49,v52,174
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0x51));
	// stvx128 v51,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r9,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r9,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82130528
	ctx.lr = 0x824A82C8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a82d8
	if (ctx.cr6.eq) goto loc_824A82D8;
	// bl 0x825aa5e0
	ctx.lr = 0x824A82D4;
	sub_825AA5E0(ctx, base);
	// b 0x824a82dc
	goto loc_824A82DC;
loc_824A82D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A82DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,364(r28)
	PPC_STORE_U32(ctx.r28.u32 + 364, ctx.r3.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,232(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824A8304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,364(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// li r3,752
	ctx.r3.s64 = 752;
	// stfs f1,516(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 516, temp.u32);
	// bl 0x82130528
	ctx.lr = 0x824A8314;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a8330
	if (ctx.cr6.eq) goto loc_824A8330;
	// li r5,256
	ctx.r5.s64 = 256;
	// lbz r6,303(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 303);
	// li r4,93
	ctx.r4.s64 = 93;
	// bl 0x825b0cd8
	ctx.lr = 0x824A832C;
	sub_825B0CD8(ctx, base);
	// b 0x824a8334
	goto loc_824A8334;
loc_824A8330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A8334:
	// stw r3,372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 372, ctx.r3.u32);
	// lwz r4,364(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// bl 0x825ae370
	ctx.lr = 0x824A8340;
	sub_825AE370(ctx, base);
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// lbz r4,303(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 303);
	// bl 0x825aebb0
	ctx.lr = 0x824A834C;
	sub_825AEBB0(ctx, base);
	// lwz r4,232(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// bl 0x825ae378
	ctx.lr = 0x824A8358;
	sub_825AE378(ctx, base);
	// lwz r4,248(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 248);
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// bl 0x825ae380
	ctx.lr = 0x824A8364;
	sub_825AE380(ctx, base);
	// lbz r11,302(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 302);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a845c
	if (ctx.cr6.eq) goto loc_824A845C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r24,0
	ctx.r24.s64 = 0;
	// lfs f29,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,14192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14192);
	ctx.f30.f64 = double(temp.f32);
loc_824A8388:
	// lwz r11,208(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r26,r11,r24
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lfs f31,56(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8249cdd0
	ctx.lr = 0x824A83A0;
	sub_8249CDD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a8448
	if (ctx.cr6.eq) goto loc_824A8448;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x824a83bc
	if (ctx.cr6.eq) goto loc_824A83BC;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x824a8448
	if (!ctx.cr6.gt) goto loc_824A8448;
loc_824A83BC:
	// lbz r11,69(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 69);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,208(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r6,212(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 212);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lbz r11,70(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lvx128 v48,r0,r11
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r29
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r11,r31
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r30
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x824a8438
	if (!ctx.cr6.eq) goto loc_824A8438;
	// lvx128 v45,r27,r31
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vaddfp128 v63,v63,v45
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v45.f32)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v44,r27,r30
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v43,v63,v44
	_mm_store_ps(ctx.v43.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v43,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824A8438:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824a7e48
	ctx.lr = 0x824A8448;
	sub_824A7E48(ctx, base);
loc_824A8448:
	// lbz r11,302(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 302);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a8388
	if (ctx.cr6.lt) goto loc_824A8388;
loc_824A845C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8249c580
	ctx.lr = 0x824A8464;
	sub_8249C580(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A8480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lvx128 v1,r0,r9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8259cdc8
	ctx.lr = 0x824A8494;
	sub_8259CDC8(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x824a85cc
	if (ctx.cr6.eq) goto loc_824A85CC;
	// lwz r10,228(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// lwz r8,368(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// lwz r7,236(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	// rlwinm r9,r8,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,128(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// lvx128 v42,r11,r30
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r0,r11
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r30
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lvx128 v40,r10,r31
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v127,v38,v38
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v38.u8));
	// lvx128 v39,r0,r10
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v36,r10,r29
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v37,v39,v40
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v34,v36,v38
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// lvx128 v62,r11,r29
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v35,v39,v40
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// lvx128 v32,r4,r30
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v33,v36,v38
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vaddfp128 v63,v42,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v127.f32)));
	// lvx128 v61,r11,r31
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v60,v37,v34
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// stvx128 v41,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v58,v37,v34
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// stvx128 v62,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v35,v33
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// stvx128 v61,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v57,v32,v60
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmsum3fp128 v55,v32,v58
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v58.f32), 0xEF));
	// vmsum3fp128 v56,v32,v59
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vmrghw128 v54,v57,v56
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v53,v55,v54
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v52,v54,v53
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vaddfp128 v51,v63,v52
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32)));
	// stvx128 v51,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// bl 0x8259d1e8
	ctx.lr = 0x824A8544;
	sub_8259D1E8(ctx, base);
	// lbz r3,303(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 303);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a85cc
	if (ctx.cr6.eq) goto loc_824A85CC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A8558:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v50,r11,r30
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r0,r11
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v49,v50,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v127.f32)));
	// lvx128 v47,r11,r29
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r11,r31
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,228(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// lwz r11,136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v45,r0,r11
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// lvx128 v44,r11,r29
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r11,r31
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r11,r30
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v41,v42,v127
	_mm_store_ps(ctx.v41.f32, _mm_sub_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v127.f32)));
	// stvx128 v45,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r7,303(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 303);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824a8558
	if (ctx.cr6.lt) goto loc_824A8558;
loc_824A85CC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823dd7cc
	ctx.lr = 0x824A85D8;
	__restvmx_124(ctx, base);
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A85E8"))) PPC_WEAK_FUNC(sub_824A85E8);
PPC_FUNC_IMPL(__imp__sub_824A85E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x824A85F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x8248a510
	ctx.lr = 0x824A8614;
	sub_8248A510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1008
	ctx.r3.s64 = 1008;
	// bl 0x82130528
	ctx.lr = 0x824A8620;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a8634
	if (ctx.cr6.eq) goto loc_824A8634;
	// bl 0x824a7348
	ctx.lr = 0x824A862C;
	sub_824A7348(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824a8638
	goto loc_824A8638;
loc_824A8634:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824A8638:
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,212(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v63,r11,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f9,f10,f11,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsel f9,f7,f0,f9
	ctx.f9.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x824a86e0
	if (!ctx.cr6.lt) goto loc_824A86E0;
	// fsel f11,f10,f12,f11
	ctx.f11.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// lfs f12,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f0,f10,f11,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x824a86b8
	if (!ctx.cr6.gt) goto loc_824A86B8;
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_824A86B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x824a86e0
	if (!ctx.cr6.gt) goto loc_824A86E0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v62,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vmulfp128 v63,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
loc_824A86E0:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r10,480
	ctx.r10.s64 = 480;
	// li r28,496
	ctx.r28.s64 = 496;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lvlx128 v60,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v59,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x824a7150
	ctx.lr = 0x824A871C;
	sub_824A7150(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v58,r0,r9
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v57,r0,r8
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v56,r0,r7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r6
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v58,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825b1be0
	ctx.lr = 0x824A8764;
	sub_825B1BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A8770"))) PPC_WEAK_FUNC(sub_824A8770);
PPC_FUNC_IMPL(__imp__sub_824A8770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824A8778;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A87AC;
	sub_8248A510(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8249ce60
	ctx.lr = 0x824A87CC;
	sub_8249CE60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8d14
	if (ctx.cr6.eq) goto loc_824A8D14;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a8d14
	if (ctx.cr6.eq) goto loc_824A8D14;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r10,372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,-2288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2288);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x824a8cf0
	if (!ctx.cr6.eq) goto loc_824A8CF0;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a8cf0
	if (!ctx.cr6.eq) goto loc_824A8CF0;
	// lwz r9,212(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// lwz r8,208(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,2256
	ctx.r28.s64 = ctx.r11.s64 + 2256;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lvx128 v63,r0,r28
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,3796(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// lbz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r26,r11,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bne cr6,0x824a889c
	if (!ctx.cr6.eq) goto loc_824A889C;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvlx128 v63,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v59,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v58,v63,v60
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v59,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a894c
	goto loc_824A894C;
loc_824A889C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824a8914
	if (!ctx.cr6.eq) goto loc_824A8914;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x824a88ec
	if (!ctx.cr6.eq) goto loc_824A88EC;
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f0,32(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,28(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bne cr6,0x824a88e0
	if (!ctx.cr6.eq) goto loc_824A88E0;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x824a894c
	goto loc_824A894C;
loc_824A88E0:
	// stfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x824a894c
	goto loc_824A894C;
loc_824A88EC:
	// lfs f0,32(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,28(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x824a894c
	goto loc_824A894C;
loc_824A8914:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x824a894c
	if (!ctx.cr6.eq) goto loc_824A894C;
	// lfs f0,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,36(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_824A894C:
	// lwz r30,232(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lfs f2,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821b9990
	ctx.lr = 0x824A895C;
	sub_821B9990(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f2,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821b9990
	ctx.lr = 0x824A896C;
	sub_821B9990(ctx, base);
	// fneg f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f2,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821b9990
	ctx.lr = 0x824A897C;
	sub_821B9990(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbz r10,307(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 307);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfs f29,132(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// rlwinm r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v57,r0,r11
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lvx128 v56,r0,r9
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r8
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v126,v57,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v126.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v127.f32)));
	// vaddfp128 v125,v56,v127
	_mm_store_ps(ctx.v125.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v127.f32)));
	// beq cr6,0x824a8b68
	if (ctx.cr6.eq) goto loc_824A8B68;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,4208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// bl 0x82592fc8
	ctx.lr = 0x824A89E0;
	sub_82592FC8(ctx, base);
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82592fc8
	ctx.lr = 0x824A8A00;
	sub_82592FC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// beq cr6,0x824a8d14
	if (ctx.cr6.eq) goto loc_824A8D14;
	// bl 0x825b6ea0
	ctx.lr = 0x824A8A10;
	sub_825B6EA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824a8a80
	if (ctx.cr6.eq) goto loc_824A8A80;
	// ble cr6,0x824a8d14
	if (!ctx.cr6.gt) goto loc_824A8D14;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x824a8d14
	if (ctx.cr6.gt) goto loc_824A8D14;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,2288
	ctx.r10.s64 = ctx.r11.s64 + 2288;
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825b64f8
	ctx.lr = 0x824A8A40;
	sub_825B64F8(ctx, base);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r7,384(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r8,272
	ctx.r8.s64 = 272;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lvx128 v55,r0,r9
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r7,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lfs f1,48(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b6290
	ctx.lr = 0x824A8A64;
	sub_825B6290(ctx, base);
	// lwz r5,384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r6,288
	ctx.r6.s64 = 288;
	// li r4,304
	ctx.r4.s64 = 304;
	// stvx128 v126,r5,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// stvx128 v125,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a8d14
	goto loc_824A8D14;
loc_824A8A80:
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// li r30,8
	ctx.r30.s64 = 8;
	// lis r6,-32122
	ctx.r6.s64 = -2105147392;
	// lvx128 v0,r5,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r29,r6,2288
	ctx.r29.s64 = ctx.r6.s64 + 2288;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lvx128 v13,r0,r29
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lvlx128 v54,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v54,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vmaddfp v11,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v11,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82592fa8
	ctx.lr = 0x824A8ADC;
	sub_82592FA8(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// lvx128 v63,r0,r29
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lwz r6,384(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r5,256
	ctx.r5.s64 = 256;
	// lvx128 v53,r0,r10
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,272
	ctx.r3.s64 = 272;
	// lvx128 v52,r0,r9
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v61,v53,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v127.f32)));
	// vsubfp128 v62,v52,v127
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v127.f32)));
	// li r4,1
	ctx.r4.s64 = 1;
	// vmsum3fp128 v51,v63,v61
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// stvx128 v61,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v50,v63,v62
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// stvx128 v62,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r6,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// stvx128 v50,r11,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lvx128 v1,r0,r29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825b64f8
	ctx.lr = 0x824A8B3C;
	sub_825B64F8(ctx, base);
	// lfs f1,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x825b6290
	ctx.lr = 0x824A8B4C;
	sub_825B6290(ctx, base);
	// lwz r8,384(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r10,288
	ctx.r10.s64 = 288;
	// li r9,304
	ctx.r9.s64 = 304;
	// stvx128 v126,r8,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,384(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// stvx128 v125,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a8d14
	goto loc_824A8D14;
loc_824A8B68:
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82130528
	ctx.lr = 0x824A8B70;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a8b84
	if (ctx.cr6.eq) goto loc_824A8B84;
	// bl 0x825b1d40
	ctx.lr = 0x824A8B7C;
	sub_825B1D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x824a8b88
	goto loc_824A8B88;
loc_824A8B84:
	// li r30,0
	ctx.r30.s64 = 0;
loc_824A8B88:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r11,80
	ctx.r11.s64 = 80;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lvx128 v49,r3,r11
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825832c8
	ctx.lr = 0x824A8BA8;
	sub_825832C8(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82130528
	ctx.lr = 0x824A8BB0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a8bc8
	if (ctx.cr6.eq) goto loc_824A8BC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82595360
	ctx.lr = 0x824A8BC0;
	sub_82595360(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x824a8bcc
	goto loc_824A8BCC;
loc_824A8BC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_824A8BCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A8BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32130
	ctx.r9.s64 = -2105671680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,-31616
	ctx.r5.s64 = ctx.r9.s64 + -31616;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b1eb8
	ctx.lr = 0x824A8BF8;
	sub_825B1EB8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b1f10
	ctx.lr = 0x824A8C04;
	sub_825B1F10(ctx, base);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f1,192(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// li r6,160
	ctx.r6.s64 = 160;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vmulfp128 v48,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32)));
	// lvlx128 v47,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v47,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xFF));
	// lvx128 v13,r30,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v12,r0,r5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v1,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// bl 0x8259cdc8
	ctx.lr = 0x824A8C68;
	sub_8259CDC8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825b3450
	ctx.lr = 0x824A8C78;
	sub_825B3450(ctx, base);
	// vor128 v2,v125,v125
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b2280
	ctx.lr = 0x824A8C88;
	sub_825B2280(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824a8cc8
	if (!ctx.cr6.eq) goto loc_824A8CC8;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a8cc8
	if (ctx.cr6.eq) goto loc_824A8CC8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a8cc8
	if (ctx.cr6.eq) goto loc_824A8CC8;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824a8cc8
	if (ctx.cr6.eq) goto loc_824A8CC8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,4120
	ctx.r3.s64 = ctx.r11.s64 + 4120;
	// bl 0x82130000
	ctx.lr = 0x824A8CC8;
	sub_82130000(ctx, base);
loc_824A8CC8:
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,800
	ctx.r10.s64 = 800;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvlx128 v46,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v45,v46,0
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), 0xFF));
	// stvx128 v45,r30,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825b1ee8
	ctx.lr = 0x824A8CEC;
	sub_825B1EE8(ctx, base);
	// b 0x824a8d14
	goto loc_824A8D14;
loc_824A8CF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82592fc8
	ctx.lr = 0x824A8D10;
	sub_82592FC8(ctx, base);
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
loc_824A8D14:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v125,r1,r0
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A8D40"))) PPC_WEAK_FUNC(sub_824A8D40);
PPC_FUNC_IMPL(__imp__sub_824A8D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824A8D48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A8D58;
	sub_8248A510(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8e34
	if (ctx.cr6.eq) goto loc_824A8E34;
	// lbz r11,300(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 300);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r27,372(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8e34
	if (ctx.cr6.eq) goto loc_824A8E34;
loc_824A8D7C:
	// lwz r11,256(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 256);
	// lbz r10,302(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 302);
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824a8e24
	if (!ctx.cr6.lt) goto loc_824A8E24;
	// lwz r11,260(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 260);
	// lbzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824a8e24
	if (!ctx.cr6.lt) goto loc_824A8E24;
	// lwz r10,208(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r30,r8,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x824a8e24
	if (ctx.cr6.eq) goto loc_824A8E24;
	// lbz r11,71(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 71);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8e24
	if (ctx.cr6.eq) goto loc_824A8E24;
	// lbz r11,71(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 71);
	// li r29,0
	ctx.r29.s64 = 0;
loc_824A8DD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8e10
	if (ctx.cr6.eq) goto loc_824A8E10;
	// li r31,0
	ctx.r31.s64 = 0;
loc_824A8DDC:
	// lbz r10,70(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 70);
	// li r7,1
	ctx.r7.s64 = 1;
	// lbz r11,70(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 70);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b1738
	ctx.lr = 0x824A8DFC;
	sub_825B1738(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r11,71(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 71);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a8ddc
	if (ctx.cr6.lt) goto loc_824A8DDC;
loc_824A8E10:
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lbz r9,71(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 71);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824a8dd0
	if (ctx.cr6.lt) goto loc_824A8DD0;
loc_824A8E24:
	// lbz r11,300(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 300);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a8d7c
	if (ctx.cr6.lt) goto loc_824A8D7C;
loc_824A8E34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A8E3C"))) PPC_WEAK_FUNC(sub_824A8E3C);
PPC_FUNC_IMPL(__imp__sub_824A8E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8E40"))) PPC_WEAK_FUNC(sub_824A8E40);
PPC_FUNC_IMPL(__imp__sub_824A8E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A8E48;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A8E5C;
	sub_8248A510(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lbz r9,303(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 303);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a8efc
	if (ctx.cr6.eq) goto loc_824A8EFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f31,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
loc_824A8E8C:
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// lwz r10,268(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r7,r8,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r8,27
	ctx.r6.u64 = ctx.r8.u32 & 0x1F;
	// slw r5,r27,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a8ee8
	if (!ctx.cr6.eq) goto loc_824A8EE8;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8ee8
	if (ctx.cr6.eq) goto loc_824A8EE8;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8ee8
	if (ctx.cr6.eq) goto loc_824A8EE8;
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x824a4680
	ctx.lr = 0x824A8EE8;
	sub_824A4680(ctx, base);
loc_824A8EE8:
	// lbz r11,303(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 303);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a8e8c
	if (ctx.cr6.lt) goto loc_824A8E8C;
loc_824A8EFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A8F08"))) PPC_WEAK_FUNC(sub_824A8F08);
PPC_FUNC_IMPL(__imp__sub_824A8F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A8F10;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A8F24;
	sub_8248A510(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lbz r9,303(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 303);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a8fc4
	if (ctx.cr6.eq) goto loc_824A8FC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f31,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
loc_824A8F54:
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// lwz r10,268(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r7,r8,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r8,27
	ctx.r6.u64 = ctx.r8.u32 & 0x1F;
	// slw r5,r27,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a8fb0
	if (!ctx.cr6.eq) goto loc_824A8FB0;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8fb0
	if (ctx.cr6.eq) goto loc_824A8FB0;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a8fb0
	if (ctx.cr6.eq) goto loc_824A8FB0;
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x824a5038
	ctx.lr = 0x824A8FB0;
	sub_824A5038(ctx, base);
loc_824A8FB0:
	// lbz r11,303(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 303);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a8f54
	if (ctx.cr6.lt) goto loc_824A8F54;
loc_824A8FC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A8FD0"))) PPC_WEAK_FUNC(sub_824A8FD0);
PPC_FUNC_IMPL(__imp__sub_824A8FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r9,r11,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r5,r11,10,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r11,23,9,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// rlwinm r10,r11,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 & ctx.r7.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r6,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r3,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9074"))) PPC_WEAK_FUNC(sub_824A9074);
PPC_FUNC_IMPL(__imp__sub_824A9074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9078"))) PPC_WEAK_FUNC(sub_824A9078);
PPC_FUNC_IMPL(__imp__sub_824A9078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824A9080;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r11,r5,29,19,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFC;
	// rlwinm r9,r5,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFFC;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// clrlwi r8,r5,27
	ctx.r8.u64 = ctx.r5.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// slw r4,r7,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a9124
	if (ctx.cr6.eq) goto loc_824A9124;
	// clrlwi r25,r29,16
	ctx.r25.u64 = ctx.r29.u32 & 0xFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
loc_824A90D8:
	// lbz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 68);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x824a910c
	if (ctx.cr6.eq) goto loc_824A910C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824a9078
	ctx.lr = 0x824A910C;
	sub_824A9078(ctx, base);
loc_824A910C:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lbz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 72);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824a90d8
	if (ctx.cr6.lt) goto loc_824A90D8;
loc_824A9124:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A912C"))) PPC_WEAK_FUNC(sub_824A912C);
PPC_FUNC_IMPL(__imp__sub_824A912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9130"))) PPC_WEAK_FUNC(sub_824A9130);
PPC_FUNC_IMPL(__imp__sub_824A9130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824A9138;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,232(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A9154;
	sub_8248A510(ctx, base);
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a919c
	if (!ctx.cr6.eq) goto loc_824A919C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a76a8
	ctx.lr = 0x824A916C;
	sub_824A76A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a919c
	if (!ctx.cr6.eq) goto loc_824A919C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a70d0
	ctx.lr = 0x824A9180;
	sub_824A70D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a91ac
	if (!ctx.cr6.eq) goto loc_824A91AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// bl 0x8259a580
	ctx.lr = 0x824A9198;
	sub_8259A580(ctx, base);
	// b 0x824a91ac
	goto loc_824A91AC;
loc_824A919C:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// bl 0x825832c8
	ctx.lr = 0x824A91AC;
	sub_825832C8(ctx, base);
loc_824A91AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,420(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-29232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x824a91f0
	if (!ctx.cr6.lt) goto loc_824A91F0;
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// li r11,80
	ctx.r11.s64 = 80;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lvx128 v63,r3,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r30,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v61,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v61,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825832c8
	ctx.lr = 0x824A91F0;
	sub_825832C8(ctx, base);
loc_824A91F0:
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// bl 0x8259a740
	ctx.lr = 0x824A91F8;
	sub_8259A740(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// bl 0x8259ada8
	ctx.lr = 0x824A9204;
	sub_8259ADA8(ctx, base);
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// lis r25,-32112
	ctx.r25.s64 = -2104492032;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x824a9260
	if (ctx.cr6.eq) goto loc_824A9260;
	// lwz r11,-2288(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -2288);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824a9260
	if (!ctx.cr6.eq) goto loc_824A9260;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a9260
	if (ctx.cr6.eq) goto loc_824A9260;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A9260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A9260:
	// addi r26,r29,32
	ctx.r26.s64 = ctx.r29.s64 + 32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8258e688
	ctx.lr = 0x824A9270;
	sub_8258E688(ctx, base);
	// lbz r11,303(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// rotlwi r5,r11,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x824A9284;
	sub_823DBFF4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8244d150
	ctx.lr = 0x824A929C;
	sub_8244D150(ctx, base);
	// lbz r8,303(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// neg r7,r5
	ctx.r7.s64 = -ctx.r5.s64;
	// rlwinm r12,r7,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x824A92B0;
	sub_823DBFF4(ctx, base);
	// lwz r6,0(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r6,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r1.u32 = ea;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8244d150
	ctx.lr = 0x824A92C8;
	sub_8244D150(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lbz r4,303(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f13,3796(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// beq cr6,0x824a93c8
	if (ctx.cr6.eq) goto loc_824A93C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_824A92F0:
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r8,128(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824a9390
	if (ctx.cr6.eq) goto loc_824A9390;
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r5,268(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// rlwinm r3,r10,29,3,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// slw r5,r6,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r4,r3,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a9390
	if (!ctx.cr6.eq) goto loc_824A9390;
	// lwz r5,260(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r4,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x824a9370
	if (ctx.cr6.gt) goto loc_824A9370;
	// lwz r10,148(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a9370
	if (ctx.cr6.eq) goto loc_824A9370;
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// lvx128 v60,r10,r9
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r9,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// b 0x824a9388
	goto loc_824A9388;
loc_824A9370:
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// lvx128 v59,r10,r9
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r9,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
loc_824A9388:
	// stfsx f12,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_824A9390:
	// lbz r10,303(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 303);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a92f0
	if (ctx.cr6.lt) goto loc_824A92F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-29632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29632);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x824a93c8
	if (!ctx.cr6.gt) goto loc_824A93C8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8258e7f0
	ctx.lr = 0x824A93C8;
	sub_8258E7F0(ctx, base);
loc_824A93C8:
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x824a9448
	if (ctx.cr6.eq) goto loc_824A9448;
	// lwz r11,-2288(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -2288);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824a9448
	if (!ctx.cr6.eq) goto loc_824A9448;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824a9448
	if (ctx.cr6.eq) goto loc_824A9448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cc00
	ctx.lr = 0x824A9418;
	sub_8259CC00(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,272
	ctx.r4.s64 = ctx.r30.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A9430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,172(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824A9448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A9448:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A9454"))) PPC_WEAK_FUNC(sub_824A9454);
PPC_FUNC_IMPL(__imp__sub_824A9454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9458"))) PPC_WEAK_FUNC(sub_824A9458);
PPC_FUNC_IMPL(__imp__sub_824A9458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x824A9460;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,232(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824A947C;
	sub_8248A510(ctx, base);
	// lwz r8,268(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// addi r27,r25,256
	ctx.r27.s64 = ctx.r25.s64 + 256;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x824a9498
	if (ctx.cr6.lt) goto loc_824A9498;
	// li r11,4
	ctx.r11.s64 = 4;
loc_824A9498:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a94d0
	if (!ctx.cr6.gt) goto loc_824A94D0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_824A94AC:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// bne 0x824a94ac
	if (!ctx.cr0.eq) goto loc_824A94AC;
loc_824A94D0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,364(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 364);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// std r24,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r24.u64);
	// std r24,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r24.u64);
	// beq cr6,0x824a9598
	if (ctx.cr6.eq) goto loc_824A9598;
	// lbz r11,302(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 302);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rotlw r29,r26,r31
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r26.u32, ctx.r31.u8 & 0x1F);
	// ble 0x824a9550
	if (!ctx.cr0.gt) goto loc_824A9550;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A9508:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 & ctx.r29.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824a9540
	if (!ctx.cr6.eq) goto loc_824A9540;
	// lwz r11,208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r4,70(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 70);
	// bl 0x825aeb50
	ctx.lr = 0x824A9538;
	sub_825AEB50(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stbx r26,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r26.u8);
loc_824A9540:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// rotlwi r29,r29,31
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 31);
	// bgt 0x824a9508
	if (ctx.cr0.gt) goto loc_824A9508;
loc_824A9550:
	// lwz r11,364(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 364);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x824a9598
	if (!ctx.cr0.gt) goto loc_824A9598;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_824A9568:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a958c
	if (!ctx.cr6.eq) goto loc_824A958C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,372(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	// bl 0x825aebe0
	ctx.lr = 0x824A9580;
	sub_825AEBE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,364(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 364);
	// bl 0x825aa758
	ctx.lr = 0x824A958C;
	sub_825AA758(ctx, base);
loc_824A958C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bgt 0x824a9568
	if (ctx.cr0.gt) goto loc_824A9568;
loc_824A9598:
	// lwz r29,404(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 404);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824a95fc
	if (ctx.cr6.eq) goto loc_824A95FC;
	// lbz r11,303(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x824a95fc
	if (!ctx.cr0.gt) goto loc_824A95FC;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A95B4:
	// lwz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// rlwinm r6,r7,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// slw r4,r26,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a95f0
	if (ctx.cr6.eq) goto loc_824A95F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a8000
	ctx.lr = 0x824A95F0;
	sub_825A8000(ctx, base);
loc_824A95F0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bgt 0x824a95b4
	if (ctx.cr0.gt) goto loc_824A95B4;
loc_824A95FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,303(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// beq cr6,0x824a96ac
	if (ctx.cr6.eq) goto loc_824A96AC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_824A961C:
	// lwz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r7,r8,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r8,27
	ctx.r6.u64 = ctx.r8.u32 & 0x1F;
	// slw r5,r26,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a9664
	if (ctx.cr6.eq) goto loc_824A9664;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,228(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82599f48
	ctx.lr = 0x824A9660;
	sub_82599F48(ctx, base);
	// b 0x824a9698
	goto loc_824A9698;
loc_824A9664:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x824a9690
	if (ctx.cr6.gt) goto loc_824A9690;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a9690
	if (ctx.cr6.eq) goto loc_824A9690;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x824a9694
	goto loc_824A9694;
loc_824A9690:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_824A9694:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_824A9698:
	// lbz r11,303(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a961c
	if (ctx.cr6.lt) goto loc_824A961C;
loc_824A96AC:
	// lbz r11,303(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a9730
	if (ctx.cr6.eq) goto loc_824A9730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lfs f30,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f30.f64 = double(temp.f32);
loc_824A96C8:
	// lwz r11,400(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 400);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a971c
	if (ctx.cr6.eq) goto loc_824A971C;
	// lwz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// lwz r10,268(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// rlwinm r6,r7,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// slw r4,r26,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a971c
	if (ctx.cr6.eq) goto loc_824A971C;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x824a5038
	ctx.lr = 0x824A9714;
	sub_824A5038(ctx, base);
	// lwz r11,400(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 400);
	// stwx r24,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u32);
loc_824A971C:
	// lbz r11,303(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 303);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a96c8
	if (ctx.cr6.lt) goto loc_824A96C8;
loc_824A9730:
	// lwz r11,352(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a976c
	if (ctx.cr6.eq) goto loc_824A976C;
	// lwz r11,356(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a9750
	if (ctx.cr6.eq) goto loc_824A9750;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x824a9754
	goto loc_824A9754;
loc_824A9750:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_824A9754:
	// lwz r11,352(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 352);
	// lwz r3,232(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// bl 0x8248b1e0
	ctx.lr = 0x824A976C;
	sub_8248B1E0(ctx, base);
loc_824A976C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A9780"))) PPC_WEAK_FUNC(sub_824A9780);
PPC_FUNC_IMPL(__imp__sub_824A9780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824A9788;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-32112
	ctx.r28.s64 = -2104492032;
	// lwz r4,396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a97b0
	if (ctx.cr6.eq) goto loc_824A97B0;
	// lwz r11,-2288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2288);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82591d10
	ctx.lr = 0x824A97B0;
	sub_82591D10(ctx, base);
loc_824A97B0:
	// lwz r4,392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a97c8
	if (ctx.cr6.eq) goto loc_824A97C8;
	// lwz r11,-2288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2288);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82591d10
	ctx.lr = 0x824A97C8;
	sub_82591D10(ctx, base);
loc_824A97C8:
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a97e0
	if (ctx.cr6.eq) goto loc_824A97E0;
	// lwz r11,-2288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2288);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82591d10
	ctx.lr = 0x824A97E0;
	sub_82591D10(ctx, base);
loc_824A97E0:
	// lwz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a97f8
	if (ctx.cr6.eq) goto loc_824A97F8;
	// lwz r11,-2288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2288);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82591d10
	ctx.lr = 0x824A97F8;
	sub_82591D10(ctx, base);
loc_824A97F8:
	// lwz r4,388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a9810
	if (ctx.cr6.eq) goto loc_824A9810;
	// lwz r11,-2288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2288);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82591d10
	ctx.lr = 0x824A9810;
	sub_82591D10(ctx, base);
loc_824A9810:
	// lwz r4,404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a9824
	if (ctx.cr6.eq) goto loc_824A9824;
	// lwz r3,-2288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2288);
	// bl 0x82588338
	ctx.lr = 0x824A9824;
	sub_82588338(ctx, base);
loc_824A9824:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x8248a510
	ctx.lr = 0x824A9834;
	sub_8248A510(ctx, base);
	// lbz r11,303(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 303);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a988c
	if (ctx.cr6.eq) goto loc_824A988C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lfs f31,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
loc_824A984C:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a9870
	if (ctx.cr6.eq) goto loc_824A9870;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824a5038
	ctx.lr = 0x824A9868;
	sub_824A5038(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
loc_824A9870:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bl 0x8248a510
	ctx.lr = 0x824A9880;
	sub_8248A510(ctx, base);
	// lbz r11,303(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 303);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824a984c
	if (ctx.cr6.lt) goto loc_824A984C;
loc_824A988C:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a98cc
	if (ctx.cr6.eq) goto loc_824A98CC;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r9.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a98cc
	if (!ctx.cr6.eq) goto loc_824A98CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b8cf0
	ctx.lr = 0x824A98C4;
	sub_821B8CF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82130588
	ctx.lr = 0x824A98CC;
	sub_82130588(ctx, base);
loc_824A98CC:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a9904
	if (ctx.cr6.eq) goto loc_824A9904;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r9.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a9904
	if (!ctx.cr6.eq) goto loc_824A9904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b8cf0
	ctx.lr = 0x824A98FC;
	sub_821B8CF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82130588
	ctx.lr = 0x824A9904;
	sub_82130588(ctx, base);
loc_824A9904:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A991C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lis r29,-32115
	ctx.r29.s64 = -2104688640;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824a9944
	if (!ctx.cr6.eq) goto loc_824A9944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A9940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824a9a64
	goto loc_824A9A64;
loc_824A9944:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a9a14
	if (!ctx.cr6.eq) goto loc_824A9A14;
	// lwz r10,19620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19620);
	// lbz r10,778(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 778);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a9a14
	if (!ctx.cr6.eq) goto loc_824A9A14;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824A9978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,224(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824A998C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lfs f31,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8248a510
	ctx.lr = 0x824A99A0;
	sub_8248A510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a99b0
	if (ctx.cr6.eq) goto loc_824A99B0;
	// lwz r4,228(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// b 0x824a99b4
	goto loc_824A99B4;
loc_824A99B0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_824A99B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82595580
	ctx.lr = 0x824A99C0;
	sub_82595580(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8258e6b8
	ctx.lr = 0x824A99CC;
	sub_8258E6B8(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x824a99fc
	if (ctx.cr6.eq) goto loc_824A99FC;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lhz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,-23452(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23452);
	// bl 0x82573b58
	ctx.lr = 0x824A99FC;
	sub_82573B58(ctx, base);
loc_824A99FC:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824A9A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824a9a64
	goto loc_824A9A64;
loc_824A9A14:
	// lhz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x824a9a58
	if (ctx.cr6.eq) goto loc_824A9A58;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-2288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2288);
	// bl 0x8258b6c8
	ctx.lr = 0x824A9A2C;
	sub_8258B6C8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82595580
	ctx.lr = 0x824A9A3C;
	sub_82595580(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8258e6b8
	ctx.lr = 0x824A9A48;
	sub_8258E6B8(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
loc_824A9A58:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8258e6b8
	ctx.lr = 0x824A9A64;
	sub_8258E6B8(ctx, base);
loc_824A9A64:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lhz r10,146(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 146);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a9aa0
	if (ctx.cr6.eq) goto loc_824A9AA0;
loc_824A9A78:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82599f48
	ctx.lr = 0x824A9A8C;
	sub_82599F48(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lhz r10,146(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 146);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824a9a78
	if (ctx.cr6.lt) goto loc_824A9A78;
loc_824A9AA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8258e6b8
	ctx.lr = 0x824A9AAC;
	sub_8258E6B8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a9b44
	if (ctx.cr6.eq) goto loc_824A9B44;
loc_824A9AB8:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824a9af4
	if (!ctx.cr6.eq) goto loc_824A9AF4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a9aec
	if (ctx.cr6.eq) goto loc_824A9AEC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// b 0x824a9b18
	goto loc_824A9B18;
loc_824A9AEC:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// b 0x824a9b18
	goto loc_824A9B18;
loc_824A9AF4:
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a9b10
	if (ctx.cr6.eq) goto loc_824A9B10;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x824a9b18
	goto loc_824A9B18;
loc_824A9B10:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_824A9B18:
	// stw r27,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r27.u32);
	// stw r27,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,19620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19620);
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// bl 0x824a65c0
	ctx.lr = 0x824A9B38;
	sub_824A65C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824a9ab8
	if (!ctx.cr6.eq) goto loc_824A9AB8;
loc_824A9B44:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r27,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r27.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A9B5C"))) PPC_WEAK_FUNC(sub_824A9B5C);
PPC_FUNC_IMPL(__imp__sub_824A9B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9B60"))) PPC_WEAK_FUNC(sub_824A9B60);
PPC_FUNC_IMPL(__imp__sub_824A9B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x824A9B68;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823db9b0
	ctx.lr = 0x824A9B70;
	sub_823DB9B0(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r4,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r4.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r3,232(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 232);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// bl 0x8248a510
	ctx.lr = 0x824A9B9C;
	sub_8248A510(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r30,748(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r18,16
	ctx.r18.s64 = 16;
	// li r19,32
	ctx.r19.s64 = 32;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,212(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 212);
	// lwz r9,280(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 280);
	// lwzx r17,r11,r10
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lhz r8,14(r17)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r17.u32 + 14);
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x824a9cd8
	if (ctx.cr6.eq) goto loc_824A9CD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x825aeb50
	ctx.lr = 0x824A9BEC;
	sub_825AEB50(ctx, base);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r9,496
	ctx.r9.s64 = 496;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v60,r0,r27
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r3,63
	ctx.r7.s64 = ctx.r3.s64 + 63;
	// lwz r6,232(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 232);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// lwzx r8,r5,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,2384
	ctx.r5.s64 = ctx.r11.s64 + 2384;
	// li r20,48
	ctx.r20.s64 = 48;
	// lis r7,-32122
	ctx.r7.s64 = -2105147392;
	// li r30,64
	ctx.r30.s64 = 64;
	// lvx128 v63,r8,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vand128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// addi r7,r7,2352
	ctx.r7.s64 = ctx.r7.s64 + 2352;
	// lwzx r11,r5,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 + 416;
	// lvx128 v55,r0,r11
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r11,r19
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r20
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r11,r18
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v52,v56,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v53,v55,v54
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvx128 v61,r0,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v51,v55,v54
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vor128 v58,v61,v59
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// vmrglw128 v50,v56,v57
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v49,v53,v52
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrglw128 v48,v53,v52
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v47,v51,v50
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v46,v48,v57
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v45,v49,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrglw128 v44,v48,v57
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrglw128 v43,v49,v47
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrglw128 v42,v45,v46
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v41,v45,v46
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v40,v43,v44
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v39,v58,v42
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v38,v58,v41
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v37,v58,v40
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmrghw128 v36,v39,v58
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v35,v38,v37
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v34,v35,v36
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vaddfp128 v63,v34,v60
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v33,r6,r30
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v33
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v33.f32)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824a9d0c
	goto loc_824A9D0C;
loc_824A9CD8:
	// li r20,48
	ctx.r20.s64 = 48;
	// lwz r11,368(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 368);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,128
	ctx.r8.s64 = 128;
	// lvx128 v63,r28,r20
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,212(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + 212);
	// lwzx r5,r9,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lvx128 v32,r5,r8
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v32
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v32.f32)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824A9D0C:
	// addi r24,r29,32
	ctx.r24.s64 = ctx.r29.s64 + 32;
	// lvx128 v62,r0,r26
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r23,r29,48
	ctx.r23.s64 = ctx.r29.s64 + 48;
	// vsubfp128 v59,v63,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r22,r29,16
	ctx.r22.s64 = ctx.r29.s64 + 16;
	// lvx128 v58,r0,r29
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,740(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r4,732(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v57,r0,r24
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v56,r0,r23
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v62,v58,v57
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v55,r0,r22
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v54,v58,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v61,v55,v56
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lbz r10,719(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 719);
	// vmrglw128 v53,v55,v56
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lbz r27,711(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 711);
	// cntlzw r5,r10
	ctx.r5.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwzx r11,r3,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// cntlzw r7,r27
	ctx.r7.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lbz r31,703(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 703);
	// vmrghw128 v52,v62,v61
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vmrghw128 v60,v54,v53
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// vmrglw128 v51,v62,v61
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// lfs f18,14192(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14192);
	ctx.f18.f64 = double(temp.f32);
	// vmsum3fp128 v50,v59,v52
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vmsum3fp128 v49,v59,v60
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// cntlzw r7,r31
	ctx.r7.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// vmsum3fp128 v48,v59,v51
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// xori r10,r4,1
	ctx.r10.u64 = ctx.r4.u64 ^ 1;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r8,364(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 364);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 ^ 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add. r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r15,0
	ctx.r15.s64 = 0;
	// lfs f24,7444(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7444);
	ctx.f24.f64 = double(temp.f32);
	// vmrghw128 v47,v50,v49
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v46,v48,v47
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v45,v47,v46
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// stvx128 v45,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,208(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 208);
	// lbz r4,12(r17)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r17.u32 + 12);
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r17,r3,r8
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwzx r30,r11,r5
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// beq 0x824a9f40
	if (ctx.cr0.eq) goto loc_824A9F40;
	// li r3,784
	ctx.r3.s64 = 784;
	// bl 0x82130528
	ctx.lr = 0x824A9DF4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a9e04
	if (ctx.cr6.eq) goto loc_824A9E04;
	// bl 0x824a6d48
	ctx.lr = 0x824A9E00;
	sub_824A6D48(ctx, base);
	// b 0x824a9e08
	goto loc_824A9E08;
loc_824A9E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A9E08:
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824a9e2c
	if (ctx.cr6.eq) goto loc_824A9E2C;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f1,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r10,-31632
	ctx.r8.s64 = ctx.r10.s64 + -31632;
	// b 0x824a9e58
	goto loc_824A9E58;
loc_824A9E2C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824a9e48
	if (ctx.cr6.eq) goto loc_824A9E48;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f1,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r10,-31616
	ctx.r8.s64 = ctx.r10.s64 + -31616;
	// b 0x824a9e58
	goto loc_824A9E58;
loc_824A9E48:
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f1,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r10,-31600
	ctx.r8.s64 = ctx.r10.s64 + -31600;
loc_824A9E58:
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r0,r24
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lvx128 v35,r0,r29
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v34,r0,r23
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v33,v35,v37
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// lvx128 v32,r0,r22
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v62,v35,v37
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v32,v34
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// lvx128 v42,r28,r20
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v56,v32,v34
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// lvx128 v40,r28,r18
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,3796
	ctx.r11.s64 = ctx.r11.s64 + 3796;
	// lvx128 v44,r0,r28
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r28,r19
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v41,v44,v43
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrglw128 v39,v44,v43
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// lfs f23,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// vmrghw128 v38,v40,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrglw128 v36,v40,v42
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v53,v33,v58
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v52,v62,v56
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v61,v41,v38
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v60,v39,v36
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrglw128 v59,v41,v38
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrglw128 v51,v33,v58
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmsum3fp128 v57,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// vmsum3fp128 v55,v63,v60
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmsum3fp128 v54,v63,v59
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vmrghw128 v50,v57,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v49,v54,v50
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v48,v50,v49
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmsum3fp128 v47,v48,v52
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v52.f32), 0xEF));
	// vmsum3fp128 v46,v48,v53
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// vmsum3fp128 v45,v48,v51
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// vmrghw128 v44,v46,v47
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v43,v45,v44
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v42,v44,v43
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// stvx128 v42,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,48(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f23
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x824a9f28
	if (ctx.cr6.eq) goto loc_824A9F28;
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// beq cr6,0x824a9f28
	if (ctx.cr6.eq) goto loc_824A9F28;
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f13,672(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 672, temp.u32);
	// stfs f0,688(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 688, temp.u32);
	// stw r11,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r11.u32);
loc_824A9F28:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r7,636(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825be458
	ctx.lr = 0x824A9F3C;
	sub_825BE458(ctx, base);
	// b 0x824aa6b8
	goto loc_824AA6B8;
loc_824A9F40:
	// lbz r26,695(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 695);
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// clrlwi r21,r25,24
	ctx.r21.u64 = ctx.r25.u32 & 0xFF;
	// lfs f22,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f22.f64 = double(temp.f32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f21,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// cntlzw r8,r26
	ctx.r8.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lfs f20,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f20.f64 = double(temp.f32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f19,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f19.f64 = double(temp.f32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stfs f22,196(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// cntlzw r5,r21
	ctx.r5.u64 = ctx.r21.u32 == 0 ? 32 : __builtin_clz(ctx.r21.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// xori r9,r7,1
	ctx.r9.u64 = ctx.r7.u64 ^ 1;
	// xori r8,r6,1
	ctx.r8.u64 = ctx.r6.u64 ^ 1;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r11,r11,3796
	ctx.r11.s64 = ctx.r11.s64 + 3796;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xori r9,r4,1
	ctx.r9.u64 = ctx.r4.u64 ^ 1;
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f23,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fmr f26,f23
	ctx.f26.f64 = ctx.f23.f64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x824aa4d0
	if (ctx.cr6.eq) goto loc_824AA4D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,724(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// lfs f25,14980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14980);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,14884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14884);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x824a9fe8
	if (ctx.cr6.eq) goto loc_824A9FE8;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x824aa6b8
	if (!ctx.cr6.eq) goto loc_824AA6B8;
	// lfs f0,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f26,f12,f27
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fcmpu cr6,f26,f25
	ctx.cr6.compare(ctx.f26.f64, ctx.f25.f64);
	// blt cr6,0x824a9fe8
	if (ctx.cr6.lt) goto loc_824A9FE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f26,-31400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31400);
	ctx.f26.f64 = double(temp.f32);
loc_824A9FE8:
	// li r3,1408
	ctx.r3.s64 = 1408;
	// bl 0x82130528
	ctx.lr = 0x824A9FF0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824aa004
	if (ctx.cr6.eq) goto loc_824AA004;
	// bl 0x824a7410
	ctx.lr = 0x824A9FFC;
	sub_824A7410(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x824aa008
	goto loc_824AA008;
loc_824AA004:
	// li r25,0
	ctx.r25.s64 = 0;
loc_824AA008:
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x824aa05c
	if (ctx.cr6.eq) goto loc_824AA05C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x824aa05c
	if (ctx.cr6.eq) goto loc_824AA05C;
	// lfs f31,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f31.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f30,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f30.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x824aa040
	if (!ctx.cr6.eq) goto loc_824AA040;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// addi r9,r11,-31632
	ctx.r9.s64 = ctx.r11.s64 + -31632;
	// b 0x824aa074
	goto loc_824AA074;
loc_824AA040:
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lfs f29,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f28,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f28.f64 = double(temp.f32);
	// addi r9,r11,-31616
	ctx.r9.s64 = ctx.r11.s64 + -31616;
	// addi r8,r10,-31632
	ctx.r8.s64 = ctx.r10.s64 + -31632;
	// b 0x824aa084
	goto loc_824AA084;
loc_824AA05C:
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lfs f31,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f30.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r9,r11,-31600
	ctx.r9.s64 = ctx.r11.s64 + -31600;
loc_824AA074:
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f28,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r10,-31616
	ctx.r8.s64 = ctx.r10.s64 + -31616;
loc_824AA084:
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r27,r28,32
	ctx.r27.s64 = ctx.r28.s64 + 32;
	// stvx128 v62,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r28,48
	ctx.r11.s64 = ctx.r28.s64 + 48;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r26,r28,16
	ctx.r26.s64 = ctx.r28.s64 + 16;
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lvx128 v41,r0,r28
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r10,-31280
	ctx.r8.s64 = ctx.r10.s64 + -31280;
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvx128 v38,r0,r26
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r21,r1,128
	ctx.r21.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r20,r1,144
	ctx.r20.s64 = ctx.r1.s64 + 144;
	// stvx128 v61,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// addi r19,r1,208
	ctx.r19.s64 = ctx.r1.s64 + 208;
	// li r18,16
	ctx.r18.s64 = 16;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lvx128 v39,r0,r27
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r0,r11
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v36,v38,v40
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v37,v41,v39
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrglw128 v35,v41,v39
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrglw128 v34,v38,v40
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v33,v37,v36
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrglw128 v32,v37,v36
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v60,v35,v34
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmsum3fp128 v58,v63,v33
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v33.f32), 0xEF));
	// vmsum3fp128 v57,v63,v32
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v32.f32), 0xEF));
	// vmsum3fp128 v56,v63,v60
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// lvx128 v63,r8,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lvx128 v60,r8,r18
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r8,r9
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v55,v58,v56
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v54,v57,v55
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v63,v55,v54
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vpermwi128 v53,v63,135
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// vpermwi128 v0,v63,99
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// stvx128 v63,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r28
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r0,r27
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r11
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r0,r26
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v47,v51,v52
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v48,v50,v49
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrglw128 v46,v50,v49
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrglw128 v45,v51,v52
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v44,v48,v47
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrglw128 v43,v48,v47
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v42,v46,v45
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmsum3fp128 v41,v62,v44
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v44.f32), 0xEF));
	// vmsum3fp128 v40,v62,v43
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v43.f32), 0xEF));
	// vmsum3fp128 v39,v62,v42
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32), 0xEF));
	// vmrghw128 v38,v41,v39
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v37,v40,v38
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v63,v38,v37
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vpermwi128 v36,v63,99
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// vpermwi128 v13,v63,135
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// stvx128 v63,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v12,v53,v36
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v36.f32)));
	// vnmsubfp v11,v0,v13,v12
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v11,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82227f50
	ctx.lr = 0x824AA1B8;
	sub_82227F50(ctx, base);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v35,v63,v62
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrglw128 v34,v63,v62
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fsubs f12,f29,f28
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v60,r0,r5
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f31,f13,f27
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// vmrghw128 v33,v61,v60
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v32,v61,v60
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,11360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11360);
	ctx.f0.f64 = double(temp.f32);
	// vmrghw128 v61,v35,v33
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// vmrghw128 v60,v34,v32
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v59,v35,v33
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrglw128 v58,v35,v33
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmsum3fp128 v57,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// vmrglw128 v56,v35,v33
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmsum3fp128 v55,v63,v60
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// fmuls f30,f12,f27
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// vmsum3fp128 v54,v62,v59
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vmsum3fp128 v53,v62,v60
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmsum3fp128 v52,v63,v58
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v58.f32), 0xEF));
	// vmsum3fp128 v51,v62,v56
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmrghw128 v50,v57,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v49,v54,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v48,v52,v50
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v47,v51,v49
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v63,v50,v48
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v62,v49,v47
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// blt cr6,0x824aa26c
	if (ctx.cr6.lt) goto loc_824AA26C;
	// fcmpu cr6,f31,f25
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// bge cr6,0x824aa26c
	if (!ctx.cr6.lt) goto loc_824AA26C;
	// fcmpu cr6,f30,f25
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// blt cr6,0x824aa290
	if (ctx.cr6.lt) goto loc_824AA290;
loc_824AA26C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// fmr f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f0.f64;
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// lfs f0,4216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4216);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x824aa284
	if (ctx.cr6.lt) goto loc_824AA284;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_824AA284:
	// fcmpu cr6,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// blt cr6,0x824aa290
	if (ctx.cr6.lt) goto loc_824AA290;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_824AA290:
	// lvx128 v46,r0,r24
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v45,r0,r29
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v44,r0,r23
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v43,v45,v46
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// lvx128 v42,r0,r22
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v41,v45,v46
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v40,v42,v44
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vmrglw128 v39,v42,v44
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// vmrghw128 v38,v43,v40
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// vmrghw128 v37,v41,v39
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// vmrghw128 v36,v43,v40
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// lfs f10,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// vmrglw128 v35,v43,v40
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// lfs f9,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// vmsum3fp128 v34,v63,v38
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v38.f32), 0xEF));
	// vmrglw128 v33,v43,v40
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum3fp128 v32,v63,v37
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v37.f32), 0xEF));
	// fadds f8,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// vmsum3fp128 v61,v62,v37
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v37.f32), 0xEF));
	// fadds f7,f12,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// vmsum3fp128 v60,v62,v36
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v36.f32), 0xEF));
	// fadds f6,f10,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// vmsum3fp128 v59,v63,v35
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v35.f32), 0xEF));
	// lfs f0,31492(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31492);
	ctx.f0.f64 = double(temp.f32);
	// vmsum3fp128 v58,v62,v33
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v33.f32), 0xEF));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fabs f5,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f5.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f4,f7
	ctx.f4.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f3,f6
	ctx.f3.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// vmrghw128 v57,v34,v32
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v56,v60,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v55,v59,v57
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f2,176(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// vmrghw128 v54,v58,v56
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// vmrghw128 v63,v57,v55
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// vmrghw128 v62,v56,v54
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r28
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r27
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v51,v52,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v49,v50,v63
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// lvx128 v53,r0,r26
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v48,v53,v63
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmrghw128 v47,v49,v51
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v46,v48,v47
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v45,v47,v46
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// stvx128 v45,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r0,r28
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v41,v42,v62
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// lvx128 v43,r0,r26
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r27
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v40,v44,v62
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum3fp128 v39,v43,v62
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmrghw128 v38,v41,v40
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v37,v39,v38
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v36,v38,v37
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// stvx128 v36,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x821b4b00
	ctx.lr = 0x824AA3B8;
	sub_821B4B00(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821ba038
	ctx.lr = 0x824AA3C4;
	sub_821BA038(ctx, base);
	// lis r6,-32130
	ctx.r6.s64 = -2105671680;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// fmr f3,f26
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f26.f64;
	// addi r3,r6,-30688
	ctx.r3.s64 = ctx.r6.s64 + -30688;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r7,636(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825bb858
	ctx.lr = 0x824AA400;
	sub_825BB858(ctx, base);
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f24,f13
	ctx.f11.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// lfs f10,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f24,f12
	ctx.f9.f64 = double(float(ctx.f24.f64 - ctx.f12.f64));
	// fsubs f8,f24,f10
	ctx.f8.f64 = double(float(ctx.f24.f64 - ctx.f10.f64));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fsel f7,f11,f13,f24
	ctx.f7.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f24.f64;
	// fsel f6,f9,f12,f24
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f24.f64;
	// fsel f5,f8,f10,f24
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f24.f64;
	// fmuls f1,f7,f31
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f2,f6,f30
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f3,f5,f26
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// bl 0x825b98f0
	ctx.lr = 0x824AA438;
	sub_825B98F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f21,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f21.f64, ctx.f23.f64);
	// beq cr6,0x824aa46c
	if (ctx.cr6.eq) goto loc_824AA46C;
	// fcmpu cr6,f22,f23
	ctx.cr6.compare(ctx.f22.f64, ctx.f23.f64);
	// beq cr6,0x824aa46c
	if (ctx.cr6.eq) goto loc_824AA46C;
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// stfs f21,728(r25)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r25.u32 + 728, temp.u32);
	// li r9,688
	ctx.r9.s64 = 688;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,528(r25)
	PPC_STORE_U32(ctx.r25.u32 + 528, ctx.r11.u32);
	// lvlx128 v35,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v34,v35,0
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), 0xFF));
	// stvx128 v34,r25,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824AA46C:
	// fcmpu cr6,f20,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f20.f64, ctx.f23.f64);
	// beq cr6,0x824aa6b8
	if (ctx.cr6.eq) goto loc_824AA6B8;
	// fcmpu cr6,f19,f23
	ctx.cr6.compare(ctx.f19.f64, ctx.f23.f64);
	// beq cr6,0x824aa6b8
	if (ctx.cr6.eq) goto loc_824AA6B8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// bne cr6,0x824aa490
	if (!ctx.cr6.eq) goto loc_824AA490;
	// li r11,2
	ctx.r11.s64 = 2;
loc_824AA490:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r11,528(r25)
	PPC_STORE_U32(ctx.r25.u32 + 528, ctx.r11.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stfs f20,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f19,216(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r9,672
	ctx.r9.s64 = 672;
	// stfs f19,212(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// li r8,736
	ctx.r8.s64 = 736;
	// stfs f19,208(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f20,184(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f20,176(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lvx128 v33,r0,r10
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r25,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r0,r11
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r25,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824aa6b8
	goto loc_824AA6B8;
loc_824AA4D0:
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x824aa4f0
	if (ctx.cr6.eq) goto loc_824AA4F0;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f31,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r10,-31632
	ctx.r8.s64 = ctx.r10.s64 + -31632;
	// b 0x824aa51c
	goto loc_824AA51C;
loc_824AA4F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824aa50c
	if (ctx.cr6.eq) goto loc_824AA50C;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f31,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r10,-31616
	ctx.r8.s64 = ctx.r10.s64 + -31616;
	// b 0x824aa51c
	goto loc_824AA51C;
loc_824AA50C:
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lfs f31,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r10,-31600
	ctx.r8.s64 = ctx.r10.s64 + -31600;
loc_824AA51C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lfs f0,14980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14980);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x824aa540
	if (ctx.cr6.gt) goto loc_824AA540;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x824aa550
	if (!ctx.cr6.gt) goto loc_824AA550;
loc_824AA540:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,18204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18204);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
loc_824AA550:
	// lvx128 v59,r0,r28
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v62,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// lvx128 v57,r28,r19
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v56,v62,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// lvx128 v55,r28,r20
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v54,v59,v57
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v53,r28,r18
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v52,v59,v57
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v51,v53,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vmrglw128 v50,v53,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// li r3,784
	ctx.r3.s64 = 784;
	// vmrghw128 v49,v54,v51
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v48,v52,v50
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrglw128 v47,v54,v51
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmsum3fp128 v46,v63,v49
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xEF));
	// vmsum3fp128 v45,v63,v48
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xEF));
	// vmsum3fp128 v44,v63,v47
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v47.f32), 0xEF));
	// vmrghw128 v43,v46,v45
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v42,v44,v43
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrghw128 v41,v43,v42
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum3fp128 v40,v41,v60
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmsum3fp128 v39,v41,v58
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v58.f32), 0xEF));
	// vmsum3fp128 v38,v41,v56
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmrghw128 v37,v39,v40
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v36,v38,v37
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v35,v37,v36
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// stvx128 v35,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82130528
	ctx.lr = 0x824AA5C4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824aa5d8
	if (ctx.cr6.eq) goto loc_824AA5D8;
	// bl 0x824a6ca0
	ctx.lr = 0x824AA5D0;
	sub_824A6CA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824aa5dc
	goto loc_824AA5DC;
loc_824AA5D8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824AA5DC:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r7,636(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// bl 0x825b8d70
	ctx.lr = 0x824AA600;
	sub_825B8D70(ctx, base);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f18,f0
	ctx.f11.f64 = double(float(ctx.f18.f64 - ctx.f0.f64));
	// fsubs f10,f18,f13
	ctx.f10.f64 = double(float(ctx.f18.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,14884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	ctx.f12.f64 = double(temp.f32);
	// fsel f9,f11,f18,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f18.f64 : ctx.f0.f64;
	// fsel f8,f10,f18,f13
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f18.f64 : ctx.f13.f64;
	// fsubs f7,f24,f9
	ctx.f7.f64 = double(float(ctx.f24.f64 - ctx.f9.f64));
	// fsubs f6,f24,f8
	ctx.f6.f64 = double(float(ctx.f24.f64 - ctx.f8.f64));
	// fsel f0,f7,f9,f24
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f24.f64;
	// fsel f13,f6,f8,f24
	ctx.f13.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f24.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x824aa644
	if (!ctx.cr6.gt) goto loc_824AA644;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_824AA644:
	// fsubs f10,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// fadds f9,f30,f31
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,4212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4212);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f2,f8,f13,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f1,f8,f0,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// bl 0x825b8690
	ctx.lr = 0x824AA66C;
	sub_825B8690(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f22,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f22.f64, ctx.f23.f64);
	// beq cr6,0x824aa688
	if (ctx.cr6.eq) goto loc_824AA688;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f21,684(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stfs f22,676(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
loc_824AA688:
	// fcmpu cr6,f20,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f20.f64, ctx.f23.f64);
	// beq cr6,0x824aa6b8
	if (ctx.cr6.eq) goto loc_824AA6B8;
	// fcmpu cr6,f19,f23
	ctx.cr6.compare(ctx.f19.f64, ctx.f23.f64);
	// beq cr6,0x824aa6b8
	if (ctx.cr6.eq) goto loc_824AA6B8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// bne cr6,0x824aa6ac
	if (!ctx.cr6.eq) goto loc_824AA6AC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_824AA6AC:
	// stfs f20,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stfs f19,688(r31)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
loc_824AA6B8:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lfs f13,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-2000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f10,f11,f24
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f24.f64));
	// fsel f9,f10,f24,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f24.f64 : ctx.f11.f64;
	// stfs f9,4(r15)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r15.u32 + 4, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f18
	ctx.cr6.compare(ctx.f0.f64, ctx.f18.f64);
	// beq cr6,0x824aa718
	if (ctx.cr6.eq) goto loc_824AA718;
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bgt cr6,0x824aa718
	if (ctx.cr6.gt) goto loc_824AA718;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,364(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 364);
	// bl 0x825aa608
	ctx.lr = 0x824AA6F8;
	sub_825AA608(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,732(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823db9fc
	ctx.lr = 0x824AA714;
	__restfpr_18(ctx, base);
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
loc_824AA718:
	// lwz r11,424(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824aa744
	if (!ctx.cr6.eq) goto loc_824AA744;
	// lbz r11,302(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 302);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82130528
	ctx.lr = 0x824AA730;
	sub_82130528(ctx, base);
	// stw r3,424(r16)
	PPC_STORE_U32(ctx.r16.u32 + 424, ctx.r3.u32);
	// lbz r10,302(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 302);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bl 0x823d9890
	ctx.lr = 0x824AA744;
	sub_823D9890(ctx, base);
loc_824AA744:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,424(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 424);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stwx r15,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r15.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823db9fc
	ctx.lr = 0x824AA764;
	__restfpr_18(ctx, base);
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AA768"))) PPC_WEAK_FUNC(sub_824AA768);
PPC_FUNC_IMPL(__imp__sub_824AA768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c4
	ctx.lr = 0x824AA770;
	__savegprlr_15(ctx, base);
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8784(r1)
	ea = -8784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r11,404(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824aae64
	if (!ctx.cr6.eq) goto loc_824AAE64;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r10,r11,20764
	ctx.r10.s64 = ctx.r11.s64 + 20764;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824aae64
	if (!ctx.cr6.eq) goto loc_824AAE64;
	// lwz r3,232(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824AA7BC;
	sub_8248A510(ctx, base);
	// lwz r11,232(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824AA7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824aa7fc
	if (ctx.cr6.eq) goto loc_824AA7FC;
	// lwz r3,232(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824AA7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x824aae64
	if (!ctx.cr6.eq) goto loc_824AAE64;
loc_824AA7FC:
	// li r16,0
	ctx.r16.s64 = 0;
	// addi r11,r1,420
	ctx.r11.s64 = ctx.r1.s64 + 420;
	// stw r16,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r16.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824AA814:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824aa814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AA814;
	// lwz r11,180(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aae64
	if (ctx.cr6.eq) goto loc_824AAE64;
	// lwz r17,12(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x824aae64
	if (ctx.cr6.eq) goto loc_824AAE64;
	// lwz r10,232(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// lwz r8,268(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// li r6,64
	ctx.r6.s64 = 64;
	// li r23,16
	ctx.r23.s64 = 16;
	// lvx128 v62,r26,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// lvx128 v60,r26,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// lvx128 v56,r11,r9
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lvx128 v59,r10,r6
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lvx128 v61,r0,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v58,v62,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// lvx128 v57,r11,r23
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r16,368(r25)
	PPC_STORE_U32(ctx.r25.u32 + 368, ctx.r16.u32);
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// stvx128 v56,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,240(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stvx128 v61,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// stvx128 v57,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f30,3796(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// stvx128 v58,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lvx128 v127,r0,r9
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// lfs f31,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stvx128 v127,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x824aa8f4
	if (ctx.cr6.eq) goto loc_824AA8F4;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vor128 v127,v63,v63
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824AA8F4:
	// lbz r11,303(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 303);
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824aadb4
	if (!ctx.cr6.gt) goto loc_824AADB4;
	// li r20,4
	ctx.r20.s64 = 4;
loc_824AA90C:
	// lwz r7,212(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// lwz r11,268(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// lwzx r28,r7,r20
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r20.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// slw r5,r21,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824aad9c
	if (!ctx.cr6.eq) goto loc_824AAD9C;
	// lhz r11,14(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// extsh r24,r11
	ctx.r24.s64 = ctx.r11.s16;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x824aad24
	if (!ctx.cr6.gt) goto loc_824AAD24;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,208(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// rotlwi r11,r31,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lbz r11,69(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x824aa9e4
	if (ctx.cr6.eq) goto loc_824AA9E4;
loc_824AA968:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lbz r5,70(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 70);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lhz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x824aaa70
	if (ctx.cr6.eq) goto loc_824AAA70;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lwzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824aaa70
	if (ctx.cr6.eq) goto loc_824AAA70;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x824aa9e8
	if (!ctx.cr6.eq) goto loc_824AA9E8;
loc_824AA9B0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x824aa9e4
	if (ctx.cr6.eq) goto loc_824AA9E4;
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// beq cr6,0x824aa9e4
	if (ctx.cr6.eq) goto loc_824AA9E4;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x824aa9e4
	if (ctx.cr6.eq) goto loc_824AA9E4;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// slw r5,r21,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824aa968
	if (ctx.cr6.eq) goto loc_824AA968;
loc_824AA9E4:
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
loc_824AA9E8:
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// beq cr6,0x824aaa78
	if (ctx.cr6.eq) goto loc_824AAA78;
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// slw r9,r21,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r11,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824aaa78
	if (ctx.cr6.eq) goto loc_824AAA78;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824aad9c
	if (!ctx.cr6.eq) goto loc_824AAD9C;
	// addi r11,r28,128
	ctx.r11.s64 = ctx.r28.s64 + 128;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lvx128 v55,r0,r11
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v54,v55,v55
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v55.f32)));
	// lvlx128 v53,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v53,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0xFF));
	// stvx128 v54,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,260(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// b 0x824aad7c
	goto loc_824AAD7C;
loc_824AAA70:
	// lbz r11,69(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 69);
	// b 0x824aa9b0
	goto loc_824AA9B0;
loc_824AAA78:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mulli r10,r24,224
	ctx.r10.s64 = ctx.r24.s64 * 224;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r1,145
	ctx.r9.s64 = ctx.r1.s64 + 145;
	// addi r8,r1,147
	ctx.r8.s64 = ctx.r1.s64 + 147;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// addi r6,r1,149
	ctx.r6.s64 = ctx.r1.s64 + 149;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,146
	ctx.r4.s64 = ctx.r1.s64 + 146;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249cc20
	ctx.lr = 0x824AAAA4;
	sub_8249CC20(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x824aab48
	if (!ctx.cr6.eq) goto loc_824AAB48;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x824aab48
	if (ctx.cr6.gt) goto loc_824AAB48;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824aacf4
	if (!ctx.cr6.eq) goto loc_824AACF4;
	// addi r11,r28,128
	ctx.r11.s64 = ctx.r28.s64 + 128;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r9,240(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// lvx128 v52,r0,r11
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// vmulfp128 v51,v52,v52
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v52.f32)));
	// lvx128 v0,r9,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v50,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v50,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0xFF));
	// stvx128 v51,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f12,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lvx128 v12,r0,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v127,v127,v0
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x824aacf4
	goto loc_824AACF4;
loc_824AAB48:
	// lwz r11,364(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824aab84
	if (!ctx.cr6.eq) goto loc_824AAB84;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824a81a8
	ctx.lr = 0x824AAB6C;
	sub_824A81A8(ctx, base);
	// lwz r10,208(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbz r8,70(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 70);
	// stw r8,368(r25)
	PPC_STORE_U32(ctx.r25.u32 + 368, ctx.r8.u32);
	// lwz r19,372(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 372);
loc_824AAB84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824aac18
	if (ctx.cr6.eq) goto loc_824AAC18;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824aac18
	if (!ctx.cr6.eq) goto loc_824AAC18;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824a85e8
	ctx.lr = 0x824AABBC;
	sub_824A85E8(ctx, base);
	// lbz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// lbz r29,147(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r15,149(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 149);
	// addi r28,r1,416
	ctx.r28.s64 = ctx.r1.s64 + 416;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lbz r11,145(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stb r29,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r29.u8);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stb r15,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r15.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// lbz r9,146(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// bl 0x824a9b60
	ctx.lr = 0x824AAC14;
	sub_824A9B60(ctx, base);
	// b 0x824aacf4
	goto loc_824AACF4;
loc_824AAC18:
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824aac3c
	if (!ctx.cr6.eq) goto loc_824AAC3C;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,416
	ctx.r8.s64 = ctx.r1.s64 + 416;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
loc_824AAC3C:
	// addi r11,r28,128
	ctx.r11.s64 = ctx.r28.s64 + 128;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r9,364(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 364);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// lwz r4,240(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lvx128 v49,r0,r11
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// vmulfp128 v48,v49,v49
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v49.f32)));
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r4,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwzx r10,r5,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lvlx128 v45,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v45,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), 0xFF));
	// stvx128 v48,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r10,480
	ctx.r11.s64 = ctx.r10.s64 + 480;
	// lfs f12,244(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,496
	ctx.r10.s64 = ctx.r10.s64 + 496;
	// lfs f11,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lvx128 v47,r0,r11
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stvx128 v47,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fadds f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f6,200(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lvx128 v12,r0,r31
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// lfs f9,336(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lvx128 v44,r0,r10
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v43,v44,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v43.f32, _mm_add_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v46,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v42,v46,0
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), 0xFF));
	// stvx128 v42,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824AACF4:
	// lwz r3,372(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824aad9c
	if (ctx.cr6.eq) goto loc_824AAD9C;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x824aad18
	if (!ctx.cr6.lt) goto loc_824AAD18;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_824AAD18:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x825aeba0
	ctx.lr = 0x824AAD20;
	sub_825AEBA0(ctx, base);
	// b 0x824aad9c
	goto loc_824AAD9C;
loc_824AAD24:
	// addi r11,r28,128
	ctx.r11.s64 = ctx.r28.s64 + 128;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r8,r1,156
	ctx.r8.s64 = ctx.r1.s64 + 156;
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lvx128 v41,r0,r11
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v40,v41,v41
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v41.f32)));
	// lvlx128 v39,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v39,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), 0xFF));
	// stvx128 v40,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,288(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
loc_824AAD7C:
	// lwz r9,240(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// lvx128 v12,r0,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r9,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v127,v127,v0
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_824AAD9C:
	// lbz r11,303(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 303);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824aa90c
	if (ctx.cr6.lt) goto loc_824AA90C;
loc_824AADB4:
	// lwz r3,364(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824aae64
	if (ctx.cr6.eq) goto loc_824AAE64;
	// bl 0x825ab540
	ctx.lr = 0x824AADC4;
	sub_825AB540(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82130528
	ctx.lr = 0x824AADCC;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824aade0
	if (ctx.cr6.eq) goto loc_824AADE0;
	// lwz r4,372(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	// bl 0x82595360
	ctx.lr = 0x824AADDC;
	sub_82595360(ctx, base);
	// b 0x824aade4
	goto loc_824AADE4;
loc_824AADE0:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_824AADE4:
	// stw r3,24(r19)
	PPC_STORE_U32(ctx.r19.u32 + 24, ctx.r3.u32);
	// lfs f31,316(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 316);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x824aae64
	if (ctx.cr6.eq) goto loc_824AAE64;
	// lis r30,-32112
	ctx.r30.s64 = -2104492032;
	// lwz r5,232(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// addi r31,r19,256
	ctx.r31.s64 = ctx.r19.s64 + 256;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,-2288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2288);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82592fa8
	ctx.lr = 0x824AAE20;
	sub_82592FA8(ctx, base);
	// stw r3,384(r25)
	PPC_STORE_U32(ctx.r25.u32 + 384, ctx.r3.u32);
	// bl 0x825b6ea0
	ctx.lr = 0x824AAE28;
	sub_825B6EA0(ctx, base);
	// lwz r11,-2288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2288);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,232(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82592fa8
	ctx.lr = 0x824AAE4C;
	sub_82592FA8(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// stw r3,380(r25)
	PPC_STORE_U32(ctx.r25.u32 + 380, ctx.r3.u32);
	// ble cr6,0x824aae64
	if (!ctx.cr6.gt) goto loc_824AAE64;
	// stfs f31,328(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// lwz r11,384(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 384);
	// stfs f31,328(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 328, temp.u32);
loc_824AAE64:
	// addi r1,r1,8784
	ctx.r1.s64 = ctx.r1.s64 + 8784;
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AAE7C"))) PPC_WEAK_FUNC(sub_824AAE7C);
PPC_FUNC_IMPL(__imp__sub_824AAE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AAE80"))) PPC_WEAK_FUNC(sub_824AAE80);
PPC_FUNC_IMPL(__imp__sub_824AAE80) {
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
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824aaee0
	if (!ctx.cr6.eq) goto loc_824AAEE0;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824AAEAC;
	sub_8248A510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,296(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// bl 0x824daa20
	ctx.lr = 0x824AAEBC;
	sub_824DAA20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824aa768
	ctx.lr = 0x824AAEC8;
	sub_824AA768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a8d40
	ctx.lr = 0x824AAED0;
	sub_824A8D40(ctx, base);
	// bl 0x824da928
	ctx.lr = 0x824AAED4;
	sub_824DA928(ctx, base);
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r10,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r10.u32);
loc_824AAEE0:
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

__attribute__((alias("__imp__sub_824AAEF8"))) PPC_WEAK_FUNC(sub_824AAEF8);
PPC_FUNC_IMPL(__imp__sub_824AAEF8) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824aaf20
	if (ctx.cr6.eq) goto loc_824AAF20;
	// bl 0x824a9780
	ctx.lr = 0x824AAF20;
	sub_824A9780(ctx, base);
loc_824AAF20:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e568
	ctx.lr = 0x824AAF30;
	sub_8258E568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e968
	ctx.lr = 0x824AAF38;
	sub_8258E968(ctx, base);
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

__attribute__((alias("__imp__sub_824AAF4C"))) PPC_WEAK_FUNC(sub_824AAF4C);
PPC_FUNC_IMPL(__imp__sub_824AAF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AAF50"))) PPC_WEAK_FUNC(sub_824AAF50);
PPC_FUNC_IMPL(__imp__sub_824AAF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x824AAF58;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824AAF78;
	sub_8248A510(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lfs f30,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x824aafa4
	if (ctx.cr6.eq) goto loc_824AAFA4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f29,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
loc_824AAFA4:
	// addi r25,r31,32
	ctx.r25.s64 = ctx.r31.s64 + 32;
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8258e6b8
	ctx.lr = 0x824AAFB4;
	sub_8258E6B8(ctx, base);
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r9,228(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// lwz r3,228(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824AAFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824AAFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,18204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18204);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// bl 0x8249cb88
	ctx.lr = 0x824AB018;
	sub_8249CB88(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// lbz r8,303(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 303);
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// bl 0x82130528
	ctx.lr = 0x824AB05C;
	sub_82130528(ctx, base);
	// stw r3,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r3.u32);
	// lbz r7,303(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 303);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r7,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// bl 0x823d9890
	ctx.lr = 0x824AB070;
	sub_823D9890(ctx, base);
	// clrlwi r26,r27,16
	ctx.r26.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r26,255
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 255, ctx.xer);
	// bne cr6,0x824ab100
	if (!ctx.cr6.eq) goto loc_824AB100;
	// lbz r11,303(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 303);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824ab188
	if (!ctx.cr6.gt) goto loc_824AB188;
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r9,212(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_824AB09C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// slw r3,r6,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// and r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824ab0f0
	if (!ctx.cr6.eq) goto loc_824AB0F0;
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x824ab0e8
	if (ctx.cr6.gt) goto loc_824AB0E8;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824ab0e8
	if (ctx.cr6.eq) goto loc_824AB0E8;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x824ab0ec
	goto loc_824AB0EC;
loc_824AB0E8:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_824AB0EC:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_824AB0F0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x824ab09c
	if (!ctx.cr0.eq) goto loc_824AB09C;
	// b 0x824ab188
	goto loc_824AB188;
loc_824AB100:
	// lbz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 304);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab174
	if (ctx.cr6.eq) goto loc_824AB174;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_824AB114:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x824ab154
	if (ctx.cr6.eq) goto loc_824AB154;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// bl 0x824a9078
	ctx.lr = 0x824AB144;
	sub_824A9078(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a9458
	ctx.lr = 0x824AB150;
	sub_824A9458(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_824AB154:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lbz r10,304(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 304);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824ab114
	if (ctx.cr6.lt) goto loc_824AB114;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x824ab188
	if (!ctx.cr6.eq) goto loc_824AB188;
loc_824AB174:
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6dc8
	ctx.lr = 0x824AB184;
	sub_824A6DC8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_824AB188:
	// lbz r11,307(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 307);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824ab1fc
	if (ctx.cr6.eq) goto loc_824AB1FC;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x8259a970
	ctx.lr = 0x824AB1A0;
	sub_8259A970(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lhz r10,146(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 146);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824ab1fc
	if (ctx.cr6.eq) goto loc_824AB1FC;
	// lis r8,-32112
	ctx.r8.s64 = -2104492032;
loc_824AB1B8:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824ab1e4
	if (ctx.cr6.eq) goto loc_824AB1E4;
	// lbz r7,-2084(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + -2084);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824ab1e4
	if (ctx.cr6.eq) goto loc_824AB1E4;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
loc_824AB1E4:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lhz r10,146(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 146);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824ab1b8
	if (ctx.cr6.lt) goto loc_824AB1B8;
loc_824AB1FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824a9130
	ctx.lr = 0x824AB208;
	sub_824A9130(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82595580
	ctx.lr = 0x824AB218;
	sub_82595580(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lhz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x824ab24c
	if (ctx.cr6.eq) goto loc_824AB24C;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x824ab24c
	if (ctx.cr6.eq) goto loc_824AB24C;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-23452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23452);
	// bl 0x82573b58
	ctx.lr = 0x824AB24C;
	sub_82573B58(ctx, base);
loc_824AB24C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_824AB260"))) PPC_WEAK_FUNC(sub_824AB260);
PPC_FUNC_IMPL(__imp__sub_824AB260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824AB268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8258f620
	ctx.lr = 0x824AB294;
	sub_8258F620(ctx, base);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// addi r28,r31,244
	ctx.r28.s64 = ctx.r31.s64 + 244;
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b5a60
	ctx.lr = 0x824AB2AC;
	sub_821B5A60(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x821b5a60
	ctx.lr = 0x824AB2B4;
	sub_821B5A60(ctx, base);
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// lbz r9,-2084(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2084);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824ab2dc
	if (ctx.cr6.eq) goto loc_824AB2DC;
	// lhz r11,26(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 26);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,26(r29)
	PPC_STORE_U16(ctx.r29.u32 + 26, ctx.r11.u16);
loc_824AB2DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AB2E4"))) PPC_WEAK_FUNC(sub_824AB2E4);
PPC_FUNC_IMPL(__imp__sub_824AB2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AB2E8"))) PPC_WEAK_FUNC(sub_824AB2E8);
PPC_FUNC_IMPL(__imp__sub_824AB2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d4
	ctx.lr = 0x824AB2F0;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r25,r28,232
	ctx.r25.s64 = ctx.r28.s64 + 232;
	// lwz r3,232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824AB308;
	sub_8248A510(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// lbz r9,303(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 303);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824ab494
	if (ctx.cr6.eq) goto loc_824AB494;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// lis r22,-32115
	ctx.r22.s64 = -2104688640;
	// lis r21,-32115
	ctx.r21.s64 = -2104688640;
	// lfs f31,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// lis r23,-32115
	ctx.r23.s64 = -2104688640;
loc_824AB344:
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// lwz r10,268(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r8,r29,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r29,27
	ctx.r7.u64 = ctx.r29.u32 & 0x1F;
	// slw r6,r20,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824ab480
	if (!ctx.cr6.eq) goto loc_824AB480;
	// lwz r24,152(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x824ab480
	if (ctx.cr6.eq) goto loc_824AB480;
	// lhz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab480
	if (ctx.cr6.eq) goto loc_824AB480;
	// li r3,364
	ctx.r3.s64 = 364;
	// bl 0x82130528
	ctx.lr = 0x824AB394;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ab3a8
	if (ctx.cr6.eq) goto loc_824AB3A8;
	// bl 0x823d69a8
	ctx.lr = 0x824AB3A0;
	sub_823D69A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824ab3ac
	goto loc_824AB3AC;
loc_824AB3A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824AB3AC:
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r31,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r31.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r30,352(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82489cb8
	ctx.lr = 0x824AB3CC;
	sub_82489CB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ab3f8
	if (ctx.cr6.eq) goto loc_824AB3F8;
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab3f8
	if (ctx.cr6.eq) goto loc_824AB3F8;
	// lwz r10,260(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x824ab3f8
	if (!ctx.cr6.lt) goto loc_824AB3F8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_824AB3F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824ab420
	if (ctx.cr6.eq) goto loc_824AB420;
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lhz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_824AB420:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824d0098
	ctx.lr = 0x824AB428;
	sub_824D0098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29828(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29828);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x824a5b00
	ctx.lr = 0x824AB438;
	sub_824A5B00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8248e408
	ctx.lr = 0x824AB440;
	sub_8248E408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29788(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29788);
	// bl 0x824a5b00
	ctx.lr = 0x824AB44C;
	sub_824A5B00(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8248e1f0
	ctx.lr = 0x824AB454;
	sub_8248E1F0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29772(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 29772);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x824a5b00
	ctx.lr = 0x824AB46C;
	sub_824A5B00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8248e270
	ctx.lr = 0x824AB474;
	sub_8248E270(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5490
	ctx.lr = 0x824AB480;
	sub_824A5490(ctx, base);
loc_824AB480:
	// lbz r11,303(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 303);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824ab344
	if (ctx.cr6.lt) goto loc_824AB344;
loc_824AB494:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823d9224
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AB4A0"))) PPC_WEAK_FUNC(sub_824AB4A0);
PPC_FUNC_IMPL(__imp__sub_824AB4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x824AB4A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824AB4C4;
	sub_8248A510(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824ab668
	if (ctx.cr6.eq) goto loc_824AB668;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
	// stw r29,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
	// stb r29,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r29.u8);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
	// stw r29,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
	// beq cr6,0x824ab50c
	if (ctx.cr6.eq) goto loc_824AB50C;
	// lfs f0,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// b 0x824ab514
	goto loc_824AB514;
loc_824AB50C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
loc_824AB514:
	// stfs f0,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,292(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 292);
	// bl 0x824daa20
	ctx.lr = 0x824AB524;
	sub_824DAA20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a7a78
	ctx.lr = 0x824AB52C;
	sub_824A7A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a77a8
	ctx.lr = 0x824AB538;
	sub_824A77A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a7960
	ctx.lr = 0x824AB544;
	sub_824A7960(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a7b68
	ctx.lr = 0x824AB554;
	sub_824A7B68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824aaf50
	ctx.lr = 0x824AB560;
	sub_824AAF50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a7ca8
	ctx.lr = 0x824AB568;
	sub_824A7CA8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824ab590
	if (ctx.cr6.eq) goto loc_824AB590;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab590
	if (ctx.cr6.eq) goto loc_824AB590;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824aa768
	ctx.lr = 0x824AB588;
	sub_824AA768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a8d40
	ctx.lr = 0x824AB590;
	sub_824A8D40(ctx, base);
loc_824AB590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a8770
	ctx.lr = 0x824AB598;
	sub_824A8770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ab2e8
	ctx.lr = 0x824AB5A0;
	sub_824AB2E8(ctx, base);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824AB5A8;
	sub_8248A510(ctx, base);
	// lbz r11,303(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 303);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82130528
	ctx.lr = 0x824AB5B4;
	sub_82130528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,268(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824AB5C8;
	sub_8248A510(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8249d240
	ctx.lr = 0x824AB5D4;
	sub_8249D240(ctx, base);
	// bl 0x824da928
	ctx.lr = 0x824AB5D8;
	sub_824DA928(ctx, base);
	// stw r3,292(r26)
	PPC_STORE_U32(ctx.r26.u32 + 292, ctx.r3.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824ab5f4
	if (ctx.cr6.eq) goto loc_824AB5F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a8e40
	ctx.lr = 0x824AB5F4;
	sub_824A8E40(ctx, base);
loc_824AB5F4:
	// lwz r4,404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824ab60c
	if (ctx.cr6.eq) goto loc_824AB60C;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r3,-2288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2288);
	// bl 0x825882f0
	ctx.lr = 0x824AB60C;
	sub_825882F0(ctx, base);
loc_824AB60C:
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r29.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82489a08
	ctx.lr = 0x824AB61C;
	sub_82489A08(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19620);
	// lwz r10,752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// lwz r30,28(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248a728
	ctx.lr = 0x824AB638;
	sub_8248A728(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824ab64c
	if (!ctx.cr6.eq) goto loc_824AB64C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a8fd0
	ctx.lr = 0x824AB64C;
	sub_824A8FD0(ctx, base);
loc_824AB64C:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r7,r10,0,30,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
loc_824AB668:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AB670"))) PPC_WEAK_FUNC(sub_824AB670);
PPC_FUNC_IMPL(__imp__sub_824AB670) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,236(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r4,240(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// b 0x824ab4a0
	sub_824AB4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AB680"))) PPC_WEAK_FUNC(sub_824AB680);
PPC_FUNC_IMPL(__imp__sub_824AB680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x824AB688;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824AB6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824AB6BC;
	sub_8248A510(ctx, base);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab71c
	if (ctx.cr6.eq) goto loc_824AB71C;
	// lbz r11,321(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 321);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab6f4
	if (ctx.cr6.eq) goto loc_824AB6F4;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stb r25,321(r11)
	PPC_STORE_U8(ctx.r11.u32 + 321, ctx.r25.u8);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab6f4
	if (ctx.cr6.eq) goto loc_824AB6F4;
	// stb r25,321(r11)
	PPC_STORE_U8(ctx.r11.u32 + 321, ctx.r25.u8);
loc_824AB6F4:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lbz r10,321(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 321);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824ab71c
	if (ctx.cr6.eq) goto loc_824AB71C;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// stb r25,321(r11)
	PPC_STORE_U8(ctx.r11.u32 + 321, ctx.r25.u8);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab71c
	if (ctx.cr6.eq) goto loc_824AB71C;
	// stb r25,321(r11)
	PPC_STORE_U8(ctx.r11.u32 + 321, ctx.r25.u8);
loc_824AB71C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lis r29,-32112
	ctx.r29.s64 = -2104492032;
	// lfs f12,-29232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29232);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x824ab824
	if (!ctx.cr6.lt) goto loc_824AB824;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x824ab824
	if (ctx.cr6.lt) goto loc_824AB824;
	// lis r10,-32122
	ctx.r10.s64 = -2105147392;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r26,64
	ctx.r11.s64 = ctx.r26.s64 + 64;
	// addi r9,r10,2384
	ctx.r9.s64 = ctx.r10.s64 + 2384;
	// lvx128 v61,r0,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v60,v61,v63
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vcmpeqfp128. v59,v60,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v59.f32), 0xF);
	// mfocrf r8,2
	ctx.r8.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r7,r8,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824ab824
	if (!ctx.cr6.eq) goto loc_824AB824;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x824ab824
	if (ctx.cr6.eq) goto loc_824AB824;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r10,80
	ctx.r10.s64 = 80;
	// stfs f13,420(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lvx128 v63,r3,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v57,v63,v58
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v58.f32)));
	// stvx128 v57,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825832c8
	ctx.lr = 0x824AB7B0;
	sub_825832C8(ctx, base);
	// lwz r7,232(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lhz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x824ab808
	if (ctx.cr6.eq) goto loc_824AB808;
	// lwz r11,-2288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2288);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824ab808
	if (!ctx.cr6.eq) goto loc_824AB808;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ab808
	if (ctx.cr6.eq) goto loc_824AB808;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824AB808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824AB808:
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6dc8
	ctx.lr = 0x824AB818;
	sub_824A6DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a9130
	ctx.lr = 0x824AB820;
	sub_824A9130(ctx, base);
	// b 0x824ab82c
	goto loc_824AB82C;
loc_824AB824:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
loc_824AB82C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,404(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f31,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x824abbc8
	if (ctx.cr6.eq) goto loc_824ABBC8;
	// lbz r11,311(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 311);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824abbc0
	if (ctx.cr6.eq) goto loc_824ABBC0;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824abbc0
	if (!ctx.cr6.eq) goto loc_824ABBC0;
	// lbz r11,302(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 302);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r6,r25,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824abbc0
	if (!ctx.cr6.eq) goto loc_824ABBC0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a6278
	ctx.lr = 0x824AB894;
	sub_825A6278(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825a8020
	ctx.lr = 0x824AB8A8;
	sub_825A8020(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825a8020
	ctx.lr = 0x824AB8B8;
	sub_825A8020(ctx, base);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lis r9,-32122
	ctx.r9.s64 = -2105147392;
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r7,r9,2256
	ctx.r7.s64 = ctx.r9.s64 + 2256;
	// sth r28,222(r1)
	PPC_STORE_U16(ctx.r1.u32 + 222, ctx.r28.u16);
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lvx128 v55,r0,r11
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,-1
	ctx.r5.s64 = -1;
	// vsubfp128 v12,v55,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,3732(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3732);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// sth r5,220(r1)
	PPC_STORE_U16(ctx.r1.u32 + 220, ctx.r5.u16);
	// addi r24,r1,304
	ctx.r24.s64 = ctx.r1.s64 + 304;
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r28.u8);
	// sth r28,226(r1)
	PPC_STORE_U16(ctx.r1.u32 + 226, ctx.r28.u16);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r30,-32114
	ctx.r30.s64 = -2104623104;
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,-1
	ctx.r8.s64 = -1;
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// lvlx128 v56,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v56,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// vmaddfp v11,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r3,-23452(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23452);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r6,232(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stvx128 v11,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82574418
	ctx.lr = 0x824AB96C;
	sub_82574418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824abbc0
	if (ctx.cr6.eq) goto loc_824ABBC0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,-23452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23452);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x824ab9cc
	if (!ctx.cr6.eq) goto loc_824AB9CC;
	// lwz r11,-2288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2288);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r10,303(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 303);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82592fa8
	ctx.lr = 0x824AB9C8;
	sub_82592FA8(ctx, base);
	// b 0x824abac8
	goto loc_824ABAC8;
loc_824AB9CC:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x824aba38
	if (ctx.cr6.eq) goto loc_824ABA38;
	// lwz r10,-2288(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2288);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824aba38
	if (!ctx.cr6.eq) goto loc_824ABA38;
	// lwz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aba38
	if (ctx.cr6.eq) goto loc_824ABA38;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824aba24
	if (ctx.cr6.eq) goto loc_824ABA24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x824aba28
	if (!ctx.cr6.eq) goto loc_824ABA28;
loc_824ABA24:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_824ABA28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aba38
	if (ctx.cr6.eq) goto loc_824ABA38;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_824ABA38:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824aba80
	if (!ctx.cr6.eq) goto loc_824ABA80;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r6,r11,32232
	ctx.r6.s64 = ctx.r11.s64 + 32232;
	// addi r5,r10,24092
	ctx.r5.s64 = ctx.r10.s64 + 24092;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x824ABA60;
	sub_823DEDD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824aba80
	if (ctx.cr6.eq) goto loc_824ABA80;
	// bl 0x8248a510
	ctx.lr = 0x824ABA6C;
	sub_8248A510(ctx, base);
	// lbz r11,307(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 307);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824aba80
	if (ctx.cr6.eq) goto loc_824ABA80;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_824ABA80:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824aba9c
	if (!ctx.cr6.eq) goto loc_824ABA9C;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,-2288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2288);
	// lhz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// bl 0x8258d388
	ctx.lr = 0x824ABA9C;
	sub_8258D388(ctx, base);
loc_824ABA9C:
	// lwz r9,-2288(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2288);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,303(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 303);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lhz r8,226(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 226);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x82592fe8
	ctx.lr = 0x824ABAC8;
	sub_82592FE8(ctx, base);
loc_824ABAC8:
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824abbb0
	if (ctx.cr6.eq) goto loc_824ABBB0;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824abbb0
	if (ctx.cr6.eq) goto loc_824ABBB0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x825b6720
	ctx.lr = 0x824ABAEC;
	sub_825B6720(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x825b6720
	ctx.lr = 0x824ABAF8;
	sub_825B6720(ctx, base);
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f30,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x825a63c0
	ctx.lr = 0x824ABB10;
	sub_825A63C0(ctx, base);
	// fadds f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// lwz r8,380(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r6,28(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// beq cr6,0x824abb60
	if (ctx.cr6.eq) goto loc_824ABB60;
	// lwz r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824abb60
	if (ctx.cr6.eq) goto loc_824ABB60;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,-2288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2288);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r8,192(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82591fa0
	ctx.lr = 0x824ABB5C;
	sub_82591FA0(ctx, base);
	// b 0x824abbac
	goto loc_824ABBAC;
loc_824ABB60:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824abb84
	if (ctx.cr6.eq) goto loc_824ABB84;
	// lwz r8,-2288(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2288);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r7,192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x824abb98
	goto loc_824ABB98;
loc_824ABB84:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824abbb0
	if (ctx.cr6.eq) goto loc_824ABBB0;
	// lwz r11,-2288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2288);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_824ABB98:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82591e50
	ctx.lr = 0x824ABBAC;
	sub_82591E50(ctx, base);
loc_824ABBAC:
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
loc_824ABBB0:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a62c0
	ctx.lr = 0x824ABBC0;
	sub_825A62C0(ctx, base);
loc_824ABBC0:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248d7c8
	ctx.lr = 0x824ABBC8;
	sub_8248D7C8(ctx, base);
loc_824ABBC8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824abca4
	if (ctx.cr6.eq) goto loc_824ABCA4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x824abca4
	if (ctx.cr6.eq) goto loc_824ABCA4;
	// lbz r11,303(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 303);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824abca4
	if (ctx.cr6.eq) goto loc_824ABCA4;
	// lis r27,-32115
	ctx.r27.s64 = -2104688640;
loc_824ABBF4:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwzx r29,r11,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824abc90
	if (ctx.cr6.eq) goto loc_824ABC90;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824ABC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824abc48
	if (ctx.cr6.eq) goto loc_824ABC48;
	// lwz r10,212(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lhz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
loc_824ABC48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,29828(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29828);
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// bl 0x824a5b00
	ctx.lr = 0x824ABC58;
	sub_824A5B00(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8248e408
	ctx.lr = 0x824ABC60;
	sub_8248E408(ctx, base);
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// slw r9,r25,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824abc90
	if (!ctx.cr6.eq) goto loc_824ABC90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824a48f8
	ctx.lr = 0x824ABC90;
	sub_824A48F8(ctx, base);
loc_824ABC90:
	// lbz r11,303(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 303);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824abbf4
	if (ctx.cr6.lt) goto loc_824ABBF4;
loc_824ABCA4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824ABCB8"))) PPC_WEAK_FUNC(sub_824ABCB8);
PPC_FUNC_IMPL(__imp__sub_824ABCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824ABCC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x824abcf0
	if (ctx.cr6.eq) goto loc_824ABCF0;
	// stw r7,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r7.u32);
	// b 0x824abd6c
	goto loc_824ABD6C;
loc_824ABCF0:
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// li r7,48
	ctx.r7.s64 = 48;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r6,48
	ctx.r10.s64 = ctx.r6.s64 + 48;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r6,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r6,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lfs f0,56(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f13,100(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r5,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r5.u32);
	// bl 0x82489a28
	ctx.lr = 0x824ABD5C;
	sub_82489A28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261e658
	ctx.lr = 0x824ABD64;
	sub_8261E658(ctx, base);
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r3,136(r5)
	PPC_STORE_U32(ctx.r5.u32 + 136, ctx.r3.u32);
loc_824ABD6C:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824ABD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// lwz r7,232(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,19620(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19620);
	// lwz r8,752(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwz r5,80(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// rlwinm r4,r5,0,27,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r4,80(r7)
	PPC_STORE_U32(ctx.r7.u32 + 80, ctx.r4.u32);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8248a510
	ctx.lr = 0x824ABDB0;
	sub_8248A510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824abdd4
	if (ctx.cr6.eq) goto loc_824ABDD4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ab4a0
	ctx.lr = 0x824ABDCC;
	sub_824AB4A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_824ABDD4:
	// sth r30,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r30.u16);
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824ABDE4"))) PPC_WEAK_FUNC(sub_824ABDE4);
PPC_FUNC_IMPL(__imp__sub_824ABDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABDE8"))) PPC_WEAK_FUNC(sub_824ABDE8);
PPC_FUNC_IMPL(__imp__sub_824ABDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824ABDF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824ABE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824abe30
	if (ctx.cr6.eq) goto loc_824ABE30;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x824abe38
	goto loc_824ABE38;
loc_824ABE30:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_824ABE38:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r9,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r9.u8);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82477b78
	ctx.lr = 0x824ABE64;
	sub_82477B78(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824abe7c
	if (ctx.cr6.eq) goto loc_824ABE7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824ABE7C;
	sub_821D2A58(ctx, base);
loc_824ABE7C:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824ABE8C"))) PPC_WEAK_FUNC(sub_824ABE8C);
PPC_FUNC_IMPL(__imp__sub_824ABE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABE90"))) PPC_WEAK_FUNC(sub_824ABE90);
PPC_FUNC_IMPL(__imp__sub_824ABE90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824ABEA4"))) PPC_WEAK_FUNC(sub_824ABEA4);
PPC_FUNC_IMPL(__imp__sub_824ABEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABEA8"))) PPC_WEAK_FUNC(sub_824ABEA8);
PPC_FUNC_IMPL(__imp__sub_824ABEA8) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82130528
	ctx.lr = 0x824ABEBC;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824abef8
	if (ctx.cr6.eq) goto loc_824ABEF8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-11380
	ctx.r9.s64 = ctx.r10.s64 + -11380;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824ABEF8:
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

__attribute__((alias("__imp__sub_824ABF0C"))) PPC_WEAK_FUNC(sub_824ABF0C);
PPC_FUNC_IMPL(__imp__sub_824ABF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABF10"))) PPC_WEAK_FUNC(sub_824ABF10);
PPC_FUNC_IMPL(__imp__sub_824ABF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824ABF18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82130528
	ctx.lr = 0x824ABF28;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x824abf64
	if (ctx.cr6.eq) goto loc_824ABF64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r9,r10,-11100
	ctx.r9.s64 = ctx.r10.s64 + -11100;
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// b 0x824abf68
	goto loc_824ABF68;
loc_824ABF64:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_824ABF68:
	// lwz r29,8(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82477b78
	ctx.lr = 0x824ABF7C;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824abf94
	if (ctx.cr6.eq) goto loc_824ABF94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824ABF94;
	sub_821D2A58(ctx, base);
loc_824ABF94:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824ABFBC"))) PPC_WEAK_FUNC(sub_824ABFBC);
PPC_FUNC_IMPL(__imp__sub_824ABFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABFC0"))) PPC_WEAK_FUNC(sub_824ABFC0);
PPC_FUNC_IMPL(__imp__sub_824ABFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824ABFC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82130528
	ctx.lr = 0x824ABFD8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x824ac014
	if (ctx.cr6.eq) goto loc_824AC014;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r10,r11,-11172
	ctx.r10.s64 = ctx.r11.s64 + -11172;
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r9,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r9.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r30,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r30.u8);
	// stb r30,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r30.u8);
	// b 0x824ac018
	goto loc_824AC018;
loc_824AC014:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_824AC018:
	// lwz r29,8(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82477b78
	ctx.lr = 0x824AC02C;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ac044
	if (ctx.cr6.eq) goto loc_824AC044;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824AC044;
	sub_821D2A58(ctx, base);
loc_824AC044:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r8,32(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 32);
	// stb r8,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r8.u8);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824AC074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824ac090
	if (ctx.cr6.eq) goto loc_824AC090;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824AC090:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC0A0"))) PPC_WEAK_FUNC(sub_824AC0A0);
PPC_FUNC_IMPL(__imp__sub_824AC0A0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// beq cr6,0x824ac0fc
	if (ctx.cr6.eq) goto loc_824AC0FC;
	// bl 0x821c9ab0
	ctx.lr = 0x824AC0D0;
	sub_821C9AB0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,127
	ctx.r10.s64 = 127;
loc_824AC0D8:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824ac0f8
	if (ctx.cr6.eq) goto loc_824AC0F8;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bgt 0x824ac0d8
	if (ctx.cr0.gt) goto loc_824AC0D8;
loc_824AC0F8:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
loc_824AC0FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5968
	ctx.r4.s64 = ctx.r11.s64 + -5968;
	// bl 0x823d90b0
	ctx.lr = 0x824AC10C;
	sub_823D90B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ac144
	if (ctx.cr6.eq) goto loc_824AC144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824AC11C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824ac11c
	if (!ctx.cr6.eq) goto loc_824AC11C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r31,-4(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4, ctx.r31.u8);
loc_824AC144:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82477b78
	ctx.lr = 0x824AC150;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ac168
	if (ctx.cr6.eq) goto loc_824AC168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824AC168;
	sub_821D2A58(ctx, base);
loc_824AC168:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_824AC180"))) PPC_WEAK_FUNC(sub_824AC180);
PPC_FUNC_IMPL(__imp__sub_824AC180) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824ac2a0
	if (ctx.cr6.eq) goto loc_824AC2A0;
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824AC1B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r31,r11,9572
	ctx.r31.s64 = ctx.r11.s64 + 9572;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x824AC1D4;
	sub_82137A08(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,4648
	ctx.r4.s64 = ctx.r9.s64 + 4648;
	// bl 0x823d90b0
	ctx.lr = 0x824AC1E4;
	sub_823D90B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ac214
	if (ctx.cr6.eq) goto loc_824AC214;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824AC200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r3,6
	ctx.r6.s64 = ctx.r3.s64 + 6;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x824AC214;
	sub_82137A08(ctx, base);
loc_824AC214:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5968
	ctx.r4.s64 = ctx.r11.s64 + -5968;
	// bl 0x823d90b0
	ctx.lr = 0x824AC224;
	sub_823D90B0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ac260
	if (ctx.cr6.eq) goto loc_824AC260;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824AC238:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824ac238
	if (!ctx.cr6.eq) goto loc_824AC238;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,-4(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4, ctx.r9.u8);
loc_824AC260:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,-25360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25360);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ac278
	if (!ctx.cr6.eq) goto loc_824AC278;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_824AC278:
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82477b78
	ctx.lr = 0x824AC288;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ac2a0
	if (ctx.cr6.eq) goto loc_824AC2A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824AC2A0;
	sub_821D2A58(ctx, base);
loc_824AC2A0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_824AC2B8"))) PPC_WEAK_FUNC(sub_824AC2B8);
PPC_FUNC_IMPL(__imp__sub_824AC2B8) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-4916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4916);
	// bl 0x8247fbb8
	ctx.lr = 0x824AC2E8;
	sub_8247FBB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824AC2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_824AC314"))) PPC_WEAK_FUNC(sub_824AC314);
PPC_FUNC_IMPL(__imp__sub_824AC314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC318"))) PPC_WEAK_FUNC(sub_824AC318);
PPC_FUNC_IMPL(__imp__sub_824AC318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824AC320;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82130528
	ctx.lr = 0x824AC330;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x824ac374
	if (ctx.cr6.eq) goto loc_824AC374;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r10,r11,-10740
	ctx.r10.s64 = ctx.r11.s64 + -10740;
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stb r9,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r9.u8);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stb r8,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r8.u8);
	// b 0x824ac378
	goto loc_824AC378;
loc_824AC374:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_824AC378:
	// lwz r29,8(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82477b78
	ctx.lr = 0x824AC38C;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ac3a4
	if (ctx.cr6.eq) goto loc_824AC3A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824AC3A4;
	sub_821D2A58(ctx, base);
loc_824AC3A4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r4,36(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// bl 0x821d2a58
	ctx.lr = 0x824AC3B8;
	sub_821D2A58(ctx, base);
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,28
	ctx.r8.s64 = 28;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824AC3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824ac3fc
	if (ctx.cr6.eq) goto loc_824AC3FC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824AC3FC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC40C"))) PPC_WEAK_FUNC(sub_824AC40C);
PPC_FUNC_IMPL(__imp__sub_824AC40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC410"))) PPC_WEAK_FUNC(sub_824AC410);
PPC_FUNC_IMPL(__imp__sub_824AC410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824AC418;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82130528
	ctx.lr = 0x824AC428;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq cr6,0x824ac470
	if (ctx.cr6.eq) goto loc_824AC470;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r28.u8);
	// addi r9,r10,-11028
	ctx.r9.s64 = ctx.r10.s64 + -11028;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r7,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r7.u8);
	// b 0x824ac474
	goto loc_824AC474;
loc_824AC470:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_824AC474:
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82477b78
	ctx.lr = 0x824AC488;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ac4a0
	if (ctx.cr6.eq) goto loc_824AC4A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824AC4A0;
	sub_821D2A58(ctx, base);
loc_824AC4A0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stb r28,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r28.u8);
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824AC4D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824ac4ec
	if (ctx.cr6.eq) goto loc_824AC4EC;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824AC4EC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC4FC"))) PPC_WEAK_FUNC(sub_824AC4FC);
PPC_FUNC_IMPL(__imp__sub_824AC4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC500"))) PPC_WEAK_FUNC(sub_824AC500);
PPC_FUNC_IMPL(__imp__sub_824AC500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824AC508;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82130528
	ctx.lr = 0x824AC518;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq cr6,0x824ac564
	if (ctx.cr6.eq) goto loc_824AC564;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// addi r9,r11,-10956
	ctx.r9.s64 = ctx.r11.s64 + -10956;
	// stb r27,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r27.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r7,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r7.u8);
	// b 0x824ac568
	goto loc_824AC568;
loc_824AC564:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_824AC568:
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82477b78
	ctx.lr = 0x824AC57C;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ac594
	if (ctx.cr6.eq) goto loc_824AC594;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824AC594;
	sub_821D2A58(ctx, base);
loc_824AC594:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stb r27,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r27.u8);
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824AC5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824ac5e8
	if (ctx.cr6.eq) goto loc_824AC5E8;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824AC5E8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC5F8"))) PPC_WEAK_FUNC(sub_824AC5F8);
PPC_FUNC_IMPL(__imp__sub_824AC5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824AC600;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82130528
	ctx.lr = 0x824AC610;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq cr6,0x824ac660
	if (ctx.cr6.eq) goto loc_824AC660;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// addi r9,r11,-10884
	ctx.r9.s64 = ctx.r11.s64 + -10884;
	// stb r27,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r27.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r7,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r7.u8);
	// b 0x824ac664
	goto loc_824AC664;
loc_824AC660:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_824AC664:
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82477b78
	ctx.lr = 0x824AC678;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ac690
	if (ctx.cr6.eq) goto loc_824AC690;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824AC690;
	sub_821D2A58(ctx, base);
loc_824AC690:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lvx128 v63,r28,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r27,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r27.u8);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824AC6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824ac6e0
	if (ctx.cr6.eq) goto loc_824AC6E0;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824AC6E0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC6F0"))) PPC_WEAK_FUNC(sub_824AC6F0);
PPC_FUNC_IMPL(__imp__sub_824AC6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x824AC6F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82130528
	ctx.lr = 0x824AC708;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq cr6,0x824ac75c
	if (ctx.cr6.eq) goto loc_824AC75C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// addi r9,r11,-10812
	ctx.r9.s64 = ctx.r11.s64 + -10812;
	// stb r27,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r27.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r7,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r7.u8);
	// b 0x824ac760
	goto loc_824AC760;
loc_824AC75C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_824AC760:
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82477b78
	ctx.lr = 0x824AC774;
	sub_82477B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ac78c
	if (ctx.cr6.eq) goto loc_824AC78C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d2a58
	ctx.lr = 0x824AC78C;
	sub_821D2A58(ctx, base);
loc_824AC78C:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lvx128 v63,r28,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r27,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r27.u8);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824AC7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824ac7dc
	if (ctx.cr6.eq) goto loc_824AC7DC;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_824AC7DC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC7EC"))) PPC_WEAK_FUNC(sub_824AC7EC);
PPC_FUNC_IMPL(__imp__sub_824AC7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC7F0"))) PPC_WEAK_FUNC(sub_824AC7F0);
PPC_FUNC_IMPL(__imp__sub_824AC7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x824AC7F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,4660
	ctx.r9.s64 = ctx.r10.s64 + 4660;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// bl 0x82495cf0
	ctx.lr = 0x824AC830;
	sub_82495CF0(ctx, base);
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r7,28
	ctx.r7.s64 = 28;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// li r6,7
	ctx.r6.s64 = 7;
	// stb r6,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r6.u8);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,68(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824AC858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824ac86c
	if (!ctx.cr6.eq) goto loc_824AC86C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82496ed8
	ctx.lr = 0x824AC86C;
	sub_82496ED8(ctx, base);
loc_824AC86C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AC878"))) PPC_WEAK_FUNC(sub_824AC878);
PPC_FUNC_IMPL(__imp__sub_824AC878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,4728
	ctx.r3.s64 = ctx.r11.s64 + 4728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AC884"))) PPC_WEAK_FUNC(sub_824AC884);
PPC_FUNC_IMPL(__imp__sub_824AC884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AC888"))) PPC_WEAK_FUNC(sub_824AC888);
PPC_FUNC_IMPL(__imp__sub_824AC888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r3,20856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20856);
	// blr 
	return;
}

