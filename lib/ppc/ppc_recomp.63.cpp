#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8238FAA8"))) PPC_WEAK_FUNC(sub_8238FAA8);
PPC_FUNC_IMPL(__imp__sub_8238FAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8238FAB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r31,r11,30576
	ctx.r31.s64 = ctx.r11.s64 + 30576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,-2696
	ctx.r4.s64 = ctx.r10.s64 + -2696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ca540
	ctx.lr = 0x8238FAD0;
	sub_821CA540(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r5,r9,-6232
	ctx.r5.s64 = ctx.r9.s64 + -6232;
	// addi r4,r8,-2712
	ctx.r4.s64 = ctx.r8.s64 + -2712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821ca6a8
	ctx.lr = 0x8238FAF0;
	sub_821CA6A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8238fb10
	if (!ctx.cr6.eq) goto loc_8238FB10;
	// bl 0x821c9a90
	ctx.lr = 0x8238FB04;
	sub_821C9A90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8238FB10:
	// bl 0x821c9a90
	ctx.lr = 0x8238FB14;
	sub_821C9A90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-29924
	ctx.r9.s64 = ctx.r11.s64 + -29924;
	// stw r10,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r10.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,4416(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4416);
	// bl 0x821cf7b8
	ctx.lr = 0x8238FB3C;
	sub_821CF7B8(ctx, base);
loc_8238FB3C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821cffe8
	ctx.lr = 0x8238FB54;
	sub_821CFFE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238fb3c
	if (ctx.cr6.eq) goto loc_8238FB3C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8238fbbc
	if (ctx.cr6.eq) goto loc_8238FBBC;
	// addi r10,r30,8109
	ctx.r10.s64 = ctx.r30.s64 + 8109;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8238FB6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8238fb90
	if (ctx.cr6.eq) goto loc_8238FB90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8238fb6c
	if (ctx.cr6.eq) goto loc_8238FB6C;
loc_8238FB90:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8238fb3c
	if (!ctx.cr6.eq) goto loc_8238FB3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d0490
	ctx.lr = 0x8238FBA4;
	sub_821D0490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821be610
	ctx.lr = 0x8238FBB0;
	sub_821BE610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8238FBBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821be610
	ctx.lr = 0x8238FBC4;
	sub_821BE610(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238FBD0"))) PPC_WEAK_FUNC(sub_8238FBD0);
PPC_FUNC_IMPL(__imp__sub_8238FBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8238FBD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821bbea8
	ctx.lr = 0x8238FBF0;
	sub_821BBEA8(ctx, base);
	// li r3,5728
	ctx.r3.s64 = 5728;
	// bl 0x82130528
	ctx.lr = 0x8238FBF8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238fc10
	if (ctx.cr6.eq) goto loc_8238FC10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824df990
	ctx.lr = 0x8238FC08;
	sub_824DF990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8238fc14
	goto loc_8238FC14;
loc_8238FC10:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238FC14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f4a8
	ctx.lr = 0x8238FC20;
	sub_8238F4A8(ctx, base);
	// bl 0x821bbf00
	ctx.lr = 0x8238FC24;
	sub_821BBF00(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ca8c8
	ctx.lr = 0x8238FC34;
	sub_821CA8C8(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r28,r11,30576
	ctx.r28.s64 = ctx.r11.s64 + 30576;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ca540
	ctx.lr = 0x8238FC48;
	sub_821CA540(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r10,5724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5724, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0288
	ctx.lr = 0x8238FC60;
	sub_824E0288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c9a90
	ctx.lr = 0x8238FC6C;
	sub_821C9A90(ctx, base);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r8,8092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8092, ctx.r8.u32);
	// bl 0x821c9790
	ctx.lr = 0x8238FC84;
	sub_821C9790(ctx, base);
	// stw r3,8104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8104, ctx.r3.u32);
	// bl 0x821bbea8
	ctx.lr = 0x8238FC8C;
	sub_821BBEA8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238FCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821bbf00
	ctx.lr = 0x8238FCA8;
	sub_821BBF00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238FCB4"))) PPC_WEAK_FUNC(sub_8238FCB4);
PPC_FUNC_IMPL(__imp__sub_8238FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238FCB8"))) PPC_WEAK_FUNC(sub_8238FCB8);
PPC_FUNC_IMPL(__imp__sub_8238FCB8) {
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
	// li r3,8176
	ctx.r3.s64 = 8176;
	// bl 0x82130528
	ctx.lr = 0x8238FCD8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238fcec
	if (ctx.cr6.eq) goto loc_8238FCEC;
	// bl 0x8238f550
	ctx.lr = 0x8238FCE4;
	sub_8238F550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8238fcf0
	goto loc_8238FCF0;
loc_8238FCEC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238FCF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238fd1c
	if (ctx.cr6.eq) goto loc_8238FD1C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fd1c
	if (ctx.cr6.eq) goto loc_8238FD1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9572
	ctx.r5.s64 = ctx.r11.s64 + 9572;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,8109
	ctx.r3.s64 = ctx.r31.s64 + 8109;
	// bl 0x82137a08
	ctx.lr = 0x8238FD1C;
	sub_82137A08(ctx, base);
loc_8238FD1C:
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

__attribute__((alias("__imp__sub_8238FD38"))) PPC_WEAK_FUNC(sub_8238FD38);
PPC_FUNC_IMPL(__imp__sub_8238FD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8238FD40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,8109
	ctx.r28.s64 = ctx.r31.s64 + 8109;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8100);
	// lwz r29,8088(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8088);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r27,r9,1
	ctx.r27.u64 = ctx.r9.u64 ^ 1;
	// bl 0x82396408
	ctx.lr = 0x8238FD6C;
	sub_82396408(ctx, base);
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// lwz r11,-12120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12120);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// bl 0x82396408
	ctx.lr = 0x8238FD84;
	sub_82396408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8238fd90
	if (ctx.cr6.lt) goto loc_8238FD90;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8238FD90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82398170
	ctx.lr = 0x8238FD9C;
	sub_82398170(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fe80
	if (ctx.cr6.eq) goto loc_8238FE80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823955c8
	ctx.lr = 0x8238FDB4;
	sub_823955C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fe80
	if (ctx.cr6.eq) goto loc_8238FE80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8080
	ctx.r3.s64 = ctx.r31.s64 + 8080;
	// bl 0x8239e318
	ctx.lr = 0x8238FDCC;
	sub_8239E318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fe80
	if (ctx.cr6.eq) goto loc_8238FE80;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b338
	ctx.lr = 0x8238FDE8;
	sub_8226B338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fe80
	if (ctx.cr6.eq) goto loc_8238FE80;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,8092
	ctx.r4.s64 = ctx.r31.s64 + 8092;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299788
	ctx.lr = 0x8238FE04;
	sub_82299788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fe80
	if (ctx.cr6.eq) goto loc_8238FE80;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,8096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8096);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b338
	ctx.lr = 0x8238FE20;
	sub_8226B338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fe80
	if (ctx.cr6.eq) goto loc_8238FE80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82618f70
	ctx.lr = 0x8238FE38;
	sub_82618F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fe80
	if (ctx.cr6.eq) goto loc_8238FE80;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82619080
	ctx.lr = 0x8238FE54;
	sub_82619080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fe80
	if (ctx.cr6.eq) goto loc_8238FE80;
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r31,8141
	ctx.r4.s64 = ctx.r31.s64 + 8141;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82619080
	ctx.lr = 0x8238FE70;
	sub_82619080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8238fe84
	if (!ctx.cr6.eq) goto loc_8238FE84;
loc_8238FE80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238FE84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238FE90"))) PPC_WEAK_FUNC(sub_8238FE90);
PPC_FUNC_IMPL(__imp__sub_8238FE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x8238FE98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r29,8109
	ctx.r31.s64 = ctx.r29.s64 + 8109;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396408
	ctx.lr = 0x8238FEB4;
	sub_82396408(ctx, base);
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// lwz r11,-12120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12120);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r26,r29,8141
	ctx.r26.s64 = ctx.r29.s64 + 8141;
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8238f6b0
	ctx.lr = 0x8238FED4;
	sub_8238F6B0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r3,65
	ctx.r4.s64 = ctx.r3.s64 + 65;
	// addi r3,r10,-2680
	ctx.r3.s64 = ctx.r10.s64 + -2680;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x82130000
	ctx.lr = 0x8238FEEC;
	sub_82130000(ctx, base);
	// lwz r9,8100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8238ff04
	if (!ctx.cr6.eq) goto loc_8238FF04;
loc_8238FEF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8238FF04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396408
	ctx.lr = 0x8238FF0C;
	sub_82396408(ctx, base);
	// lwz r11,-12120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12120);
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823961a0
	ctx.lr = 0x8238FF20;
	sub_823961A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fef8
	if (ctx.cr6.eq) goto loc_8238FEF8;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x8238ff64
	if (!ctx.cr6.eq) goto loc_8238FF64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396408
	ctx.lr = 0x8238FF3C;
	sub_82396408(ctx, base);
	// lwz r11,-12120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12120);
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823964a8
	ctx.lr = 0x8238FF4C;
	sub_823964A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238ffa4
	if (!ctx.cr6.eq) goto loc_8238FFA4;
loc_8238FF58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8238FF64:
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// bne cr6,0x8238ff9c
	if (!ctx.cr6.eq) goto loc_8238FF9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396408
	ctx.lr = 0x8238FF74;
	sub_82396408(ctx, base);
	// lwz r11,-12120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12120);
	// mulli r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 * 104;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823964a8
	ctx.lr = 0x8238FF84;
	sub_823964A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ffa4
	if (ctx.cr6.eq) goto loc_8238FFA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8238FF9C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8238ff58
	if (ctx.cr6.lt) goto loc_8238FF58;
loc_8238FFA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238f6b0
	ctx.lr = 0x8238FFAC;
	sub_8238F6B0(ctx, base);
	// subfic r11,r27,3
	ctx.xer.ca = ctx.r27.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r27.s64;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238FFC4"))) PPC_WEAK_FUNC(sub_8238FFC4);
PPC_FUNC_IMPL(__imp__sub_8238FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238FFC8"))) PPC_WEAK_FUNC(sub_8238FFC8);
PPC_FUNC_IMPL(__imp__sub_8238FFC8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-10208
	ctx.r9.s64 = ctx.r11.s64 + -10208;
	// addi r11,r31,30
	ctx.r11.s64 = ctx.r31.s64 + 30;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
	// stb r30,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r30.u8);
	// stb r30,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r30.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stb r30,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r30.u8);
	// stb r30,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r30.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// stb r30,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r30.u8);
	// stb r30,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r30.u8);
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stb r30,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r30.u8);
	// stb r30,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r30.u8);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// stb r30,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r30.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82390050:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82390050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82390050;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8239006C:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8239006c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239006C;
	// stb r30,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r30.u8);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r30.u8);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x823d9890
	ctx.lr = 0x82390090;
	sub_823D9890(ctx, base);
	// stb r30,71(r31)
	PPC_STORE_U8(ctx.r31.u32 + 71, ctx.r30.u8);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// addi r11,r31,73
	ctx.r11.s64 = ctx.r31.s64 + 73;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823900A8:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823900a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823900A8;
	// stb r30,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r30.u8);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stb r30,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_823900E0"))) PPC_WEAK_FUNC(sub_823900E0);
PPC_FUNC_IMPL(__imp__sub_823900E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x823900E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8238f838
	ctx.lr = 0x823900FC;
	sub_8238F838(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823901b4
	if (!ctx.cr6.gt) goto loc_823901B4;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823901b4
	if (!ctx.cr6.lt) goto loc_823901B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f0b0
	ctx.lr = 0x82390114;
	sub_8238F0B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823901b4
	if (ctx.cr6.eq) goto loc_823901B4;
	// clrlwi r10,r31,29
	ctx.r10.u64 = ctx.r31.u32 & 0x7;
	// srawi r11,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823901b4
	if (!ctx.cr6.eq) goto loc_823901B4;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lhz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,52684
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52684, ctx.xer);
	// bne cr6,0x82390178
	if (!ctx.cr6.eq) goto loc_82390178;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,52684
	ctx.r11.u64 = ctx.r11.u64 | 52684;
	// sth r11,82(r30)
	PPC_STORE_U16(ctx.r30.u32 + 82, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82390178:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823901a0
	if (!ctx.cr6.lt) goto loc_823901A0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,82(r30)
	PPC_STORE_U16(ctx.r30.u32 + 82, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_823901A0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,82(r30)
	PPC_STORE_U16(ctx.r30.u32 + 82, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_823901B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823901C0"))) PPC_WEAK_FUNC(sub_823901C0);
PPC_FUNC_IMPL(__imp__sub_823901C0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8238f838
	ctx.lr = 0x823901DC;
	sub_8238F838(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x823901fc
	if (ctx.cr6.gt) goto loc_823901FC;
loc_823901E4:
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
loc_823901FC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8238f0b0
	ctx.lr = 0x82390204;
	sub_8238F0B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823901e4
	if (ctx.cr6.eq) goto loc_823901E4;
	// srawi r11,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// clrlwi r10,r31,29
	ctx.r10.u64 = ctx.r31.u32 & 0x7;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82390244"))) PPC_WEAK_FUNC(sub_82390244);
PPC_FUNC_IMPL(__imp__sub_82390244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390248"))) PPC_WEAK_FUNC(sub_82390248);
PPC_FUNC_IMPL(__imp__sub_82390248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82390250;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821c9788
	ctx.lr = 0x82390278;
	sub_821C9788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821ce460
	ctx.lr = 0x82390288;
	sub_821CE460(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r30,8109
	ctx.r3.s64 = ctx.r30.s64 + 8109;
	// addi r11,r10,-3100
	ctx.r11.s64 = ctx.r10.s64 + -3100;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823902A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823902a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823902A0;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,8141(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8141, ctx.r29.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r9,8108(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8108, ctx.r9.u8);
	// stw r29,8104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8104, ctx.r29.u32);
	// lis r11,23772
	ctx.r11.s64 = 1557921792;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r31,r11,64167
	ctx.r31.u64 = ctx.r11.u64 | 64167;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r8,-12120
	ctx.r6.s64 = ctx.r8.s64 + -12120;
	// stw r29,8100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8100, ctx.r29.u32);
	// mulld r10,r10,r31
	ctx.r10.s64 = ctx.r10.s64 * ctx.r31.s64;
	// stw r29,8096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8096, ctx.r29.u32);
	// stw r9,8088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8088, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// clrlwi r7,r11,1
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rldicl r6,r11,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// lwz r11,-12120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12120);
	// addi r5,r4,9572
	ctx.r5.s64 = ctx.r4.s64 + 9572;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// divw r6,r7,r9
	ctx.r6.s32 = ctx.r7.s32 / ctx.r9.s32;
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mulli r6,r8,104
	ctx.r6.s64 = ctx.r8.s64 * 104;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// li r4,32
	ctx.r4.s64 = 32;
	// andc r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// twllei r9,0
	// twlgei r11,-1
	// bl 0x82137a08
	ctx.lr = 0x82390344;
	sub_82137A08(ctx, base);
	// lis r11,12483
	ctx.r11.s64 = 818085888;
	// addi r28,r30,64
	ctx.r28.s64 = ctx.r30.s64 + 64;
	// ori r30,r11,3121
	ctx.r30.u64 = ctx.r11.u64 | 3121;
loc_82390350:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mulld r10,r9,r31
	ctx.r10.s64 = ctx.r9.s64 * ctx.r31.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r7,r11,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// clrlwi r6,r11,1
	ctx.r6.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mulhw r5,r6,r30
	ctx.r5.s64 = (int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32)) >> 32;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r11,42
	ctx.r10.s64 = ctx.r11.s64 * 42;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// bl 0x823924b0
	ctx.lr = 0x82390394;
	sub_823924B0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x82390350
	if (!ctx.cr6.eq) goto loc_82390350;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mulld r10,r7,r31
	ctx.r10.s64 = ctx.r7.s64 * ctx.r31.s64;
	// lfs f31,14348(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14348);
	ctx.f31.f64 = double(temp.f32);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// mulld r9,r6,r31
	ctx.r9.s64 = ctx.r6.s64 * ctx.r31.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r5,r11,9
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFF;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rldicl r11,r10,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// mulld r9,r4,r31
	ctx.r9.s64 = ctx.r4.s64 * ctx.r31.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// clrlwi r7,r11,9
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r5,r10,9
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFFFF;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// rldicl r11,r11,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8261e2b8
	ctx.lr = 0x82390448;
	sub_8261E2B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8261e440
	ctx.lr = 0x82390450;
	sub_8261E440(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x82390468
	if (ctx.cr6.eq) goto loc_82390468;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8261e4f8
	ctx.lr = 0x82390468;
	sub_8261E4F8(ctx, base);
loc_82390468:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82391ff8
	ctx.lr = 0x82390480;
	sub_82391FF8(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mulld r10,r9,r31
	ctx.r10.s64 = ctx.r9.s64 * ctx.r31.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// mulld r9,r8,r31
	ctx.r9.s64 = ctx.r8.s64 * ctx.r31.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r5,r11,9
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFF;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rldicl r11,r10,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// mulld r9,r6,r31
	ctx.r9.s64 = ctx.r6.s64 * ctx.r31.s64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// clrlwi r7,r10,9
	ctx.r7.u64 = ctx.r10.u32 & 0x7FFFFF;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rldicl r5,r11,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8261e2b8
	ctx.lr = 0x82390518;
	sub_8261E2B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8261e440
	ctx.lr = 0x82390520;
	sub_8261E440(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x82390530
	if (ctx.cr6.eq) goto loc_82390530;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8261e4f8
	ctx.lr = 0x82390530;
	sub_8261E4F8(ctx, base);
loc_82390530:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82391ff8
	ctx.lr = 0x82390548;
	sub_82391FF8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82390558"))) PPC_WEAK_FUNC(sub_82390558);
PPC_FUNC_IMPL(__imp__sub_82390558) {
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
	// bl 0x8238faa8
	ctx.lr = 0x82390574;
	sub_8238FAA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82390584
	if (!ctx.cr6.lt) goto loc_82390584;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82390584:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82391e00
	ctx.lr = 0x82390590;
	sub_82391E00(ctx, base);
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

__attribute__((alias("__imp__sub_823905AC"))) PPC_WEAK_FUNC(sub_823905AC);
PPC_FUNC_IMPL(__imp__sub_823905AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823905B0"))) PPC_WEAK_FUNC(sub_823905B0);
PPC_FUNC_IMPL(__imp__sub_823905B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823905D4"))) PPC_WEAK_FUNC(sub_823905D4);
PPC_FUNC_IMPL(__imp__sub_823905D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823905D8"))) PPC_WEAK_FUNC(sub_823905D8);
PPC_FUNC_IMPL(__imp__sub_823905D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8238ee58
	sub_8238EE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823905E8"))) PPC_WEAK_FUNC(sub_823905E8);
PPC_FUNC_IMPL(__imp__sub_823905E8) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239062c
	if (ctx.cr6.eq) goto loc_8239062C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8109
	ctx.r11.s64 = ctx.r11.s64 + 8109;
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
loc_8239062C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-2968
	ctx.r3.s64 = ctx.r11.s64 + -2968;
	// bl 0x82130000
	ctx.lr = 0x82390638;
	sub_82130000(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,-2996
	ctx.r8.s64 = ctx.r9.s64 + -2996;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8239065C"))) PPC_WEAK_FUNC(sub_8239065C);
PPC_FUNC_IMPL(__imp__sub_8239065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390660"))) PPC_WEAK_FUNC(sub_82390660);
PPC_FUNC_IMPL(__imp__sub_82390660) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823906a4
	if (ctx.cr6.eq) goto loc_823906A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8141
	ctx.r11.s64 = ctx.r11.s64 + 8141;
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
loc_823906A4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-2872
	ctx.r3.s64 = ctx.r11.s64 + -2872;
	// bl 0x82130000
	ctx.lr = 0x823906B0;
	sub_82130000(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,-2996
	ctx.r8.s64 = ctx.r9.s64 + -2996;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_823906D4"))) PPC_WEAK_FUNC(sub_823906D4);
PPC_FUNC_IMPL(__imp__sub_823906D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823906D8"))) PPC_WEAK_FUNC(sub_823906D8);
PPC_FUNC_IMPL(__imp__sub_823906D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x823906E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// bl 0x824e9038
	ctx.lr = 0x82390704;
	sub_824E9038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82388628
	ctx.lr = 0x82390714;
	sub_82388628(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82390758
	if (ctx.cr6.lt) goto loc_82390758;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e9690
	ctx.lr = 0x82390730;
	sub_824E9690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390758
	if (ctx.cr6.eq) goto loc_82390758;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8238fe90
	ctx.lr = 0x82390750;
	sub_8238FE90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82390758:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82390764"))) PPC_WEAK_FUNC(sub_82390764);
PPC_FUNC_IMPL(__imp__sub_82390764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390768"))) PPC_WEAK_FUNC(sub_82390768);
PPC_FUNC_IMPL(__imp__sub_82390768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82390770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-12040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12040);
	// lbz r10,2116(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2116);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239079c
	if (ctx.cr6.lt) goto loc_8239079C;
	// bl 0x8238f9d0
	ctx.lr = 0x82390798;
	sub_8238F9D0(ctx, base);
	// lwz r11,-12040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12040);
loc_8239079C:
	// lbz r10,2118(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2118);
	// lhz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823907d4
	if (ctx.cr6.lt) goto loc_823907D4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823907cc
	if (ctx.cr6.eq) goto loc_823907CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82391e00
	ctx.lr = 0x823907C4;
	sub_82391E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_823907CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82390558
	ctx.lr = 0x823907D4;
	sub_82390558(ctx, base);
loc_823907D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823907DC"))) PPC_WEAK_FUNC(sub_823907DC);
PPC_FUNC_IMPL(__imp__sub_823907DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823907E0"))) PPC_WEAK_FUNC(sub_823907E0);
PPC_FUNC_IMPL(__imp__sub_823907E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x823907E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r11,30576
	ctx.r29.s64 = ctx.r11.s64 + 30576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r10,-2640
	ctx.r4.s64 = ctx.r10.s64 + -2640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ca540
	ctx.lr = 0x8239080C;
	sub_821CA540(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r9,-2644
	ctx.r5.s64 = ctx.r9.s64 + -2644;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821ca6a8
	ctx.lr = 0x82390828;
	sub_821CA6A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c9a90
	ctx.lr = 0x82390834;
	sub_821C9A90(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82390848
	if (!ctx.cr6.eq) goto loc_82390848;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82390848:
	// li r5,8176
	ctx.r5.s64 = 8176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821be250
	ctx.lr = 0x82390858;
	sub_821BE250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821be610
	ctx.lr = 0x82390860;
	sub_821BE610(ctx, base);
	// lwz r29,0(r13)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r31,-32112
	ctx.r31.s64 = -2104492032;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r28,60
	ctx.r28.s64 = 60;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// lwzx r8,r28,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stwx r10,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r11,23572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23572);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,23572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23572, ctx.r11.u32);
	// beq cr6,0x823908e0
	if (ctx.cr6.eq) goto loc_823908E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-3116
	ctx.r9.s64 = ctx.r11.s64 + -3116;
	// addi r8,r10,-3140
	ctx.r8.s64 = ctx.r10.s64 + -3140;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82392930
	ctx.lr = 0x823908D0;
	sub_82392930(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r7,-3164
	ctx.r6.s64 = ctx.r7.s64 + -3164;
	// stw r6,8080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8080, ctx.r6.u32);
	// lwz r11,23572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23572);
loc_823908E0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,23572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23572, ctx.r11.u32);
	// stwx r10,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823908FC"))) PPC_WEAK_FUNC(sub_823908FC);
PPC_FUNC_IMPL(__imp__sub_823908FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390900"))) PPC_WEAK_FUNC(sub_82390900);
PPC_FUNC_IMPL(__imp__sub_82390900) {
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
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8238fcb8
	ctx.lr = 0x82390920;
	sub_8238FCB8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8239093C"))) PPC_WEAK_FUNC(sub_8239093C);
PPC_FUNC_IMPL(__imp__sub_8239093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390940"))) PPC_WEAK_FUNC(sub_82390940);
PPC_FUNC_IMPL(__imp__sub_82390940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82390948;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82398278
	ctx.lr = 0x8239096C;
	sub_82398278(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82390a5c
	if (ctx.cr6.eq) goto loc_82390A5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82395a50
	ctx.lr = 0x82390984;
	sub_82395A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390a5c
	if (ctx.cr6.eq) goto loc_82390A5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8080
	ctx.r3.s64 = ctx.r30.s64 + 8080;
	// bl 0x8239e330
	ctx.lr = 0x8239099C;
	sub_8239E330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390a5c
	if (ctx.cr6.eq) goto loc_82390A5C;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275750
	ctx.lr = 0x823909B8;
	sub_82275750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390a58
	if (ctx.cr6.eq) goto loc_82390A58;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,8092
	ctx.r4.s64 = ctx.r30.s64 + 8092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257568
	ctx.lr = 0x823909D4;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390a58
	if (ctx.cr6.eq) goto loc_82390A58;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,8096
	ctx.r4.s64 = ctx.r30.s64 + 8096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275750
	ctx.lr = 0x823909F0;
	sub_82275750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390a58
	if (ctx.cr6.eq) goto loc_82390A58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f10
	ctx.lr = 0x82390A08;
	sub_82618F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390a58
	if (ctx.cr6.eq) goto loc_82390A58;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,8109
	ctx.r4.s64 = ctx.r30.s64 + 8109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618fa0
	ctx.lr = 0x82390A24;
	sub_82618FA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390a58
	if (ctx.cr6.eq) goto loc_82390A58;
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r30,8141
	ctx.r4.s64 = ctx.r30.s64 + 8141;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618fa0
	ctx.lr = 0x82390A40;
	sub_82618FA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390a58
	if (ctx.cr6.eq) goto loc_82390A58;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82390a60
	goto loc_82390A60;
loc_82390A58:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82390A5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82390A60:
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r31,r30,8109
	ctx.r31.s64 = ctx.r30.s64 + 8109;
	// addi r3,r9,-2560
	ctx.r3.s64 = ctx.r9.s64 + -2560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// stw r8,8100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8100, ctx.r8.u32);
	// bl 0x82130000
	ctx.lr = 0x82390A80;
	sub_82130000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396408
	ctx.lr = 0x82390A88;
	sub_82396408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82390af0
	if (!ctx.cr6.lt) goto loc_82390AF0;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,-12120
	ctx.r11.s64 = ctx.r11.s64 + -12120;
	// blt cr6,0x82390ac4
	if (ctx.cr6.lt) goto loc_82390AC4;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82390ac4
	if (!ctx.cr6.lt) goto loc_82390AC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r29,104
	ctx.r10.s64 = ctx.r29.s64 * 104;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r9,9572
	ctx.r5.s64 = ctx.r9.s64 + 9572;
	// b 0x82390ad4
	goto loc_82390AD4;
loc_82390AC4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r10,9572
	ctx.r5.s64 = ctx.r10.s64 + 9572;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82390AD4:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82137a08
	ctx.lr = 0x82390AE0;
	sub_82137A08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-2612
	ctx.r3.s64 = ctx.r11.s64 + -2612;
	// bl 0x82130000
	ctx.lr = 0x82390AF0;
	sub_82130000(ctx, base);
loc_82390AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396408
	ctx.lr = 0x82390AF8;
	sub_82396408(ctx, base);
	// stw r3,8088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8088, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82390768
	ctx.lr = 0x82390B08;
	sub_82390768(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82390B14"))) PPC_WEAK_FUNC(sub_82390B14);
PPC_FUNC_IMPL(__imp__sub_82390B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390B18"))) PPC_WEAK_FUNC(sub_82390B18);
PPC_FUNC_IMPL(__imp__sub_82390B18) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390b6c
	if (!ctx.cr6.eq) goto loc_82390B6C;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r10,r11,-8216
	ctx.r10.s64 = ctx.r11.s64 + -8216;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390b6c
	if (!ctx.cr6.eq) goto loc_82390B6C;
	// bl 0x823907e0
	ctx.lr = 0x82390B58;
	sub_823907E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390b6c
	if (ctx.cr6.eq) goto loc_82390B6C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82390b88
	goto loc_82390B88;
loc_82390B6C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-3108
	ctx.r6.s64 = ctx.r11.s64 + -3108;
	// addi r5,r10,-29216
	ctx.r5.s64 = ctx.r10.s64 + -29216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238fbd0
	ctx.lr = 0x82390B88;
	sub_8238FBD0(ctx, base);
loc_82390B88:
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

__attribute__((alias("__imp__sub_82390BA0"))) PPC_WEAK_FUNC(sub_82390BA0);
PPC_FUNC_IMPL(__imp__sub_82390BA0) {
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
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390bdc
	if (ctx.cr6.eq) goto loc_82390BDC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390bdc
	if (ctx.cr6.eq) goto loc_82390BDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82390b18
	ctx.lr = 0x82390BD8;
	sub_82390B18(ctx, base);
	// b 0x82390be0
	goto loc_82390BE0;
loc_82390BDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82390BE0:
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

__attribute__((alias("__imp__sub_82390C00"))) PPC_WEAK_FUNC(sub_82390C00);
PPC_FUNC_IMPL(__imp__sub_82390C00) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r11,2304
	ctx.r4.s64 = ctx.r11.s64 + 2304;
	// addi r3,r10,-2392
	ctx.r3.s64 = ctx.r10.s64 + -2392;
	// bl 0x82554798
	ctx.lr = 0x82390C20;
	sub_82554798(ctx, base);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r4,r9,1456
	ctx.r4.s64 = ctx.r9.s64 + 1456;
	// addi r3,r8,-2412
	ctx.r3.s64 = ctx.r8.s64 + -2412;
	// bl 0x82554798
	ctx.lr = 0x82390C34;
	sub_82554798(ctx, base);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r4,r7,2976
	ctx.r4.s64 = ctx.r7.s64 + 2976;
	// addi r3,r6,-2432
	ctx.r3.s64 = ctx.r6.s64 + -2432;
	// bl 0x82554798
	ctx.lr = 0x82390C48;
	sub_82554798(ctx, base);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r4,r5,1496
	ctx.r4.s64 = ctx.r5.s64 + 1496;
	// addi r3,r3,-2452
	ctx.r3.s64 = ctx.r3.s64 + -2452;
	// bl 0x82554798
	ctx.lr = 0x82390C5C;
	sub_82554798(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r11,1512
	ctx.r4.s64 = ctx.r11.s64 + 1512;
	// addi r3,r10,-2484
	ctx.r3.s64 = ctx.r10.s64 + -2484;
	// bl 0x82554798
	ctx.lr = 0x82390C70;
	sub_82554798(ctx, base);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r4,r9,1632
	ctx.r4.s64 = ctx.r9.s64 + 1632;
	// addi r3,r8,-2520
	ctx.r3.s64 = ctx.r8.s64 + -2520;
	// bl 0x82554798
	ctx.lr = 0x82390C84;
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

__attribute__((alias("__imp__sub_82390C94"))) PPC_WEAK_FUNC(sub_82390C94);
PPC_FUNC_IMPL(__imp__sub_82390C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390C98"))) PPC_WEAK_FUNC(sub_82390C98);
PPC_FUNC_IMPL(__imp__sub_82390C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-1988
	ctx.r10.s64 = ctx.r11.s64 + -1988;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d2028
	sub_821D2028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82390CA8"))) PPC_WEAK_FUNC(sub_82390CA8);
PPC_FUNC_IMPL(__imp__sub_82390CA8) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lwz r3,-12352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82390cdc
	if (ctx.cr6.eq) goto loc_82390CDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82390CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82390CDC:
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12352, ctx.r11.u32);
	// stw r10,-12356(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12356, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82390D04"))) PPC_WEAK_FUNC(sub_82390D04);
PPC_FUNC_IMPL(__imp__sub_82390D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390D08"))) PPC_WEAK_FUNC(sub_82390D08);
PPC_FUNC_IMPL(__imp__sub_82390D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1988
	ctx.r9.s64 = ctx.r11.s64 + -1988;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390D20"))) PPC_WEAK_FUNC(sub_82390D20);
PPC_FUNC_IMPL(__imp__sub_82390D20) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-1988
	ctx.r10.s64 = ctx.r11.s64 + -1988;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821d2028
	ctx.lr = 0x82390D4C;
	sub_821D2028(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82390d64
	if (ctx.cr6.eq) goto loc_82390D64;
	// bl 0x82130588
	ctx.lr = 0x82390D60;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82390D64:
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

__attribute__((alias("__imp__sub_82390D7C"))) PPC_WEAK_FUNC(sub_82390D7C);
PPC_FUNC_IMPL(__imp__sub_82390D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390D80"))) PPC_WEAK_FUNC(sub_82390D80);
PPC_FUNC_IMPL(__imp__sub_82390D80) {
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
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-12344
	ctx.r10.s64 = ctx.r10.s64 + -12344;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82390db8
	if (!ctx.cr6.eq) goto loc_82390DB8;
	// lis r3,2
	ctx.r3.s64 = 131072;
loc_82390DB8:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r8,r10,26
	ctx.r8.u64 = ctx.r10.u32 & 0x3F;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// bl 0x82130528
	ctx.lr = 0x82390DE8;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82390E04"))) PPC_WEAK_FUNC(sub_82390E04);
PPC_FUNC_IMPL(__imp__sub_82390E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390E08"))) PPC_WEAK_FUNC(sub_82390E08);
PPC_FUNC_IMPL(__imp__sub_82390E08) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r8,r11,128
	ctx.r8.u64 = ctx.r11.u64 | 128;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82390E48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82390e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82390E48;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82390E64:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82390e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82390E64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,-1956
	ctx.r8.s64 = ctx.r11.s64 + -1956;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cb740
	ctx.lr = 0x82390E90;
	sub_821CB740(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821be040
	ctx.lr = 0x82390E98;
	sub_821BE040(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82390EB0"))) PPC_WEAK_FUNC(sub_82390EB0);
PPC_FUNC_IMPL(__imp__sub_82390EB0) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82390EDC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82390edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82390EDC;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r9,r11,64
	ctx.r9.u64 = ctx.r11.u64 | 64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r10,-1956
	ctx.r8.s64 = ctx.r10.s64 + -1956;
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cb740
	ctx.lr = 0x82390F14;
	sub_821CB740(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bdf20
	ctx.lr = 0x82390F20;
	sub_821BDF20(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82390F38"))) PPC_WEAK_FUNC(sub_82390F38);
PPC_FUNC_IMPL(__imp__sub_82390F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82390F40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239125c
	if (ctx.cr6.eq) goto loc_8239125C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821bdcf8
	ctx.lr = 0x82390F60;
	sub_821BDCF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82390f78
	if (ctx.cr6.lt) goto loc_82390F78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82390F78:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82390fa8
	if (!ctx.cr6.eq) goto loc_82390FA8;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821be250
	ctx.lr = 0x82390F94;
	sub_821BE250(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82390FA8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8239125c
	if (!ctx.cr6.eq) goto loc_8239125C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// bl 0x821be250
	ctx.lr = 0x82390FC8;
	sub_821BE250(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8239125c
	if (!ctx.cr6.gt) goto loc_8239125C;
loc_82390FE0:
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r28,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82391030
	if (ctx.cr6.eq) goto loc_82391030;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82391020
	if (!ctx.cr6.lt) goto loc_82391020;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x82391028
	goto loc_82391028;
loc_82391020:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821be4f0
	ctx.lr = 0x82391028;
	sub_821BE4F0(ctx, base);
loc_82391028:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stb r3,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r3.u8);
loc_82391030:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239107c
	if (ctx.cr6.eq) goto loc_8239107C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82391068
	if (!ctx.cr6.lt) goto loc_82391068;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x82391070
	goto loc_82391070;
loc_82391068:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821be4f0
	ctx.lr = 0x82391070;
	sub_821BE4F0(ctx, base);
loc_82391070:
	// ori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 | 1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r3.u8);
loc_8239107C:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823910c8
	if (ctx.cr6.eq) goto loc_823910C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823910b4
	if (!ctx.cr6.lt) goto loc_823910B4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x823910bc
	goto loc_823910BC;
loc_823910B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821be4f0
	ctx.lr = 0x823910BC;
	sub_821BE4F0(ctx, base);
loc_823910BC:
	// ori r11,r30,2
	ctx.r11.u64 = ctx.r30.u64 | 2;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r3.u8);
loc_823910C8:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82391114
	if (ctx.cr6.eq) goto loc_82391114;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82391100
	if (!ctx.cr6.lt) goto loc_82391100;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x82391108
	goto loc_82391108;
loc_82391100:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821be4f0
	ctx.lr = 0x82391108;
	sub_821BE4F0(ctx, base);
loc_82391108:
	// ori r11,r30,3
	ctx.r11.u64 = ctx.r30.u64 | 3;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r3.u8);
loc_82391114:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82391160
	if (ctx.cr6.eq) goto loc_82391160;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8239114c
	if (!ctx.cr6.lt) goto loc_8239114C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x82391154
	goto loc_82391154;
loc_8239114C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821be4f0
	ctx.lr = 0x82391154;
	sub_821BE4F0(ctx, base);
loc_82391154:
	// ori r11,r30,4
	ctx.r11.u64 = ctx.r30.u64 | 4;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r3.u8);
loc_82391160:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823911ac
	if (ctx.cr6.eq) goto loc_823911AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82391198
	if (!ctx.cr6.lt) goto loc_82391198;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x823911a0
	goto loc_823911A0;
loc_82391198:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821be4f0
	ctx.lr = 0x823911A0;
	sub_821BE4F0(ctx, base);
loc_823911A0:
	// ori r11,r30,5
	ctx.r11.u64 = ctx.r30.u64 | 5;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r3.u8);
loc_823911AC:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823911f8
	if (ctx.cr6.eq) goto loc_823911F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823911e4
	if (!ctx.cr6.lt) goto loc_823911E4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x823911ec
	goto loc_823911EC;
loc_823911E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821be4f0
	ctx.lr = 0x823911EC;
	sub_821BE4F0(ctx, base);
loc_823911EC:
	// ori r11,r30,6
	ctx.r11.u64 = ctx.r30.u64 | 6;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r3.u8);
loc_823911F8:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82391244
	if (ctx.cr6.eq) goto loc_82391244;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82391230
	if (!ctx.cr6.lt) goto loc_82391230;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x82391238
	goto loc_82391238;
loc_82391230:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821be4f0
	ctx.lr = 0x82391238;
	sub_821BE4F0(ctx, base);
loc_82391238:
	// ori r11,r30,7
	ctx.r11.u64 = ctx.r30.u64 | 7;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r3.u8);
loc_82391244:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82390fe0
	if (ctx.cr6.lt) goto loc_82390FE0;
loc_8239125C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82391270"))) PPC_WEAK_FUNC(sub_82391270);
PPC_FUNC_IMPL(__imp__sub_82391270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x82391278;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823914f4
	if (ctx.cr6.eq) goto loc_823914F4;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823914f4
	if (ctx.cr6.eq) goto loc_823914F4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x821bdcf8
	ctx.lr = 0x823912A8;
	sub_821BDCF8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823912c4
	if (ctx.cr6.lt) goto loc_823912C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
loc_823912C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823912e4
	if (!ctx.cr6.eq) goto loc_823912E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// bl 0x821be3d8
	ctx.lr = 0x823912E0;
	sub_821BE3D8(ctx, base);
	// b 0x823914d0
	goto loc_823914D0;
loc_823912E4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823914d0
	if (!ctx.cr6.eq) goto loc_823914D0;
	// addi r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r5,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8239144c
	if (!ctx.cr6.gt) goto loc_8239144C;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
loc_82391308:
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ori r9,r30,6
	ctx.r9.u64 = ctx.r30.u64 | 6;
	// ori r10,r30,7
	ctx.r10.u64 = ctx.r30.u64 | 7;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r28,r3,r30
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// ori r8,r30,5
	ctx.r8.u64 = ctx.r30.u64 | 5;
	// lbzx r27,r4,r30
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// ori r7,r30,4
	ctx.r7.u64 = ctx.r30.u64 | 4;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbz r24,52(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 52);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lbz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// ori r6,r30,2
	ctx.r6.u64 = ctx.r30.u64 | 2;
	// lbz r25,28(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// lbz r26,52(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// ori r10,r30,3
	ctx.r10.u64 = ctx.r30.u64 | 3;
	// subf r9,r9,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r9.s64;
	// subf r26,r25,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r25.s64;
	// lbz r25,52(r8)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r8.u32 + 52);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r8,28(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 28);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lbz r24,52(r7)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + 52);
	// cntlzw r26,r26
	ctx.r26.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lbz r7,28(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 28);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subf r8,r8,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r8.s64;
	// rlwinm r26,r26,28,30,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0x2;
	// lbz r23,52(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// lbz r25,28(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// xori r10,r26,2
	ctx.r10.u64 = ctx.r26.u64 ^ 2;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// subf r7,r7,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r7.s64;
	// add r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rlwinm r6,r9,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// ori r9,r30,1
	ctx.r9.u64 = ctx.r30.u64 | 1;
	// or r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lbz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lbz r30,28(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// subf r26,r25,r23
	ctx.r26.s64 = ctx.r23.s64 - ctx.r25.s64;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// xori r9,r7,1
	ctx.r9.u64 = ctx.r7.u64 ^ 1;
	// rlwinm r6,r6,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// cntlzw r7,r26
	ctx.r7.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// or r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r9,r7,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lbz r7,52(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// lbz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// rlwinm r6,r6,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// or r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// subf r8,r10,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r7,r6,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// xori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 ^ 1;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r7,r28,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r28.s64;
	// rlwinm r6,r9,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r6,r8,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
	// or r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stbx r9,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82391308
	if (ctx.cr6.lt) goto loc_82391308;
loc_8239144C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821be3d8
	ctx.lr = 0x82391458;
	sub_821BE3D8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823914d0
	if (!ctx.cr6.gt) goto loc_823914D0;
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// subfic r29,r31,-52
	ctx.xer.ca = ctx.r31.u32 <= 4294967244;
	ctx.r29.s64 = -52 - ctx.r31.s64;
loc_8239146C:
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r11,-24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -24);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823914bc
	if (ctx.cr6.eq) goto loc_823914BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823914b8
	if (!ctx.cr6.eq) goto loc_823914B8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823914b8
	if (!ctx.cr6.lt) goto loc_823914B8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// b 0x823914bc
	goto loc_823914BC;
loc_823914B8:
	// bl 0x821be528
	ctx.lr = 0x823914BC;
	sub_821BE528(ctx, base);
loc_823914BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8239146c
	if (ctx.cr6.lt) goto loc_8239146C;
loc_823914D0:
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823914E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823914e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823914E0;
loc_823914F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82391500"))) PPC_WEAK_FUNC(sub_82391500);
PPC_FUNC_IMPL(__imp__sub_82391500) {
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
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821be7e8
	ctx.lr = 0x8239152C;
	sub_821BE7E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x821be7e8
	ctx.lr = 0x8239153C;
	sub_821BE7E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821be3d8
	ctx.lr = 0x8239154C;
	sub_821BE3D8(ctx, base);
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

__attribute__((alias("__imp__sub_82391564"))) PPC_WEAK_FUNC(sub_82391564);
PPC_FUNC_IMPL(__imp__sub_82391564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391568"))) PPC_WEAK_FUNC(sub_82391568);
PPC_FUNC_IMPL(__imp__sub_82391568) {
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
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821be710
	ctx.lr = 0x82391594;
	sub_821BE710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x821be710
	ctx.lr = 0x823915A4;
	sub_821BE710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821be250
	ctx.lr = 0x823915B4;
	sub_821BE250(ctx, base);
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

__attribute__((alias("__imp__sub_823915CC"))) PPC_WEAK_FUNC(sub_823915CC);
PPC_FUNC_IMPL(__imp__sub_823915CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823915D0"))) PPC_WEAK_FUNC(sub_823915D0);
PPC_FUNC_IMPL(__imp__sub_823915D0) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82130528
	ctx.lr = 0x823915E4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82391608
	if (ctx.cr6.eq) goto loc_82391608;
	// bl 0x82390d80
	ctx.lr = 0x823915F0;
	sub_82390D80(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// stw r3,-12348(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82391608:
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12348, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391624"))) PPC_WEAK_FUNC(sub_82391624);
PPC_FUNC_IMPL(__imp__sub_82391624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391628"))) PPC_WEAK_FUNC(sub_82391628);
PPC_FUNC_IMPL(__imp__sub_82391628) {
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
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// beq cr6,0x82391674
	if (ctx.cr6.eq) goto loc_82391674;
	// bl 0x82391270
	ctx.lr = 0x82391658;
	sub_82391270(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821bdcf8
	ctx.lr = 0x82391660;
	sub_821BDCF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821be610
	ctx.lr = 0x8239166C;
	sub_821BE610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82391674:
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

__attribute__((alias("__imp__sub_82391688"))) PPC_WEAK_FUNC(sub_82391688);
PPC_FUNC_IMPL(__imp__sub_82391688) {
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
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// beq cr6,0x823916cc
	if (ctx.cr6.eq) goto loc_823916CC;
	// bl 0x82391270
	ctx.lr = 0x823916BC;
	sub_82391270(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821be610
	ctx.lr = 0x823916C4;
	sub_821BE610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823916CC:
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

__attribute__((alias("__imp__sub_823916E0"))) PPC_WEAK_FUNC(sub_823916E0);
PPC_FUNC_IMPL(__imp__sub_823916E0) {
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
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// lwz r31,-12348(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12348);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82391738
	if (ctx.cr6.eq) goto loc_82391738;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82391720
	if (!ctx.cr6.eq) goto loc_82391720;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391728
	if (ctx.cr6.eq) goto loc_82391728;
loc_82391720:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821be610
	ctx.lr = 0x82391728;
	sub_821BE610(ctx, base);
loc_82391728:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x82391730;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130588
	ctx.lr = 0x82391738;
	sub_82130588(ctx, base);
loc_82391738:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12348(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12348, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82391758"))) PPC_WEAK_FUNC(sub_82391758);
PPC_FUNC_IMPL(__imp__sub_82391758) {
	PPC_FUNC_PROLOGUE();
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_82391764:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82391770:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82391794
	if (!ctx.cr6.eq) goto loc_82391794;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82391798
	if (ctx.cr6.eq) goto loc_82391798;
loc_82391794:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82391798:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823917d4
	if (ctx.cr6.eq) goto loc_823917D4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r8,74
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 74, ctx.xer);
	// blt cr6,0x82391770
	if (ctx.cr6.lt) goto loc_82391770;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r4,r4,592
	ctx.r4.s64 = ctx.r4.s64 + 592;
	// addi r7,r7,592
	ctx.r7.s64 = ctx.r7.s64 + 592;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x82391764
	if (ctx.cr6.lt) goto loc_82391764;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823917D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823917DC"))) PPC_WEAK_FUNC(sub_823917DC);
PPC_FUNC_IMPL(__imp__sub_823917DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823917E0"))) PPC_WEAK_FUNC(sub_823917E0);
PPC_FUNC_IMPL(__imp__sub_823917E0) {
	PPC_FUNC_PROLOGUE();
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_823917EC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_823917F8:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8239181c
	if (!ctx.cr6.eq) goto loc_8239181C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82391820
	if (ctx.cr6.eq) goto loc_82391820;
loc_8239181C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82391820:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239185c
	if (ctx.cr6.eq) goto loc_8239185C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r8,74
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 74, ctx.xer);
	// blt cr6,0x823917f8
	if (ctx.cr6.lt) goto loc_823917F8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r4,r4,592
	ctx.r4.s64 = ctx.r4.s64 + 592;
	// addi r7,r7,592
	ctx.r7.s64 = ctx.r7.s64 + 592;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x823917ec
	if (ctx.cr6.lt) goto loc_823917EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8239185C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391864"))) PPC_WEAK_FUNC(sub_82391864);
PPC_FUNC_IMPL(__imp__sub_82391864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391868"))) PPC_WEAK_FUNC(sub_82391868);
PPC_FUNC_IMPL(__imp__sub_82391868) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r7,45
	ctx.r7.s64 = 45;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 21, ctx.xer);
	// bgt cr6,0x82391aa4
	if (ctx.cr6.gt) {
		// ERROR 82391AA4
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// addi r12,r12,6292
	ctx.r12.s64 = ctx.r12.s64 + 6292;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x8239198C
		return;
	case 1:
		// ERROR: 0x823919D0
		return;
	case 2:
		// ERROR: 0x82391A14
		return;
	case 3:
		// ERROR: 0x82391A58
		return;
	case 4:
		// ERROR: 0x82391AA4
		return;
	case 5:
		// ERROR: 0x82391AA4
		return;
	case 6:
		// ERROR: 0x82391AA4
		return;
	case 7:
		// ERROR: 0x82391AA4
		return;
	case 8:
		// ERROR: 0x82391AA4
		return;
	case 9:
		// ERROR: 0x82391AA4
		return;
	case 10:
		// ERROR: 0x82391AA4
		return;
	case 11:
		// ERROR: 0x82391AA4
		return;
	case 12:
		// ERROR: 0x82391AA4
		return;
	case 13:
		// ERROR: 0x82391AA4
		return;
	case 14:
		// ERROR: 0x82391AA4
		return;
	case 15:
		// ERROR: 0x82391AA4
		return;
	case 16:
		// ERROR: 0x82391AA4
		return;
	case 17:
		// ERROR: 0x82391AA4
		return;
	case 18:
		// ERROR: 0x82391AA4
		return;
	case 19:
		// ERROR: 0x82391AA4
		return;
	case 20:
		// ERROR: 0x823918EC
		return;
	case 21:
		// ERROR: 0x8239193C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82391894"))) PPC_WEAK_FUNC(sub_82391894);
PPC_FUNC_IMPL(__imp__sub_82391894) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,6540(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6540);
	// lwz r17,6608(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6608);
	// lwz r17,6676(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6676);
	// lwz r17,6744(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6744);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// lwz r17,6380(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6380);
	// lwz r17,6460(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6460);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x8239190c
	if (!ctx.cr6.eq) goto loc_8239190C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
loc_8239190C:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bne cr6,0x82391928
	if (!ctx.cr6.eq) goto loc_82391928;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,8192
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8192, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
loc_82391928:
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) {
		// ERROR 82391AA4
		return;
	}
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// b 0x82391a98
	// ERROR 82391A98
	return;
}

__attribute__((alias("__imp__sub_8239193C"))) PPC_WEAK_FUNC(sub_8239193C);
PPC_FUNC_IMPL(__imp__sub_8239193C) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x8239195c
	if (!ctx.cr6.eq) goto loc_8239195C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
loc_8239195C:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bne cr6,0x82391978
	if (!ctx.cr6.eq) goto loc_82391978;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
loc_82391978:
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) {
		// ERROR 82391AA4
		return;
	}
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// b 0x82391a98
	// ERROR 82391A98
	return;
}

__attribute__((alias("__imp__sub_8239198C"))) PPC_WEAK_FUNC(sub_8239198C);
PPC_FUNC_IMPL(__imp__sub_8239198C) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) {
		// ERROR 82391AA4
		return;
	}
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) {
		// ERROR 82391AA4
		return;
	}
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// b 0x82391a98
	// ERROR 82391A98
	return;
}

__attribute__((alias("__imp__sub_823919D0"))) PPC_WEAK_FUNC(sub_823919D0);
PPC_FUNC_IMPL(__imp__sub_823919D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) {
		// ERROR 82391AA4
		return;
	}
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) {
		// ERROR 82391AA4
		return;
	}
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// b 0x82391a98
	// ERROR 82391A98
	return;
}

__attribute__((alias("__imp__sub_82391A14"))) PPC_WEAK_FUNC(sub_82391A14);
PPC_FUNC_IMPL(__imp__sub_82391A14) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) {
		// ERROR 82391AA4
		return;
	}
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) {
		// ERROR 82391AA4
		return;
	}
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) {
		// ERROR 82391A9C
		return;
	}
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// b 0x82391a98
	// ERROR 82391A98
	return;
}

__attribute__((alias("__imp__sub_82391A58"))) PPC_WEAK_FUNC(sub_82391A58);
PPC_FUNC_IMPL(__imp__sub_82391A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) goto loc_82391AA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) goto loc_82391A9C;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) goto loc_82391A9C;
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) goto loc_82391AA4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) goto loc_82391A9C;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// beq cr6,0x82391a9c
	if (ctx.cr6.eq) goto loc_82391A9C;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x82391aa4
	if (!ctx.cr6.eq) goto loc_82391AA4;
loc_82391A9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
loc_82391AA4:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82391874
	if (!ctx.cr0.eq) {
		// ERROR 82391874
		return;
	}
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391AB4"))) PPC_WEAK_FUNC(sub_82391AB4);
PPC_FUNC_IMPL(__imp__sub_82391AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391AB8"))) PPC_WEAK_FUNC(sub_82391AB8);
PPC_FUNC_IMPL(__imp__sub_82391AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-584
	ctx.r9.s64 = ctx.r11.s64 + -584;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82391AC8:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82391ae0
	if (!ctx.cr6.eq) goto loc_82391AE0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82391afc
	if (ctx.cr6.eq) goto loc_82391AFC;
loc_82391AE0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r8,r9,472
	ctx.r8.s64 = ctx.r9.s64 + 472;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82391ac8
	if (ctx.cr6.lt) goto loc_82391AC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82391AFC:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391B14"))) PPC_WEAK_FUNC(sub_82391B14);
PPC_FUNC_IMPL(__imp__sub_82391B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391B18"))) PPC_WEAK_FUNC(sub_82391B18);
PPC_FUNC_IMPL(__imp__sub_82391B18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,74
	ctx.r10.s64 = 74;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82391B24:
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
	// bne 0x82391b24
	if (!ctx.cr0.eq) goto loc_82391B24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391B3C"))) PPC_WEAK_FUNC(sub_82391B3C);
PPC_FUNC_IMPL(__imp__sub_82391B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391B40"))) PPC_WEAK_FUNC(sub_82391B40);
PPC_FUNC_IMPL(__imp__sub_82391B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x82391B48;
	__savegprlr_25(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,364
	ctx.r5.s64 = ctx.r11.s64 + 364;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82391B6C;
	sub_82137A08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dfaf8
	ctx.lr = 0x82391B7C;
	sub_824DFAF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r25,r11,-112
	ctx.r25.s64 = ctx.r11.s64 + -112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r27,r9,356
	ctx.r27.s64 = ctx.r9.s64 + 356;
	// addi r30,r10,10372
	ctx.r30.s64 = ctx.r10.s64 + 10372;
	// addi r26,r11,348
	ctx.r26.s64 = ctx.r11.s64 + 348;
loc_82391BA4:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x82391BBC;
	sub_82137A08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x824df200
	ctx.lr = 0x82391BE0;
	sub_824DF200(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x82391BF8;
	sub_82137A08(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x824df200
	ctx.lr = 0x82391C20;
	sub_824DF200(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r9,r25,456
	ctx.r9.s64 = ctx.r25.s64 + 456;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82391ba4
	if (ctx.cr6.lt) goto loc_82391BA4;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82391C38"))) PPC_WEAK_FUNC(sub_82391C38);
PPC_FUNC_IMPL(__imp__sub_82391C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82391C40;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5856(r1)
	ea = -5856 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,74
	ctx.r10.s64 = 74;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82391C60:
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
	// bne 0x82391c60
	if (!ctx.cr0.eq) goto loc_82391C60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,424
	ctx.r4.s64 = ctx.r11.s64 + 424;
	// bl 0x824df990
	ctx.lr = 0x82391C84;
	sub_824DF990(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82391b40
	ctx.lr = 0x82391C90;
	sub_82391B40(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r31,r11,30576
	ctx.r31.s64 = ctx.r11.s64 + 30576;
	// addi r29,r10,412
	ctx.r29.s64 = ctx.r10.s64 + 412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821ca540
	ctx.lr = 0x82391CAC;
	sub_821CA540(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r11,408
	ctx.r30.s64 = ctx.r11.s64 + 408;
	// beq cr6,0x82391cdc
	if (ctx.cr6.eq) goto loc_82391CDC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821ca778
	ctx.lr = 0x82391CD0;
	sub_821CA778(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82391cfc
	if (!ctx.cr6.eq) goto loc_82391CFC;
loc_82391CDC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,392
	ctx.r27.s64 = ctx.r11.s64 + 392;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x821c9a90
	ctx.lr = 0x82391CF0;
	sub_821C9A90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ca540
	ctx.lr = 0x82391CFC;
	sub_821CA540(ctx, base);
loc_82391CFC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,372
	ctx.r3.s64 = ctx.r11.s64 + 372;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82130000
	ctx.lr = 0x82391D10;
	sub_82130000(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e0288
	ctx.lr = 0x82391D20;
	sub_824E0288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c9a90
	ctx.lr = 0x82391D28;
	sub_821C9A90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824dfa38
	ctx.lr = 0x82391D30;
	sub_824DFA38(ctx, base);
	// addi r1,r1,5856
	ctx.r1.s64 = ctx.r1.s64 + 5856;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82391D38"))) PPC_WEAK_FUNC(sub_82391D38);
PPC_FUNC_IMPL(__imp__sub_82391D38) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
	// lbz r10,19(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// stb r10,19(r4)
	PPC_STORE_U8(ctx.r4.u32 + 19, ctx.r10.u8);
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// sth r9,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r9.u16);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r8,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r8.u16);
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// sth r6,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r6.u16);
	// lhz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// sth r5,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r5.u16);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// sth r10,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r10.u16);
	// lbz r9,18(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// stb r9,18(r4)
	PPC_STORE_U8(ctx.r4.u32 + 18, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391D8C"))) PPC_WEAK_FUNC(sub_82391D8C);
PPC_FUNC_IMPL(__imp__sub_82391D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391D90"))) PPC_WEAK_FUNC(sub_82391D90);
PPC_FUNC_IMPL(__imp__sub_82391D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,-12
	ctx.r11.s64 = ctx.r4.s64 + -12;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-26032
	ctx.r8.s64 = ctx.r10.s64 + -26032;
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391DA8"))) PPC_WEAK_FUNC(sub_82391DA8);
PPC_FUNC_IMPL(__imp__sub_82391DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,4364
	ctx.r8.s64 = ctx.r9.s64 + 4364;
	// lbz r10,2048(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2048);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lfsx f1,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391DC4"))) PPC_WEAK_FUNC(sub_82391DC4);
PPC_FUNC_IMPL(__imp__sub_82391DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391DC8"))) PPC_WEAK_FUNC(sub_82391DC8);
PPC_FUNC_IMPL(__imp__sub_82391DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,4596
	ctx.r8.s64 = ctx.r9.s64 + 4596;
	// lbz r10,2042(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2042);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lfsx f1,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391DE4"))) PPC_WEAK_FUNC(sub_82391DE4);
PPC_FUNC_IMPL(__imp__sub_82391DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391DE8"))) PPC_WEAK_FUNC(sub_82391DE8);
PPC_FUNC_IMPL(__imp__sub_82391DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// stb r4,2053(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2053, ctx.r4.u8);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391DFC"))) PPC_WEAK_FUNC(sub_82391DFC);
PPC_FUNC_IMPL(__imp__sub_82391DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391E00"))) PPC_WEAK_FUNC(sub_82391E00);
PPC_FUNC_IMPL(__imp__sub_82391E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// stb r4,2054(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2054, ctx.r4.u8);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391E14"))) PPC_WEAK_FUNC(sub_82391E14);
PPC_FUNC_IMPL(__imp__sub_82391E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391E18"))) PPC_WEAK_FUNC(sub_82391E18);
PPC_FUNC_IMPL(__imp__sub_82391E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// stb r4,2052(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2052, ctx.r4.u8);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391E2C"))) PPC_WEAK_FUNC(sub_82391E2C);
PPC_FUNC_IMPL(__imp__sub_82391E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391E30"))) PPC_WEAK_FUNC(sub_82391E30);
PPC_FUNC_IMPL(__imp__sub_82391E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stb r10,2081(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2081, ctx.r10.u8);
	// stw r9,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391E48"))) PPC_WEAK_FUNC(sub_82391E48);
PPC_FUNC_IMPL(__imp__sub_82391E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stb r10,2081(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2081, ctx.r10.u8);
	// stw r9,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391E60"))) PPC_WEAK_FUNC(sub_82391E60);
PPC_FUNC_IMPL(__imp__sub_82391E60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// stb r4,2138(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2138, ctx.r4.u8);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391E74"))) PPC_WEAK_FUNC(sub_82391E74);
PPC_FUNC_IMPL(__imp__sub_82391E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391E78"))) PPC_WEAK_FUNC(sub_82391E78);
PPC_FUNC_IMPL(__imp__sub_82391E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// lbz r10,2092(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2092);
	// lbz r9,2089(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2089);
	// ori r8,r11,130
	ctx.r8.u64 = ctx.r11.u64 | 130;
	// lbz r7,2086(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2086);
	// stb r4,2141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2141, ctx.r4.u8);
	// stw r8,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r8.u32);
	// stb r10,2093(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2093, ctx.r10.u8);
	// stb r9,2090(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2090, ctx.r9.u8);
	// stb r7,2085(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2085, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391EA4"))) PPC_WEAK_FUNC(sub_82391EA4);
PPC_FUNC_IMPL(__imp__sub_82391EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391EA8"))) PPC_WEAK_FUNC(sub_82391EA8);
PPC_FUNC_IMPL(__imp__sub_82391EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// lbz r10,2092(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2092);
	// lbz r9,2089(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2089);
	// ori r8,r11,130
	ctx.r8.u64 = ctx.r11.u64 | 130;
	// lbz r7,2086(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2086);
	// lbz r6,2125(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2125);
	// stb r4,2139(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2139, ctx.r4.u8);
	// stw r8,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r8.u32);
	// stb r10,2093(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2093, ctx.r10.u8);
	// stb r9,2090(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2090, ctx.r9.u8);
	// stb r7,2085(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2085, ctx.r7.u8);
	// stb r6,2126(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2126, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391EDC"))) PPC_WEAK_FUNC(sub_82391EDC);
PPC_FUNC_IMPL(__imp__sub_82391EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391EE0"))) PPC_WEAK_FUNC(sub_82391EE0);
PPC_FUNC_IMPL(__imp__sub_82391EE0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// stb r5,2080(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2080, ctx.r5.u8);
	// bne cr6,0x82391ef8
	if (!ctx.cr6.eq) goto loc_82391EF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82391f10
	goto loc_82391F10;
loc_82391EF8:
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// bne cr6,0x82391f14
	if (!ctx.cr6.eq) goto loc_82391F14;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82391f10
	if (ctx.cr6.eq) goto loc_82391F10;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82391F10:
	// stb r11,2140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2140, ctx.r11.u8);
loc_82391F14:
	// lwz r11,2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2064);
	// lbz r10,2092(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2092);
	// lbz r9,2089(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2089);
	// ori r8,r11,130
	ctx.r8.u64 = ctx.r11.u64 | 130;
	// lbz r7,2086(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2086);
	// lbz r6,2125(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2125);
	// stw r8,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r8.u32);
	// stb r10,2093(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2093, ctx.r10.u8);
	// stb r9,2090(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2090, ctx.r9.u8);
	// stb r7,2085(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2085, ctx.r7.u8);
	// stb r6,2126(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2126, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391F44"))) PPC_WEAK_FUNC(sub_82391F44);
PPC_FUNC_IMPL(__imp__sub_82391F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391F48"))) PPC_WEAK_FUNC(sub_82391F48);
PPC_FUNC_IMPL(__imp__sub_82391F48) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,38
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 38, ctx.xer);
	// bne cr6,0x82391f58
	if (!ctx.cr6.eq) goto loc_82391F58;
	// lbz r3,2139(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2139);
	// blr 
	return;
loc_82391F58:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82391f68
	if (!ctx.cr6.eq) goto loc_82391F68;
	// lbz r3,2141(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2141);
	// blr 
	return;
loc_82391F68:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,2080(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2080);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391F74"))) PPC_WEAK_FUNC(sub_82391F74);
PPC_FUNC_IMPL(__imp__sub_82391F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391F78"))) PPC_WEAK_FUNC(sub_82391F78);
PPC_FUNC_IMPL(__imp__sub_82391F78) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391fa0
	if (ctx.cr6.eq) goto loc_82391FA0;
	// addi r10,r3,1600
	ctx.r10.s64 = ctx.r3.s64 + 1600;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82391F8C:
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bne 0x82391f8c
	if (!ctx.cr0.eq) goto loc_82391F8C;
	// blr 
	return;
loc_82391FA0:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,1600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1600, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391FB8"))) PPC_WEAK_FUNC(sub_82391FB8);
PPC_FUNC_IMPL(__imp__sub_82391FB8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391fe0
	if (ctx.cr6.eq) goto loc_82391FE0;
	// addi r10,r3,1604
	ctx.r10.s64 = ctx.r3.s64 + 1604;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82391FCC:
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bne 0x82391fcc
	if (!ctx.cr0.eq) goto loc_82391FCC;
	// blr 
	return;
loc_82391FE0:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,1604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1604, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391FF8"))) PPC_WEAK_FUNC(sub_82391FF8);
PPC_FUNC_IMPL(__imp__sub_82391FF8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,2068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2068, ctx.r11.u32);
	// beq cr6,0x823920ac
	if (ctx.cr6.eq) goto loc_823920AC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82392060
	if (!ctx.cr6.eq) goto loc_82392060;
	// li r11,1568
	ctx.r11.s64 = 1568;
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1616
	ctx.r11.s64 = 1616;
	// lvx128 v61,r0,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1664
	ctx.r11.s64 = 1664;
	// lvx128 v59,r0,r7
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1712
	ctx.r11.s64 = 1712;
	// lvx128 v57,r0,r7
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1760
	ctx.r11.s64 = 1760;
	// lvx128 v55,r0,r7
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1808
	ctx.r11.s64 = 1808;
	// lvx128 v53,r0,r7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_82392060:
	// li r11,1584
	ctx.r11.s64 = 1584;
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1632
	ctx.r11.s64 = 1632;
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1680
	ctx.r11.s64 = 1680;
	// lvx128 v58,r0,r7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1728
	ctx.r11.s64 = 1728;
	// lvx128 v56,r0,r7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1776
	ctx.r11.s64 = 1776;
	// lvx128 v54,r0,r7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1824
	ctx.r11.s64 = 1824;
	// lvx128 v52,r0,r7
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823920AC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823920d4
	if (!ctx.cr6.eq) goto loc_823920D4;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v51,r0,r7
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,1568
	ctx.r10.s64 = 1568;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stvx128 v51,r8,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_823920D4:
	// addi r11,r6,33
	ctx.r11.s64 = ctx.r6.s64 + 33;
	// lvx128 v50,r0,r7
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stvx128 v50,r10,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823920F0"))) PPC_WEAK_FUNC(sub_823920F0);
PPC_FUNC_IMPL(__imp__sub_823920F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x823920F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823d9890
	ctx.lr = 0x8239210C;
	sub_823D9890(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,31312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31312);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32129
	ctx.r6.s64 = -2105606144;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r5,272
	ctx.r5.s64 = 272;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r4,r6,-26048
	ctx.r4.s64 = ctx.r6.s64 + -26048;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r6,208
	ctx.r6.s64 = 208;
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// li r29,224
	ctx.r29.s64 = 224;
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// addi r30,r30,4784
	ctx.r30.s64 = ctx.r30.s64 + 4784;
	// lfs f13,-32032(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32032);
	ctx.f13.f64 = double(temp.f32);
	// li r9,240
	ctx.r9.s64 = 240;
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r28,256
	ctx.r28.s64 = 256;
	// lfs f12,14884(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14884);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f11,31308(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31308);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lfs f0,-13148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -13148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29232);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v62,r0,r30
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v61,v62,v62
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v60,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v60,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v59,v63,v61
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v59,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82392260"))) PPC_WEAK_FUNC(sub_82392260);
PPC_FUNC_IMPL(__imp__sub_82392260) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,4548
	ctx.r8.s64 = ctx.r9.s64 + 4548;
	// lbz r10,2042(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2042);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239227C"))) PPC_WEAK_FUNC(sub_8239227C);
PPC_FUNC_IMPL(__imp__sub_8239227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392280"))) PPC_WEAK_FUNC(sub_82392280);
PPC_FUNC_IMPL(__imp__sub_82392280) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,4696
	ctx.r8.s64 = ctx.r9.s64 + 4696;
	// lbz r10,2044(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2044);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239229C"))) PPC_WEAK_FUNC(sub_8239229C);
PPC_FUNC_IMPL(__imp__sub_8239229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823922A0"))) PPC_WEAK_FUNC(sub_823922A0);
PPC_FUNC_IMPL(__imp__sub_823922A0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,4420
	ctx.r8.s64 = ctx.r9.s64 + 4420;
	// lbz r10,2048(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2048);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823922BC"))) PPC_WEAK_FUNC(sub_823922BC);
PPC_FUNC_IMPL(__imp__sub_823922BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823922C0"))) PPC_WEAK_FUNC(sub_823922C0);
PPC_FUNC_IMPL(__imp__sub_823922C0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r10,4296
	ctx.r8.s64 = ctx.r10.s64 + 4296;
	// lbz r11,2046(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2046);
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823922E0"))) PPC_WEAK_FUNC(sub_823922E0);
PPC_FUNC_IMPL(__imp__sub_823922E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r11,4420
	ctx.r7.s64 = ctx.r11.s64 + 4420;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_823922F0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_823922F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8239231c
	if (ctx.cr6.eq) goto loc_8239231C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823922f8
	if (ctx.cr6.eq) goto loc_823922F8;
loc_8239231C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r7,56
	ctx.r11.s64 = ctx.r7.s64 + 56;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823922f0
	if (ctx.cr6.lt) goto loc_823922F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392340"))) PPC_WEAK_FUNC(sub_82392340);
PPC_FUNC_IMPL(__imp__sub_82392340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r11,4296
	ctx.r7.s64 = ctx.r11.s64 + 4296;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82392350:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82392358:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8239237c
	if (ctx.cr6.eq) goto loc_8239237C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82392358
	if (ctx.cr6.eq) goto loc_82392358;
loc_8239237C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r7,68
	ctx.r11.s64 = ctx.r7.s64 + 68;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82392350
	if (ctx.cr6.lt) goto loc_82392350;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823923A0"))) PPC_WEAK_FUNC(sub_823923A0);
PPC_FUNC_IMPL(__imp__sub_823923A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r11,4696
	ctx.r7.s64 = ctx.r11.s64 + 4696;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_823923B0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_823923B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x823923dc
	if (ctx.cr6.eq) goto loc_823923DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823923b8
	if (ctx.cr6.eq) goto loc_823923B8;
loc_823923DC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r7,68
	ctx.r11.s64 = ctx.r7.s64 + 68;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823923b0
	if (ctx.cr6.lt) goto loc_823923B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392400"))) PPC_WEAK_FUNC(sub_82392400);
PPC_FUNC_IMPL(__imp__sub_82392400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r11,4548
	ctx.r7.s64 = ctx.r11.s64 + 4548;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82392410:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82392418:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8239243c
	if (ctx.cr6.eq) goto loc_8239243C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82392418
	if (ctx.cr6.eq) goto loc_82392418;
loc_8239243C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r7,48
	ctx.r11.s64 = ctx.r7.s64 + 48;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82392410
	if (ctx.cr6.lt) goto loc_82392410;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392460"))) PPC_WEAK_FUNC(sub_82392460);
PPC_FUNC_IMPL(__imp__sub_82392460) {
	PPC_FUNC_PROLOGUE();
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,2055(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2055);
	// addi r10,r11,-26376
	ctx.r10.s64 = ctx.r11.s64 + -26376;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8239247C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,172
	ctx.r8.s64 = ctx.r10.s64 + 172;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8239247c
	if (ctx.cr6.lt) goto loc_8239247C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823924AC"))) PPC_WEAK_FUNC(sub_823924AC);
PPC_FUNC_IMPL(__imp__sub_823924AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823924B0"))) PPC_WEAK_FUNC(sub_823924B0);
PPC_FUNC_IMPL(__imp__sub_823924B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-26376
	ctx.r9.s64 = ctx.r11.s64 + -26376;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// stb r6,2055(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2055, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823924D0"))) PPC_WEAK_FUNC(sub_823924D0);
PPC_FUNC_IMPL(__imp__sub_823924D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823924DC"))) PPC_WEAK_FUNC(sub_823924DC);
PPC_FUNC_IMPL(__imp__sub_823924DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823924E0"))) PPC_WEAK_FUNC(sub_823924E0);
PPC_FUNC_IMPL(__imp__sub_823924E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 6;
	// stb r8,8004(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8004, ctx.r8.u8);
	// stw r10,2072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2072, ctx.r10.u32);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r5,r6,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stw r5,2076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2076, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239250C"))) PPC_WEAK_FUNC(sub_8239250C);
PPC_FUNC_IMPL(__imp__sub_8239250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392510"))) PPC_WEAK_FUNC(sub_82392510);
PPC_FUNC_IMPL(__imp__sub_82392510) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,2072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2072, ctx.r11.u32);
	// stw r11,2076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392520"))) PPC_WEAK_FUNC(sub_82392520);
PPC_FUNC_IMPL(__imp__sub_82392520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-26768
	ctx.r9.s64 = ctx.r11.s64 + -26768;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392538"))) PPC_WEAK_FUNC(sub_82392538);
PPC_FUNC_IMPL(__imp__sub_82392538) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,2072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2072, ctx.r4.u32);
	// stb r11,8004(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8004, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392548"))) PPC_WEAK_FUNC(sub_82392548);
PPC_FUNC_IMPL(__imp__sub_82392548) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,2072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392554"))) PPC_WEAK_FUNC(sub_82392554);
PPC_FUNC_IMPL(__imp__sub_82392554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392558"))) PPC_WEAK_FUNC(sub_82392558);
PPC_FUNC_IMPL(__imp__sub_82392558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82392578
	if (ctx.cr6.eq) goto loc_82392578;
	// lfs f13,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8239257c
	goto loc_8239257C;
loc_82392578:
	// lfs f13,308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
loc_8239257C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82392588
	if (ctx.cr6.gt) goto loc_82392588;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82392588:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392590"))) PPC_WEAK_FUNC(sub_82392590);
PPC_FUNC_IMPL(__imp__sub_82392590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r11,3796
	ctx.r11.s64 = ctx.r11.s64 + 3796;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823925b4
	if (ctx.cr6.eq) goto loc_823925B4;
	// lfs f13,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823925b8
	goto loc_823925B8;
loc_823925B4:
	// lfs f13,308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
loc_823925B8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823925c4
	if (ctx.cr6.gt) goto loc_823925C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823925C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823925e4
	if (ctx.cr6.eq) goto loc_823925E4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823925fc
	if (ctx.cr6.eq) goto loc_823925FC;
	// stfs f0,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// blr 
	return;
loc_823925E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x823925fc
	if (ctx.cr6.eq) goto loc_823925FC;
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// blr 
	return;
loc_823925FC:
	// stfs f0,308(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392604"))) PPC_WEAK_FUNC(sub_82392604);
PPC_FUNC_IMPL(__imp__sub_82392604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392608"))) PPC_WEAK_FUNC(sub_82392608);
PPC_FUNC_IMPL(__imp__sub_82392608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r3,-12292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392614"))) PPC_WEAK_FUNC(sub_82392614);
PPC_FUNC_IMPL(__imp__sub_82392614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392618"))) PPC_WEAK_FUNC(sub_82392618);
PPC_FUNC_IMPL(__imp__sub_82392618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82392620;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r30,r28,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x826186c0
	ctx.lr = 0x82392640;
	sub_826186C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392678
	if (ctx.cr6.eq) goto loc_82392678;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82618390
	ctx.lr = 0x82392668;
	sub_82618390(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826188b8
	ctx.lr = 0x82392674;
	sub_826188B8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82392678:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823926ac
	if (ctx.cr6.eq) goto loc_823926AC;
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x824e6390
	ctx.lr = 0x8239269C;
	sub_824E6390(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823926b0
	if (!ctx.cr6.eq) goto loc_823926B0;
loc_823926AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823926B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823926BC"))) PPC_WEAK_FUNC(sub_823926BC);
PPC_FUNC_IMPL(__imp__sub_823926BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823926C0"))) PPC_WEAK_FUNC(sub_823926C0);
PPC_FUNC_IMPL(__imp__sub_823926C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x823926C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82257568
	ctx.lr = 0x823926F0;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239271c
	if (ctx.cr6.eq) goto loc_8239271C;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257568
	ctx.lr = 0x8239270C;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392720
	if (!ctx.cr6.eq) goto loc_82392720;
loc_8239271C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82392720:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82392740"))) PPC_WEAK_FUNC(sub_82392740);
PPC_FUNC_IMPL(__imp__sub_82392740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x82392748;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,23772
	ctx.r9.s64 = 1557921792;
	// lis r10,-32122
	ctx.r10.s64 = -2105147392;
	// lis r8,20164
	ctx.r8.s64 = 1321467904;
	// stb r26,7(r24)
	PPC_STORE_U8(ctx.r24.u32 + 7, ctx.r26.u8);
	// lis r7,26214
	ctx.r7.s64 = 1717960704;
	// ori r30,r9,64167
	ctx.r30.u64 = ctx.r9.u64 | 64167;
	// ori r27,r8,60495
	ctx.r27.u64 = ctx.r8.u64 | 60495;
	// ori r28,r7,26215
	ctx.r28.u64 = ctx.r7.u64 | 26215;
	// addi r25,r11,4800
	ctx.r25.s64 = ctx.r11.s64 + 4800;
	// addi r31,r10,2176
	ctx.r31.s64 = ctx.r10.s64 + 2176;
loc_82392780:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x823927a4
	if (!ctx.cr6.eq) goto loc_823927A4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulld r10,r9,r30
	ctx.r10.s64 = ctx.r9.s64 * ctx.r30.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rldicl r11,r11,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// b 0x823927b4
	goto loc_823927B4;
loc_823927A4:
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bge cr6,0x823927f0
	if (!ctx.cr6.lt) goto loc_823927F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_823927B4:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r11,r9,r30
	ctx.r11.s64 = ctx.r9.s64 * ctx.r30.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r11,1
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rldicl r11,r11,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// mulhw r7,r8,r27
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32)) >> 32;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r5,r6,26
	ctx.r5.s64 = ctx.r6.s64 * 26;
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// b 0x82392834
	goto loc_82392834;
loc_823927F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulld r11,r11,r30
	ctx.r11.s64 = ctx.r11.s64 * ctx.r30.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r11,1
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rldicl r11,r11,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// mulhw r7,r8,r28
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32)) >> 32;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r5.s64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
loc_82392834:
	// extsb r29,r4
	ctx.r29.s64 = ctx.r4.s8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,43
	ctx.r5.s64 = 43;
	// bl 0x823da950
	ctx.lr = 0x82392848;
	sub_823DA950(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// stbx r9,r26,r24
	PPC_STORE_U8(ctx.r26.u32 + ctx.r24.u32, ctx.r9.u8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 7, ctx.xer);
	// blt cr6,0x82392780
	if (ctx.cr6.lt) goto loc_82392780;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,8(r24)
	PPC_STORE_U8(ctx.r24.u32 + 8, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82392870"))) PPC_WEAK_FUNC(sub_82392870);
PPC_FUNC_IMPL(__imp__sub_82392870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82392878;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,4872
	ctx.r5.s64 = ctx.r11.s64 + 4872;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x823928A0;
	sub_82137A08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824df200
	ctx.lr = 0x823928BC;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r10,4860
	ctx.r5.s64 = ctx.r10.s64 + 4860;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x823928D4;
	sub_82137A08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x824df200
	ctx.lr = 0x823928F0;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r9,4844
	ctx.r5.s64 = ctx.r9.s64 + 4844;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82392908;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82392924;
	sub_824DF200(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239292C"))) PPC_WEAK_FUNC(sub_8239292C);
PPC_FUNC_IMPL(__imp__sub_8239292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392930"))) PPC_WEAK_FUNC(sub_82392930);
PPC_FUNC_IMPL(__imp__sub_82392930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,4984
	ctx.r10.s64 = ctx.r11.s64 + 4984;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392940"))) PPC_WEAK_FUNC(sub_82392940);
PPC_FUNC_IMPL(__imp__sub_82392940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,4992
	ctx.r3.s64 = ctx.r11.s64 + 4992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239294C"))) PPC_WEAK_FUNC(sub_8239294C);
PPC_FUNC_IMPL(__imp__sub_8239294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392950"))) PPC_WEAK_FUNC(sub_82392950);
PPC_FUNC_IMPL(__imp__sub_82392950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,4984
	ctx.r10.s64 = ctx.r11.s64 + 4984;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d2028
	sub_821D2028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82392960"))) PPC_WEAK_FUNC(sub_82392960);
PPC_FUNC_IMPL(__imp__sub_82392960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r3,2146
	ctx.r11.s64 = ctx.r3.s64 + 2146;
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f13,7444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// lfs f0,3796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r5,r8,9,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1FF;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r4,-32(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r3,-32(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// rlwinm r6,r9,9,23,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1FF;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// rlwinm r31,r9,19,22,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3FF;
	// rlwinm r30,r8,19,22,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x3FF;
	// rlwinm r6,r6,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r5,r5,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r9,r9,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x8000;
	// rlwinm r8,r8,16,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x8000;
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | ctx.r31.u64;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// or r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
loc_823929F4:
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r6,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r6.u16);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x823929f4
	if (!ctx.cr0.eq) goto loc_823929F4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392A20"))) PPC_WEAK_FUNC(sub_82392A20);
PPC_FUNC_IMPL(__imp__sub_82392A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x82392A28;
	__savegprlr_21(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x82392A38;
	sub_82388580(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,-10240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10240);
	// bl 0x82270170
	ctx.lr = 0x82392A4C;
	sub_82270170(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x824e70f0
	ctx.lr = 0x82392A54;
	sub_824E70F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82392a6c
	if (!ctx.cr6.eq) goto loc_82392A6C;
loc_82392A60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
loc_82392A6C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r22,42
	ctx.r22.s64 = 42;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r24,108
	ctx.r24.s64 = 108;
	// li r25,111
	ctx.r25.s64 = 111;
	// li r26,118
	ctx.r26.s64 = 118;
	// li r27,101
	ctx.r27.s64 = 101;
	// li r28,104
	ctx.r28.s64 = 104;
	// li r30,97
	ctx.r30.s64 = 97;
	// li r3,110
	ctx.r3.s64 = 110;
	// li r4,100
	ctx.r4.s64 = 100;
	// li r21,43
	ctx.r21.s64 = 43;
loc_82392A9C:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r7,112
	ctx.r10.s64 = ctx.r7.s64 * 112;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rlwinm r23,r9,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwx r5,r23,r8
	PPC_STORE_U32(ctx.r23.u32 + ctx.r8.u32, ctx.r5.u32);
loc_82392AC8:
	// lbzx r9,r6,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r8,r8,-91
	ctx.r8.s64 = ctx.r8.s64 + -91;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x82392b84
	if (ctx.cr6.gt) goto loc_82392B84;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// addi r12,r12,10996
	ctx.r12.s64 = ctx.r12.s64 + 10996;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		goto loc_82392B48;
	case 1:
		goto loc_82392B7C;
	case 2:
		goto loc_82392B04;
	case 3:
		goto loc_82392B0C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,11080(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 11080);
	// lwz r17,11132(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 11132);
	// lwz r17,11012(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 11012);
	// lwz r17,11020(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 11020);
loc_82392B04:
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// b 0x82392b8c
	goto loc_82392B8C;
loc_82392B0C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82392b40
	if (!ctx.cr6.eq) goto loc_82392B40;
	// sth r24,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r24.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r25,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r25.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// b 0x82392b8c
	goto loc_82392B8C;
loc_82392B40:
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// b 0x82392b90
	goto loc_82392B90;
loc_82392B48:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82392b40
	if (!ctx.cr6.eq) goto loc_82392B40;
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// b 0x82392b8c
	goto loc_82392B8C;
loc_82392B7C:
	// sth r21,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r21.u16);
	// b 0x82392b8c
	goto loc_82392B8C;
loc_82392B84:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_82392B8C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82392B90:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// blt cr6,0x82392ac8
	if (ctx.cr6.lt) goto loc_82392AC8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// sthx r31,r11,r5
	PPC_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u16);
	// sthx r10,r23,r9
	PPC_STORE_U16(ctx.r23.u32 + ctx.r9.u32, ctx.r10.u16);
	// blt cr6,0x82392a9c
	if (ctx.cr6.lt) goto loc_82392A9C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,5068
	ctx.r4.s64 = ctx.r10.s64 + 5068;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// sth r31,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r31.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8244b350
	ctx.lr = 0x82392BF4;
	sub_8244B350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82392c80
	if (!ctx.cr6.eq) goto loc_82392C80;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392c80
	if (ctx.cr6.eq) goto loc_82392C80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82392a60
	if (!ctx.cr6.gt) goto loc_82392A60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r30,r1,82
	ctx.r30.s64 = ctx.r1.s64 + 82;
	// addi r28,r11,5044
	ctx.r28.s64 = ctx.r11.s64 + 5044;
loc_82392C20:
	// lwz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 98);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82392c60
	if (!ctx.cr6.eq) goto loc_82392C60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82130000
	ctx.lr = 0x82392C3C;
	sub_82130000(ctx, base);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82392c20
	if (ctx.cr6.lt) goto loc_82392C20;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
loc_82392C60:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r8,5004
	ctx.r3.s64 = ctx.r8.s64 + 5004;
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// bl 0x82130000
	ctx.lr = 0x82392C80;
	sub_82130000(ctx, base);
loc_82392C80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82392C8C"))) PPC_WEAK_FUNC(sub_82392C8C);
PPC_FUNC_IMPL(__imp__sub_82392C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392C90"))) PPC_WEAK_FUNC(sub_82392C90);
PPC_FUNC_IMPL(__imp__sub_82392C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82392C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f12,15360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15360);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,14884
	ctx.r11.s64 = ctx.r11.s64 + 14884;
	// lfs f11,3796(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3796);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82392cf0
	if (!ctx.cr6.lt) goto loc_82392CF0;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82392d00
	goto loc_82392D00;
loc_82392CF0:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82392D00:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82392d28
	if (!ctx.cr6.lt) goto loc_82392D28;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82392d38
	goto loc_82392D38;
loc_82392D28:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82392D38:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82392d64
	if (!ctx.cr6.lt) goto loc_82392D64;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82392d74
	goto loc_82392D74;
loc_82392D64:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82392D74:
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x826186c0
	ctx.lr = 0x82392D88;
	sub_826186C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392dc0
	if (ctx.cr6.eq) goto loc_82392DC0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82618390
	ctx.lr = 0x82392DB0;
	sub_82618390(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826188b8
	ctx.lr = 0x82392DBC;
	sub_826188B8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82392DC0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392e08
	if (ctx.cr6.eq) goto loc_82392E08;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82299788
	ctx.lr = 0x82392DDC;
	sub_82299788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392e08
	if (ctx.cr6.eq) goto loc_82392E08;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82299788
	ctx.lr = 0x82392DF8;
	sub_82299788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82392e0c
	if (!ctx.cr6.eq) goto loc_82392E0C;
loc_82392E08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82392E0C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82392E18"))) PPC_WEAK_FUNC(sub_82392E18);
PPC_FUNC_IMPL(__imp__sub_82392E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82392E20;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// lfs f31,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r29,r8,1
	ctx.r29.u64 = ctx.r8.u64 ^ 1;
	// bl 0x82392c90
	ctx.lr = 0x82392E58;
	sub_82392C90(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82392ed4
	if (ctx.cr6.eq) goto loc_82392ED4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392c90
	ctx.lr = 0x82392E74;
	sub_82392C90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392ed4
	if (ctx.cr6.eq) goto loc_82392ED4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299788
	ctx.lr = 0x82392E90;
	sub_82299788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392ed4
	if (ctx.cr6.eq) goto loc_82392ED4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299788
	ctx.lr = 0x82392EAC;
	sub_82299788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392ed4
	if (ctx.cr6.eq) goto loc_82392ED4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82618f70
	ctx.lr = 0x82392EC4;
	sub_82618F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82392ed8
	if (!ctx.cr6.eq) goto loc_82392ED8;
loc_82392ED4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82392ED8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82392EE8"))) PPC_WEAK_FUNC(sub_82392EE8);
PPC_FUNC_IMPL(__imp__sub_82392EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// addi r8,r9,-26448
	ctx.r8.s64 = ctx.r9.s64 + -26448;
	// lbz r10,2044(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2044);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lfsx f1,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392F04"))) PPC_WEAK_FUNC(sub_82392F04);
PPC_FUNC_IMPL(__imp__sub_82392F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392F08"))) PPC_WEAK_FUNC(sub_82392F08);
PPC_FUNC_IMPL(__imp__sub_82392F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// addi r6,r9,4364
	ctx.r6.s64 = ctx.r9.s64 + 4364;
	// addi r5,r7,-26448
	ctx.r5.s64 = ctx.r7.s64 + -26448;
	// lbz r10,2048(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2048);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lbz r8,2044(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2044);
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// rotlwi r3,r10,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbz r11,2046(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2046);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lfs f0,5076(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5076);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r9,-26032
	ctx.r7.s64 = ctx.r9.s64 + -26032;
	// lfsx f13,r3,r6
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmsubs f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// lfsx f10,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,14884(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14884);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f10,f0,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392F68"))) PPC_WEAK_FUNC(sub_82392F68);
PPC_FUNC_IMPL(__imp__sub_82392F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823db9d4
	ctx.lr = 0x82392F78;
	sub_823DB9D4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r6,-32129
	ctx.r6.s64 = -2105606144;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// addi r3,r6,-26448
	ctx.r3.s64 = ctx.r6.s64 + -26448;
	// addi r10,r8,4364
	ctx.r10.s64 = ctx.r8.s64 + 4364;
	// lbz r9,2048(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2048);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lbz r7,2044(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2044);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rotlwi r6,r9,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r11,2046(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2046);
	// rotlwi r9,r7,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// lfs f0,5076(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5076);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r8,r7,-26032
	ctx.r8.s64 = ctx.r7.s64 + -26032;
	// lfsx f13,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmsubs f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// lbz r3,10(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// addi r4,r10,232
	ctx.r4.s64 = ctx.r10.s64 + 232;
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lfsx f10,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,14884(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14884);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f30,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f10,f0,f11
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f9,f31,f30
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fcmpu cr6,f9,f29
	ctx.cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// bge cr6,0x82393054
	if (!ctx.cr6.lt) goto loc_82393054;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,5300
	ctx.r3.s64 = ctx.r11.s64 + 5300;
	// bl 0x82130000
	ctx.lr = 0x82393010;
	sub_82130000(ctx, base);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r10,5268
	ctx.r3.s64 = ctx.r10.s64 + 5268;
	// bl 0x82130000
	ctx.lr = 0x82393034;
	sub_82130000(ctx, base);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r9,5240
	ctx.r3.s64 = ctx.r9.s64 + 5240;
	// bl 0x82130000
	ctx.lr = 0x8239304C;
	sub_82130000(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82393100
	goto loc_82393100;
loc_82393054:
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x823930b0
	if (!ctx.cr6.gt) goto loc_823930B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,5204
	ctx.r3.s64 = ctx.r11.s64 + 5204;
	// bl 0x82130000
	ctx.lr = 0x8239306C;
	sub_82130000(ctx, base);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r10,5172
	ctx.r3.s64 = ctx.r10.s64 + 5172;
	// bl 0x82130000
	ctx.lr = 0x82393090;
	sub_82130000(ctx, base);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r9,5148
	ctx.r3.s64 = ctx.r9.s64 + 5148;
	// bl 0x82130000
	ctx.lr = 0x823930A8;
	sub_82130000(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82393100
	goto loc_82393100;
loc_823930B0:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// ble cr6,0x823930fc
	if (!ctx.cr6.gt) goto loc_823930FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,5116
	ctx.r3.s64 = ctx.r11.s64 + 5116;
	// bl 0x82130000
	ctx.lr = 0x823930C4;
	sub_82130000(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r10,5100
	ctx.r3.s64 = ctx.r10.s64 + 5100;
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x82130000
	ctx.lr = 0x823930DC;
	sub_82130000(ctx, base);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r9,5080
	ctx.r3.s64 = ctx.r9.s64 + 5080;
	// bl 0x82130000
	ctx.lr = 0x823930F4;
	sub_82130000(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82393100
	goto loc_82393100;
loc_823930FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82393100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823dba20
	ctx.lr = 0x8239310C;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393118"))) PPC_WEAK_FUNC(sub_82393118);
PPC_FUNC_IMPL(__imp__sub_82393118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-26768
	ctx.r9.s64 = ctx.r11.s64 + -26768;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2244
	ctx.r3.s64 = ctx.r11.s64 + 2244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393144"))) PPC_WEAK_FUNC(sub_82393144);
PPC_FUNC_IMPL(__imp__sub_82393144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393148"))) PPC_WEAK_FUNC(sub_82393148);
PPC_FUNC_IMPL(__imp__sub_82393148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82393150;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r10,-26768
	ctx.r28.s64 = ctx.r10.s64 + -26768;
	// addi r29,r11,4272
	ctx.r29.s64 = ctx.r11.s64 + 4272;
loc_8239316C:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823931ac
	if (!ctx.cr6.gt) goto loc_823931AC;
loc_8239317C:
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,2244
	ctx.r3.s64 = ctx.r11.s64 + 2244;
	// bl 0x8236e2e8
	ctx.lr = 0x8239319C;
	sub_8236E2E8(ctx, base);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8239317c
	if (ctx.cr6.lt) goto loc_8239317C;
loc_823931AC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// blt cr6,0x8239316c
	if (ctx.cr6.lt) goto loc_8239316C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823931C0"))) PPC_WEAK_FUNC(sub_823931C0);
PPC_FUNC_IMPL(__imp__sub_823931C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,4272
	ctx.r9.s64 = ctx.r10.s64 + 4272;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// addi r7,r10,-26768
	ctx.r7.s64 = ctx.r10.s64 + -26768;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,113
	ctx.r11.s64 = ctx.r11.s64 + 113;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82393200:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82393210
	if (ctx.cr6.eq) goto loc_82393210;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82393210:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x82393200
	if (!ctx.cr0.eq) goto loc_82393200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393220"))) PPC_WEAK_FUNC(sub_82393220);
PPC_FUNC_IMPL(__imp__sub_82393220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82393228;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r10,r11,4272
	ctx.r10.s64 = ctx.r11.s64 + 4272;
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82393370
	if (!ctx.cr6.gt) goto loc_82393370;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r28,r11,-26768
	ctx.r28.s64 = ctx.r11.s64 + -26768;
loc_8239325C:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// bne cr6,0x82393330
	if (!ctx.cr6.eq) goto loc_82393330;
	// addi r10,r11,113
	ctx.r10.s64 = ctx.r11.s64 + 113;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x82393330
	if (ctx.cr6.eq) goto loc_82393330;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,2260(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2260);
	// sth r10,2240(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2240, ctx.r10.u16);
	// lbz r9,2263(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2263);
	// stb r9,2243(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2243, ctx.r9.u8);
	// lhz r8,2258(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2258);
	// sth r8,2238(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2238, ctx.r8.u16);
	// lhz r7,2244(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2244);
	// sth r7,2224(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2224, ctx.r7.u16);
	// lhz r6,2246(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2246);
	// sth r6,2226(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2226, ctx.r6.u16);
	// lhz r5,2248(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2248);
	// sth r5,2228(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2228, ctx.r5.u16);
	// lhz r4,2250(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2250);
	// sth r4,2230(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2230, ctx.r4.u16);
	// lwz r3,2252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2252);
	// stw r3,2232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2232, ctx.r3.u32);
	// lhz r10,2256(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2256);
	// sth r10,2236(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2236, ctx.r10.u16);
	// lbz r9,2262(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2262);
	// stb r9,2242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2242, ctx.r9.u8);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,2244
	ctx.r3.s64 = ctx.r11.s64 + 2244;
	// bl 0x8236e2e8
	ctx.lr = 0x8239331C;
	sub_8236E2E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393220
	ctx.lr = 0x8239332C;
	sub_82393220(ctx, base);
	// b 0x82393364
	goto loc_82393364;
loc_82393330:
	// addi r10,r11,113
	ctx.r10.s64 = ctx.r11.s64 + 113;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// bne cr6,0x82393364
	if (!ctx.cr6.eq) goto loc_82393364;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,2244
	ctx.r3.s64 = ctx.r11.s64 + 2244;
	// bl 0x8236e2e8
	ctx.lr = 0x82393364;
	sub_8236E2E8(ctx, base);
loc_82393364:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8239325c
	if (ctx.cr6.gt) goto loc_8239325C;
loc_82393370:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82393378"))) PPC_WEAK_FUNC(sub_82393378);
PPC_FUNC_IMPL(__imp__sub_82393378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,4272
	ctx.r10.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r7,r11,-26768
	ctx.r7.s64 = ctx.r11.s64 + -26768;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82393410
	if (!ctx.cr6.gt) goto loc_82393410;
loc_8239339C:
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r8,2240(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2240);
	// sth r8,2260(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2260, ctx.r8.u16);
	// lbz r4,2243(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2243);
	// stb r4,2263(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2263, ctx.r4.u8);
	// lhz r8,2238(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2238);
	// sth r8,2258(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2258, ctx.r8.u16);
	// lhz r4,2224(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2224);
	// sth r4,2244(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2244, ctx.r4.u16);
	// lhz r8,2226(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2226);
	// sth r8,2246(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2246, ctx.r8.u16);
	// lhz r4,2228(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2228);
	// sth r4,2248(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2248, ctx.r4.u16);
	// lhz r8,2230(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2230);
	// sth r8,2250(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2250, ctx.r8.u16);
	// lwz r4,2232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2232);
	// stw r4,2252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2252, ctx.r4.u32);
	// lhz r8,2236(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2236);
	// sth r8,2256(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2256, ctx.r8.u16);
	// lbz r4,2242(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2242);
	// stb r4,2262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2262, ctx.r4.u8);
	// bgt cr6,0x8239339c
	if (ctx.cr6.gt) goto loc_8239339C;
loc_82393410:
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lhz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,2244
	ctx.r10.s64 = ctx.r11.s64 + 2244;
	// sth r9,2260(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2260, ctx.r9.u16);
	// lbz r7,19(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 19);
	// stb r7,2263(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2263, ctx.r7.u8);
	// lhz r5,14(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 14);
	// sth r5,2258(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2258, ctx.r5.u16);
	// lhz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// sth r4,2244(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2244, ctx.r4.u16);
	// lhz r3,2(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// sth r3,2246(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2246, ctx.r3.u16);
	// lhz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// sth r10,2248(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2248, ctx.r10.u16);
	// lhz r9,6(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// sth r9,2250(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2250, ctx.r9.u16);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,2252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2252, ctx.r8.u32);
	// lhz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// sth r7,2256(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2256, ctx.r7.u16);
	// lbz r6,18(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 18);
	// stb r6,2262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2262, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393480"))) PPC_WEAK_FUNC(sub_82393480);
PPC_FUNC_IMPL(__imp__sub_82393480) {
	PPC_FUNC_PROLOGUE();
	// li r3,48
	ctx.r3.s64 = 48;
	// b 0x82130528
	sub_82130528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82393488"))) PPC_WEAK_FUNC(sub_82393488);
PPC_FUNC_IMPL(__imp__sub_82393488) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,4984
	ctx.r10.s64 = ctx.r11.s64 + 4984;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821d2028
	ctx.lr = 0x823934B4;
	sub_821D2028(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823934cc
	if (ctx.cr6.eq) goto loc_823934CC;
	// bl 0x82130588
	ctx.lr = 0x823934C8;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823934CC:
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

__attribute__((alias("__imp__sub_823934E4"))) PPC_WEAK_FUNC(sub_823934E4);
PPC_FUNC_IMPL(__imp__sub_823934E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823934E8"))) PPC_WEAK_FUNC(sub_823934E8);
PPC_FUNC_IMPL(__imp__sub_823934E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x823934F0;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x82393994
	if (ctx.cr6.eq) goto loc_82393994;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// li r5,320
	ctx.r5.s64 = 320;
	// bl 0x823da950
	ctx.lr = 0x82393514;
	sub_823DA950(ctx, base);
	// addi r10,r31,2080
	ctx.r10.s64 = ctx.r31.s64 + 2080;
	// addi r11,r30,2080
	ctx.r11.s64 = ctx.r30.s64 + 2080;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393524:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82393524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393524;
	// addi r10,r31,2032
	ctx.r10.s64 = ctx.r31.s64 + 2032;
	// addi r11,r30,2032
	ctx.r11.s64 = ctx.r30.s64 + 2032;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393548:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82393548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393548;
	// lhz r8,2052(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2052);
	// addi r10,r31,1568
	ctx.r10.s64 = ctx.r31.s64 + 1568;
	// addi r11,r30,1568
	ctx.r11.s64 = ctx.r30.s64 + 1568;
	// li r9,6
	ctx.r9.s64 = 6;
	// sth r8,2052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2052, ctx.r8.u16);
	// lbz r7,2054(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2054);
	// stb r7,2054(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2054, ctx.r7.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239357C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8239357c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239357C;
	// addi r10,r31,1616
	ctx.r10.s64 = ctx.r31.s64 + 1616;
	// addi r11,r30,1616
	ctx.r11.s64 = ctx.r30.s64 + 1616;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823935A0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823935a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823935A0;
	// addi r10,r31,1664
	ctx.r10.s64 = ctx.r31.s64 + 1664;
	// addi r11,r30,1664
	ctx.r11.s64 = ctx.r30.s64 + 1664;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823935C4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823935c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823935C4;
	// addi r10,r31,1712
	ctx.r10.s64 = ctx.r31.s64 + 1712;
	// addi r11,r30,1712
	ctx.r11.s64 = ctx.r30.s64 + 1712;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823935E8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823935e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823935E8;
	// addi r10,r31,1760
	ctx.r10.s64 = ctx.r31.s64 + 1760;
	// addi r11,r30,1760
	ctx.r11.s64 = ctx.r30.s64 + 1760;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239360C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8239360c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239360C;
	// addi r10,r31,1808
	ctx.r10.s64 = ctx.r31.s64 + 1808;
	// addi r11,r30,1808
	ctx.r11.s64 = ctx.r30.s64 + 1808;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393630:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82393630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393630;
	// lwz r11,2068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2068);
	// addi r4,r30,2144
	ctx.r4.s64 = ctx.r30.s64 + 2144;
	// subf r29,r30,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r30.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,2072(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2072);
	// stw r10,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r10.u32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lwz r9,2076(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2076);
	// addi r5,r10,-26768
	ctx.r5.s64 = ctx.r10.s64 + -26768;
	// stw r9,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r9.u32);
	// addi r3,r11,4272
	ctx.r3.s64 = ctx.r11.s64 + 4272;
	// lbz r8,8004(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8004);
	// stb r8,8004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8004, ctx.r8.u8);
loc_82393680:
	// add r10,r29,r4
	ctx.r10.u64 = ctx.r29.u64 + ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393690:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82393690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393690;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82393710
	if (!ctx.cr6.gt) goto loc_82393710;
loc_823936B4:
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r9,2244
	ctx.r9.s64 = ctx.r9.s64 + 2244;
	// addi r11,r11,2244
	ctx.r11.s64 = ctx.r11.s64 + 2244;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823936EC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823936ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823936EC;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823936b4
	if (ctx.cr6.lt) goto loc_823936B4;
loc_82393710:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// cmpwi cr6,r6,20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 20, ctx.xer);
	// blt cr6,0x82393680
	if (ctx.cr6.lt) goto loc_82393680;
	// addi r10,r31,2055
	ctx.r10.s64 = ctx.r31.s64 + 2055;
	// addi r11,r30,2055
	ctx.r11.s64 = ctx.r30.s64 + 2055;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393730:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82393730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393730;
	// addi r9,r30,496
	ctx.r9.s64 = ctx.r30.s64 + 496;
	// li r7,19
	ctx.r7.s64 = 19;
loc_8239374C:
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239375C:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8239375c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239375C;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// bne 0x8239374c
	if (!ctx.cr0.eq) goto loc_8239374C;
	// ld r10,1408(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1408);
	// addi r11,r31,1408
	ctx.r11.s64 = ctx.r31.s64 + 1408;
	// addi r11,r31,1856
	ctx.r11.s64 = ctx.r31.s64 + 1856;
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// li r8,1984
	ctx.r8.s64 = 1984;
	// addi r9,r30,1408
	ctx.r9.s64 = ctx.r30.s64 + 1408;
	// std r10,1408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1408, ctx.r10.u64);
	// li r9,2000
	ctx.r9.s64 = 2000;
	// ld r7,1416(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1416);
	// li r10,2016
	ctx.r10.s64 = 2016;
	// std r7,1416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1416, ctx.r7.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,1424(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1424);
	// std r6,1424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1424, ctx.r6.u64);
	// ld r5,1432(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1432);
	// std r5,1432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1432, ctx.r5.u64);
	// ld r4,1440(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1440);
	// std r4,1440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1440, ctx.r4.u64);
	// ld r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1448);
	// std r11,1448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1448, ctx.r11.u64);
	// ld r7,1456(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1456);
	// std r7,1456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1456, ctx.r7.u64);
	// ld r6,1464(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1464);
	// std r6,1464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1464, ctx.r6.u64);
	// ld r5,1472(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1472);
	// std r5,1472(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1472, ctx.r5.u64);
	// ld r4,1480(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1480);
	// std r4,1480(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1480, ctx.r4.u64);
	// ld r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1488);
	// std r11,1488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1488, ctx.r11.u64);
	// ld r7,1496(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1496);
	// std r7,1496(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1496, ctx.r7.u64);
	// ld r6,1504(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1504);
	// std r6,1504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1504, ctx.r6.u64);
	// ld r5,1512(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1512);
	// std r5,1512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1512, ctx.r5.u64);
	// ld r4,1520(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1520);
	// std r4,1520(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1520, ctx.r4.u64);
	// ld r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1528);
	// std r11,1528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1528, ctx.r11.u64);
	// ld r7,1536(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1536);
	// std r7,1536(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1536, ctx.r7.u64);
	// ld r6,1544(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1544);
	// std r6,1544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1544, ctx.r6.u64);
	// ld r5,1552(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1552);
	// std r5,1552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1552, ctx.r5.u64);
	// ld r4,1560(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1560);
	// std r4,1560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1560, ctx.r4.u64);
	// ld r11,1856(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1856);
	// std r11,1856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1856, ctx.r11.u64);
	// ld r7,1864(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1864);
	// std r7,1864(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1864, ctx.r7.u64);
	// ld r6,1872(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1872);
	// std r6,1872(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1872, ctx.r6.u64);
	// ld r5,1880(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1880);
	// std r5,1880(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1880, ctx.r5.u64);
	// ld r4,1888(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1888);
	// std r4,1888(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1888, ctx.r4.u64);
	// ld r11,1896(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1896);
	// std r11,1896(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1896, ctx.r11.u64);
	// ld r7,1904(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1904);
	// std r7,1904(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1904, ctx.r7.u64);
	// ld r6,1912(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1912);
	// std r6,1912(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1912, ctx.r6.u64);
	// ld r5,1920(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1920);
	// std r5,1920(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1920, ctx.r5.u64);
	// ld r4,1928(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1928);
	// std r4,1928(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1928, ctx.r4.u64);
	// ld r11,1936(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1936);
	// std r11,1936(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1936, ctx.r11.u64);
	// ld r7,1944(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1944);
	// std r7,1944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1944, ctx.r7.u64);
	// ld r6,1952(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1952);
	// std r6,1952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1952, ctx.r6.u64);
	// ld r5,1960(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1960);
	// std r5,1960(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1960, ctx.r5.u64);
	// ld r4,1968(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1968);
	// std r4,1968(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1968, ctx.r4.u64);
	// ld r11,1976(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1976);
	// std r11,1976(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1976, ctx.r11.u64);
	// lvx128 v63,r30,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lvx128 v62,r30,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r30,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// ld r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 336);
	// std r10,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r10.u64);
	// ld r9,344(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 344);
	// std r9,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r9.u64);
	// ld r8,352(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 352);
	// std r8,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r8.u64);
	// ld r7,360(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 360);
	// std r7,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r7.u64);
	// ld r6,368(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 368);
	// std r6,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r6.u64);
	// ld r5,376(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 376);
	// std r5,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r5.u64);
	// ld r4,384(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 384);
	// std r4,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r4.u64);
	// ld r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 392);
	// std r11,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r11.u64);
	// ld r10,400(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 400);
	// std r10,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r10.u64);
	// ld r9,408(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 408);
	// std r9,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r9.u64);
	// ld r8,416(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 416);
	// std r8,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r8.u64);
	// ld r7,424(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 424);
	// std r7,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r7.u64);
	// ld r6,432(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 432);
	// std r6,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r6.u64);
	// ld r5,440(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 440);
	// std r5,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r5.u64);
	// ld r4,448(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 448);
	// std r4,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r4.u64);
	// ld r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 456);
	// std r11,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r11.u64);
	// ld r10,464(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 464);
	// std r10,464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 464, ctx.r10.u64);
	// ld r9,472(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 472);
	// std r9,472(r31)
	PPC_STORE_U64(ctx.r31.u32 + 472, ctx.r9.u64);
	// ld r8,480(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 480);
	// std r8,480(r31)
	PPC_STORE_U64(ctx.r31.u32 + 480, ctx.r8.u64);
	// ld r7,488(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 488);
	// std r7,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r7.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82393994:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823939A0"))) PPC_WEAK_FUNC(sub_823939A0);
PPC_FUNC_IMPL(__imp__sub_823939A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x823939A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,2068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2068, ctx.r11.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r11,2072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2072, ctx.r11.u32);
	// lfs f13,3796(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,2076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2076, ctx.r11.u32);
	// lfs f0,7444(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,8004(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8004, ctx.r8.u8);
	// stfs f13,1984(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1984, temp.u32);
	// stfs f13,1988(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1988, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f13,1992(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1992, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// stfs f13,2000(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2000, temp.u32);
	// addi r11,r3,496
	ctx.r11.s64 = ctx.r3.s64 + 496;
	// stfs f13,2004(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2004, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,2008(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2008, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,14192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14192);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,2024(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2024, temp.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stfs f13,2016(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2016, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stfs f13,2020(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2020, temp.u32);
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r28,4
	ctx.r28.s64 = 4;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,-29232(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29232);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f10,512(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f13,516(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f13,520(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// lfs f11,32692(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32692);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f12,-28880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -28880);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// stfs f11,500(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stfs f12,504(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// lfs f8,12428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12428);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r3,544
	ctx.r10.s64 = ctx.r3.s64 + 544;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v59,r0,r11
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v63,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v62,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vmulfp128 v58,v59,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f9,-13148(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -13148);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v58,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r8.u32);
	// stfs f10,560(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 560, temp.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stfs f13,564(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 564, temp.u32);
	// stfs f13,568(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 568, temp.u32);
	// stfs f0,544(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// stfs f11,548(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stfs f12,552(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// lvx128 v57,r0,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v56,v57,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v56,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 576, ctx.r30.u32);
	// stfs f0,608(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 608, temp.u32);
	// stfs f0,612(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 612, temp.u32);
	// stfs f13,616(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 616, temp.u32);
	// stfs f0,592(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 592, temp.u32);
	// stfs f11,596(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 596, temp.u32);
	// stfs f12,600(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 600, temp.u32);
	// stw r4,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r4.u32);
	// stfs f0,656(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 656, temp.u32);
	// stfs f0,660(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 660, temp.u32);
	// stfs f9,664(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 664, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f0,640(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stfs f11,644(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stfs f12,648(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 648, temp.u32);
	// stw r9,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r9.u32);
	// stfs f0,704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 704, temp.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stfs f0,708(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 708, temp.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stfs f0,712(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stfs f0,688(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 688, temp.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// stfs f11,692(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 692, temp.u32);
	// stfs f12,696(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 696, temp.u32);
	// stw r28,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r28.u32);
	// stfs f0,752(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 752, temp.u32);
	// stfs f13,760(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 760, temp.u32);
	// lfs f9,-32032(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -32032);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,756(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 756, temp.u32);
	// stfs f0,736(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 736, temp.u32);
	// stfs f11,740(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 740, temp.u32);
	// stfs f12,744(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 744, temp.u32);
	// stw r9,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r9.u32);
	// lfs f9,14884(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14884);
	ctx.f9.f64 = double(temp.f32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stfs f9,800(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 800, temp.u32);
	// stfs f9,804(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 804, temp.u32);
	// stfs f9,808(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 808, temp.u32);
	// stfs f0,784(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 784, temp.u32);
	// stfs f11,788(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 788, temp.u32);
	// stfs f12,792(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 792, temp.u32);
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// lfs f7,-17424(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -17424);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,848(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 848, temp.u32);
	// stfs f7,852(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 852, temp.u32);
	// lfs f6,31308(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 31308);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,856(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 856, temp.u32);
	// stfs f0,832(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 832, temp.u32);
	// stfs f11,836(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 836, temp.u32);
	// stfs f12,840(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 840, temp.u32);
	// stw r8,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r8.u32);
	// stfs f0,896(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 896, temp.u32);
	// stfs f12,900(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 900, temp.u32);
	// stfs f9,904(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 904, temp.u32);
	// stfs f0,880(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 880, temp.u32);
	// stfs f11,884(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 884, temp.u32);
	// stfs f12,888(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 888, temp.u32);
	// stw r31,912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 912, ctx.r31.u32);
	// stfs f10,944(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 944, temp.u32);
	// stfs f13,948(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 948, temp.u32);
	// stfs f13,952(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 952, temp.u32);
	// stfs f0,928(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 928, temp.u32);
	// stfs f11,932(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 932, temp.u32);
	// stfs f12,936(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 936, temp.u32);
	// stw r11,960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 960, ctx.r11.u32);
	// stfs f10,992(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 992, temp.u32);
	// stfs f10,996(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 996, temp.u32);
	// stfs f13,1000(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1000, temp.u32);
	// stfs f0,976(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// stfs f11,980(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// stfs f12,984(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// stw r11,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r11.u32);
	// stfs f10,1040(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1040, temp.u32);
	// stfs f10,1044(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1044, temp.u32);
	// stfs f10,1048(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1048, temp.u32);
	// stfs f0,1024(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1024, temp.u32);
	// stfs f11,1028(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1028, temp.u32);
	// stfs f12,1032(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1032, temp.u32);
	// stw r11,1056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1056, ctx.r11.u32);
	// addi r11,r3,1072
	ctx.r11.s64 = ctx.r3.s64 + 1072;
	// stfs f10,1088(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1088, temp.u32);
	// stfs f13,1092(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1092, temp.u32);
	// stfs f13,1096(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1096, temp.u32);
	// stfs f0,1072(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1072, temp.u32);
	// stfs f11,1076(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1076, temp.u32);
	// stfs f12,1080(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1080, temp.u32);
	// lvx128 v55,r0,r11
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// lvlx128 v54,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v53,v54,0
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vmulfp128 v52,v55,v53
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v53.f32)));
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,16
	ctx.r4.s64 = 16;
	// stvx128 v52,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r27,1104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1104, ctx.r27.u32);
	// stfs f0,1136(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1136, temp.u32);
	// stfs f13,1140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1140, temp.u32);
	// stfs f13,1144(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1144, temp.u32);
	// stfs f0,1120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1120, temp.u32);
	// stfs f11,1124(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1124, temp.u32);
	// stfs f12,1128(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1128, temp.u32);
	// stw r10,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r10.u32);
	// stfs f13,1184(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1184, temp.u32);
	// stfs f13,1188(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1188, temp.u32);
	// stfs f0,1192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1192, temp.u32);
	// stfs f0,1168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1168, temp.u32);
	// stfs f11,1172(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
	// stfs f12,1176(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1176, temp.u32);
	// stw r10,1200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1200, ctx.r10.u32);
	// stfs f13,1232(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1232, temp.u32);
	// stfs f13,1236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1236, temp.u32);
	// stfs f0,1240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1240, temp.u32);
	// stfs f0,1216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1216, temp.u32);
	// stfs f11,1220(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1220, temp.u32);
	// stfs f12,1224(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1224, temp.u32);
	// stw r7,1248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1248, ctx.r7.u32);
	// stfs f13,1280(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1280, temp.u32);
	// stfs f13,1284(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1284, temp.u32);
	// stfs f0,1288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1288, temp.u32);
	// stfs f0,1264(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1264, temp.u32);
	// stfs f11,1268(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1268, temp.u32);
	// stfs f12,1272(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1272, temp.u32);
	// stw r6,1296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1296, ctx.r6.u32);
	// stfs f13,1328(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1328, temp.u32);
	// stfs f13,1332(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1332, temp.u32);
	// stfs f0,1336(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1336, temp.u32);
	// stfs f0,1312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1312, temp.u32);
	// stfs f11,1316(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1316, temp.u32);
	// stfs f12,1320(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1320, temp.u32);
	// stw r5,1344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1344, ctx.r5.u32);
	// stfs f13,1376(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1376, temp.u32);
	// stfs f13,1380(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1380, temp.u32);
	// stfs f0,1384(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1384, temp.u32);
	// stfs f0,1360(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1360, temp.u32);
	// stfs f11,1364(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1364, temp.u32);
	// stfs f12,1368(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1368, temp.u32);
	// stw r4,1392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1392, ctx.r4.u32);
	// bl 0x82392960
	ctx.lr = 0x82393D04;
	sub_82392960(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82393D0C"))) PPC_WEAK_FUNC(sub_82393D0C);
PPC_FUNC_IMPL(__imp__sub_82393D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393D10"))) PPC_WEAK_FUNC(sub_82393D10);
PPC_FUNC_IMPL(__imp__sub_82393D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82393D18;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82257568
	ctx.lr = 0x82393D48;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393d90
	if (ctx.cr6.eq) goto loc_82393D90;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257568
	ctx.lr = 0x82393D64;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393d90
	if (ctx.cr6.eq) goto loc_82393D90;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257568
	ctx.lr = 0x82393D80;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82393d94
	if (!ctx.cr6.eq) goto loc_82393D94;
loc_82393D90:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82393D94:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393e14
	if (ctx.cr6.eq) goto loc_82393E14;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,15364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15364);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f1,8(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmuls f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82393E14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82393E20"))) PPC_WEAK_FUNC(sub_82393E20);
PPC_FUNC_IMPL(__imp__sub_82393E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82393E28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82393f8c
	if (!ctx.cr6.eq) goto loc_82393F8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
loc_82393E4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,14884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82393E64:
	// li r10,22064
	ctx.r10.s64 = 22064;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82393E6C:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82393e6c
	if (!ctx.cr6.eq) goto loc_82393E6C;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x8226b338
	ctx.lr = 0x82393E8C;
	sub_8226B338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393ed4
	if (ctx.cr6.eq) goto loc_82393ED4;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f90
	ctx.lr = 0x82393EA8;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393ed4
	if (ctx.cr6.eq) goto loc_82393ED4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f90
	ctx.lr = 0x82393EC4;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82393ed8
	if (!ctx.cr6.eq) goto loc_82393ED8;
loc_82393ED4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82393ED8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393f84
	if (ctx.cr6.eq) goto loc_82393F84;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82393f84
	if (!ctx.cr6.eq) goto loc_82393F84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82392618
	ctx.lr = 0x82393F00;
	sub_82392618(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393f7c
	if (ctx.cr6.eq) goto loc_82393F7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,19(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// bl 0x82618f70
	ctx.lr = 0x82393F18;
	sub_82618F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393f7c
	if (ctx.cr6.eq) goto loc_82393F7C;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r30,18
	ctx.r4.s64 = ctx.r30.s64 + 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822525b0
	ctx.lr = 0x82393F34;
	sub_822525B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393f7c
	if (ctx.cr6.eq) goto loc_82393F7C;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82299788
	ctx.lr = 0x82393F50;
	sub_82299788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393f7c
	if (ctx.cr6.eq) goto loc_82393F7C;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f90
	ctx.lr = 0x82393F6C;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82393f80
	if (!ctx.cr6.eq) goto loc_82393F80;
loc_82393F7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82393F80:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82393F84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82393F8C:
	// rlwinm r10,r11,3,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r9,r11,22
	ctx.r9.u64 = ctx.r11.u32 & 0x3FF;
	// rlwinm r11,r11,22,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r7,r11,112
	ctx.r7.s64 = ctx.r11.s64 + 112;
	// rlwinm r6,r8,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r5,r7,23,0,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0xFF800000;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3796(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82393e4c
	if (!ctx.cr6.lt) goto loc_82393E4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,14884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14884);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82393e64
	goto loc_82393E64;
}

__attribute__((alias("__imp__sub_82393FE0"))) PPC_WEAK_FUNC(sub_82393FE0);
PPC_FUNC_IMPL(__imp__sub_82393FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82393FE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r11,22064
	ctx.r11.s64 = 22064;
loc_82394004:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82394004
	if (!ctx.cr6.eq) goto loc_82394004;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// bl 0x82275750
	ctx.lr = 0x82394028;
	sub_82275750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394070
	if (ctx.cr6.eq) goto loc_82394070;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f80
	ctx.lr = 0x82394044;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394070
	if (ctx.cr6.eq) goto loc_82394070;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f80
	ctx.lr = 0x82394060;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82394074
	if (!ctx.cr6.eq) goto loc_82394074;
loc_82394070:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82394074:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82394120
	if (ctx.cr6.eq) goto loc_82394120;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82394120
	if (!ctx.cr6.eq) goto loc_82394120;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823926c0
	ctx.lr = 0x8239409C;
	sub_823926C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394118
	if (ctx.cr6.eq) goto loc_82394118;
	// addi r4,r29,19
	ctx.r4.s64 = ctx.r29.s64 + 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f10
	ctx.lr = 0x823940B4;
	sub_82618F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394118
	if (ctx.cr6.eq) goto loc_82394118;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r29,18
	ctx.r4.s64 = ctx.r29.s64 + 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822510e8
	ctx.lr = 0x823940D0;
	sub_822510E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394118
	if (ctx.cr6.eq) goto loc_82394118;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257568
	ctx.lr = 0x823940EC;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394118
	if (ctx.cr6.eq) goto loc_82394118;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f80
	ctx.lr = 0x82394108;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8239411c
	if (!ctx.cr6.eq) goto loc_8239411C;
loc_82394118:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239411C:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_82394120:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,14
	ctx.r3.s64 = ctx.r29.s64 + 14;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8213e850
	ctx.lr = 0x82394140;
	sub_8213E850(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239414C"))) PPC_WEAK_FUNC(sub_8239414C);
PPC_FUNC_IMPL(__imp__sub_8239414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394150"))) PPC_WEAK_FUNC(sub_82394150);
PPC_FUNC_IMPL(__imp__sub_82394150) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,7444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82393d10
	ctx.lr = 0x82394190;
	sub_82393D10(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239420c
	if (ctx.cr6.eq) goto loc_8239420C;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393d10
	ctx.lr = 0x823941AC;
	sub_82393D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239420c
	if (ctx.cr6.eq) goto loc_8239420C;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257568
	ctx.lr = 0x823941C8;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239420c
	if (ctx.cr6.eq) goto loc_8239420C;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257568
	ctx.lr = 0x823941E4;
	sub_82257568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239420c
	if (ctx.cr6.eq) goto loc_8239420C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618f10
	ctx.lr = 0x823941FC;
	sub_82618F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82394210
	if (!ctx.cr6.eq) goto loc_82394210;
loc_8239420C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82394210:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r6.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394244"))) PPC_WEAK_FUNC(sub_82394244);
PPC_FUNC_IMPL(__imp__sub_82394244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394248"))) PPC_WEAK_FUNC(sub_82394248);
PPC_FUNC_IMPL(__imp__sub_82394248) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,12428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12428);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82392c90
	ctx.lr = 0x82394278;
	sub_82392C90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823942c4
	if (ctx.cr6.eq) goto loc_823942C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82392c90
	ctx.lr = 0x82394298;
	sub_82392C90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823942c4
	if (ctx.cr6.eq) goto loc_823942C4;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226b338
	ctx.lr = 0x823942B4;
	sub_8226B338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823942c8
	if (!ctx.cr6.eq) goto loc_823942C8;
loc_823942C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823942C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_823942E4"))) PPC_WEAK_FUNC(sub_823942E4);
PPC_FUNC_IMPL(__imp__sub_823942E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823942E8"))) PPC_WEAK_FUNC(sub_823942E8);
PPC_FUNC_IMPL(__imp__sub_823942E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,12428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12428);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82393d10
	ctx.lr = 0x82394318;
	sub_82393D10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82394364
	if (ctx.cr6.eq) goto loc_82394364;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82393d10
	ctx.lr = 0x82394338;
	sub_82393D10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82394364
	if (ctx.cr6.eq) goto loc_82394364;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275750
	ctx.lr = 0x82394354;
	sub_82275750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82394368
	if (!ctx.cr6.eq) goto loc_82394368;
loc_82394364:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82394368:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82394384"))) PPC_WEAK_FUNC(sub_82394384);
PPC_FUNC_IMPL(__imp__sub_82394384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394388"))) PPC_WEAK_FUNC(sub_82394388);
PPC_FUNC_IMPL(__imp__sub_82394388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91cc
	ctx.lr = 0x82394390;
	__savegprlr_17(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,6684
	ctx.r5.s64 = ctx.r11.s64 + 6684;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2032
	ctx.r6.s64 = ctx.r29.s64 + 2032;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824df200
	ctx.lr = 0x823943BC;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,6676
	ctx.r5.s64 = ctx.r10.s64 + 6676;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2036
	ctx.r6.s64 = ctx.r29.s64 + 2036;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824df200
	ctx.lr = 0x823943DC;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,6664
	ctx.r5.s64 = ctx.r9.s64 + 6664;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2040
	ctx.r6.s64 = ctx.r29.s64 + 2040;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x823943FC;
	sub_824DF200(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,6652
	ctx.r5.s64 = ctx.r8.s64 + 6652;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2041
	ctx.r6.s64 = ctx.r29.s64 + 2041;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x8239441C;
	sub_824DF200(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,6640
	ctx.r5.s64 = ctx.r7.s64 + 6640;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2042
	ctx.r6.s64 = ctx.r29.s64 + 2042;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x8239443C;
	sub_824DF200(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r6,6628
	ctx.r5.s64 = ctx.r6.s64 + 6628;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2043
	ctx.r6.s64 = ctx.r29.s64 + 2043;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x8239445C;
	sub_824DF200(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,6616
	ctx.r5.s64 = ctx.r5.s64 + 6616;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2044
	ctx.r6.s64 = ctx.r29.s64 + 2044;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x8239447C;
	sub_824DF200(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r4,6604
	ctx.r5.s64 = ctx.r4.s64 + 6604;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2045
	ctx.r6.s64 = ctx.r29.s64 + 2045;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x8239449C;
	sub_824DF200(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,6592
	ctx.r5.s64 = ctx.r11.s64 + 6592;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2046
	ctx.r6.s64 = ctx.r29.s64 + 2046;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x823944BC;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,6580
	ctx.r5.s64 = ctx.r10.s64 + 6580;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2047
	ctx.r6.s64 = ctx.r29.s64 + 2047;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823944DC;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,6564
	ctx.r5.s64 = ctx.r9.s64 + 6564;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2048
	ctx.r6.s64 = ctx.r29.s64 + 2048;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x823944FC;
	sub_824DF200(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,6548
	ctx.r5.s64 = ctx.r8.s64 + 6548;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2049
	ctx.r6.s64 = ctx.r29.s64 + 2049;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x8239451C;
	sub_824DF200(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,6536
	ctx.r5.s64 = ctx.r7.s64 + 6536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2052
	ctx.r6.s64 = ctx.r29.s64 + 2052;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x8239453C;
	sub_824DF200(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r6,6524
	ctx.r5.s64 = ctx.r6.s64 + 6524;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2053
	ctx.r6.s64 = ctx.r29.s64 + 2053;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824df200
	ctx.lr = 0x8239455C;
	sub_824DF200(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r5,6512
	ctx.r5.s64 = ctx.r5.s64 + 6512;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2054
	ctx.r6.s64 = ctx.r29.s64 + 2054;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239457C;
	sub_824DF200(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r28,r29,2080
	ctx.r28.s64 = ctx.r29.s64 + 2080;
	// addi r27,r11,-27128
	ctx.r27.s64 = ctx.r11.s64 + -27128;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8239458C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823945A8;
	sub_824DF200(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r27,220
	ctx.r11.s64 = ctx.r27.s64 + 220;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8239458c
	if (ctx.cr6.lt) goto loc_8239458C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,6496
	ctx.r5.s64 = ctx.r11.s64 + 6496;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2136
	ctx.r6.s64 = ctx.r29.s64 + 2136;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823945DC;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,6484
	ctx.r5.s64 = ctx.r10.s64 + 6484;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2135
	ctx.r6.s64 = ctx.r29.s64 + 2135;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823945FC;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,6460
	ctx.r5.s64 = ctx.r9.s64 + 6460;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2137
	ctx.r6.s64 = ctx.r29.s64 + 2137;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239461C;
	sub_824DF200(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r7,6444
	ctx.r5.s64 = ctx.r7.s64 + 6444;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2138
	ctx.r6.s64 = ctx.r29.s64 + 2138;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239463C;
	sub_824DF200(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r6,6432
	ctx.r5.s64 = ctx.r6.s64 + 6432;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2139
	ctx.r6.s64 = ctx.r29.s64 + 2139;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239465C;
	sub_824DF200(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r5,6416
	ctx.r5.s64 = ctx.r5.s64 + 6416;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2141
	ctx.r6.s64 = ctx.r29.s64 + 2141;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239467C;
	sub_824DF200(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r4,6404
	ctx.r5.s64 = ctx.r4.s64 + 6404;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2063
	ctx.r6.s64 = ctx.r29.s64 + 2063;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239469C;
	sub_824DF200(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r3,6392
	ctx.r5.s64 = ctx.r3.s64 + 6392;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2055
	ctx.r6.s64 = ctx.r29.s64 + 2055;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823946BC;
	sub_824DF200(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,6380
	ctx.r5.s64 = ctx.r11.s64 + 6380;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2056
	ctx.r6.s64 = ctx.r29.s64 + 2056;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823946DC;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,6368
	ctx.r5.s64 = ctx.r10.s64 + 6368;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2057
	ctx.r6.s64 = ctx.r29.s64 + 2057;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823946FC;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,6356
	ctx.r5.s64 = ctx.r9.s64 + 6356;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2058
	ctx.r6.s64 = ctx.r29.s64 + 2058;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239471C;
	sub_824DF200(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r7,6344
	ctx.r5.s64 = ctx.r7.s64 + 6344;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2059
	ctx.r6.s64 = ctx.r29.s64 + 2059;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239473C;
	sub_824DF200(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r6,6332
	ctx.r5.s64 = ctx.r6.s64 + 6332;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2060
	ctx.r6.s64 = ctx.r29.s64 + 2060;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239475C;
	sub_824DF200(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r5,6320
	ctx.r5.s64 = ctx.r5.s64 + 6320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2061
	ctx.r6.s64 = ctx.r29.s64 + 2061;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239477C;
	sub_824DF200(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r4,6300
	ctx.r5.s64 = ctx.r4.s64 + 6300;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2068
	ctx.r6.s64 = ctx.r29.s64 + 2068;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239479C;
	sub_824DF200(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r23,r11,-26860
	ctx.r23.s64 = ctx.r11.s64 + -26860;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r28,r29,1584
	ctx.r28.s64 = ctx.r29.s64 + 1584;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r27,r11,6268
	ctx.r27.s64 = ctx.r11.s64 + 6268;
	// addi r26,r10,6284
	ctx.r26.s64 = ctx.r10.s64 + 6284;
	// addi r25,r9,6256
	ctx.r25.s64 = ctx.r9.s64 + 6256;
	// addi r24,r8,6244
	ctx.r24.s64 = ctx.r8.s64 + 6244;
loc_823947CC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x823947E0;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r28,-16
	ctx.r6.s64 = ctx.r28.s64 + -16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823947FC;
	sub_824DF200(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x82394810;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239482C;
	sub_824DF200(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x82394840;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r28,20
	ctx.r6.s64 = ctx.r28.s64 + 20;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239485C;
	sub_824DF200(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82137a08
	ctx.lr = 0x82394870;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r28,16
	ctx.r6.s64 = ctx.r28.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x8239488C;
	sub_824DF200(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r23,24
	ctx.r11.s64 = ctx.r23.s64 + 24;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823947cc
	if (ctx.cr6.lt) goto loc_823947CC;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-26768
	ctx.r27.s64 = ctx.r11.s64 + -26768;
	// addi r24,r10,6224
	ctx.r24.s64 = ctx.r10.s64 + 6224;
	// addi r23,r9,6196
	ctx.r23.s64 = ctx.r9.s64 + 6196;
	// addi r22,r8,6176
	ctx.r22.s64 = ctx.r8.s64 + 6176;
	// addi r21,r7,6156
	ctx.r21.s64 = ctx.r7.s64 + 6156;
	// addi r20,r6,6136
	ctx.r20.s64 = ctx.r6.s64 + 6136;
	// addi r19,r5,6116
	ctx.r19.s64 = ctx.r5.s64 + 6116;
	// addi r18,r4,6088
	ctx.r18.s64 = ctx.r4.s64 + 6088;
	// addi r17,r3,6064
	ctx.r17.s64 = ctx.r3.s64 + 6064;
	// addi r25,r31,4272
	ctx.r25.s64 = ctx.r31.s64 + 4272;
loc_823948F8:
	// lwzx r11,r28,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82394b78
	if (!ctx.cr6.gt) goto loc_82394B78;
loc_82394908:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82394920;
	sub_82137A08(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,113
	ctx.r11.s64 = ctx.r11.s64 + 113;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x824df200
	ctx.lr = 0x82394954;
	sub_824DF200(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x8239496C;
	sub_82137A08(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,2263
	ctx.r6.s64 = ctx.r11.s64 + 2263;
	// bl 0x824df200
	ctx.lr = 0x823949A0;
	sub_824DF200(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x823949B8;
	sub_82137A08(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,2248
	ctx.r6.s64 = ctx.r11.s64 + 2248;
	// bl 0x824df200
	ctx.lr = 0x823949EC;
	sub_824DF200(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82394A04;
	sub_82137A08(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,2258
	ctx.r6.s64 = ctx.r11.s64 + 2258;
	// bl 0x824df200
	ctx.lr = 0x82394A38;
	sub_824DF200(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82394A50;
	sub_82137A08(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,2244
	ctx.r6.s64 = ctx.r11.s64 + 2244;
	// bl 0x824df200
	ctx.lr = 0x82394A84;
	sub_824DF200(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82394A9C;
	sub_82137A08(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,2252
	ctx.r6.s64 = ctx.r11.s64 + 2252;
	// bl 0x824df200
	ctx.lr = 0x82394AD0;
	sub_824DF200(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82394AE8;
	sub_82137A08(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,2262
	ctx.r6.s64 = ctx.r11.s64 + 2262;
	// bl 0x824df200
	ctx.lr = 0x82394B1C;
	sub_824DF200(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82137a08
	ctx.lr = 0x82394B34;
	sub_82137A08(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,2256
	ctx.r6.s64 = ctx.r11.s64 + 2256;
	// bl 0x824df200
	ctx.lr = 0x82394B68;
	sub_824DF200(ctx, base);
	// lwzx r8,r28,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82394908
	if (ctx.cr6.lt) goto loc_82394908;
loc_82394B78:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x823948f8
	if (ctx.cr6.lt) goto loc_823948F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,6044
	ctx.r5.s64 = ctx.r11.s64 + 6044;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,332
	ctx.r6.s64 = ctx.r29.s64 + 332;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394BA8;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,6024
	ctx.r5.s64 = ctx.r10.s64 + 6024;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,333
	ctx.r6.s64 = ctx.r29.s64 + 333;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394BC8;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,6008
	ctx.r5.s64 = ctx.r9.s64 + 6008;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394BE8;
	sub_824DF200(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r7,5992
	ctx.r5.s64 = ctx.r7.s64 + 5992;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,32
	ctx.r6.s64 = ctx.r29.s64 + 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394C08;
	sub_824DF200(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r6,5972
	ctx.r5.s64 = ctx.r6.s64 + 5972;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,304
	ctx.r6.s64 = ctx.r29.s64 + 304;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394C28;
	sub_824DF200(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r5,5952
	ctx.r5.s64 = ctx.r5.s64 + 5952;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,308
	ctx.r6.s64 = ctx.r29.s64 + 308;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394C48;
	sub_824DF200(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r4,5936
	ctx.r5.s64 = ctx.r4.s64 + 5936;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,48
	ctx.r6.s64 = ctx.r29.s64 + 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394C68;
	sub_824DF200(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r3,5920
	ctx.r5.s64 = ctx.r3.s64 + 5920;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,64
	ctx.r6.s64 = ctx.r29.s64 + 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394C88;
	sub_824DF200(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,5908
	ctx.r5.s64 = ctx.r11.s64 + 5908;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,80
	ctx.r6.s64 = ctx.r29.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394CA8;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,5892
	ctx.r5.s64 = ctx.r10.s64 + 5892;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,312
	ctx.r6.s64 = ctx.r29.s64 + 312;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394CC8;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,5880
	ctx.r5.s64 = ctx.r9.s64 + 5880;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,96
	ctx.r6.s64 = ctx.r29.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394CE8;
	sub_824DF200(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r7,5864
	ctx.r5.s64 = ctx.r7.s64 + 5864;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,316
	ctx.r6.s64 = ctx.r29.s64 + 316;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394D08;
	sub_824DF200(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r6,5852
	ctx.r5.s64 = ctx.r6.s64 + 5852;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,112
	ctx.r6.s64 = ctx.r29.s64 + 112;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394D28;
	sub_824DF200(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r5,5836
	ctx.r5.s64 = ctx.r5.s64 + 5836;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,320
	ctx.r6.s64 = ctx.r29.s64 + 320;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394D48;
	sub_824DF200(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r4,5824
	ctx.r5.s64 = ctx.r4.s64 + 5824;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,128
	ctx.r6.s64 = ctx.r29.s64 + 128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394D68;
	sub_824DF200(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r3,5808
	ctx.r5.s64 = ctx.r3.s64 + 5808;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,324
	ctx.r6.s64 = ctx.r29.s64 + 324;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394D88;
	sub_824DF200(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,5796
	ctx.r5.s64 = ctx.r11.s64 + 5796;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,144
	ctx.r6.s64 = ctx.r29.s64 + 144;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394DA8;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,5780
	ctx.r5.s64 = ctx.r10.s64 + 5780;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,328
	ctx.r6.s64 = ctx.r29.s64 + 328;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394DC8;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,5756
	ctx.r5.s64 = ctx.r9.s64 + 5756;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,288
	ctx.r6.s64 = ctx.r29.s64 + 288;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394DE8;
	sub_824DF200(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r7,5728
	ctx.r5.s64 = ctx.r7.s64 + 5728;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,224
	ctx.r6.s64 = ctx.r29.s64 + 224;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394E08;
	sub_824DF200(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r6,5700
	ctx.r5.s64 = ctx.r6.s64 + 5700;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,240
	ctx.r6.s64 = ctx.r29.s64 + 240;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394E28;
	sub_824DF200(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r5,5676
	ctx.r5.s64 = ctx.r5.s64 + 5676;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,256
	ctx.r6.s64 = ctx.r29.s64 + 256;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394E48;
	sub_824DF200(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r4,5652
	ctx.r5.s64 = ctx.r4.s64 + 5652;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,272
	ctx.r6.s64 = ctx.r29.s64 + 272;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394E68;
	sub_824DF200(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r3,5628
	ctx.r5.s64 = ctx.r3.s64 + 5628;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,160
	ctx.r6.s64 = ctx.r29.s64 + 160;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394E88;
	sub_824DF200(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,176
	ctx.r6.s64 = ctx.r29.s64 + 176;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394EA8;
	sub_824DF200(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,5580
	ctx.r5.s64 = ctx.r10.s64 + 5580;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,192
	ctx.r6.s64 = ctx.r29.s64 + 192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394EC8;
	sub_824DF200(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,5556
	ctx.r5.s64 = ctx.r9.s64 + 5556;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,208
	ctx.r6.s64 = ctx.r29.s64 + 208;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394EE8;
	sub_824DF200(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r7,5520
	ctx.r5.s64 = ctx.r7.s64 + 5520;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,1984
	ctx.r6.s64 = ctx.r29.s64 + 1984;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394F08;
	sub_824DF200(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r6,5480
	ctx.r5.s64 = ctx.r6.s64 + 5480;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394F28;
	sub_824DF200(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r5,5444
	ctx.r5.s64 = ctx.r5.s64 + 5444;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,2000
	ctx.r6.s64 = ctx.r29.s64 + 2000;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394F48;
	sub_824DF200(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r4,5408
	ctx.r5.s64 = ctx.r4.s64 + 5408;
	// addi r6,r29,2016
	ctx.r6.s64 = ctx.r29.s64 + 2016;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394F68;
	sub_824DF200(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r3,5372
	ctx.r5.s64 = ctx.r3.s64 + 5372;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394F88;
	sub_824DF200(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,5332
	ctx.r5.s64 = ctx.r11.s64 + 5332;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394FA8;
	sub_824DF200(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,496
	ctx.r28.s64 = ctx.r29.s64 + 496;
	// addi r27,r11,4900
	ctx.r27.s64 = ctx.r11.s64 + 4900;
	// addi r26,r10,4920
	ctx.r26.s64 = ctx.r10.s64 + 4920;
loc_82394FC0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82137a08
	ctx.lr = 0x82394FD4;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82394FF0;
	sub_824DF200(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82137a08
	ctx.lr = 0x82395004;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r28,16
	ctx.r6.s64 = ctx.r28.s64 + 16;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82395020;
	sub_824DF200(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 19, ctx.xer);
	// blt cr6,0x82394fc0
	if (ctx.cr6.lt) goto loc_82394FC0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,1408
	ctx.r28.s64 = ctx.r29.s64 + 1408;
	// addi r27,r11,4884
	ctx.r27.s64 = ctx.r11.s64 + 4884;
loc_82395040:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82137a08
	ctx.lr = 0x82395054;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82395070;
	sub_824DF200(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// blt cr6,0x82395040
	if (ctx.cr6.lt) goto loc_82395040;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,336
	ctx.r28.s64 = ctx.r29.s64 + 336;
loc_82395088:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82392870
	ctx.lr = 0x82395098;
	sub_82392870(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x82395088
	if (ctx.cr6.lt) goto loc_82395088;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,1856
	ctx.r29.s64 = ctx.r29.s64 + 1856;
	// addi r28,r11,4940
	ctx.r28.s64 = ctx.r11.s64 + 4940;
	// addi r27,r10,4964
	ctx.r27.s64 = ctx.r10.s64 + 4964;
loc_823950C0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82137a08
	ctx.lr = 0x823950D4;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x823950F0;
	sub_824DF200(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82137a08
	ctx.lr = 0x82395104;
	sub_82137A08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x82395120;
	sub_824DF200(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x823950c0
	if (ctx.cr6.lt) goto loc_823950C0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x823d921c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82395138"))) PPC_WEAK_FUNC(sub_82395138);
PPC_FUNC_IMPL(__imp__sub_82395138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82395140;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,4984
	ctx.r10.s64 = ctx.r11.s64 + 4984;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823920f0
	ctx.lr = 0x8239515C;
	sub_823920F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,7444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7444);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f13,340(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stfs f13,344(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f0,3796(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f13,376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f13,380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f13,404(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f13,408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stfs f13,436(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stfs f13,440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f13,444(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f13,464(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f13,468(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f13,472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stfs f13,476(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// lfs f13,-332(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -332);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stfs f13,1424(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1424, temp.u32);
	// stfs f13,1412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// stfs f13,1416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stfs f13,1428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1428, temp.u32);
	// stfs f13,1432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1432, temp.u32);
	// lfs f12,31296(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31296);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,1440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,1444(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1444, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,1448(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// stfs f13,1456(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1456, temp.u32);
	// stfs f13,1460(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1460, temp.u32);
	// stfs f13,1464(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1464, temp.u32);
	// stfs f13,1472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// stfs f13,1476(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1476, temp.u32);
	// stfs f13,1480(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// stfs f13,1488(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stfs f13,1492(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1492, temp.u32);
	// stfs f13,1496(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1496, temp.u32);
	// stfs f13,1504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stfs f13,1508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// stfs f13,1512(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stfs f13,1520(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// stfs f13,1524(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// stfs f13,1528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1528, temp.u32);
	// stfs f13,1536(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1536, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,1540(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1540, temp.u32);
	// stfs f13,1544(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,1552(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,1556(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r8,r10,9,23,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FF;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r7,r9,9,23,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1FF;
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// stfs f13,1560(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r5,r10,19,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r6,r6,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r8,r9,19,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3FF;
	// rlwinm r3,r3,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r10,r10,16,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 | ctx.r8.u64;
	// or r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r9,r9,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x8000;
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// or r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 | ctx.r9.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r31,2260
	ctx.r10.s64 = ctx.r31.s64 + 2260;
	// li r9,288
	ctx.r9.s64 = 288;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
loc_82395300:
	// sth r29,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r29.u16);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r7,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r7.u16);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// sth r6,-16(r10)
	PPC_STORE_U16(ctx.r10.u32 + -16, ctx.r6.u16);
	// sth r5,-14(r10)
	PPC_STORE_U16(ctx.r10.u32 + -14, ctx.r5.u16);
	// sth r4,-12(r10)
	PPC_STORE_U16(ctx.r10.u32 + -12, ctx.r4.u16);
	// sth r3,-10(r10)
	PPC_STORE_U16(ctx.r10.u32 + -10, ctx.r3.u16);
	// sth r30,-4(r10)
	PPC_STORE_U16(ctx.r10.u32 + -4, ctx.r30.u16);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne 0x82395300
	if (!ctx.cr0.eq) goto loc_82395300;
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r3,r6,9,23,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0x1FF;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r9,r6,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x3FF;
	// rlwinm r3,r3,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r6,r6,16,16,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0x8000;
	// rlwinm r4,r7,9,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1FF;
	// rlwinm r10,r7,19,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x3FF;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// or r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 | ctx.r9.u64;
	// rlwinm r4,r4,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r7,r7,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x8000;
	// or r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// li r28,5
	ctx.r28.s64 = 5;
	// addi r10,r31,2160
	ctx.r10.s64 = ctx.r31.s64 + 2160;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
loc_823953C0:
	// sth r29,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r29.u16);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r5,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r5.u16);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// sth r7,-16(r10)
	PPC_STORE_U16(ctx.r10.u32 + -16, ctx.r7.u16);
	// sth r6,-14(r10)
	PPC_STORE_U16(ctx.r10.u32 + -14, ctx.r6.u16);
	// sth r4,-12(r10)
	PPC_STORE_U16(ctx.r10.u32 + -12, ctx.r4.u16);
	// sth r3,-10(r10)
	PPC_STORE_U16(ctx.r10.u32 + -10, ctx.r3.u16);
	// sth r30,-4(r10)
	PPC_STORE_U16(ctx.r10.u32 + -4, ctx.r30.u16);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne 0x823953c0
	if (!ctx.cr0.eq) goto loc_823953C0;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r31,1568
	ctx.r9.s64 = ctx.r31.s64 + 1568;
	// lfs f13,4768(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4768);
	ctx.f13.f64 = double(temp.f32);
	// li r8,17
	ctx.r8.s64 = 17;
	// stfs f13,1568(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1568, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f12,-29496(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29496);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stfs f12,1572(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1572, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f11,4764(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4764);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stfs f11,1576(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1576, temp.u32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// stfs f0,1588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// stfs f0,1592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// stw r10,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r10.u32);
	// stfs f13,1616(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1616, temp.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stb r11,1608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1608, ctx.r11.u8);
	// stfs f12,1620(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// stfs f11,1624(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// stfs f0,1632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// stfs f0,1640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// stw r10,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r10.u32);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// stb r11,1656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1656, ctx.r11.u8);
	// stfs f13,1664(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1664, temp.u32);
	// stfs f12,1668(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// stfs f11,1672(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1672, temp.u32);
	// stfs f0,1680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1680, temp.u32);
	// stfs f0,1684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1684, temp.u32);
	// stfs f0,1688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1688, temp.u32);
	// stw r10,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r10.u32);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// stb r11,1704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1704, ctx.r11.u8);
	// stfs f13,1712(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1712, temp.u32);
	// stfs f12,1716(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1716, temp.u32);
	// stfs f11,1720(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1720, temp.u32);
	// stfs f0,1728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// stfs f0,1736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1736, temp.u32);
	// stw r10,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r10.u32);
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// stb r11,1752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1752, ctx.r11.u8);
	// stfs f13,1760(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// stfs f12,1764(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1764, temp.u32);
	// stfs f11,1768(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// stfs f0,1776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// stfs f0,1780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1780, temp.u32);
	// stfs f0,1784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// stw r10,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r10.u32);
	// stw r11,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r11.u32);
	// stb r11,1800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1800, ctx.r11.u8);
	// stfs f13,1808(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1808, temp.u32);
	// stfs f12,1812(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1812, temp.u32);
	// stfs f11,1816(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1816, temp.u32);
	// stfs f0,1824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1824, temp.u32);
	// stfs f0,1828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// stfs f0,1832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1832, temp.u32);
	// stw r10,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r10.u32);
	// stw r11,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r11.u32);
	// stb r11,1848(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1848, ctx.r11.u8);
	// stfs f0,1856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1856, temp.u32);
	// stfs f0,1888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1888, temp.u32);
	// stfs f0,1860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1860, temp.u32);
	// stfs f0,1864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1864, temp.u32);
	// stfs f0,1872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1872, temp.u32);
	// stfs f0,1892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// stfs f0,1896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// stfs f0,1904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1904, temp.u32);
	// stfs f0,1920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1920, temp.u32);
	// stfs f0,1924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1924, temp.u32);
	// stfs f0,1928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1928, temp.u32);
	// stfs f0,1936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// stfs f0,1952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1952, temp.u32);
	// stfs f0,1956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1956, temp.u32);
	// stfs f0,1960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1960, temp.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stfs f0,1968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1968, temp.u32);
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// stw r11,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r11.u32);
	// lfs f0,-31392(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31392);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r11.u32);
	// lfs f13,14192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14192);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r11.u32);
	// stfs f0,2032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// stb r8,2046(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2046, ctx.r8.u8);
	// stfs f13,2036(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2036, temp.u32);
	// stb r8,2047(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2047, ctx.r8.u8);
	// stb r28,2048(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2048, ctx.r28.u8);
	// addi r3,r31,2055
	ctx.r3.s64 = ctx.r31.s64 + 2055;
	// stb r28,2049(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2049, ctx.r28.u8);
	// addi r11,r31,2032
	ctx.r11.s64 = ctx.r31.s64 + 2032;
	// stb r10,2042(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2042, ctx.r10.u8);
	// stb r10,2043(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2043, ctx.r10.u8);
	// stb r9,2044(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2044, ctx.r9.u8);
	// stb r9,2045(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2045, ctx.r9.u8);
	// stb r7,2052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2052, ctx.r7.u8);
	// stb r6,2053(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2053, ctx.r6.u8);
	// stb r30,2054(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2054, ctx.r30.u8);
	// bl 0x82392740
	ctx.lr = 0x823955A4;
	sub_82392740(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2080
	ctx.r3.s64 = ctx.r31.s64 + 2080;
	// bl 0x823d9890
	ctx.lr = 0x823955B4;
	sub_823D9890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823939a0
	ctx.lr = 0x823955BC;
	sub_823939A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823955C8"))) PPC_WEAK_FUNC(sub_823955C8);
PPC_FUNC_IMPL(__imp__sub_823955C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x823955D0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r30,2055
	ctx.r11.s64 = ctx.r30.s64 + 2055;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823955F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823955f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823955F0;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x82395614;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r30,2080
	ctx.r4.s64 = ctx.r30.s64 + 2080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x82395630;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r30,2032
	ctx.r4.s64 = ctx.r30.s64 + 2032;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x8239564C;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r30,2052
	ctx.r4.s64 = ctx.r30.s64 + 2052;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x82395668;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2068
	ctx.r4.s64 = ctx.r30.s64 + 2068;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x82395684;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2072
	ctx.r4.s64 = ctx.r30.s64 + 2072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x823956A0;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2076
	ctx.r4.s64 = ctx.r30.s64 + 2076;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x823956BC;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,8004(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8004);
	// bl 0x82618f70
	ctx.lr = 0x823956D4;
	sub_82618F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,1984
	ctx.r4.s64 = ctx.r30.s64 + 1984;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x823956F0;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82618df0
	ctx.lr = 0x82395708;
	sub_82618DF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,2000
	ctx.r4.s64 = ctx.r30.s64 + 2000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x82395724;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,2016
	ctx.r4.s64 = ctx.r30.s64 + 2016;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x82395740;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82618df0
	ctx.lr = 0x82395758;
	sub_82618DF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82618df0
	ctx.lr = 0x82395770;
	sub_82618DF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x8239578C;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x823957A8;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823957d4
	if (ctx.cr6.eq) goto loc_823957D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2064
	ctx.r4.s64 = ctx.r30.s64 + 2064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618f90
	ctx.lr = 0x823957C4;
	sub_82618F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823957d8
	if (!ctx.cr6.eq) goto loc_823957D8;
loc_823957D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823957D8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395818
	if (ctx.cr6.eq) goto loc_82395818;
	// addi r31,r30,496
	ctx.r31.s64 = ctx.r30.s64 + 496;
loc_823957EC:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// bge cr6,0x82395818
	if (!ctx.cr6.lt) goto loc_82395818;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82394248
	ctx.lr = 0x82395804;
	sub_82394248(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823957ec
	if (!ctx.cr6.eq) goto loc_823957EC;
loc_82395818:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395978
	if (ctx.cr6.eq) goto loc_82395978;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r10,-26768
	ctx.r25.s64 = ctx.r10.s64 + -26768;
	// addi r24,r9,4272
	ctx.r24.s64 = ctx.r9.s64 + 4272;
	// addi r23,r11,-12288
	ctx.r23.s64 = ctx.r11.s64 + -12288;
loc_82395840:
	// cmpwi cr6,r26,20
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 20, ctx.xer);
	// bge cr6,0x82395978
	if (!ctx.cr6.lt) goto loc_82395978;
	// lwzx r8,r26,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82395890
	if (!ctx.cr6.gt) goto loc_82395890;
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r11,113
	ctx.r11.s64 = ctx.r11.s64 + 113;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82395874:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82395884
	if (ctx.cr6.eq) goto loc_82395884;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82395884:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x82395874
	if (!ctx.cr0.eq) goto loc_82395874;
loc_82395890:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823958a4
	if (ctx.cr6.eq) goto loc_823958A4;
	// clrlwi r27,r8,24
	ctx.r27.u64 = ctx.r8.u32 & 0xFF;
loc_823958A4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823958c4
	if (ctx.cr6.eq) goto loc_823958C4;
loc_823958B4:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823958b4
	if (!ctx.cr6.eq) goto loc_823958B4;
loc_823958C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x826186c0
	ctx.lr = 0x823958D4;
	sub_826186C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239590c
	if (ctx.cr6.eq) goto loc_8239590C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82618390
	ctx.lr = 0x823958FC;
	sub_82618390(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826188b8
	ctx.lr = 0x82395908;
	sub_826188B8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8239590C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395968
	if (ctx.cr6.eq) goto loc_82395968;
	// clrlwi r28,r27,24
	ctx.r28.u64 = ctx.r27.u32 & 0xFF;
loc_82395924:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82395968
	if (!ctx.cr6.lt) goto loc_82395968;
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,2244
	ctx.r5.s64 = ctx.r11.s64 + 2244;
	// bl 0x82393e20
	ctx.lr = 0x82395958;
	sub_82393E20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82395924
	if (!ctx.cr6.eq) goto loc_82395924;
loc_82395968:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395840
	if (!ctx.cr6.eq) goto loc_82395840;
loc_82395978:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823959bc
	if (ctx.cr6.eq) goto loc_823959BC;
	// addi r31,r30,2144
	ctx.r31.s64 = ctx.r30.s64 + 2144;
loc_8239598C:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bge cr6,0x823959bc
	if (!ctx.cr6.lt) goto loc_823959BC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82393e20
	ctx.lr = 0x823959A8;
	sub_82393E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239598c
	if (!ctx.cr6.eq) goto loc_8239598C;
loc_823959BC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823959fc
	if (ctx.cr6.eq) goto loc_823959FC;
	// addi r31,r30,1568
	ctx.r31.s64 = ctx.r30.s64 + 1568;
loc_823959D0:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bge cr6,0x823959fc
	if (!ctx.cr6.lt) goto loc_823959FC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82392e18
	ctx.lr = 0x823959E8;
	sub_82392E18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823959d0
	if (!ctx.cr6.eq) goto loc_823959D0;
loc_823959FC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395a44
	if (ctx.cr6.eq) goto loc_82395A44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r30,1408
	ctx.r31.s64 = ctx.r30.s64 + 1408;
	// lfs f31,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
loc_82395A18:
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// bge cr6,0x82395a44
	if (!ctx.cr6.lt) goto loc_82395A44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82392c90
	ctx.lr = 0x82395A30;
	sub_82392C90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395a18
	if (!ctx.cr6.eq) goto loc_82395A18;
loc_82395A44:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82395A50"))) PPC_WEAK_FUNC(sub_82395A50);
PPC_FUNC_IMPL(__imp__sub_82395A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x82395A58;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395A78;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r30,2080
	ctx.r4.s64 = ctx.r30.s64 + 2080;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395A94;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r30,2032
	ctx.r4.s64 = ctx.r30.s64 + 2032;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395AB0;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r30,2052
	ctx.r4.s64 = ctx.r30.s64 + 2052;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395ACC;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2068
	ctx.r4.s64 = ctx.r30.s64 + 2068;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395AE8;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2072
	ctx.r4.s64 = ctx.r30.s64 + 2072;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395B04;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2076
	ctx.r4.s64 = ctx.r30.s64 + 2076;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395B20;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// addi r4,r30,8004
	ctx.r4.s64 = ctx.r30.s64 + 8004;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f10
	ctx.lr = 0x82395B38;
	sub_82618F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,1984
	ctx.r4.s64 = ctx.r30.s64 + 1984;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395B54;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618db0
	ctx.lr = 0x82395B6C;
	sub_82618DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,2000
	ctx.r4.s64 = ctx.r30.s64 + 2000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395B88;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,2016
	ctx.r4.s64 = ctx.r30.s64 + 2016;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395BA4;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618db0
	ctx.lr = 0x82395BBC;
	sub_82618DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618db0
	ctx.lr = 0x82395BD4;
	sub_82618DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395BF0;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r30,2055
	ctx.r4.s64 = ctx.r30.s64 + 2055;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395C0C;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395c38
	if (ctx.cr6.eq) goto loc_82395C38;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2064
	ctx.r4.s64 = ctx.r30.s64 + 2064;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82618f80
	ctx.lr = 0x82395C28;
	sub_82618F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82395c3c
	if (!ctx.cr6.eq) goto loc_82395C3C;
loc_82395C38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82395C3C:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82395c80
	if (ctx.cr6.eq) goto loc_82395C80;
	// addi r31,r30,496
	ctx.r31.s64 = ctx.r30.s64 + 496;
loc_82395C50:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// bge cr6,0x82395c80
	if (!ctx.cr6.lt) goto loc_82395C80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823942e8
	ctx.lr = 0x82395C68;
	sub_823942E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395c50
	if (!ctx.cr6.eq) goto loc_82395C50;
loc_82395C80:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395db8
	if (ctx.cr6.eq) goto loc_82395DB8;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r10,-26768
	ctx.r26.s64 = ctx.r10.s64 + -26768;
	// addi r24,r11,4272
	ctx.r24.s64 = ctx.r11.s64 + 4272;
loc_82395CA0:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// bge cr6,0x82395db8
	if (!ctx.cr6.lt) goto loc_82395DB8;
	// lwzx r11,r28,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395cc8
	if (ctx.cr6.eq) goto loc_82395CC8;
loc_82395CB8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395cb8
	if (!ctx.cr6.eq) goto loc_82395CB8;
loc_82395CC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x826187f0
	ctx.lr = 0x82395CD8;
	sub_826187F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395d1c
	if (ctx.cr6.eq) goto loc_82395D1C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82618318
	ctx.lr = 0x82395D00;
	sub_82618318(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x826188d8
	ctx.lr = 0x82395D14;
	sub_826188D8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82395d20
	goto loc_82395D20;
loc_82395D1C:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82395D20:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395da8
	if (ctx.cr6.eq) goto loc_82395DA8;
loc_82395D30:
	// lwzx r11,r28,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82395da8
	if (!ctx.cr6.lt) goto loc_82395DA8;
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,2244
	ctx.r3.s64 = ctx.r11.s64 + 2244;
	// bl 0x8236e2e8
	ctx.lr = 0x82395D5C;
	sub_8236E2E8(ctx, base);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82395d98
	if (!ctx.cr6.lt) goto loc_82395D98;
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,2244
	ctx.r5.s64 = ctx.r11.s64 + 2244;
	// bl 0x82393fe0
	ctx.lr = 0x82395D94;
	sub_82393FE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82395D98:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395d30
	if (!ctx.cr6.eq) goto loc_82395D30;
loc_82395DA8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395ca0
	if (!ctx.cr6.eq) goto loc_82395CA0;
loc_82395DB8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395e00
	if (ctx.cr6.eq) goto loc_82395E00;
	// addi r31,r30,2144
	ctx.r31.s64 = ctx.r30.s64 + 2144;
loc_82395DCC:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bge cr6,0x82395e00
	if (!ctx.cr6.lt) goto loc_82395E00;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82393fe0
	ctx.lr = 0x82395DE8;
	sub_82393FE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395dcc
	if (!ctx.cr6.eq) goto loc_82395DCC;
loc_82395E00:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395e44
	if (ctx.cr6.eq) goto loc_82395E44;
	// addi r31,r30,1568
	ctx.r31.s64 = ctx.r30.s64 + 1568;
loc_82395E14:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bge cr6,0x82395e44
	if (!ctx.cr6.lt) goto loc_82395E44;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82394150
	ctx.lr = 0x82395E2C;
	sub_82394150(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395e14
	if (!ctx.cr6.eq) goto loc_82395E14;
loc_82395E44:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395e90
	if (ctx.cr6.eq) goto loc_82395E90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r30,1408
	ctx.r31.s64 = ctx.r30.s64 + 1408;
	// lfs f31,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
loc_82395E60:
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// bge cr6,0x82395e90
	if (!ctx.cr6.lt) goto loc_82395E90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82393d10
	ctx.lr = 0x82395E78;
	sub_82393D10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395e60
	if (!ctx.cr6.eq) goto loc_82395E60;
loc_82395E90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82395EA0"))) PPC_WEAK_FUNC(sub_82395EA0);
PPC_FUNC_IMPL(__imp__sub_82395EA0) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r31,r11,-12292
	ctx.r31.s64 = ctx.r11.s64 + -12292;
	// lwz r11,-12292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395fd0
	if (!ctx.cr6.eq) goto loc_82395FD0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82130528
	ctx.lr = 0x82395ED0;
	sub_82130528(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395ee4
	if (ctx.cr6.eq) goto loc_82395EE4;
	// bl 0x821d5408
	ctx.lr = 0x82395EE0;
	sub_821D5408(ctx, base);
	// b 0x82395ee8
	goto loc_82395EE8;
loc_82395EE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82395EE8:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r7,r10,6692
	ctx.r7.s64 = ctx.r10.s64 + 6692;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r9,r11,9736
	ctx.r9.s64 = ctx.r11.s64 + 9736;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lis r3,-32129
	ctx.r3.s64 = -2105606144;
	// addi r4,r8,13440
	ctx.r4.s64 = ctx.r8.s64 + 13440;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r7,r3,-27260
	ctx.r7.s64 = ctx.r3.s64 + -27260;
	// std r5,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r5.u64);
	// addi r4,r10,-27224
	ctx.r4.s64 = ctx.r10.s64 + -27224;
	// addi r3,r9,-27188
	ctx.r3.s64 = ctx.r9.s64 + -27188;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// std r6,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r6.u64);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821d4458
	ctx.lr = 0x82395F7C;
	sub_821D4458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d4100
	ctx.lr = 0x82395F8C;
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
	ctx.lr = 0x82395FA8;
	sub_821D41D0(ctx, base);
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r8,-27164
	ctx.r4.s64 = ctx.r8.s64 + -27164;
	// bl 0x821d4b00
	ctx.lr = 0x82395FB8;
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
	ctx.lr = 0x82395FD0;
	sub_821C0548(ctx, base);
loc_82395FD0:
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

__attribute__((alias("__imp__sub_82395FE8"))) PPC_WEAK_FUNC(sub_82395FE8);
PPC_FUNC_IMPL(__imp__sub_82395FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82395FF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-25888
	ctx.r29.s64 = ctx.r11.s64 + -25888;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82396008:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823db730
	ctx.lr = 0x82396014;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239604c
	if (ctx.cr6.eq) goto loc_8239604C;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82396008
	if (ctx.cr6.lt) goto loc_82396008;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,7224
	ctx.r3.s64 = ctx.r11.s64 + 7224;
	// bl 0x82130000
	ctx.lr = 0x82396040;
	sub_82130000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8239604C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82396058"))) PPC_WEAK_FUNC(sub_82396058);
PPC_FUNC_IMPL(__imp__sub_82396058) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ble cr6,0x8239607c
	if (!ctx.cr6.gt) goto loc_8239607C;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bge cr6,0x8239607c
	if (!ctx.cr6.lt) goto loc_8239607C;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-25924
	ctx.r9.s64 = ctx.r11.s64 + -25924;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_8239607C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396084"))) PPC_WEAK_FUNC(sub_82396084);
PPC_FUNC_IMPL(__imp__sub_82396084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396088"))) PPC_WEAK_FUNC(sub_82396088);
PPC_FUNC_IMPL(__imp__sub_82396088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82396090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-25924
	ctx.r29.s64 = ctx.r11.s64 + -25924;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823960A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823db730
	ctx.lr = 0x823960B4;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823960ec
	if (ctx.cr6.eq) goto loc_823960EC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 + 36;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823960a8
	if (ctx.cr6.lt) goto loc_823960A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,7272
	ctx.r3.s64 = ctx.r11.s64 + 7272;
	// bl 0x82130000
	ctx.lr = 0x823960E0;
	sub_82130000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_823960EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823960F8"))) PPC_WEAK_FUNC(sub_823960F8);
PPC_FUNC_IMPL(__imp__sub_823960F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239610C"))) PPC_WEAK_FUNC(sub_8239610C);
PPC_FUNC_IMPL(__imp__sub_8239610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396110"))) PPC_WEAK_FUNC(sub_82396110);
PPC_FUNC_IMPL(__imp__sub_82396110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82396124
	if (ctx.cr6.gt) goto loc_82396124;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82396124:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239612C"))) PPC_WEAK_FUNC(sub_8239612C);
PPC_FUNC_IMPL(__imp__sub_8239612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396130"))) PPC_WEAK_FUNC(sub_82396130);
PPC_FUNC_IMPL(__imp__sub_82396130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bge cr6,0x82396148
	if (!ctx.cr6.lt) goto loc_82396148;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8239614c
	if (ctx.cr6.gt) goto loc_8239614C;
loc_82396148:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239614C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396154"))) PPC_WEAK_FUNC(sub_82396154);
PPC_FUNC_IMPL(__imp__sub_82396154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396158"))) PPC_WEAK_FUNC(sub_82396158);
PPC_FUNC_IMPL(__imp__sub_82396158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x82396170
	if (!ctx.cr6.lt) goto loc_82396170;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82396174
	if (ctx.cr6.gt) goto loc_82396174;
loc_82396170:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82396174:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239617C"))) PPC_WEAK_FUNC(sub_8239617C);
PPC_FUNC_IMPL(__imp__sub_8239617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396180"))) PPC_WEAK_FUNC(sub_82396180);
PPC_FUNC_IMPL(__imp__sub_82396180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82396194
	if (ctx.cr6.lt) goto loc_82396194;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82396194:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239619C"))) PPC_WEAK_FUNC(sub_8239619C);
PPC_FUNC_IMPL(__imp__sub_8239619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823961A0"))) PPC_WEAK_FUNC(sub_823961A0);
PPC_FUNC_IMPL(__imp__sub_823961A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823961BC"))) PPC_WEAK_FUNC(sub_823961BC);
PPC_FUNC_IMPL(__imp__sub_823961BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823961C0"))) PPC_WEAK_FUNC(sub_823961C0);
PPC_FUNC_IMPL(__imp__sub_823961C0) {
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
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r9,r11,-28304
	ctx.r9.s64 = ctx.r11.s64 + -28304;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823961fc
	if (ctx.cr6.eq) goto loc_823961FC;
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
loc_823961FC:
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82396234
	if (ctx.cr6.lt) goto loc_82396234;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,-18024
	ctx.r4.s64 = ctx.r10.s64 + -18024;
	// lwz r3,-12440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12440);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82396228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82396238
	if (ctx.cr6.gt) goto loc_82396238;
loc_82396234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82396238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396248"))) PPC_WEAK_FUNC(sub_82396248);
PPC_FUNC_IMPL(__imp__sub_82396248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,31
	ctx.r3.s64 = 31;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239626c
	if (ctx.cr6.eq) goto loc_8239626C;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82396270
	goto loc_82396270;
loc_8239626C:
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
loc_82396270:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239628c
	if (ctx.cr6.eq) goto loc_8239628C;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82396290
	goto loc_82396290;
loc_8239628C:
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
loc_82396290:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823962ac
	if (ctx.cr6.eq) goto loc_823962AC;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// b 0x823962b0
	goto loc_823962B0;
loc_823962AC:
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_823962B0:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823962cc
	if (ctx.cr6.eq) goto loc_823962CC;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// b 0x823962d0
	goto loc_823962D0;
loc_823962CC:
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_823962D0:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823962EC"))) PPC_WEAK_FUNC(sub_823962EC);
PPC_FUNC_IMPL(__imp__sub_823962EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823962F0"))) PPC_WEAK_FUNC(sub_823962F0);
PPC_FUNC_IMPL(__imp__sub_823962F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulli r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 * 104;
	// bl 0x82130528
	ctx.lr = 0x8239630C;
	sub_82130528(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82396390
	if (!ctx.cr6.gt) goto loc_82396390;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,12345
	ctx.r6.s64 = 12345;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_8239632C:
	// addic. r5,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r5.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82396384
	if (ctx.cr0.eq) goto loc_82396384;
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// stb r10,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r9,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r9.u8);
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_82396384:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// bne 0x8239632c
	if (!ctx.cr0.eq) goto loc_8239632C;
loc_82396390:
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

__attribute__((alias("__imp__sub_823963A4"))) PPC_WEAK_FUNC(sub_823963A4);
PPC_FUNC_IMPL(__imp__sub_823963A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823963A8"))) PPC_WEAK_FUNC(sub_823963A8);
PPC_FUNC_IMPL(__imp__sub_823963A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82130528
	ctx.lr = 0x823963C4;
	sub_82130528(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x823963f4
	if (!ctx.cr6.gt) goto loc_823963F4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823963D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823963e8
	if (ctx.cr6.eq) goto loc_823963E8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_823963E8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x823963d8
	if (!ctx.cr0.eq) goto loc_823963D8;
loc_823963F4:
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

__attribute__((alias("__imp__sub_82396408"))) PPC_WEAK_FUNC(sub_82396408);
PPC_FUNC_IMPL(__imp__sub_82396408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82396410;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,-12120
	ctx.r29.s64 = ctx.r11.s64 + -12120;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8239645c
	if (!ctx.cr6.gt) goto loc_8239645C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82396434:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x823db730
	ctx.lr = 0x82396444;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396478
	if (ctx.cr6.eq) goto loc_82396478;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82396434
	if (ctx.cr6.lt) goto loc_82396434;
loc_8239645C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,7308
	ctx.r3.s64 = ctx.r11.s64 + 7308;
	// bl 0x82130000
	ctx.lr = 0x8239646C;
	sub_82130000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82396478:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82396484"))) PPC_WEAK_FUNC(sub_82396484);
PPC_FUNC_IMPL(__imp__sub_82396484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396488"))) PPC_WEAK_FUNC(sub_82396488);
PPC_FUNC_IMPL(__imp__sub_82396488) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,-12168(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12168);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823964A4"))) PPC_WEAK_FUNC(sub_823964A4);
PPC_FUNC_IMPL(__imp__sub_823964A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823964A8"))) PPC_WEAK_FUNC(sub_823964A8);
PPC_FUNC_IMPL(__imp__sub_823964A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823964BC"))) PPC_WEAK_FUNC(sub_823964BC);
PPC_FUNC_IMPL(__imp__sub_823964BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823964C0"))) PPC_WEAK_FUNC(sub_823964C0);
PPC_FUNC_IMPL(__imp__sub_823964C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x823964C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-8316
	ctx.r4.s64 = ctx.r11.s64 + -8316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x823964E8;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823964fc
	if (ctx.cr6.eq) goto loc_823964FC;
	// stb r25,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r25.u8);
loc_823964FC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7800
	ctx.r4.s64 = ctx.r11.s64 + 7800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396510;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396524
	if (ctx.cr6.eq) goto loc_82396524;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r11.u8);
loc_82396524:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9848
	ctx.r4.s64 = ctx.r11.s64 + 9848;
	// bl 0x821cfe20
	ctx.lr = 0x82396534;
	sub_821CFE20(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82396550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82183870
	ctx.lr = 0x82396560;
	sub_82183870(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821378b8
	ctx.lr = 0x82396568;
	sub_821378B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821c9790
	ctx.lr = 0x82396578;
	sub_821C9790(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r8,-7220
	ctx.r5.s64 = ctx.r8.s64 + -7220;
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82137a08
	ctx.lr = 0x82396594;
	sub_82137A08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x821c9790
	ctx.lr = 0x823965A0;
	sub_821C9790(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,7788
	ctx.r4.s64 = ctx.r7.s64 + 7788;
	// bl 0x821cfe20
	ctx.lr = 0x823965B4;
	sub_821CFE20(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823965D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82183870
	ctx.lr = 0x823965E0;
	sub_82183870(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821378b8
	ctx.lr = 0x823965E8;
	sub_821378B8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,7780
	ctx.r4.s64 = ctx.r10.s64 + 7780;
	// bl 0x821cfe20
	ctx.lr = 0x823965FC;
	sub_821CFE20(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82396618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82396088
	ctx.lr = 0x82396620;
	sub_82396088(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82396644
	if (!ctx.cr6.eq) goto loc_82396644;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r3,r11,7720
	ctx.r3.s64 = ctx.r11.s64 + 7720;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x82396644;
	sub_82130000(ctx, base);
loc_82396644:
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7704
	ctx.r4.s64 = ctx.r11.s64 + 7704;
	// bl 0x821cfe20
	ctx.lr = 0x82396658;
	sub_821CFE20(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82396674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82183870
	ctx.lr = 0x82396684;
	sub_82183870(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-12168
	ctx.r27.s64 = ctx.r11.s64 + -12168;
	// lhz r26,4(r27)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x823966d0
	if (!ctx.cr6.gt) goto loc_823966D0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823966A0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x823db730
	ctx.lr = 0x823966B0;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823966cc
	if (ctx.cr6.eq) goto loc_823966CC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x823966a0
	if (ctx.cr6.lt) goto loc_823966A0;
	// b 0x823966d0
	goto loc_823966D0;
loc_823966CC:
	// stb r29,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r29.u8);
loc_823966D0:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x823966e8
	if (!ctx.cr6.eq) goto loc_823966E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r11,7656
	ctx.r3.s64 = ctx.r11.s64 + 7656;
	// bl 0x821bd618
	ctx.lr = 0x823966E8;
	sub_821BD618(ctx, base);
loc_823966E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7648
	ctx.r4.s64 = ctx.r11.s64 + 7648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x823966FC;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,7588
	ctx.r28.s64 = ctx.r11.s64 + 7588;
	// beq cr6,0x82396758
	if (ctx.cr6.eq) goto loc_82396758;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239672C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395fe8
	ctx.lr = 0x82396734;
	sub_82395FE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82396754
	if (!ctx.cr6.eq) goto loc_82396754;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r29,15
	ctx.r29.s64 = 15;
	// bl 0x82130000
	ctx.lr = 0x82396754;
	sub_82130000(ctx, base);
loc_82396754:
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_82396758:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7572
	ctx.r4.s64 = ctx.r11.s64 + 7572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x8239676C;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823967c4
	if (ctx.cr6.eq) goto loc_823967C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395fe8
	ctx.lr = 0x8239679C;
	sub_82395FE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x823967bc
	if (!ctx.cr6.eq) goto loc_823967BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r29,15
	ctx.r29.s64 = 15;
	// bl 0x82130000
	ctx.lr = 0x823967BC;
	sub_82130000(ctx, base);
loc_823967BC:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// b 0x823967cc
	goto loc_823967CC;
loc_823967C4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_823967CC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,7556
	ctx.r29.s64 = ctx.r11.s64 + 7556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821cff40
	ctx.lr = 0x823967E4;
	sub_821CFF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239684c
	if (ctx.cr6.eq) goto loc_8239684C;
loc_823967F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfe20
	ctx.lr = 0x823967FC;
	sub_821CFE20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e818
	ctx.lr = 0x82396820;
	sub_8238E818(ctx, base);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// slw r8,r25,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r3.u8 & 0x3F));
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r7,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396840;
	sub_821CFF40(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823967f0
	if (!ctx.cr6.eq) goto loc_823967F0;
loc_8239684C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-27852
	ctx.r4.s64 = ctx.r11.s64 + -27852;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396860;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396888
	if (ctx.cr6.eq) goto loc_82396888;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
loc_82396888:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7532
	ctx.r4.s64 = ctx.r11.s64 + 7532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x8239689C;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823968c8
	if (ctx.cr6.eq) goto loc_823968C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823968C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// b 0x823968d0
	goto loc_823968D0;
loc_823968C8:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_823968D0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7516
	ctx.r4.s64 = ctx.r11.s64 + 7516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x823968E4;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239690c
	if (ctx.cr6.eq) goto loc_8239690C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
loc_8239690C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7500
	ctx.r4.s64 = ctx.r11.s64 + 7500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396920;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396948
	if (ctx.cr6.eq) goto loc_82396948;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,37(r30)
	PPC_STORE_U8(ctx.r30.u32 + 37, ctx.r3.u8);
loc_82396948:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-5152
	ctx.r4.s64 = ctx.r11.s64 + -5152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x8239695C;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396984
	if (ctx.cr6.eq) goto loc_82396984;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_82396984:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15556
	ctx.r4.s64 = ctx.r11.s64 + -15556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396998;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823969c0
	if (ctx.cr6.eq) goto loc_823969C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823969BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
loc_823969C0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7488
	ctx.r4.s64 = ctx.r11.s64 + 7488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x823969D4;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823969e4
	if (ctx.cr6.eq) goto loc_823969E4;
	// stb r25,38(r30)
	PPC_STORE_U8(ctx.r30.u32 + 38, ctx.r25.u8);
loc_823969E4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7472
	ctx.r4.s64 = ctx.r11.s64 + 7472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x823969F8;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396a08
	if (ctx.cr6.eq) goto loc_82396A08;
	// stb r25,39(r30)
	PPC_STORE_U8(ctx.r30.u32 + 39, ctx.r25.u8);
loc_82396A08:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7460
	ctx.r4.s64 = ctx.r11.s64 + 7460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396A1C;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396a50
	if (ctx.cr6.eq) goto loc_82396A50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r7.u8);
loc_82396A50:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7452
	ctx.r4.s64 = ctx.r11.s64 + 7452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396A64;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396a8c
	if (ctx.cr6.eq) goto loc_82396A8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
loc_82396A8C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7440
	ctx.r4.s64 = ctx.r11.s64 + 7440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396AA0;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396ac8
	if (ctx.cr6.eq) goto loc_82396AC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
loc_82396AC8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7428
	ctx.r4.s64 = ctx.r11.s64 + 7428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396ADC;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396b04
	if (ctx.cr6.eq) goto loc_82396B04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
loc_82396B04:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7412
	ctx.r4.s64 = ctx.r11.s64 + 7412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396B18;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396b44
	if (ctx.cr6.eq) goto loc_82396B44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// b 0x82396b4c
	goto loc_82396B4C;
loc_82396B44:
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
loc_82396B4C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7400
	ctx.r4.s64 = ctx.r11.s64 + 7400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396B60;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396b88
	if (ctx.cr6.eq) goto loc_82396B88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
loc_82396B88:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7388
	ctx.r4.s64 = ctx.r11.s64 + 7388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396B9C;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396bc4
	if (ctx.cr6.eq) goto loc_82396BC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
loc_82396BC4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7372
	ctx.r4.s64 = ctx.r11.s64 + 7372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396BD8;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396c04
	if (ctx.cr6.eq) goto loc_82396C04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// b 0x82396c0c
	goto loc_82396C0C;
loc_82396C04:
	// lfs f0,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
loc_82396C0C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396C20;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396c48
	if (ctx.cr6.eq) goto loc_82396C48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
loc_82396C48:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7348
	ctx.r4.s64 = ctx.r11.s64 + 7348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396C5C;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396c84
	if (ctx.cr6.eq) goto loc_82396C84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
loc_82396C84:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7332
	ctx.r4.s64 = ctx.r11.s64 + 7332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396C98;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396cc4
	if (ctx.cr6.eq) goto loc_82396CC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// b 0x82396ccc
	goto loc_82396CCC;
loc_82396CC4:
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
loc_82396CCC:
	// li r3,8176
	ctx.r3.s64 = 8176;
	// bl 0x82130528
	ctx.lr = 0x82396CD4;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396ce4
	if (ctx.cr6.eq) goto loc_82396CE4;
	// bl 0x8238f550
	ctx.lr = 0x82396CE0;
	sub_8238F550(ctx, base);
	// b 0x82396ce8
	goto loc_82396CE8;
loc_82396CE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82396CE8:
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8238f980
	ctx.lr = 0x82396CF4;
	sub_8238F980(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82390b18
	ctx.lr = 0x82396D04;
	sub_82390B18(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8238f968
	ctx.lr = 0x82396D10;
	sub_8238F968(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82396D18"))) PPC_WEAK_FUNC(sub_82396D18);
PPC_FUNC_IMPL(__imp__sub_82396D18) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29624
	ctx.r4.s64 = ctx.r11.s64 + -29624;
	// bl 0x821d0898
	ctx.lr = 0x82396D44;
	sub_821D0898(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,9848
	ctx.r4.s64 = ctx.r10.s64 + 9848;
	// bl 0x821cfe20
	ctx.lr = 0x82396D54;
	sub_821CFE20(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82396D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82183870
	ctx.lr = 0x82396D80;
	sub_82183870(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821378b8
	ctx.lr = 0x82396D88;
	sub_821378B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,7812
	ctx.r4.s64 = ctx.r7.s64 + 7812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82396DA0;
	sub_821CFF40(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82396dd4
	if (ctx.cr6.eq) goto loc_82396DD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r7.u8);
loc_82396DD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d0260
	ctx.lr = 0x82396DDC;
	sub_821D0260(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_82396DF4"))) PPC_WEAK_FUNC(sub_82396DF4);
PPC_FUNC_IMPL(__imp__sub_82396DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396DF8"))) PPC_WEAK_FUNC(sub_82396DF8);
PPC_FUNC_IMPL(__imp__sub_82396DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82396E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// bne cr6,0x82396e74
	if (!ctx.cr6.eq) goto loc_82396E74;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// bl 0x823962f0
	ctx.lr = 0x82396E28;
	sub_823962F0(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396e68
	if (ctx.cr6.eq) goto loc_82396E68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82396E3C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 * 104;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// bl 0x823da950
	ctx.lr = 0x82396E54;
	sub_823DA950(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82396e3c
	if (ctx.cr6.lt) goto loc_82396E3C;
loc_82396E68:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x82396E70;
	sub_82130588(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82396E74:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 * 104;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82396E94"))) PPC_WEAK_FUNC(sub_82396E94);
PPC_FUNC_IMPL(__imp__sub_82396E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396E98"))) PPC_WEAK_FUNC(sub_82396E98);
PPC_FUNC_IMPL(__imp__sub_82396E98) {
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
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82396f24
	if (!ctx.cr6.eq) goto loc_82396F24;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// bl 0x823963a8
	ctx.lr = 0x82396ED0;
	sub_823963A8(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396f18
	if (ctx.cr6.eq) goto loc_82396F18;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82396EE4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r6,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82396ee4
	if (ctx.cr6.lt) goto loc_82396EE4;
loc_82396F18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x82396F20;
	sub_82130588(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82396F24:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82396F54"))) PPC_WEAK_FUNC(sub_82396F54);
PPC_FUNC_IMPL(__imp__sub_82396F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396F58"))) PPC_WEAK_FUNC(sub_82396F58);
PPC_FUNC_IMPL(__imp__sub_82396F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r10,r11,-12188
	ctx.r10.s64 = ctx.r11.s64 + -12188;
	// lwz r11,-12188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12188);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396fa4
	if (ctx.cr6.eq) goto loc_82396FA4;
loc_82396F80:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82396fac
	if (!ctx.cr6.eq) goto loc_82396FAC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396f80
	if (!ctx.cr6.eq) goto loc_82396F80;
loc_82396FA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82396FAC:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396FB4"))) PPC_WEAK_FUNC(sub_82396FB4);
PPC_FUNC_IMPL(__imp__sub_82396FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396FB8"))) PPC_WEAK_FUNC(sub_82396FB8);
PPC_FUNC_IMPL(__imp__sub_82396FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r10,r11,-12188
	ctx.r10.s64 = ctx.r11.s64 + -12188;
	// lwz r11,-12188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12188);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397004
	if (ctx.cr6.eq) goto loc_82397004;
loc_82396FE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8239700c
	if (!ctx.cr6.eq) goto loc_8239700C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396fe0
	if (!ctx.cr6.eq) goto loc_82396FE0;
loc_82397004:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8239700C:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397014"))) PPC_WEAK_FUNC(sub_82397014);
PPC_FUNC_IMPL(__imp__sub_82397014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397018"))) PPC_WEAK_FUNC(sub_82397018);
PPC_FUNC_IMPL(__imp__sub_82397018) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x8239702C;
	sub_821C9790(ctx, base);
	// bl 0x82396fb8
	ctx.lr = 0x82397030;
	sub_82396FB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239704c
	if (ctx.cr6.eq) goto loc_8239704C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8239704C:
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

__attribute__((alias("__imp__sub_82397060"))) PPC_WEAK_FUNC(sub_82397060);
PPC_FUNC_IMPL(__imp__sub_82397060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82397068;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239709c
	if (ctx.cr6.eq) goto loc_8239709C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82130588
	ctx.lr = 0x82397088;
	sub_82130588(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239709c
	if (ctx.cr6.eq) goto loc_8239709C;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82130588
	ctx.lr = 0x8239709C;
	sub_82130588(ctx, base);
loc_8239709C:
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r29,-1
	ctx.r29.s64 = -1;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r4,r5,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x823970f0
	if (!ctx.cr6.gt) goto loc_823970F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823970F0:
	// bl 0x82130528
	ctx.lr = 0x823970F4;
	sub_82130528(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8239711c
	if (ctx.cr6.gt) goto loc_8239711C;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82397120
	if (!ctx.cr6.gt) goto loc_82397120;
loc_8239711C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82397120:
	// bl 0x82130528
	ctx.lr = 0x82397124;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq cr6,0x82397160
	if (ctx.cr6.eq) goto loc_82397160;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt 0x82397158
	if (ctx.cr0.lt) goto loc_82397158;
loc_82397144:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82397144
	if (!ctx.cr0.lt) goto loc_82397144;
loc_82397158:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82397164
	goto loc_82397164;
loc_82397160:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82397164:
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq 0x823971a0
	if (ctx.cr0.eq) goto loc_823971A0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82397184:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// bne 0x82397184
	if (!ctx.cr0.eq) goto loc_82397184;
loc_823971A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823d9890
	ctx.lr = 0x823971C4;
	sub_823D9890(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823971CC"))) PPC_WEAK_FUNC(sub_823971CC);
PPC_FUNC_IMPL(__imp__sub_823971CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823971D0"))) PPC_WEAK_FUNC(sub_823971D0);
PPC_FUNC_IMPL(__imp__sub_823971D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x823971D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,63
	ctx.r4.s64 = 63;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82397200
	if (!ctx.cr6.eq) goto loc_82397200;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,7904
	ctx.r5.s64 = ctx.r11.s64 + 7904;
	// bl 0x82137a08
	ctx.lr = 0x823971FC;
	sub_82137A08(ctx, base);
	// b 0x82397210
	goto loc_82397210;
loc_82397200:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,7876
	ctx.r5.s64 = ctx.r11.s64 + 7876;
	// bl 0x82137a08
	ctx.lr = 0x82397210;
	sub_82137A08(ctx, base);
loc_82397210:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r5,r11,-32764
	ctx.r5.s64 = ctx.r11.s64 + -32764;
	// addi r3,r10,30576
	ctx.r3.s64 = ctx.r10.s64 + 30576;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821ca6a8
	ctx.lr = 0x82397230;
	sub_821CA6A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8239725c
	if (!ctx.cr6.eq) goto loc_8239725C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8239744c
	if (!ctx.cr6.eq) goto loc_8239744C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,7840
	ctx.r3.s64 = ctx.r11.s64 + 7840;
	// bl 0x821bd618
	ctx.lr = 0x82397254;
	sub_821BD618(ctx, base);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8239725C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821d1cd0
	ctx.lr = 0x82397264;
	sub_821D1CD0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,7832
	ctx.r4.s64 = ctx.r11.s64 + 7832;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821cf7b8
	ctx.lr = 0x82397278;
	sub_821CF7B8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,7704
	ctx.r31.s64 = ctx.r11.s64 + 7704;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821cff40
	ctx.lr = 0x82397290;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823972e4
	if (ctx.cr6.eq) goto loc_823972E4;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r30,r11,-12168
	ctx.r30.s64 = ctx.r11.s64 + -12168;
loc_823972A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821cfe20
	ctx.lr = 0x823972B0;
	sub_821CFE20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// bl 0x82396e98
	ctx.lr = 0x823972C0;
	sub_82396E98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82396d18
	ctx.lr = 0x823972C8;
	sub_82396D18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821cff40
	ctx.lr = 0x823972D8;
	sub_821CFF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823972a4
	if (!ctx.cr6.eq) goto loc_823972A4;
loc_823972E4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,7824
	ctx.r29.s64 = ctx.r11.s64 + 7824;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821cff40
	ctx.lr = 0x823972FC;
	sub_821CFF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,-12120
	ctx.r28.s64 = ctx.r11.s64 + -12120;
	// beq cr6,0x823973a4
	if (ctx.cr6.eq) goto loc_823973A4;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r11,-12268
	ctx.r27.s64 = ctx.r11.s64 + -12268;
	// addi r31,r10,-8316
	ctx.r31.s64 = ctx.r10.s64 + -8316;
	// addi r30,r9,-29624
	ctx.r30.s64 = ctx.r9.s64 + -29624;
loc_82397328:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821cfe20
	ctx.lr = 0x82397334;
	sub_821CFE20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821d0898
	ctx.lr = 0x82397340;
	sub_821D0898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821cff40
	ctx.lr = 0x82397350;
	sub_821CFF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397368
	if (ctx.cr6.eq) goto loc_82397368;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397380
	if (ctx.cr6.eq) goto loc_82397380;
loc_82397368:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r25,r1,144
	ctx.r25.s64 = ctx.r1.s64 + 144;
	// bl 0x82396df8
	ctx.lr = 0x82397378;
	sub_82396DF8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823964c0
	ctx.lr = 0x82397380;
	sub_823964C0(ctx, base);
loc_82397380:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821d0260
	ctx.lr = 0x82397388;
	sub_821D0260(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821cff40
	ctx.lr = 0x82397398;
	sub_821CFF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82397328
	if (!ctx.cr6.eq) goto loc_82397328;
loc_823973A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821be610
	ctx.lr = 0x823973AC;
	sub_821BE610(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lhz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r31,r11,-12188
	ctx.r31.s64 = ctx.r11.s64 + -12188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82397060
	ctx.lr = 0x823973C0;
	sub_82397060(ctx, base);
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239744c
	if (ctx.cr6.eq) goto loc_8239744C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823973D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x821c9790
	ctx.lr = 0x823973E8;
	sub_821C9790(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// and r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r27,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r27.u32);
	// lhz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823973d4
	if (ctx.cr6.lt) goto loc_823973D4;
loc_8239744C:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82397454"))) PPC_WEAK_FUNC(sub_82397454);
PPC_FUNC_IMPL(__imp__sub_82397454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397458"))) PPC_WEAK_FUNC(sub_82397458);
PPC_FUNC_IMPL(__imp__sub_82397458) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397468
	if (ctx.cr6.eq) goto loc_82397468;
	// lbz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// blr 
	return;
loc_82397468:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397470"))) PPC_WEAK_FUNC(sub_82397470);
PPC_FUNC_IMPL(__imp__sub_82397470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r10,r11,-12092
	ctx.r10.s64 = ctx.r11.s64 + -12092;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239748c
	if (ctx.cr6.eq) goto loc_8239748C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8239748C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239749c
	if (ctx.cr6.eq) goto loc_8239749C;
	// lbz r3,21(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// blr 
	return;
loc_8239749C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823974A4"))) PPC_WEAK_FUNC(sub_823974A4);
PPC_FUNC_IMPL(__imp__sub_823974A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823974A8"))) PPC_WEAK_FUNC(sub_823974A8);
PPC_FUNC_IMPL(__imp__sub_823974A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lbz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// li r8,10
	ctx.r8.s64 = 10;
	// ori r7,r10,10176
	ctx.r7.u64 = ctx.r10.u64 | 10176;
	// ori r6,r11,128
	ctx.r6.u64 = ctx.r11.u64 | 128;
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// ori r5,r9,192
	ctx.r5.u64 = ctx.r9.u64 | 192;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r6,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r5,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r5.u8);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// ori r6,r7,224
	ctx.r6.u64 = ctx.r7.u64 | 224;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stb r6,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r6.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82397514
	if (ctx.cr6.eq) goto loc_82397514;
	// stb r9,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r9.u8);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
loc_82397514:
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397528"))) PPC_WEAK_FUNC(sub_82397528);
PPC_FUNC_IMPL(__imp__sub_82397528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r8,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397544"))) PPC_WEAK_FUNC(sub_82397544);
PPC_FUNC_IMPL(__imp__sub_82397544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397548"))) PPC_WEAK_FUNC(sub_82397548);
PPC_FUNC_IMPL(__imp__sub_82397548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397564"))) PPC_WEAK_FUNC(sub_82397564);
PPC_FUNC_IMPL(__imp__sub_82397564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397568"))) PPC_WEAK_FUNC(sub_82397568);
PPC_FUNC_IMPL(__imp__sub_82397568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397584"))) PPC_WEAK_FUNC(sub_82397584);
PPC_FUNC_IMPL(__imp__sub_82397584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397588"))) PPC_WEAK_FUNC(sub_82397588);
PPC_FUNC_IMPL(__imp__sub_82397588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r8,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823975A4"))) PPC_WEAK_FUNC(sub_823975A4);
PPC_FUNC_IMPL(__imp__sub_823975A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823975A8"))) PPC_WEAK_FUNC(sub_823975A8);
PPC_FUNC_IMPL(__imp__sub_823975A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r8,29,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823975C4"))) PPC_WEAK_FUNC(sub_823975C4);
PPC_FUNC_IMPL(__imp__sub_823975C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823975C8"))) PPC_WEAK_FUNC(sub_823975C8);
PPC_FUNC_IMPL(__imp__sub_823975C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r8,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823975E4"))) PPC_WEAK_FUNC(sub_823975E4);
PPC_FUNC_IMPL(__imp__sub_823975E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823975E8"))) PPC_WEAK_FUNC(sub_823975E8);
PPC_FUNC_IMPL(__imp__sub_823975E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397604"))) PPC_WEAK_FUNC(sub_82397604);
PPC_FUNC_IMPL(__imp__sub_82397604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397608"))) PPC_WEAK_FUNC(sub_82397608);
PPC_FUNC_IMPL(__imp__sub_82397608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397624"))) PPC_WEAK_FUNC(sub_82397624);
PPC_FUNC_IMPL(__imp__sub_82397624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397628"))) PPC_WEAK_FUNC(sub_82397628);
PPC_FUNC_IMPL(__imp__sub_82397628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r7,r8,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397644"))) PPC_WEAK_FUNC(sub_82397644);
PPC_FUNC_IMPL(__imp__sub_82397644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397648"))) PPC_WEAK_FUNC(sub_82397648);
PPC_FUNC_IMPL(__imp__sub_82397648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397664"))) PPC_WEAK_FUNC(sub_82397664);
PPC_FUNC_IMPL(__imp__sub_82397664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397668"))) PPC_WEAK_FUNC(sub_82397668);
PPC_FUNC_IMPL(__imp__sub_82397668) {
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
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-12112
	ctx.r3.s64 = ctx.r10.s64 + -12112;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x821c0750
	ctx.lr = 0x823976A0;
	sub_821C0750(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_823976C0"))) PPC_WEAK_FUNC(sub_823976C0);
PPC_FUNC_IMPL(__imp__sub_823976C0) {
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
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-12072
	ctx.r3.s64 = ctx.r10.s64 + -12072;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x821c0750
	ctx.lr = 0x823976F4;
	sub_821C0750(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82397724
	if (ctx.cr6.eq) goto loc_82397724;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r9,r11,1000
	ctx.r9.s64 = ctx.r11.s64 * 1000;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
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
loc_82397724:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82397744"))) PPC_WEAK_FUNC(sub_82397744);
PPC_FUNC_IMPL(__imp__sub_82397744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397748"))) PPC_WEAK_FUNC(sub_82397748);
PPC_FUNC_IMPL(__imp__sub_82397748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// rlwinm r7,r8,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397764"))) PPC_WEAK_FUNC(sub_82397764);
PPC_FUNC_IMPL(__imp__sub_82397764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397768"))) PPC_WEAK_FUNC(sub_82397768);
PPC_FUNC_IMPL(__imp__sub_82397768) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// rlwinm r7,r8,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397784"))) PPC_WEAK_FUNC(sub_82397784);
PPC_FUNC_IMPL(__imp__sub_82397784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397788"))) PPC_WEAK_FUNC(sub_82397788);
PPC_FUNC_IMPL(__imp__sub_82397788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823977ac
	if (ctx.cr6.eq) goto loc_823977AC;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_823977AC:
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

__attribute__((alias("__imp__sub_823977C0"))) PPC_WEAK_FUNC(sub_823977C0);
PPC_FUNC_IMPL(__imp__sub_823977C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r11,-12092
	ctx.r9.s64 = ctx.r11.s64 + -12092;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823977f0
	if (ctx.cr6.eq) goto loc_823977F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_823977F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239780c
	if (ctx.cr6.eq) goto loc_8239780C;
	// lbz r11,21(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8239780C:
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

__attribute__((alias("__imp__sub_82397820"))) PPC_WEAK_FUNC(sub_82397820);
PPC_FUNC_IMPL(__imp__sub_82397820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397838"))) PPC_WEAK_FUNC(sub_82397838);
PPC_FUNC_IMPL(__imp__sub_82397838) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r11,11968
	ctx.r4.s64 = ctx.r11.s64 + 11968;
	// addi r3,r10,8444
	ctx.r3.s64 = ctx.r10.s64 + 8444;
	// bl 0x82554798
	ctx.lr = 0x82397858;
	sub_82554798(ctx, base);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r4,r9,29992
	ctx.r4.s64 = ctx.r9.s64 + 29992;
	// addi r3,r8,8420
	ctx.r3.s64 = ctx.r8.s64 + 8420;
	// bl 0x82554798
	ctx.lr = 0x8239786C;
	sub_82554798(ctx, base);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r4,r7,30024
	ctx.r4.s64 = ctx.r7.s64 + 30024;
	// addi r3,r6,8400
	ctx.r3.s64 = ctx.r6.s64 + 8400;
	// bl 0x82554798
	ctx.lr = 0x82397880;
	sub_82554798(ctx, base);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r4,r5,30056
	ctx.r4.s64 = ctx.r5.s64 + 30056;
	// addi r3,r3,8376
	ctx.r3.s64 = ctx.r3.s64 + 8376;
	// bl 0x82554798
	ctx.lr = 0x82397894;
	sub_82554798(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r11,30088
	ctx.r4.s64 = ctx.r11.s64 + 30088;
	// addi r3,r10,8352
	ctx.r3.s64 = ctx.r10.s64 + 8352;
	// bl 0x82554798
	ctx.lr = 0x823978A8;
	sub_82554798(ctx, base);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r4,r9,30120
	ctx.r4.s64 = ctx.r9.s64 + 30120;
	// addi r3,r8,8324
	ctx.r3.s64 = ctx.r8.s64 + 8324;
	// bl 0x82554798
	ctx.lr = 0x823978BC;
	sub_82554798(ctx, base);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r4,r7,30152
	ctx.r4.s64 = ctx.r7.s64 + 30152;
	// addi r3,r6,8300
	ctx.r3.s64 = ctx.r6.s64 + 8300;
	// bl 0x82554798
	ctx.lr = 0x823978D0;
	sub_82554798(ctx, base);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r4,r5,30184
	ctx.r4.s64 = ctx.r5.s64 + 30184;
	// addi r3,r3,8280
	ctx.r3.s64 = ctx.r3.s64 + 8280;
	// bl 0x82554798
	ctx.lr = 0x823978E4;
	sub_82554798(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r11,30216
	ctx.r4.s64 = ctx.r11.s64 + 30216;
	// addi r3,r10,8256
	ctx.r3.s64 = ctx.r10.s64 + 8256;
	// bl 0x82554798
	ctx.lr = 0x823978F8;
	sub_82554798(ctx, base);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r4,r9,30248
	ctx.r4.s64 = ctx.r9.s64 + 30248;
	// addi r3,r8,8232
	ctx.r3.s64 = ctx.r8.s64 + 8232;
	// bl 0x82554798
	ctx.lr = 0x8239790C;
	sub_82554798(ctx, base);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r4,r7,30280
	ctx.r4.s64 = ctx.r7.s64 + 30280;
	// addi r3,r6,8212
	ctx.r3.s64 = ctx.r6.s64 + 8212;
	// bl 0x82554798
	ctx.lr = 0x82397920;
	sub_82554798(ctx, base);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r4,r5,30312
	ctx.r4.s64 = ctx.r5.s64 + 30312;
	// addi r3,r3,8184
	ctx.r3.s64 = ctx.r3.s64 + 8184;
	// bl 0x82554798
	ctx.lr = 0x82397934;
	sub_82554798(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r11,30400
	ctx.r4.s64 = ctx.r11.s64 + 30400;
	// addi r3,r10,8156
	ctx.r3.s64 = ctx.r10.s64 + 8156;
	// bl 0x82554798
	ctx.lr = 0x82397948;
	sub_82554798(ctx, base);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r4,r9,30536
	ctx.r4.s64 = ctx.r9.s64 + 30536;
	// addi r3,r8,8128
	ctx.r3.s64 = ctx.r8.s64 + 8128;
	// bl 0x82554798
	ctx.lr = 0x8239795C;
	sub_82554798(ctx, base);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r4,r7,30568
	ctx.r4.s64 = ctx.r7.s64 + 30568;
	// addi r3,r6,8100
	ctx.r3.s64 = ctx.r6.s64 + 8100;
	// bl 0x82554798
	ctx.lr = 0x82397970;
	sub_82554798(ctx, base);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r4,r5,30600
	ctx.r4.s64 = ctx.r5.s64 + 30600;
	// addi r3,r3,8072
	ctx.r3.s64 = ctx.r3.s64 + 8072;
	// bl 0x82554798
	ctx.lr = 0x82397984;
	sub_82554798(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r11,30656
	ctx.r4.s64 = ctx.r11.s64 + 30656;
	// addi r3,r10,8048
	ctx.r3.s64 = ctx.r10.s64 + 8048;
	// bl 0x82554798
	ctx.lr = 0x82397998;
	sub_82554798(ctx, base);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r4,r9,30752
	ctx.r4.s64 = ctx.r9.s64 + 30752;
	// addi r3,r8,8016
	ctx.r3.s64 = ctx.r8.s64 + 8016;
	// bl 0x82554798
	ctx.lr = 0x823979AC;
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

