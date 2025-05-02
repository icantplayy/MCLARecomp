#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825F9068"))) PPC_WEAK_FUNC(sub_825F9068);
PPC_FUNC_IMPL(__imp__sub_825F9068) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825f908c
	if (ctx.cr6.eq) goto loc_825F908C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825f9090
	if (!ctx.cr6.eq) goto loc_825F9090;
loc_825F908C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825F9090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F90C0"))) PPC_WEAK_FUNC(sub_825F90C0);
PPC_FUNC_IMPL(__imp__sub_825F90C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825F90C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825f9170
	if (!ctx.cr6.lt) goto loc_825F9170;
	// lhz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825f9170
	if (ctx.cr6.eq) goto loc_825F9170;
	// clrlwi r28,r5,24
	ctx.r28.u64 = ctx.r5.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825F90F8:
	// lhz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r8,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r8.u16);
	// lhz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825f913c
	if (ctx.cr6.lt) goto loc_825F913C;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f9138
	if (ctx.cr6.eq) goto loc_825F9138;
loc_825F9124:
	// stb r30,177(r11)
	PPC_STORE_U8(ctx.r11.u32 + 177, ctx.r30.u8);
	// stw r30,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r30.u32);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f9124
	if (!ctx.cr6.eq) goto loc_825F9124;
loc_825F9138:
	// sth r30,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r30.u16);
loc_825F913C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x825f9154
	if (!ctx.cr6.eq) goto loc_825F9154;
	// bl 0x825fdbc8
	ctx.lr = 0x825F9150;
	sub_825FDBC8(ctx, base);
	// b 0x825f9164
	goto loc_825F9164;
loc_825F9154:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F9164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F9164:
	// lhz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825f90f8
	if (!ctx.cr6.eq) goto loc_825F90F8;
loc_825F9170:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825F9178"))) PPC_WEAK_FUNC(sub_825F9178);
PPC_FUNC_IMPL(__imp__sub_825F9178) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825f91b4
	if (ctx.cr6.lt) goto loc_825F91B4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825F91B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825F91D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_825F91F4"))) PPC_WEAK_FUNC(sub_825F91F4);
PPC_FUNC_IMPL(__imp__sub_825F91F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F91F8"))) PPC_WEAK_FUNC(sub_825F91F8);
PPC_FUNC_IMPL(__imp__sub_825F91F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x825f922c
	if (!ctx.cr6.eq) goto loc_825F922C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_825F922C:
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825F9240"))) PPC_WEAK_FUNC(sub_825F9240);
PPC_FUNC_IMPL(__imp__sub_825F9240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825F9248;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825F9268;
	sub_821C9790(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825F9290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,28088
	ctx.r10.s64 = ctx.r10.s64 + 28088;
loc_825F929C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825f92c0
	if (ctx.cr6.eq) goto loc_825F92C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825f929c
	if (ctx.cr6.eq) goto loc_825F929C;
loc_825F92C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825f92d8
	if (!ctx.cr6.eq) goto loc_825F92D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825F92D8:
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f92fc
	if (ctx.cr6.eq) goto loc_825F92FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F92FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F92FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825F9304"))) PPC_WEAK_FUNC(sub_825F9304);
PPC_FUNC_IMPL(__imp__sub_825F9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9308"))) PPC_WEAK_FUNC(sub_825F9308);
PPC_FUNC_IMPL(__imp__sub_825F9308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_825F9328"))) PPC_WEAK_FUNC(sub_825F9328);
PPC_FUNC_IMPL(__imp__sub_825F9328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F932C"))) PPC_WEAK_FUNC(sub_825F932C);
PPC_FUNC_IMPL(__imp__sub_825F932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9330"))) PPC_WEAK_FUNC(sub_825F9330);
PPC_FUNC_IMPL(__imp__sub_825F9330) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f934c
	if (!ctx.cr6.lt) goto loc_825F934C;
	// lwz r3,188(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 188);
	// b 0x825f9350
	goto loc_825F9350;
loc_825F934C:
	// lwz r3,204(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
loc_825F9350:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f9374
	if (ctx.cr6.eq) goto loc_825F9374;
loc_825F9358:
	// lhz r11,166(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 166);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825f937c
	if (ctx.cr6.eq) goto loc_825F937C;
	// bgt cr6,0x825f9374
	if (ctx.cr6.gt) goto loc_825F9374;
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825f9358
	if (!ctx.cr6.eq) goto loc_825F9358;
loc_825F9374:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825F937C:
	// stw r3,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r3.u32);
	// lhz r11,166(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 166);
	// sth r11,200(r9)
	PPC_STORE_U16(ctx.r9.u32 + 200, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F938C"))) PPC_WEAK_FUNC(sub_825F938C);
PPC_FUNC_IMPL(__imp__sub_825F938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9390"))) PPC_WEAK_FUNC(sub_825F9390);
PPC_FUNC_IMPL(__imp__sub_825F9390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825F9398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825f93e4
	if (ctx.cr6.eq) goto loc_825F93E4;
loc_825F93B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 & ctx.r29.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825f93d8
	if (ctx.cr6.eq) goto loc_825F93D8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82603158
	ctx.lr = 0x825F93D8;
	sub_82603158(ctx, base);
loc_825F93D8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825f93b4
	if (!ctx.cr6.eq) goto loc_825F93B4;
loc_825F93E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825F93EC"))) PPC_WEAK_FUNC(sub_825F93EC);
PPC_FUNC_IMPL(__imp__sub_825F93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F93F0"))) PPC_WEAK_FUNC(sub_825F93F0);
PPC_FUNC_IMPL(__imp__sub_825F93F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,174(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 174);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f9408
	if (ctx.cr6.eq) goto loc_825F9408;
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
	// stb r11,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r11.u8);
loc_825F9408:
	// lbz r10,173(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f9420
	if (ctx.cr6.eq) goto loc_825F9420;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r11.u8);
	// stb r10,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r10.u8);
loc_825F9420:
	// lbz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825F9440"))) PPC_WEAK_FUNC(sub_825F9440);
PPC_FUNC_IMPL(__imp__sub_825F9440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F9444"))) PPC_WEAK_FUNC(sub_825F9444);
PPC_FUNC_IMPL(__imp__sub_825F9444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9448"))) PPC_WEAK_FUNC(sub_825F9448);
PPC_FUNC_IMPL(__imp__sub_825F9448) {
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
	// lis r31,-32126
	ctx.r31.s64 = -2105409536;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r11,-18488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18488);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,-18488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18488, ctx.r11.u32);
	// bl 0x8217f768
	ctx.lr = 0x825F9478;
	sub_8217F768(ctx, base);
	// lwz r11,-18488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18488);
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x8217f768
	ctx.lr = 0x825F9488;
	sub_8217F768(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8217f768
	ctx.lr = 0x825F9494;
	sub_8217F768(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8217f768
	ctx.lr = 0x825F94A0;
	sub_8217F768(ctx, base);
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

__attribute__((alias("__imp__sub_825F94B4"))) PPC_WEAK_FUNC(sub_825F94B4);
PPC_FUNC_IMPL(__imp__sub_825F94B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F94B8"))) PPC_WEAK_FUNC(sub_825F94B8);
PPC_FUNC_IMPL(__imp__sub_825F94B8) {
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
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8217f768
	ctx.lr = 0x825F94D0;
	sub_8217F768(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r11,-18488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18488);
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x8217f768
	ctx.lr = 0x825F94E4;
	sub_8217F768(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8217f768
	ctx.lr = 0x825F94F0;
	sub_8217F768(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8217f768
	ctx.lr = 0x825F94FC;
	sub_8217F768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F950C"))) PPC_WEAK_FUNC(sub_825F950C);
PPC_FUNC_IMPL(__imp__sub_825F950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9510"))) PPC_WEAK_FUNC(sub_825F9510);
PPC_FUNC_IMPL(__imp__sub_825F9510) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825ef8c8
	ctx.lr = 0x825F9534;
	sub_825EF8C8(ctx, base);
	// bl 0x823dbae8
	ctx.lr = 0x825F9538;
	sub_823DBAE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F9554"))) PPC_WEAK_FUNC(sub_825F9554);
PPC_FUNC_IMPL(__imp__sub_825F9554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9558"))) PPC_WEAK_FUNC(sub_825F9558);
PPC_FUNC_IMPL(__imp__sub_825F9558) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825ef8c8
	ctx.lr = 0x825F957C;
	sub_825EF8C8(ctx, base);
	// bl 0x823dbbc8
	ctx.lr = 0x825F9580;
	sub_823DBBC8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F959C"))) PPC_WEAK_FUNC(sub_825F959C);
PPC_FUNC_IMPL(__imp__sub_825F959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F95A0"))) PPC_WEAK_FUNC(sub_825F95A0);
PPC_FUNC_IMPL(__imp__sub_825F95A0) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825ef8c8
	ctx.lr = 0x825F95C4;
	sub_825EF8C8(ctx, base);
	// bl 0x823dbf10
	ctx.lr = 0x825F95C8;
	sub_823DBF10(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F95E4"))) PPC_WEAK_FUNC(sub_825F95E4);
PPC_FUNC_IMPL(__imp__sub_825F95E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F95E8"))) PPC_WEAK_FUNC(sub_825F95E8);
PPC_FUNC_IMPL(__imp__sub_825F95E8) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825ef8c8
	ctx.lr = 0x825F960C;
	sub_825EF8C8(ctx, base);
	// bl 0x823dccf0
	ctx.lr = 0x825F9610;
	sub_823DCCF0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F962C"))) PPC_WEAK_FUNC(sub_825F962C);
PPC_FUNC_IMPL(__imp__sub_825F962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9630"))) PPC_WEAK_FUNC(sub_825F9630);
PPC_FUNC_IMPL(__imp__sub_825F9630) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825ef8c8
	ctx.lr = 0x825F9654;
	sub_825EF8C8(ctx, base);
	// bl 0x823dcb30
	ctx.lr = 0x825F9658;
	sub_823DCB30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F9674"))) PPC_WEAK_FUNC(sub_825F9674);
PPC_FUNC_IMPL(__imp__sub_825F9674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9678"))) PPC_WEAK_FUNC(sub_825F9678);
PPC_FUNC_IMPL(__imp__sub_825F9678) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825ef8c8
	ctx.lr = 0x825F969C;
	sub_825EF8C8(ctx, base);
	// bl 0x823dca68
	ctx.lr = 0x825F96A0;
	sub_823DCA68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F96BC"))) PPC_WEAK_FUNC(sub_825F96BC);
PPC_FUNC_IMPL(__imp__sub_825F96BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F96C0"))) PPC_WEAK_FUNC(sub_825F96C0);
PPC_FUNC_IMPL(__imp__sub_825F96C0) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825ef8c8
	ctx.lr = 0x825F96E4;
	sub_825EF8C8(ctx, base);
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F9700"))) PPC_WEAK_FUNC(sub_825F9700);
PPC_FUNC_IMPL(__imp__sub_825F9700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x823df0a0
	ctx.lr = 0x825F9720;
	sub_823DF0A0(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F9758"))) PPC_WEAK_FUNC(sub_825F9758);
PPC_FUNC_IMPL(__imp__sub_825F9758) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825ef8c8
	ctx.lr = 0x825F977C;
	sub_825EF8C8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_825F9798"))) PPC_WEAK_FUNC(sub_825F9798);
PPC_FUNC_IMPL(__imp__sub_825F9798) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F97AC"))) PPC_WEAK_FUNC(sub_825F97AC);
PPC_FUNC_IMPL(__imp__sub_825F97AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F97B0"))) PPC_WEAK_FUNC(sub_825F97B0);
PPC_FUNC_IMPL(__imp__sub_825F97B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F97C4"))) PPC_WEAK_FUNC(sub_825F97C4);
PPC_FUNC_IMPL(__imp__sub_825F97C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F97C8"))) PPC_WEAK_FUNC(sub_825F97C8);
PPC_FUNC_IMPL(__imp__sub_825F97C8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,28104
	ctx.r3.s64 = ctx.r11.s64 + 28104;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825F97F8;
	sub_821C9790(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825F9820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_825F9838"))) PPC_WEAK_FUNC(sub_825F9838);
PPC_FUNC_IMPL(__imp__sub_825F9838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,28104
	ctx.r3.s64 = ctx.r11.s64 + 28104;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x821c9790
	ctx.lr = 0x825F9870;
	sub_821C9790(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,36(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825F9898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x825f98ac
	if (!ctx.cr6.eq) goto loc_825F98AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825f98bc
	goto loc_825F98BC;
loc_825F98AC:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825efb40
	ctx.lr = 0x825F98BC;
	sub_825EFB40(ctx, base);
loc_825F98BC:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,14060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14060);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F98CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F98E0"))) PPC_WEAK_FUNC(sub_825F98E0);
PPC_FUNC_IMPL(__imp__sub_825F98E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825F98E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r10,28116
	ctx.r3.s64 = ctx.r10.s64 + 28116;
	// addi r9,r11,-26680
	ctx.r9.s64 = ctx.r11.s64 + -26680;
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x821c9790
	ctx.lr = 0x825F9918;
	sub_821C9790(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825F9940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32160
	ctx.r6.s64 = -2107637760;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r4,r6,-26568
	ctx.r4.s64 = ctx.r6.s64 + -26568;
	// addi r3,r5,612
	ctx.r3.s64 = ctx.r5.s64 + 612;
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825F9964;
	sub_821C9790(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F9988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825F9990"))) PPC_WEAK_FUNC(sub_825F9990);
PPC_FUNC_IMPL(__imp__sub_825F9990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x825F9998;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x821c9790
	ctx.lr = 0x825F99D0;
	sub_821C9790(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,36(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825F99F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825f9aac
	if (ctx.cr6.eq) goto loc_825F9AAC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x825f9a40
	if (!ctx.cr6.eq) goto loc_825F9A40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F9A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_825F9A40:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825f9ab4
	if (!ctx.cr6.eq) goto loc_825F9AB4;
	// bl 0x825fdd28
	ctx.lr = 0x825F9A4C;
	sub_825FDD28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825F9A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x825fdd28
	ctx.lr = 0x825F9A7C;
	sub_825FDD28(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x825f9ab4
	if (!ctx.cr6.gt) goto loc_825F9AB4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fdd38
	ctx.lr = 0x825F9A8C;
	sub_825FDD38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_825F9AAC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_825F9AB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825F9ABC"))) PPC_WEAK_FUNC(sub_825F9ABC);
PPC_FUNC_IMPL(__imp__sub_825F9ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9AC0"))) PPC_WEAK_FUNC(sub_825F9AC0);
PPC_FUNC_IMPL(__imp__sub_825F9AC0) {
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
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f9af4
	if (ctx.cr6.eq) goto loc_825F9AF4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F9AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F9AF4:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f9b14
	if (ctx.cr6.eq) goto loc_825F9B14;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F9B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F9B14:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f9b34
	if (ctx.cr6.eq) goto loc_825F9B34;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F9B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F9B34:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f9b44
	if (ctx.cr6.eq) goto loc_825F9B44;
	// bl 0x825ef710
	ctx.lr = 0x825F9B44;
	sub_825EF710(ctx, base);
loc_825F9B44:
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

__attribute__((alias("__imp__sub_825F9B58"))) PPC_WEAK_FUNC(sub_825F9B58);
PPC_FUNC_IMPL(__imp__sub_825F9B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x825F9B60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,-1648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1648);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x825ee3e0
	ctx.lr = 0x825F9B84;
	sub_825EE3E0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x825f9bac
	if (!ctx.cr6.eq) goto loc_825F9BAC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28128
	ctx.r3.s64 = ctx.r11.s64 + 28128;
	// bl 0x82130000
	ctx.lr = 0x825F9BA0;
	sub_82130000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_825F9BAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825F9BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ed940
	ctx.lr = 0x825F9BDC;
	sub_825ED940(ctx, base);
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825f9c00
	if (ctx.cr6.eq) goto loc_825F9C00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F9C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F9C00:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825F9C1C"))) PPC_WEAK_FUNC(sub_825F9C1C);
PPC_FUNC_IMPL(__imp__sub_825F9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9C20"))) PPC_WEAK_FUNC(sub_825F9C20);
PPC_FUNC_IMPL(__imp__sub_825F9C20) {
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
	// bl 0x823db9d4
	ctx.lr = 0x825F9C38;
	sub_823DB9D4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f28,-31400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31400);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,-31068(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31068);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825F9C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f9cd8
	if (ctx.cr6.eq) goto loc_825F9CD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,27680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27680);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x825f9cc8
	if (!ctx.cr6.lt) goto loc_825F9CC8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_825F9CC8:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x825f9cd8
	if (!ctx.cr6.gt) goto loc_825F9CD8;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_825F9CD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,188(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f29,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x825f9d28
	if (ctx.cr6.eq) goto loc_825F9D28;
loc_825F9CEC:
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f9c20
	ctx.lr = 0x825F9CFC;
	sub_825F9C20(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x825f9d0c
	if (!ctx.cr6.lt) goto loc_825F9D0C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_825F9D0C:
	// fadds f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x825f9d1c
	if (!ctx.cr6.gt) goto loc_825F9D1C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_825F9D1C:
	// lwz r31,192(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825f9cec
	if (!ctx.cr6.eq) goto loc_825F9CEC;
loc_825F9D28:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// beq cr6,0x825f9d4c
	if (ctx.cr6.eq) goto loc_825F9D4C;
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// beq cr6,0x825f9d4c
	if (ctx.cr6.eq) goto loc_825F9D4C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f9d44
	if (ctx.cr6.eq) goto loc_825F9D44;
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_825F9D44:
	// fsubs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// b 0x825f9d50
	goto loc_825F9D50;
loc_825F9D4C:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_825F9D50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823dba20
	ctx.lr = 0x825F9D5C;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_825F9D70"))) PPC_WEAK_FUNC(sub_825F9D70);
PPC_FUNC_IMPL(__imp__sub_825F9D70) {
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
	// bl 0x823db9d4
	ctx.lr = 0x825F9D88;
	sub_823DB9D4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f28,-31400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31400);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,-31068(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31068);
	ctx.f27.f64 = double(temp.f32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825F9DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f9e28
	if (ctx.cr6.eq) goto loc_825F9E28;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,27680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27680);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x825f9e18
	if (!ctx.cr6.lt) goto loc_825F9E18;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_825F9E18:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x825f9e28
	if (!ctx.cr6.gt) goto loc_825F9E28;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_825F9E28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,188(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f29,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x825f9e78
	if (ctx.cr6.eq) goto loc_825F9E78;
loc_825F9E3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f9c20
	ctx.lr = 0x825F9E4C;
	sub_825F9C20(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x825f9e5c
	if (!ctx.cr6.lt) goto loc_825F9E5C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_825F9E5C:
	// fadds f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x825f9e6c
	if (!ctx.cr6.gt) goto loc_825F9E6C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_825F9E6C:
	// lwz r31,192(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825f9e3c
	if (!ctx.cr6.eq) goto loc_825F9E3C;
loc_825F9E78:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// beq cr6,0x825f9e9c
	if (ctx.cr6.eq) goto loc_825F9E9C;
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// beq cr6,0x825f9e9c
	if (ctx.cr6.eq) goto loc_825F9E9C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f9e94
	if (ctx.cr6.eq) goto loc_825F9E94;
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_825F9E94:
	// fsubs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// b 0x825f9ea0
	goto loc_825F9EA0;
loc_825F9E9C:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_825F9EA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823dba20
	ctx.lr = 0x825F9EAC;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_825F9EC0"))) PPC_WEAK_FUNC(sub_825F9EC0);
PPC_FUNC_IMPL(__imp__sub_825F9EC0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825F9EF0;
	sub_821C9790(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825F9F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_825F9F40"))) PPC_WEAK_FUNC(sub_825F9F40);
PPC_FUNC_IMPL(__imp__sub_825F9F40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825F9F70;
	sub_821C9790(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825F9FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_825F9FC0"))) PPC_WEAK_FUNC(sub_825F9FC0);
PPC_FUNC_IMPL(__imp__sub_825F9FC0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825F9FF0;
	sub_821C9790(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ef9a8
	ctx.lr = 0x825FA018;
	sub_825EF9A8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FA034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_825FA04C"))) PPC_WEAK_FUNC(sub_825FA04C);
PPC_FUNC_IMPL(__imp__sub_825FA04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FA050"))) PPC_WEAK_FUNC(sub_825FA050);
PPC_FUNC_IMPL(__imp__sub_825FA050) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FA080;
	sub_821C9790(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f0028
	ctx.lr = 0x825FA0A8;
	sub_825F0028(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FA0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_825FA0DC"))) PPC_WEAK_FUNC(sub_825FA0DC);
PPC_FUNC_IMPL(__imp__sub_825FA0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FA0E0"))) PPC_WEAK_FUNC(sub_825FA0E0);
PPC_FUNC_IMPL(__imp__sub_825FA0E0) {
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
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x825FA104;
	sub_82130528(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x825fa134
	if (!ctx.cr6.gt) goto loc_825FA134;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
loc_825FA118:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa128
	if (ctx.cr6.eq) goto loc_825FA128;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_825FA128:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x825fa118
	if (!ctx.cr0.eq) goto loc_825FA118;
loc_825FA134:
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

__attribute__((alias("__imp__sub_825FA148"))) PPC_WEAK_FUNC(sub_825FA148);
PPC_FUNC_IMPL(__imp__sub_825FA148) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa194
	if (ctx.cr6.eq) goto loc_825FA194;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// twllei r11,0
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa194
	if (ctx.cr6.eq) goto loc_825FA194;
loc_825FA17C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825fa19c
	if (ctx.cr6.eq) goto loc_825FA19C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fa17c
	if (!ctx.cr6.eq) goto loc_825FA17C;
loc_825FA194:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825FA19C:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FA1A4"))) PPC_WEAK_FUNC(sub_825FA1A4);
PPC_FUNC_IMPL(__imp__sub_825FA1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FA1A8"))) PPC_WEAK_FUNC(sub_825FA1A8);
PPC_FUNC_IMPL(__imp__sub_825FA1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825FA1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,11(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa278
	if (ctx.cr6.eq) goto loc_825FA278;
	// rlwinm r3,r28,2,14,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r31,r28,16
	ctx.r31.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x82130528
	ctx.lr = 0x825FA1D4;
	sub_82130528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fa1f8
	if (ctx.cr6.eq) goto loc_825FA1F8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_825FA1EC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825fa1ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825FA1EC;
loc_825FA1F8:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa268
	if (ctx.cr6.eq) goto loc_825FA268;
	// li r8,0
	ctx.r8.s64 = 0;
loc_825FA20C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa254
	if (ctx.cr6.eq) goto loc_825FA254;
loc_825FA21C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// twllei r31,0
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// divwu r4,r5,r31
	ctx.r4.u32 = ctx.r5.u32 / ctx.r31.u32;
	// mullw r3,r4,r31
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stwx r6,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r6.u32);
	// bne cr6,0x825fa21c
	if (!ctx.cr6.eq) goto loc_825FA21C;
loc_825FA254:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825fa20c
	if (ctx.cr6.lt) goto loc_825FA20C;
loc_825FA268:
	// sth r28,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r28.u16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x825FA274;
	sub_82130588(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_825FA278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FA280"))) PPC_WEAK_FUNC(sub_825FA280);
PPC_FUNC_IMPL(__imp__sub_825FA280) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FA28C"))) PPC_WEAK_FUNC(sub_825FA28C);
PPC_FUNC_IMPL(__imp__sub_825FA28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FA290"))) PPC_WEAK_FUNC(sub_825FA290);
PPC_FUNC_IMPL(__imp__sub_825FA290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa2b0
	if (ctx.cr6.eq) goto loc_825FA2B0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_825FA2B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FA2B8"))) PPC_WEAK_FUNC(sub_825FA2B8);
PPC_FUNC_IMPL(__imp__sub_825FA2B8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x825fa148
	ctx.lr = 0x825FA2D0;
	sub_825FA148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FA2E0"))) PPC_WEAK_FUNC(sub_825FA2E0);
PPC_FUNC_IMPL(__imp__sub_825FA2E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FA2E8"))) PPC_WEAK_FUNC(sub_825FA2E8);
PPC_FUNC_IMPL(__imp__sub_825FA2E8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r10,r11,28172
	ctx.r10.s64 = ctx.r11.s64 + 28172;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825ef598
	ctx.lr = 0x825FA310;
	sub_825EF598(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// stb r9,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r9.u8);
	// stb r11,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r11.u8);
	// stb r11,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r11.u8);
	// stb r11,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r11.u8);
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// stb r11,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r11.u8);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// sth r11,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r11.u16);
	// sth r11,166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 166, ctx.r11.u16);
	// stb r11,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r11.u8);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// sth r8,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r8.u16);
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

__attribute__((alias("__imp__sub_825FA38C"))) PPC_WEAK_FUNC(sub_825FA38C);
PPC_FUNC_IMPL(__imp__sub_825FA38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FA390"))) PPC_WEAK_FUNC(sub_825FA390);
PPC_FUNC_IMPL(__imp__sub_825FA390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x825FA398;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r30,r27,188
	ctx.r30.s64 = ctx.r27.s64 + 188;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x825fa3e0
	if (ctx.cr6.eq) goto loc_825FA3E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa44c
	if (ctx.cr6.eq) goto loc_825FA44C;
loc_825FA3C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,166(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825fa3e0
	if (ctx.cr6.eq) goto loc_825FA3E0;
	// lwz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// addi r30,r11,192
	ctx.r30.s64 = ctx.r11.s64 + 192;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825fa3c0
	if (!ctx.cr6.eq) goto loc_825FA3C0;
loc_825FA3E0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fa44c
	if (ctx.cr6.eq) goto loc_825FA44C;
	// lis r29,-32112
	ctx.r29.s64 = -2104492032;
	// lwz r11,-1668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1668);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825fa424
	if (!ctx.cr6.eq) goto loc_825FA424;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FA41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,-1668(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1668, ctx.r11.u32);
loc_825FA424:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// stw r28,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FA44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FA44C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 204, ctx.r28.u32);
	// sth r11,200(r27)
	PPC_STORE_U16(ctx.r27.u32 + 200, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FA460"))) PPC_WEAK_FUNC(sub_825FA460);
PPC_FUNC_IMPL(__imp__sub_825FA460) {
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
	// lbz r11,175(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 175);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fa48c
	if (!ctx.cr6.eq) goto loc_825FA48C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825fa4c0
	goto loc_825FA4C0;
loc_825FA48C:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa4ac
	if (ctx.cr6.eq) goto loc_825FA4AC;
	// lbz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa4ac
	if (ctx.cr6.eq) goto loc_825FA4AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825fa4c0
	goto loc_825FA4C0;
loc_825FA4AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FA4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FA4C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fa50c
	if (ctx.cr6.eq) goto loc_825FA50C;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r11,r11,6912
	ctx.r11.s64 = ctx.r11.s64 + 6912;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x825fa50c
	if (!ctx.cr6.lt) goto loc_825FA50C;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// lwz r9,-1668(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1668);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825fa4f4
	if (!ctx.cr6.eq) goto loc_825FA4F4;
	// stw r10,1040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1040, ctx.r10.u32);
loc_825FA4F4:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1048
	ctx.r8.s64 = ctx.r11.s64 + 1048;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// b 0x825fa544
	goto loc_825FA544;
loc_825FA50C:
	// lis r30,-32112
	ctx.r30.s64 = -2104492032;
	// lwz r11,-1668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1668);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825fa544
	if (!ctx.cr6.eq) goto loc_825FA544;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FA53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1668(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1668, ctx.r11.u32);
loc_825FA544:
	// lwz r31,188(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fa564
	if (ctx.cr6.eq) goto loc_825FA564;
loc_825FA550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fa460
	ctx.lr = 0x825FA558;
	sub_825FA460(ctx, base);
	// lwz r31,192(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825fa550
	if (!ctx.cr6.eq) goto loc_825FA550;
loc_825FA564:
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

__attribute__((alias("__imp__sub_825FA57C"))) PPC_WEAK_FUNC(sub_825FA57C);
PPC_FUNC_IMPL(__imp__sub_825FA57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FA580"))) PPC_WEAK_FUNC(sub_825FA580);
PPC_FUNC_IMPL(__imp__sub_825FA580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825FA588;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,14280(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14280);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fa5e0
	if (ctx.cr6.eq) goto loc_825FA5E0;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,6588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6588);
	// bl 0x825f8e08
	ctx.lr = 0x825FA5B8;
	sub_825F8E08(ctx, base);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// subfic r6,r7,127
	ctx.xer.ca = ctx.r7.u32 <= 127;
	ctx.r6.s64 = 127 - ctx.r7.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825fa5e4
	if (!ctx.cr6.eq) goto loc_825FA5E4;
loc_825FA5E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FA5E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fb0c8
	if (!ctx.cr6.eq) goto loc_825FB0C8;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6912
	ctx.r30.s64 = ctx.r10.s64 + 6912;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r10.u32);
	// bl 0x825fa460
	ctx.lr = 0x825FA60C;
	sub_825FA460(ctx, base);
	// lwz r31,1040(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x825faf50
	if (ctx.cr6.eq) goto loc_825FAF50;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,15
	ctx.r3.s64 = 15;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x825f8e70
	ctx.lr = 0x825FA638;
	sub_825F8E70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fa858
	if (ctx.cr6.eq) goto loc_825FA858;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f13,32676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26872(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26872);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x825fa7e0
	if (ctx.cr6.lt) goto loc_825FA7E0;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_825FA674:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa6c4
	if (ctx.cr6.eq) goto loc_825FA6C4;
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x825fa6c4
	if (ctx.cr6.lt) goto loc_825FA6C4;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa6c4
	if (!ctx.cr6.lt) goto loc_825FA6C4;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa6c4
	if (!ctx.cr6.lt) goto loc_825FA6C4;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA6C4:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa71c
	if (ctx.cr6.eq) goto loc_825FA71C;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x825fa71c
	if (ctx.cr6.lt) goto loc_825FA71C;
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa71c
	if (!ctx.cr6.lt) goto loc_825FA71C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa71c
	if (!ctx.cr6.lt) goto loc_825FA71C;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA71C:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa770
	if (ctx.cr6.eq) goto loc_825FA770;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x825fa770
	if (ctx.cr6.lt) goto loc_825FA770;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa770
	if (!ctx.cr6.lt) goto loc_825FA770;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa770
	if (!ctx.cr6.lt) goto loc_825FA770;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA770:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa7c8
	if (ctx.cr6.eq) goto loc_825FA7C8;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x825fa7c8
	if (ctx.cr6.lt) goto loc_825FA7C8;
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa7c8
	if (!ctx.cr6.lt) goto loc_825FA7C8;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa7c8
	if (!ctx.cr6.lt) goto loc_825FA7C8;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA7C8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825fa674
	if (ctx.cr6.lt) goto loc_825FA674;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
loc_825FA7E0:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825faed0
	if (!ctx.cr6.lt) goto loc_825FAED0;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825FA7F4:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa844
	if (ctx.cr6.eq) goto loc_825FA844;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x825fa844
	if (ctx.cr6.lt) goto loc_825FA844;
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa844
	if (!ctx.cr6.lt) goto loc_825FA844;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa844
	if (!ctx.cr6.lt) goto loc_825FA844;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA844:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x825fa7f4
	if (ctx.cr6.lt) goto loc_825FA7F4;
	// b 0x825faecc
	goto loc_825FAECC;
loc_825FA858:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x825f8e70
	ctx.lr = 0x825FA860;
	sub_825F8E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825faa80
	if (ctx.cr6.eq) goto loc_825FAA80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f13,32676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26872(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26872);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x825faa08
	if (ctx.cr6.lt) goto loc_825FAA08;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_825FA89C:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa8ec
	if (ctx.cr6.eq) goto loc_825FA8EC;
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x825fa8ec
	if (ctx.cr6.gt) goto loc_825FA8EC;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa8ec
	if (!ctx.cr6.lt) goto loc_825FA8EC;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa8ec
	if (!ctx.cr6.lt) goto loc_825FA8EC;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA8EC:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa944
	if (ctx.cr6.eq) goto loc_825FA944;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x825fa944
	if (ctx.cr6.gt) goto loc_825FA944;
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa944
	if (!ctx.cr6.lt) goto loc_825FA944;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa944
	if (!ctx.cr6.lt) goto loc_825FA944;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA944:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa998
	if (ctx.cr6.eq) goto loc_825FA998;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x825fa998
	if (ctx.cr6.gt) goto loc_825FA998;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa998
	if (!ctx.cr6.lt) goto loc_825FA998;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa998
	if (!ctx.cr6.lt) goto loc_825FA998;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA998:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fa9f0
	if (ctx.cr6.eq) goto loc_825FA9F0;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x825fa9f0
	if (ctx.cr6.gt) goto loc_825FA9F0;
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fa9f0
	if (!ctx.cr6.lt) goto loc_825FA9F0;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fa9f0
	if (!ctx.cr6.lt) goto loc_825FA9F0;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FA9F0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825fa89c
	if (ctx.cr6.lt) goto loc_825FA89C;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
loc_825FAA08:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825faed0
	if (!ctx.cr6.lt) goto loc_825FAED0;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825FAA1C:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825faa6c
	if (ctx.cr6.eq) goto loc_825FAA6C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x825faa6c
	if (ctx.cr6.gt) goto loc_825FAA6C;
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825faa6c
	if (!ctx.cr6.lt) goto loc_825FAA6C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825faa6c
	if (!ctx.cr6.lt) goto loc_825FAA6C;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAA6C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x825faa1c
	if (ctx.cr6.lt) goto loc_825FAA1C;
	// b 0x825faecc
	goto loc_825FAECC;
loc_825FAA80:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x825f8e70
	ctx.lr = 0x825FAA88;
	sub_825F8E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825faca8
	if (ctx.cr6.eq) goto loc_825FACA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f13,32676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,14988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14988);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x825fac30
	if (ctx.cr6.lt) goto loc_825FAC30;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_825FAAC4:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fab14
	if (ctx.cr6.eq) goto loc_825FAB14;
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x825fab14
	if (ctx.cr6.lt) goto loc_825FAB14;
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fab14
	if (!ctx.cr6.lt) goto loc_825FAB14;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fab14
	if (!ctx.cr6.lt) goto loc_825FAB14;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAB14:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fab6c
	if (ctx.cr6.eq) goto loc_825FAB6C;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x825fab6c
	if (ctx.cr6.lt) goto loc_825FAB6C;
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fab6c
	if (!ctx.cr6.lt) goto loc_825FAB6C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fab6c
	if (!ctx.cr6.lt) goto loc_825FAB6C;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAB6C:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fabc0
	if (ctx.cr6.eq) goto loc_825FABC0;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x825fabc0
	if (ctx.cr6.lt) goto loc_825FABC0;
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fabc0
	if (!ctx.cr6.lt) goto loc_825FABC0;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fabc0
	if (!ctx.cr6.lt) goto loc_825FABC0;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FABC0:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fac18
	if (ctx.cr6.eq) goto loc_825FAC18;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x825fac18
	if (ctx.cr6.lt) goto loc_825FAC18;
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fac18
	if (!ctx.cr6.lt) goto loc_825FAC18;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fac18
	if (!ctx.cr6.lt) goto loc_825FAC18;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAC18:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825faac4
	if (ctx.cr6.lt) goto loc_825FAAC4;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
loc_825FAC30:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825faed0
	if (!ctx.cr6.lt) goto loc_825FAED0;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825FAC44:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fac94
	if (ctx.cr6.eq) goto loc_825FAC94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x825fac94
	if (ctx.cr6.lt) goto loc_825FAC94;
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fac94
	if (!ctx.cr6.lt) goto loc_825FAC94;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fac94
	if (!ctx.cr6.lt) goto loc_825FAC94;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAC94:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x825fac44
	if (ctx.cr6.lt) goto loc_825FAC44;
	// b 0x825faecc
	goto loc_825FAECC;
loc_825FACA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825f8e70
	ctx.lr = 0x825FACB0;
	sub_825F8E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb0c8
	if (ctx.cr6.eq) goto loc_825FB0C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f13,32676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,14988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14988);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x825fae58
	if (ctx.cr6.lt) goto loc_825FAE58;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_825FACEC:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fad3c
	if (ctx.cr6.eq) goto loc_825FAD3C;
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x825fad3c
	if (ctx.cr6.gt) goto loc_825FAD3C;
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fad3c
	if (!ctx.cr6.lt) goto loc_825FAD3C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fad3c
	if (!ctx.cr6.lt) goto loc_825FAD3C;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAD3C:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fad94
	if (ctx.cr6.eq) goto loc_825FAD94;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x825fad94
	if (ctx.cr6.gt) goto loc_825FAD94;
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fad94
	if (!ctx.cr6.lt) goto loc_825FAD94;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fad94
	if (!ctx.cr6.lt) goto loc_825FAD94;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAD94:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fade8
	if (ctx.cr6.eq) goto loc_825FADE8;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x825fade8
	if (ctx.cr6.gt) goto loc_825FADE8;
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fade8
	if (!ctx.cr6.lt) goto loc_825FADE8;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fade8
	if (!ctx.cr6.lt) goto loc_825FADE8;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FADE8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825fae40
	if (ctx.cr6.eq) goto loc_825FAE40;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x825fae40
	if (ctx.cr6.gt) goto loc_825FAE40;
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825fae40
	if (!ctx.cr6.lt) goto loc_825FAE40;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825fae40
	if (!ctx.cr6.lt) goto loc_825FAE40;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAE40:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825facec
	if (ctx.cr6.lt) goto loc_825FACEC;
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
loc_825FAE58:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825faed0
	if (!ctx.cr6.lt) goto loc_825FAED0;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825FAE6C:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825faebc
	if (ctx.cr6.eq) goto loc_825FAEBC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x825faebc
	if (ctx.cr6.gt) goto loc_825FAEBC;
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f10,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x825faebc
	if (!ctx.cr6.lt) goto loc_825FAEBC;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x825faebc
	if (!ctx.cr6.lt) goto loc_825FAEBC;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fsel f13,f0,f0,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_825FAEBC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x825fae6c
	if (ctx.cr6.lt) goto loc_825FAE6C;
loc_825FAECC:
	// stw r31,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r31.u32);
loc_825FAED0:
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x825fb0c8
	if (ctx.cr6.eq) goto loc_825FB0C8;
	// addi r11,r30,1048
	ctx.r11.s64 = ctx.r30.s64 + 1048;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FAEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// addi r8,r30,1048
	ctx.r8.s64 = ctx.r30.s64 + 1048;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FAF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// addi r9,r30,1048
	ctx.r9.s64 = ctx.r30.s64 + 1048;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r11,-1668(r7)
	PPC_STORE_U32(ctx.r7.u32 + -1668, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FAF50:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x825fb0c8
	if (ctx.cr6.eq) goto loc_825FB0C8;
	// lwz r9,1048(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r11.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,52(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3732(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3732);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// blt cr6,0x825fb040
	if (ctx.cr6.lt) goto loc_825FB040;
	// addi r8,r30,1048
	ctx.r8.s64 = ctx.r30.s64 + 1048;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_825FAF9C:
	// lwz r5,-4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// lfs f13,52(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825fafbc
	if (!ctx.cr6.lt) goto loc_825FAFBC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825FAFBC:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f13,52(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825fafe0
	if (!ctx.cr6.lt) goto loc_825FAFE0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stw r11,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r11.u32);
loc_825FAFE0:
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f13,52(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825fb004
	if (!ctx.cr6.lt) goto loc_825FB004;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stw r11,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r11.u32);
loc_825FB004:
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f13,52(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825fb028
	if (!ctx.cr6.lt) goto loc_825FB028;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stw r11,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r11.u32);
loc_825FB028:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x825faf9c
	if (ctx.cr6.lt) goto loc_825FAF9C;
	// stw r11,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r11.u32);
loc_825FB040:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x825fb088
	if (!ctx.cr6.lt) goto loc_825FB088;
	// addi r9,r30,1048
	ctx.r9.s64 = ctx.r30.s64 + 1048;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_825FB054:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f13,52(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825fb074
	if (!ctx.cr6.lt) goto loc_825FB074;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825FB074:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825fb054
	if (ctx.cr6.lt) goto loc_825FB054;
	// stw r11,1040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1040, ctx.r11.u32);
loc_825FB088:
	// addi r10,r30,1048
	ctx.r10.s64 = ctx.r30.s64 + 1048;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825FB0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// addi r6,r30,1048
	ctx.r6.s64 = ctx.r30.s64 + 1048;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,-32112
	ctx.r4.s64 = -2104492032;
	// lwzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r11,-1668(r4)
	PPC_STORE_U32(ctx.r4.u32 + -1668, ctx.r11.u32);
loc_825FB0C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FB0D8"))) PPC_WEAK_FUNC(sub_825FB0D8);
PPC_FUNC_IMPL(__imp__sub_825FB0D8) {
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
	// bl 0x823db9d0
	ctx.lr = 0x825FB0F0;
	sub_823DB9D0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,79(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 79);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb328
	if (ctx.cr6.eq) goto loc_825FB328;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb134
	if (ctx.cr6.eq) goto loc_825FB134;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FB134:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// lwz r11,-1648(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1648);
	// lbz r8,29(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825fb308
	if (ctx.cr6.eq) goto loc_825FB308;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r11,-1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1668);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825fb1c4
	if (!ctx.cr6.eq) goto loc_825FB1C4;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x825f8e70
	ctx.lr = 0x825FB178;
	sub_825F8E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb190
	if (ctx.cr6.eq) goto loc_825FB190;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x825fb1ac
	goto loc_825FB1AC;
loc_825FB190:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x825f8f10
	ctx.lr = 0x825FB198;
	sub_825F8F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb1c4
	if (ctx.cr6.eq) goto loc_825FB1C4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
loc_825FB1AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FB1C4:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb308
	if (ctx.cr6.eq) goto loc_825FB308;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x825f8f10
	ctx.lr = 0x825FB1D8;
	sub_825F8F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb308
	if (ctx.cr6.eq) goto loc_825FB308;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,21784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21784);
	// lwz r10,21772(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21772);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lfs f0,3796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f29,f11
	ctx.f29.f64 = double(float(ctx.f11.f64));
	// frsp f26,f10
	ctx.f26.f64 = double(float(ctx.f10.f64));
	// bl 0x825f9c20
	ctx.lr = 0x825FB238;
	sub_825F9C20(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f9d70
	ctx.lr = 0x825FB248;
	sub_825F9D70(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f28,f28,f31
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fadds f27,f1,f30
	ctx.f27.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// bl 0x825f8c70
	ctx.lr = 0x825FB264;
	sub_825F8C70(ctx, base);
	// lfs f9,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// lfs f4,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f7,f30,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fmadds f0,f3,f31,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f13,f1,f4
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// blt cr6,0x825fb308
	if (ctx.cr6.lt) goto loc_825FB308;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f27,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fcmpu cr6,f29,f8
	ctx.cr6.compare(ctx.f29.f64, ctx.f8.f64);
	// bgt cr6,0x825fb308
	if (ctx.cr6.gt) goto loc_825FB308;
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// blt cr6,0x825fb308
	if (ctx.cr6.lt) goto loc_825FB308;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f27,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f26,f9
	ctx.cr6.compare(ctx.f26.f64, ctx.f9.f64);
	// bgt cr6,0x825fb308
	if (ctx.cr6.gt) goto loc_825FB308;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FB308:
	// lwz r31,188(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fb328
	if (ctx.cr6.eq) goto loc_825FB328;
loc_825FB314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fb0d8
	ctx.lr = 0x825FB31C;
	sub_825FB0D8(ctx, base);
	// lwz r31,192(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825fb314
	if (!ctx.cr6.eq) goto loc_825FB314;
loc_825FB328:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823dba1c
	ctx.lr = 0x825FB334;
	__restfpr_26(ctx, base);
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

__attribute__((alias("__imp__sub_825FB348"))) PPC_WEAK_FUNC(sub_825FB348);
PPC_FUNC_IMPL(__imp__sub_825FB348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825FB350;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,177(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 177);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb698
	if (ctx.cr6.eq) goto loc_825FB698;
	// lbz r11,81(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 81);
	// lfs f31,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb38c
	if (ctx.cr6.eq) goto loc_825FB38C;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x825f8c70
	ctx.lr = 0x825FB38C;
	sub_825F8C70(ctx, base);
loc_825FB38C:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,32(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f8,f7,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f4.f64));
	// stfs f3,36(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f11,f2,f1,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f11,40(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f5,f10,f9,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f5,44(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f4,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f4,f3,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fadds f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f11,48(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f4,f10,f9,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fadds f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f3,52(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// stb r11,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r11.u8);
	// lbz r10,69(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// lbz r9,70(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// lbz r7,71(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// lbz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x825f8b20
	ctx.lr = 0x825FB484;
	sub_825F8B20(ctx, base);
	// lhz r9,170(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 170);
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,156(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 156, temp.u32);
	// beq cr6,0x825fb4b8
	if (ctx.cr6.eq) goto loc_825FB4B8;
	// bl 0x8217d9a0
	ctx.lr = 0x825FB4B0;
	sub_8217D9A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r11.u8);
loc_825FB4B8:
	// lhz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 168);
	// lis r28,-32112
	ctx.r28.s64 = -2104492032;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb520
	if (ctx.cr6.eq) goto loc_825FB520;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8217f768
	ctx.lr = 0x825FB4D4;
	sub_8217F768(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8217f768
	ctx.lr = 0x825FB4E0;
	sub_8217F768(ctx, base);
	// bl 0x825f9448
	ctx.lr = 0x825FB4E4;
	sub_825F9448(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lhz r10,166(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 166);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb510
	if (ctx.cr6.eq) goto loc_825FB510;
loc_825FB4F4:
	// lhz r9,166(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne cr6,0x825fb4f4
	if (!ctx.cr6.eq) goto loc_825FB4F4;
loc_825FB510:
	// lhz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 168);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r11,8092(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8092, ctx.r11.u16);
loc_825FB520:
	// lbz r11,67(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 67);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb698
	if (ctx.cr6.eq) goto loc_825FB698;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825fb548
	if (ctx.cr6.lt) goto loc_825FB548;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r3,-1680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1680);
	// bl 0x825ed5e0
	ctx.lr = 0x825FB548;
	sub_825ED5E0(ctx, base);
loc_825FB548:
	// lwz r31,188(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fb570
	if (ctx.cr6.eq) goto loc_825FB570;
loc_825FB554:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fb348
	ctx.lr = 0x825FB560;
	sub_825FB348(ctx, base);
	// lwz r31,192(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825fb554
	if (!ctx.cr6.eq) goto loc_825FB554;
	// b 0x825fb670
	goto loc_825FB670;
loc_825FB570:
	// lhz r8,8092(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8092);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825fb5d4
	if (ctx.cr6.eq) goto loc_825FB5D4;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lhz r10,166(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 166);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb5a8
	if (ctx.cr6.eq) goto loc_825FB5A8;
loc_825FB58C:
	// lhz r9,166(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne cr6,0x825fb58c
	if (!ctx.cr6.eq) goto loc_825FB58C;
loc_825FB5A8:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x825fb5d4
	if (!ctx.cr6.gt) goto loc_825FB5D4;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8217f768
	ctx.lr = 0x825FB5C0;
	sub_8217F768(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8217f768
	ctx.lr = 0x825FB5CC;
	sub_8217F768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,8092(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8092, ctx.r11.u16);
loc_825FB5D4:
	// lbz r11,67(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 67);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb62c
	if (ctx.cr6.eq) goto loc_825FB62C;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r11,-1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1668);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825fb610
	if (!ctx.cr6.eq) goto loc_825FB610;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x825f8fb0
	ctx.lr = 0x825FB5F8;
	sub_825F8FB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// b 0x825fb614
	goto loc_825FB614;
loc_825FB610:
	// li r5,1
	ctx.r5.s64 = 1;
loc_825FB614:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FB62C:
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x825fb648
	if (!ctx.cr6.eq) goto loc_825FB648;
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x825fb64c
	if (ctx.cr6.eq) goto loc_825FB64C;
loc_825FB648:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825FB64C:
	// lbz r10,67(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 67);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x825fb668
	if (!ctx.cr6.eq) goto loc_825FB668;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825fb66c
	if (ctx.cr6.eq) goto loc_825FB66C;
loc_825FB668:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FB66C:
	// stb r11,175(r30)
	PPC_STORE_U8(ctx.r30.u32 + 175, ctx.r11.u8);
loc_825FB670:
	// lhz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb698
	if (ctx.cr6.eq) goto loc_825FB698;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8217f768
	ctx.lr = 0x825FB688;
	sub_8217F768(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8217f768
	ctx.lr = 0x825FB694;
	sub_8217F768(ctx, base);
	// bl 0x825f94b8
	ctx.lr = 0x825FB698;
	sub_825F94B8(ctx, base);
loc_825FB698:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FB6A8"))) PPC_WEAK_FUNC(sub_825FB6A8);
PPC_FUNC_IMPL(__imp__sub_825FB6A8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,28276
	ctx.r3.s64 = ctx.r11.s64 + 28276;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FB6E8;
	sub_821C9790(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,36(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FB710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825ef9f0
	ctx.lr = 0x825FB718;
	sub_825EF9F0(ctx, base);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef808
	ctx.lr = 0x825FB724;
	sub_825EF808(ctx, base);
	// srawi r5,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 16;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// rlwimi r4,r5,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r10,r3,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// stb r3,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r3.u8);
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r10,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r10.u8);
	// stb r9,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_825FB764"))) PPC_WEAK_FUNC(sub_825FB764);
PPC_FUNC_IMPL(__imp__sub_825FB764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FB768"))) PPC_WEAK_FUNC(sub_825FB768);
PPC_FUNC_IMPL(__imp__sub_825FB768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FB770;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,-18776
	ctx.r9.s64 = ctx.r11.s64 + -18776;
	// addi r3,r10,28284
	ctx.r3.s64 = ctx.r10.s64 + 28284;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FB7A4;
	sub_821C9790(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FB7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r5,28276
	ctx.r3.s64 = ctx.r5.s64 + 28276;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FB7E0;
	sub_821C9790(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FB80C"))) PPC_WEAK_FUNC(sub_825FB80C);
PPC_FUNC_IMPL(__imp__sub_825FB80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FB810"))) PPC_WEAK_FUNC(sub_825FB810);
PPC_FUNC_IMPL(__imp__sub_825FB810) {
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
	// lis r31,-32112
	ctx.r31.s64 = -2104492032;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,28308
	ctx.r3.s64 = ctx.r11.s64 + 28308;
	// lwz r30,-1676(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1676);
	// bl 0x821c9790
	ctx.lr = 0x825FB83C;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fa148
	ctx.lr = 0x825FB84C;
	sub_825FA148(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fb86c
	if (ctx.cr6.eq) goto loc_825FB86C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FB86C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r30,-1676(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1676);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,28304
	ctx.r3.s64 = ctx.r11.s64 + 28304;
	// bl 0x821c9790
	ctx.lr = 0x825FB880;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fa148
	ctx.lr = 0x825FB890;
	sub_825FA148(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fb8b0
	if (ctx.cr6.eq) goto loc_825FB8B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB8B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FB8B0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r31,-1676(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1676);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,28292
	ctx.r3.s64 = ctx.r11.s64 + 28292;
	// bl 0x821c9790
	ctx.lr = 0x825FB8C4;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fa148
	ctx.lr = 0x825FB8D4;
	sub_825FA148(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fb8f4
	if (ctx.cr6.eq) goto loc_825FB8F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FB8F4:
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

__attribute__((alias("__imp__sub_825FB90C"))) PPC_WEAK_FUNC(sub_825FB90C);
PPC_FUNC_IMPL(__imp__sub_825FB90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FB910"))) PPC_WEAK_FUNC(sub_825FB910);
PPC_FUNC_IMPL(__imp__sub_825FB910) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-1656(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1656);
	// bl 0x821c9790
	ctx.lr = 0x825FB930;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825fa148
	ctx.lr = 0x825FB940;
	sub_825FA148(ctx, base);
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

__attribute__((alias("__imp__sub_825FB954"))) PPC_WEAK_FUNC(sub_825FB954);
PPC_FUNC_IMPL(__imp__sub_825FB954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FB958"))) PPC_WEAK_FUNC(sub_825FB958);
PPC_FUNC_IMPL(__imp__sub_825FB958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x825FB960;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32112
	ctx.r30.s64 = -2104492032;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,-1676(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1676);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FB98C;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fa148
	ctx.lr = 0x825FB99C;
	sub_825FA148(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fb9d8
	if (ctx.cr6.eq) goto loc_825FB9D8;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FB9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_825FB9D8:
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r30,-1676(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1676);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,28292
	ctx.r3.s64 = ctx.r10.s64 + 28292;
	// bl 0x821c9790
	ctx.lr = 0x825FB9FC;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fa148
	ctx.lr = 0x825FBA0C;
	sub_825FA148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825fbacc
	if (ctx.cr6.eq) goto loc_825FBACC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,28352
	ctx.r3.s64 = ctx.r11.s64 + 28352;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FBA2C;
	sub_821C9790(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825FBA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825fbacc
	if (ctx.cr6.eq) goto loc_825FBACC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82202fb8
	ctx.lr = 0x825FBA6C;
	sub_82202FB8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FBA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fbacc
	if (ctx.cr6.eq) goto loc_825FBACC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FBAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_825FBACC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,28316
	ctx.r3.s64 = ctx.r11.s64 + 28316;
	// bl 0x82130000
	ctx.lr = 0x825FBADC;
	sub_82130000(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FBAE4"))) PPC_WEAK_FUNC(sub_825FBAE4);
PPC_FUNC_IMPL(__imp__sub_825FBAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FBAE8"))) PPC_WEAK_FUNC(sub_825FBAE8);
PPC_FUNC_IMPL(__imp__sub_825FBAE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FBB00"))) PPC_WEAK_FUNC(sub_825FBB00);
PPC_FUNC_IMPL(__imp__sub_825FBB00) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x825ef808
	ctx.lr = 0x825FBB24;
	sub_825EF808(ctx, base);
	// lhz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825fbb3c
	if (ctx.cr6.lt) goto loc_825FBB3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825fbb6c
	goto loc_825FBB6C;
loc_825FBB3C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
loc_825FBB6C:
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

__attribute__((alias("__imp__sub_825FBB84"))) PPC_WEAK_FUNC(sub_825FBB84);
PPC_FUNC_IMPL(__imp__sub_825FBB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FBB88"))) PPC_WEAK_FUNC(sub_825FBB88);
PPC_FUNC_IMPL(__imp__sub_825FBB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x825FBB90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fbbb8
	if (!ctx.cr6.eq) goto loc_825FBBB8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82608a98
	ctx.lr = 0x825FBBB8;
	sub_82608A98(ctx, base);
loc_825FBBB8:
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
	// bne cr6,0x825fbbe8
	if (!ctx.cr6.eq) goto loc_825FBBE8;
	// bl 0x821c9438
	ctx.lr = 0x825FBBDC;
	sub_821C9438(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fa1a8
	ctx.lr = 0x825FBBE8;
	sub_825FA1A8(ctx, base);
loc_825FBBE8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// twllei r11,0
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r30,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82130528
	ctx.lr = 0x825FBC14;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fbc48
	if (ctx.cr6.eq) goto loc_825FBC48;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// b 0x825fbc4c
	goto loc_825FBC4C;
loc_825FBC48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FBC4C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FBC64"))) PPC_WEAK_FUNC(sub_825FBC64);
PPC_FUNC_IMPL(__imp__sub_825FBC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FBC68"))) PPC_WEAK_FUNC(sub_825FBC68);
PPC_FUNC_IMPL(__imp__sub_825FBC68) {
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
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fbcd8
	if (ctx.cr6.eq) goto loc_825FBCD8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// twllei r11,0
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	// beq cr6,0x825fbcd8
	if (ctx.cr6.eq) goto loc_825FBCD8;
loc_825FBCB8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825fbcf4
	if (ctx.cr6.eq) goto loc_825FBCF4;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825fbcb8
	if (!ctx.cr6.eq) goto loc_825FBCB8;
loc_825FBCD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FBCDC:
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
loc_825FBCF4:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825fbd18
	if (ctx.cr6.eq) goto loc_825FBD18;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82130000
	ctx.lr = 0x825FBD10;
	sub_82130000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130588
	ctx.lr = 0x825FBD18;
	sub_82130588(ctx, base);
loc_825FBD18:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r3,1
	ctx.r3.s64 = 1;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r10.u16);
	// b 0x825fbcdc
	goto loc_825FBCDC;
}

__attribute__((alias("__imp__sub_825FBD30"))) PPC_WEAK_FUNC(sub_825FBD30);
PPC_FUNC_IMPL(__imp__sub_825FBD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FBD38;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825fbd60
	if (!ctx.cr6.eq) goto loc_825FBD60;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x825fbd7c
	goto loc_825FBD7C;
loc_825FBD60:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r11,6928
	ctx.r4.s64 = ctx.r11.s64 + 6928;
	// bl 0x825efb40
	ctx.lr = 0x825FBD70;
	sub_825EFB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x825FBD78;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_825FBD7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fa148
	ctx.lr = 0x825FBD88;
	sub_825FA148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fbdb8
	if (ctx.cr6.eq) goto loc_825FBDB8;
	// bl 0x82130000
	ctx.lr = 0x825FBD98;
	sub_82130000(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FBDB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x825fbb88
	ctx.lr = 0x825FBDE0;
	sub_825FBB88(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82130000
	ctx.lr = 0x825FBDE8;
	sub_82130000(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FBDF0"))) PPC_WEAK_FUNC(sub_825FBDF0);
PPC_FUNC_IMPL(__imp__sub_825FBDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FBDF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FBE10;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fa148
	ctx.lr = 0x825FBE20;
	sub_825FA148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825fbe50
	if (ctx.cr6.eq) goto loc_825FBE50;
	// bl 0x82130000
	ctx.lr = 0x825FBE30;
	sub_82130000(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FBE50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x825fbb88
	ctx.lr = 0x825FBE78;
	sub_825FBB88(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82130000
	ctx.lr = 0x825FBE80;
	sub_82130000(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FBE88"))) PPC_WEAK_FUNC(sub_825FBE88);
PPC_FUNC_IMPL(__imp__sub_825FBE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FBE90;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FBEB0;
	sub_821C9790(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FBED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FBEE4;
	sub_821C9790(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825fbc68
	ctx.lr = 0x825FBEF8;
	sub_825FBC68(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825fbf14
	if (!ctx.cr6.eq) goto loc_825FBF14;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28364
	ctx.r3.s64 = ctx.r11.s64 + 28364;
	// bl 0x82130000
	ctx.lr = 0x825FBF14;
	sub_82130000(ctx, base);
loc_825FBF14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FBF1C"))) PPC_WEAK_FUNC(sub_825FBF1C);
PPC_FUNC_IMPL(__imp__sub_825FBF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FBF20"))) PPC_WEAK_FUNC(sub_825FBF20);
PPC_FUNC_IMPL(__imp__sub_825FBF20) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x825fbd30
	ctx.lr = 0x825FBF34;
	sub_825FBD30(ctx, base);
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

__attribute__((alias("__imp__sub_825FBF48"))) PPC_WEAK_FUNC(sub_825FBF48);
PPC_FUNC_IMPL(__imp__sub_825FBF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x825FBF50;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28504
	ctx.r10.s64 = ctx.r10.s64 + 28504;
loc_825FBF6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fbf90
	if (ctx.cr6.eq) goto loc_825FBF90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fbf6c
	if (ctx.cr6.eq) goto loc_825FBF6C;
loc_825FBF90:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fbfec
	if (!ctx.cr6.eq) goto loc_825FBFEC;
	// lbz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fc38c
	if (!ctx.cr6.eq) goto loc_825FC38C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825ef808
	ctx.lr = 0x825FBFB0;
	sub_825EF808(ctx, base);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FBFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825FBFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FBFEC:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28492
	ctx.r10.s64 = ctx.r10.s64 + 28492;
loc_825FBFF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc01c
	if (ctx.cr6.eq) goto loc_825FC01C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fbff8
	if (ctx.cr6.eq) goto loc_825FBFF8;
loc_825FC01C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc06c
	if (!ctx.cr6.eq) goto loc_825FC06C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825ef808
	ctx.lr = 0x825FC030;
	sub_825EF808(ctx, base);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FC050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825FC064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC06C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28484
	ctx.r10.s64 = ctx.r10.s64 + 28484;
loc_825FC078:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc09c
	if (ctx.cr6.eq) goto loc_825FC09C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fc078
	if (ctx.cr6.eq) goto loc_825FC078;
loc_825FC09C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc0c0
	if (!ctx.cr6.eq) goto loc_825FC0C0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FC0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC0C0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28476
	ctx.r10.s64 = ctx.r10.s64 + 28476;
loc_825FC0CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc0f0
	if (ctx.cr6.eq) goto loc_825FC0F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fc0cc
	if (ctx.cr6.eq) goto loc_825FC0CC;
loc_825FC0F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc114
	if (!ctx.cr6.eq) goto loc_825FC114;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FC10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC114:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28464
	ctx.r10.s64 = ctx.r10.s64 + 28464;
loc_825FC120:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc144
	if (ctx.cr6.eq) goto loc_825FC144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fc120
	if (ctx.cr6.eq) goto loc_825FC120;
loc_825FC144:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc16c
	if (!ctx.cr6.eq) goto loc_825FC16C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FC164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC16C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28452
	ctx.r10.s64 = ctx.r10.s64 + 28452;
loc_825FC178:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc19c
	if (ctx.cr6.eq) goto loc_825FC19C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fc178
	if (ctx.cr6.eq) goto loc_825FC178;
loc_825FC19C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc1c0
	if (!ctx.cr6.eq) goto loc_825FC1C0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FC1B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC1C0:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28436
	ctx.r10.s64 = ctx.r10.s64 + 28436;
loc_825FC1CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc1f0
	if (ctx.cr6.eq) goto loc_825FC1F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fc1cc
	if (ctx.cr6.eq) goto loc_825FC1CC;
loc_825FC1F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc208
	if (!ctx.cr6.eq) goto loc_825FC208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ed928
	ctx.lr = 0x825FC200;
	sub_825ED928(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC208:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28420
	ctx.r10.s64 = ctx.r10.s64 + 28420;
loc_825FC214:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc238
	if (ctx.cr6.eq) goto loc_825FC238;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fc214
	if (ctx.cr6.eq) goto loc_825FC214;
loc_825FC238:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc250
	if (!ctx.cr6.eq) goto loc_825FC250;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ed928
	ctx.lr = 0x825FC248;
	sub_825ED928(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC250:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28408
	ctx.r10.s64 = ctx.r10.s64 + 28408;
loc_825FC25C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc280
	if (ctx.cr6.eq) goto loc_825FC280;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fc25c
	if (ctx.cr6.eq) goto loc_825FC25C;
loc_825FC280:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc328
	if (!ctx.cr6.eq) goto loc_825FC328;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x825fc2ac
	if (!ctx.cr6.eq) goto loc_825FC2AC;
	// addi r3,r27,36
	ctx.r3.s64 = ctx.r27.s64 + 36;
	// bl 0x825ef9f0
	ctx.lr = 0x825FC2A4;
	sub_825EF9F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x825fc2b0
	goto loc_825FC2B0;
loc_825FC2AC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825FC2B0:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825fc2c8
	if (!ctx.cr6.eq) goto loc_825FC2C8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825fc2dc
	goto loc_825FC2DC;
loc_825FC2C8:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825efb40
	ctx.lr = 0x825FC2D8;
	sub_825EFB40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_825FC2DC:
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825ef808
	ctx.lr = 0x825FC2E8;
	sub_825EF808(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x825f9b58
	ctx.lr = 0x825FC300;
	sub_825F9B58(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FC320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC328:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28392
	ctx.r10.s64 = ctx.r10.s64 + 28392;
loc_825FC334:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fc358
	if (ctx.cr6.eq) goto loc_825FC358;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fc334
	if (ctx.cr6.eq) goto loc_825FC334;
loc_825FC358:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825fc37c
	if (!ctx.cr6.eq) goto loc_825FC37C;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fc38c
	if (ctx.cr6.eq) goto loc_825FC38C;
	// lhz r4,166(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 166);
	// bl 0x825fa390
	ctx.lr = 0x825FC374;
	sub_825FA390(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FC37C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825fb958
	ctx.lr = 0x825FC38C;
	sub_825FB958(ctx, base);
loc_825FC38C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FC394"))) PPC_WEAK_FUNC(sub_825FC394);
PPC_FUNC_IMPL(__imp__sub_825FC394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC398"))) PPC_WEAK_FUNC(sub_825FC398);
PPC_FUNC_IMPL(__imp__sub_825FC398) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r30,-32112
	ctx.r30.s64 = -2104492032;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,-1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1656);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825fbdf0
	ctx.lr = 0x825FC3D8;
	sub_825FBDF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-1656(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1656);
	// bl 0x821c9790
	ctx.lr = 0x825FC3E8;
	sub_821C9790(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825fa148
	ctx.lr = 0x825FC3F8;
	sub_825FA148(ctx, base);
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

__attribute__((alias("__imp__sub_825FC410"))) PPC_WEAK_FUNC(sub_825FC410);
PPC_FUNC_IMPL(__imp__sub_825FC410) {
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
	// lis r31,-32112
	ctx.r31.s64 = -2104492032;
	// lwz r11,6916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825fc44c
	if (!ctx.cr6.eq) goto loc_825FC44C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r11,28516
	ctx.r4.s64 = ctx.r11.s64 + 28516;
	// addi r3,r10,22648
	ctx.r3.s64 = ctx.r10.s64 + 22648;
	// bl 0x821bd618
	ctx.lr = 0x825FC448;
	sub_821BD618(ctx, base);
	// lwz r11,6916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
loc_825FC44C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// sth r7,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
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

__attribute__((alias("__imp__sub_825FC480"))) PPC_WEAK_FUNC(sub_825FC480);
PPC_FUNC_IMPL(__imp__sub_825FC480) {
	PPC_FUNC_PROLOGUE();
	// b 0x825eea48
	sub_825EEA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FC484"))) PPC_WEAK_FUNC(sub_825FC484);
PPC_FUNC_IMPL(__imp__sub_825FC484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC488"))) PPC_WEAK_FUNC(sub_825FC488);
PPC_FUNC_IMPL(__imp__sub_825FC488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FC490;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82237920
	ctx.lr = 0x825FC4AC;
	sub_82237920(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825fc518
	if (ctx.cr6.eq) goto loc_825FC518;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825FC4C0:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x825ef740
	ctx.lr = 0x825FC4C8;
	sub_825EF740(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825fc518
	if (ctx.cr6.eq) goto loc_825FC518;
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825fc4c0
	if (!ctx.cr6.eq) goto loc_825FC4C0;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
loc_825FC4E8:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825fc510
	if (!ctx.cr6.lt) goto loc_825FC510;
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
	// beq cr6,0x825fc4e8
	if (ctx.cr6.eq) goto loc_825FC4E8;
	// b 0x825fc4c0
	goto loc_825FC4C0;
loc_825FC510:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825fc4c0
	if (!ctx.cr6.eq) goto loc_825FC4C0;
loc_825FC518:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FC520"))) PPC_WEAK_FUNC(sub_825FC520);
PPC_FUNC_IMPL(__imp__sub_825FC520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x825FC528;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82237920
	ctx.lr = 0x825FC54C;
	sub_82237920(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fc5d8
	if (ctx.cr6.eq) goto loc_825FC5D8;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825FC564:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FC590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825fc564
	if (!ctx.cr6.eq) goto loc_825FC564;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
loc_825FC5A8:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825fc5d0
	if (!ctx.cr6.lt) goto loc_825FC5D0;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fc5a8
	if (ctx.cr6.eq) goto loc_825FC5A8;
	// b 0x825fc564
	goto loc_825FC564;
loc_825FC5D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825fc564
	if (!ctx.cr6.eq) goto loc_825FC564;
loc_825FC5D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FC5E0"))) PPC_WEAK_FUNC(sub_825FC5E0);
PPC_FUNC_IMPL(__imp__sub_825FC5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x825FC5E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x825f9330
	ctx.lr = 0x825FC604;
	sub_825F9330(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825fc690
	if (!ctx.cr6.eq) goto loc_825FC690;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x825fc410
	ctx.lr = 0x825FC61C;
	sub_825FC410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fc630
	if (ctx.cr6.eq) goto loc_825FC630;
	// bl 0x825fa2e8
	ctx.lr = 0x825FC628;
	sub_825FA2E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825fc634
	goto loc_825FC634;
loc_825FC630:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_825FC634:
	// lwz r10,188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fc668
	if (ctx.cr6.eq) goto loc_825FC668;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
loc_825FC648:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,166(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 166);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825fc668
	if (!ctx.cr6.lt) goto loc_825FC668;
	// lwz r8,192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// addi r11,r10,192
	ctx.r11.s64 = ctx.r10.s64 + 192;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825fc648
	if (!ctx.cr6.eq) goto loc_825FC648;
loc_825FC668:
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// sth r29,166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 166, ctx.r29.u16);
	// sth r28,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r28.u16);
	// sth r27,170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 170, ctx.r27.u16);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r25,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r25.u32);
	// sth r10,200(r30)
	PPC_STORE_U16(ctx.r30.u32 + 200, ctx.r10.u16);
loc_825FC690:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x825fc6ec
	if (ctx.cr6.eq) goto loc_825FC6EC;
	// lbz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825fc6b4
	if (ctx.cr6.eq) goto loc_825FC6B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x825fc6b8
	if (!ctx.cr6.eq) goto loc_825FC6B8;
loc_825FC6B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825FC6B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fc6ec
	if (ctx.cr6.eq) goto loc_825FC6EC;
	// lhz r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825fc6ec
	if (ctx.cr6.eq) goto loc_825FC6EC;
	// lhz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x825fc6ec
	if (ctx.cr6.lt) goto loc_825FC6EC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x82130000
	ctx.lr = 0x825FC6E8;
	sub_82130000(ctx, base);
	// sth r25,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r25.u16);
loc_825FC6EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FC6F8"))) PPC_WEAK_FUNC(sub_825FC6F8);
PPC_FUNC_IMPL(__imp__sub_825FC6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x825FC700;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r30,24
	ctx.r28.s64 = ctx.r30.s64 + 24;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82130588
	ctx.lr = 0x825FC71C;
	sub_82130588(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// sth r31,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r31.u16);
	// sth r31,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r31.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fc75c
	if (!ctx.cr6.eq) goto loc_825FC75C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// sth r27,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r27.u16);
	// beq cr6,0x825fc754
	if (ctx.cr6.eq) goto loc_825FC754;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825fa0e0
	ctx.lr = 0x825FC750;
	sub_825FA0E0(ctx, base);
	// b 0x825fc758
	goto loc_825FC758;
loc_825FC754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825FC758:
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_825FC75C:
	// sth r27,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r27.u16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x825fc7a0
	if (!ctx.cr6.gt) goto loc_825FC7A0;
	// li r28,3
	ctx.r28.s64 = 3;
loc_825FC76C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FC790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x825fc76c
	if (ctx.cr6.lt) goto loc_825FC76C;
loc_825FC7A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FC7A8"))) PPC_WEAK_FUNC(sub_825FC7A8);
PPC_FUNC_IMPL(__imp__sub_825FC7A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x825fc488
	sub_825FC488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FC7B0"))) PPC_WEAK_FUNC(sub_825FC7B0);
PPC_FUNC_IMPL(__imp__sub_825FC7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FC7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825fc7e0
	if (!ctx.cr6.eq) goto loc_825FC7E0;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825fc7fc
	goto loc_825FC7FC;
loc_825FC7E0:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r11,6928
	ctx.r4.s64 = ctx.r11.s64 + 6928;
	// bl 0x825efb40
	ctx.lr = 0x825FC7F0;
	sub_825EFB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FC7FC;
	sub_821C9790(ctx, base);
loc_825FC7FC:
	// lis r11,-7427
	ctx.r11.s64 = -486735872;
	// ori r11,r11,857
	ctx.r11.u64 = ctx.r11.u64 | 857;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825fc9ac
	if (ctx.cr6.gt) goto loc_825FC9AC;
	// beq cr6,0x825fc980
	if (ctx.cr6.eq) goto loc_825FC980;
	// lis r11,-17043
	ctx.r11.s64 = -1116930048;
	// ori r11,r11,36609
	ctx.r11.u64 = ctx.r11.u64 | 36609;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825fc8ec
	if (ctx.cr6.gt) goto loc_825FC8EC;
	// beq cr6,0x825fc8d0
	if (ctx.cr6.eq) goto loc_825FC8D0;
	// lis r11,-30287
	ctx.r11.s64 = -1984888832;
	// ori r10,r11,689
	ctx.r10.u64 = ctx.r11.u64 | 689;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fc8b0
	if (ctx.cr6.eq) goto loc_825FC8B0;
	// lis r11,-29138
	ctx.r11.s64 = -1909587968;
	// ori r10,r11,10191
	ctx.r10.u64 = ctx.r11.u64 | 10191;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fc898
	if (ctx.cr6.eq) goto loc_825FC898;
	// lis r11,-20092
	ctx.r11.s64 = -1316749312;
	// ori r10,r11,17918
	ctx.r10.u64 = ctx.r11.u64 | 17918;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fcaa0
	if (!ctx.cr6.eq) goto loc_825FCAA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r7,79(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 79);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,31016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31016);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,15364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15364);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FC898:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FC8B0:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,-1656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1656);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FC8D0:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FC8EC:
	// lis r11,-12732
	ctx.r11.s64 = -834404352;
	// ori r10,r11,45231
	ctx.r10.u64 = ctx.r11.u64 | 45231;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fc964
	if (ctx.cr6.eq) goto loc_825FC964;
	// lis r11,-7777
	ctx.r11.s64 = -509673472;
	// ori r10,r11,33662
	ctx.r10.u64 = ctx.r11.u64 | 33662;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fc944
	if (ctx.cr6.eq) goto loc_825FC944;
	// lis r11,-7640
	ctx.r11.s64 = -500695040;
	// ori r10,r11,34736
	ctx.r10.u64 = ctx.r11.u64 | 34736;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fcaa0
	if (!ctx.cr6.eq) goto loc_825FCAA0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825fc934
	if (!ctx.cr6.eq) goto loc_825FC934;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825FC934:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FC944:
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-1660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1660);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FC964:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FC980:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// bl 0x821c9790
	ctx.lr = 0x825FC99C;
	sub_821C9790(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FC9AC:
	// lis r11,20885
	ctx.r11.s64 = 1368719360;
	// ori r11,r11,27423
	ctx.r11.u64 = ctx.r11.u64 | 27423;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825fca70
	if (ctx.cr6.gt) goto loc_825FCA70;
	// beq cr6,0x825fca4c
	if (ctx.cr6.eq) goto loc_825FCA4C;
	// lis r11,372
	ctx.r11.s64 = 24379392;
	// ori r10,r11,18380
	ctx.r10.u64 = ctx.r11.u64 | 18380;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fca30
	if (ctx.cr6.eq) goto loc_825FCA30;
	// lis r11,13656
	ctx.r11.s64 = 894959616;
	// ori r10,r11,58776
	ctx.r10.u64 = ctx.r11.u64 | 58776;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fca0c
	if (ctx.cr6.eq) goto loc_825FCA0C;
	// lis r11,14233
	ctx.r11.s64 = 932773888;
	// ori r10,r11,18911
	ctx.r10.u64 = ctx.r11.u64 | 18911;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fcaa0
	if (!ctx.cr6.eq) goto loc_825FCAA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCA0C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825f9c20
	ctx.lr = 0x825FCA20;
	sub_825F9C20(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCA30:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCA4C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825f9d70
	ctx.lr = 0x825FCA60;
	sub_825F9D70(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCA70:
	// lis r11,21836
	ctx.r11.s64 = 1431044096;
	// ori r10,r11,22539
	ctx.r10.u64 = ctx.r11.u64 | 22539;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fcbbc
	if (ctx.cr6.eq) goto loc_825FCBBC;
	// lis r11,30213
	ctx.r11.s64 = 1980039168;
	// ori r10,r11,48846
	ctx.r10.u64 = ctx.r11.u64 | 48846;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fcb88
	if (ctx.cr6.eq) goto loc_825FCB88;
	// lis r11,30591
	ctx.r11.s64 = 2004811776;
	// ori r10,r11,31389
	ctx.r10.u64 = ctx.r11.u64 | 31389;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fcb6c
	if (ctx.cr6.eq) goto loc_825FCB6C;
loc_825FCAA0:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FCACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825fcbcc
	if (!ctx.cr6.eq) goto loc_825FCBCC;
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fcb08
	if (ctx.cr6.eq) goto loc_825FCB08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FCAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825fcbcc
	if (!ctx.cr6.eq) goto loc_825FCBCC;
loc_825FCB08:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x825FCB10;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fcb44
	if (ctx.cr6.eq) goto loc_825FCB44;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,21260
	ctx.r9.s64 = ctx.r10.s64 + 21260;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x825fcb48
	goto loc_825FCB48;
loc_825FCB44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FCB48:
	// stw r3,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FCB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCB6C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCB88:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r7,78(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 78);
	// lbz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// lbz r9,77(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 77);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCBBC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_825FCBCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FCBD8"))) PPC_WEAK_FUNC(sub_825FCBD8);
PPC_FUNC_IMPL(__imp__sub_825FCBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FCBE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825fcc04
	if (!ctx.cr6.eq) goto loc_825FCC04;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825fcc20
	goto loc_825FCC20;
loc_825FCC04:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r11,6928
	ctx.r4.s64 = ctx.r11.s64 + 6928;
	// bl 0x825efb40
	ctx.lr = 0x825FCC14;
	sub_825EFB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x825FCC1C;
	sub_821C9790(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_825FCC20:
	// lis r11,-29138
	ctx.r11.s64 = -1909587968;
	// ori r10,r11,10191
	ctx.r10.u64 = ctx.r11.u64 | 10191;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fcc48
	if (!ctx.cr6.eq) goto loc_825FCC48;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCC48:
	// lis r11,28086
	ctx.r11.s64 = 1840644096;
	// ori r10,r11,53966
	ctx.r10.u64 = ctx.r11.u64 | 53966;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fccc8
	if (!ctx.cr6.eq) goto loc_825FCCC8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fccac
	if (!ctx.cr6.eq) goto loc_825FCCAC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x825FCC6C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fcca4
	if (ctx.cr6.eq) goto loc_825FCCA4;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,21260
	ctx.r9.s64 = ctx.r10.s64 + 21260;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x825fcca8
	goto loc_825FCCA8;
loc_825FCCA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825FCCA8:
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_825FCCAC:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCCC8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x825fa148
	ctx.lr = 0x825FCCD8;
	sub_825FA148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fcd08
	if (ctx.cr6.eq) goto loc_825FCD08;
loc_825FCCE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FCD08:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-1676(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1676);
	// bl 0x825fa148
	ctx.lr = 0x825FCD1C;
	sub_825FA148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fcce4
	if (!ctx.cr6.eq) goto loc_825FCCE4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-1656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1656);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825fa148
	ctx.lr = 0x825FCD40;
	sub_825FA148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fcce4
	if (!ctx.cr6.eq) goto loc_825FCCE4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FCD54"))) PPC_WEAK_FUNC(sub_825FCD54);
PPC_FUNC_IMPL(__imp__sub_825FCD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FCD58"))) PPC_WEAK_FUNC(sub_825FCD58);
PPC_FUNC_IMPL(__imp__sub_825FCD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825FCD60;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825fcd88
	if (!ctx.cr6.eq) goto loc_825FCD88;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x825fcda8
	goto loc_825FCDA8;
loc_825FCD88:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r11,6928
	ctx.r4.s64 = ctx.r11.s64 + 6928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825efb40
	ctx.lr = 0x825FCD9C;
	sub_825EFB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FCDA8;
	sub_821C9790(ctx, base);
loc_825FCDA8:
	// lis r11,2774
	ctx.r11.s64 = 181796864;
	// ori r11,r11,55888
	ctx.r11.u64 = ctx.r11.u64 | 55888;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825fcf08
	if (ctx.cr6.gt) goto loc_825FCF08;
	// beq cr6,0x825fcef0
	if (ctx.cr6.eq) goto loc_825FCEF0;
	// lis r11,-12732
	ctx.r11.s64 = -834404352;
	// ori r11,r11,45231
	ctx.r11.u64 = ctx.r11.u64 | 45231;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825fce84
	if (ctx.cr6.gt) goto loc_825FCE84;
	// beq cr6,0x825fce64
	if (ctx.cr6.eq) goto loc_825FCE64;
	// lis r11,-27564
	ctx.r11.s64 = -1806434304;
	// ori r10,r11,37767
	ctx.r10.u64 = ctx.r11.u64 | 37767;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fce4c
	if (ctx.cr6.eq) goto loc_825FCE4C;
	// lis r11,-20092
	ctx.r11.s64 = -1316749312;
	// ori r10,r11,17918
	ctx.r10.u64 = ctx.r11.u64 | 17918;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fce20
	if (ctx.cr6.eq) goto loc_825FCE20;
	// lis r11,-17043
	ctx.r11.s64 = -1116930048;
	// ori r10,r11,36609
	ctx.r10.u64 = ctx.r11.u64 | 36609;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fcfb0
	if (!ctx.cr6.eq) goto loc_825FCFB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FCE08;
	sub_825EF8C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCE20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef808
	ctx.lr = 0x825FCE28;
	sub_825EF808(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,100
	ctx.r10.s64 = 100;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// stb r7,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r7.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCE4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef808
	ctx.lr = 0x825FCE54;
	sub_825EF808(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCE64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FCE6C;
	sub_825EF8C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCE84:
	// lis r11,-1673
	ctx.r11.s64 = -109641728;
	// ori r10,r11,10087
	ctx.r10.u64 = ctx.r11.u64 | 10087;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fced8
	if (ctx.cr6.eq) goto loc_825FCED8;
	// lis r11,372
	ctx.r11.s64 = 24379392;
	// ori r10,r11,18380
	ctx.r10.u64 = ctx.r11.u64 | 18380;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fcfb0
	if (!ctx.cr6.eq) goto loc_825FCFB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FCEAC;
	sub_825EF8C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f2,28624(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28624);
	// bl 0x823dc100
	ctx.lr = 0x825FCEB8;
	sub_823DC100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCED8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef9f0
	ctx.lr = 0x825FCEE0;
	sub_825EF9F0(ctx, base);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCEF0:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825ef698
	ctx.lr = 0x825FCEFC;
	sub_825EF698(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCF08:
	// lis r11,30213
	ctx.r11.s64 = 1980039168;
	// ori r11,r11,48846
	ctx.r11.u64 = ctx.r11.u64 | 48846;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825fcf90
	if (ctx.cr6.gt) goto loc_825FCF90;
	// beq cr6,0x825fcf64
	if (ctx.cr6.eq) goto loc_825FCF64;
	// lis r11,14233
	ctx.r11.s64 = 932773888;
	// ori r10,r11,18911
	ctx.r10.u64 = ctx.r11.u64 | 18911;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fcf54
	if (ctx.cr6.eq) goto loc_825FCF54;
	// lis r11,21836
	ctx.r11.s64 = 1431044096;
	// ori r10,r11,22539
	ctx.r10.u64 = ctx.r11.u64 | 22539;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fcfb0
	if (!ctx.cr6.eq) goto loc_825FCFB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef9f0
	ctx.lr = 0x825FCF44;
	sub_825EF9F0(ctx, base);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCF54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FCF5C;
	sub_825EF8C8(ctx, base);
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// b 0x825fd0e8
	goto loc_825FD0E8;
loc_825FCF64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef808
	ctx.lr = 0x825FCF6C;
	sub_825EF808(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// stb r11,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r11.u8);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// stb r9,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r9.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FCF90:
	// lis r11,30591
	ctx.r11.s64 = 2004811776;
	// ori r10,r11,31389
	ctx.r10.u64 = ctx.r11.u64 | 31389;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fd0dc
	if (ctx.cr6.eq) goto loc_825FD0DC;
	// lis r11,32571
	ctx.r11.s64 = 2134573056;
	// ori r10,r11,20907
	ctx.r10.u64 = ctx.r11.u64 | 20907;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825fd07c
	if (ctx.cr6.eq) goto loc_825FD07C;
loc_825FCFB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825FCFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x825fd0f4
	if (!ctx.cr6.eq) goto loc_825FD0F4;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd018
	if (ctx.cr6.eq) goto loc_825FD018;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FD010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FD018:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x825FD020;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd054
	if (ctx.cr6.eq) goto loc_825FD054;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,21260
	ctx.r9.s64 = ctx.r10.s64 + 21260;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x825fd058
	goto loc_825FD058;
loc_825FD054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FD058:
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FD074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FD07C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825fd090
	if (!ctx.cr6.eq) goto loc_825FD090;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x825fd0a4
	goto loc_825FD0A4;
loc_825FD090:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825efb40
	ctx.lr = 0x825FD0A0;
	sub_825EFB40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825FD0A4:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r31,72(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825fd0c4
	if (ctx.cr6.eq) goto loc_825FD0C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825efec0
	ctx.lr = 0x825FD0BC;
	sub_825EFEC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825efe90
	ctx.lr = 0x825FD0C4;
	sub_825EFE90(ctx, base);
loc_825FD0C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825eff20
	ctx.lr = 0x825FD0CC;
	sub_825EFF20(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FD0DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FD0E4;
	sub_825EF8C8(ctx, base);
	// stfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_825FD0E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
loc_825FD0F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FD100"))) PPC_WEAK_FUNC(sub_825FD100);
PPC_FUNC_IMPL(__imp__sub_825FD100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x825FD108;
	__savegprlr_26(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_825FD10C:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fd10c
	if (ctx.cr6.eq) goto loc_825FD10C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x823df070
	ctx.lr = 0x825FD124;
	sub_823DF070(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x825FD12C;
	sub_82130528(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,21260
	ctx.r26.s64 = ctx.r11.s64 + 21260;
	// li r27,0
	ctx.r27.s64 = 0;
	// beq cr6,0x825fd164
	if (ctx.cr6.eq) goto loc_825FD164;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r27,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r27.u16);
	// sth r27,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r27.u16);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stb r27,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r27.u8);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// b 0x825fd168
	goto loc_825FD168;
loc_825FD164:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_825FD168:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r28,-32112
	ctx.r28.s64 = -2104492032;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,28308
	ctx.r4.s64 = ctx.r10.s64 + 28308;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// bl 0x825fbdf0
	ctx.lr = 0x825FD18C;
	sub_825FBDF0(ctx, base);
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,-27376
	ctx.r7.s64 = ctx.r9.s64 + -27376;
	// addi r3,r8,-9604
	ctx.r3.s64 = ctx.r8.s64 + -9604;
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r7,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r7.u32);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r30.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD1B4;
	sub_821C9790(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FD1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// addi r8,r10,-27304
	ctx.r8.s64 = ctx.r10.s64 + -27304;
	// addi r3,r9,-9608
	ctx.r3.s64 = ctx.r9.s64 + -9608;
	// stw r8,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD200;
	sub_821C9790(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FD224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32160
	ctx.r5.s64 = -2107637760;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// addi r3,r5,-27232
	ctx.r3.s64 = ctx.r5.s64 + -27232;
	// addi r11,r4,-9612
	ctx.r11.s64 = ctx.r4.s64 + -9612;
	// stw r3,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FD24C;
	sub_821C9790(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FD270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32160
	ctx.r7.s64 = -2107637760;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// addi r3,r8,-9584
	ctx.r3.s64 = ctx.r8.s64 + -9584;
	// addi r6,r7,-27160
	ctx.r6.s64 = ctx.r7.s64 + -27160;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r6.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD294;
	sub_821C9790(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FD2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// addi r7,r9,-27016
	ctx.r7.s64 = ctx.r9.s64 + -27016;
	// addi r3,r8,-9568
	ctx.r3.s64 = ctx.r8.s64 + -9568;
	// stw r7,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD2DC;
	sub_821C9790(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FD300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// addi r8,r10,-27088
	ctx.r8.s64 = ctx.r10.s64 + -27088;
	// addi r3,r9,-9576
	ctx.r3.s64 = ctx.r9.s64 + -9576;
	// stw r8,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD324;
	sub_821C9790(ctx, base);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FD348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32160
	ctx.r5.s64 = -2107637760;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// addi r3,r5,-26944
	ctx.r3.s64 = ctx.r5.s64 + -26944;
	// addi r11,r4,-9600
	ctx.r11.s64 = ctx.r4.s64 + -9600;
	// stw r3,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FD370;
	sub_821C9790(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FD394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32160
	ctx.r8.s64 = -2107637760;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// addi r6,r8,-26880
	ctx.r6.s64 = ctx.r8.s64 + -26880;
	// addi r3,r7,28752
	ctx.r3.s64 = ctx.r7.s64 + 28752;
	// stw r6,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD3B8;
	sub_821C9790(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FD3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r30.u32);
	// addi r7,r9,-26792
	ctx.r7.s64 = ctx.r9.s64 + -26792;
	// addi r3,r8,28748
	ctx.r3.s64 = ctx.r8.s64 + 28748;
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD400;
	sub_821C9790(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FD424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x825FD42C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd458
	if (ctx.cr6.eq) goto loc_825FD458;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r27,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r27.u16);
	// sth r27,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r27.u16);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stb r27,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r27.u8);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// b 0x825fd45c
	goto loc_825FD45C;
loc_825FD458:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_825FD45C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// addi r4,r11,28304
	ctx.r4.s64 = ctx.r11.s64 + 28304;
	// bl 0x825fbdf0
	ctx.lr = 0x825FD474;
	sub_825FBDF0(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// addi r8,r10,0
	ctx.r8.s64 = ctx.r10.s64 + 0;
	// addi r3,r9,28736
	ctx.r3.s64 = ctx.r9.s64 + 28736;
	// stw r8,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD498;
	sub_821C9790(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FD4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32160
	ctx.r5.s64 = -2107637760;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r30,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r30.u32);
	// addi r3,r5,-26728
	ctx.r3.s64 = ctx.r5.s64 + -26728;
	// addi r11,r4,28724
	ctx.r11.s64 = ctx.r4.s64 + 28724;
	// stw r3,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FD4E4;
	sub_821C9790(ctx, base);
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FD508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32160
	ctx.r8.s64 = -2107637760;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r30,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r30.u32);
	// addi r6,r8,-26728
	ctx.r6.s64 = ctx.r8.s64 + -26728;
	// addi r3,r7,28716
	ctx.r3.s64 = ctx.r7.s64 + 28716;
	// stw r6,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD52C;
	sub_821C9790(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FD550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r30,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r30.u32);
	// addi r7,r9,-26704
	ctx.r7.s64 = ctx.r9.s64 + -26704;
	// addi r3,r8,28708
	ctx.r3.s64 = ctx.r8.s64 + 28708;
	// stw r7,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD574;
	sub_821C9790(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FD598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// stw r30,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r30.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,-26704
	ctx.r8.s64 = ctx.r10.s64 + -26704;
	// addi r3,r9,28696
	ctx.r3.s64 = ctx.r9.s64 + 28696;
	// stw r8,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FD5BC;
	sub_821C9790(ctx, base);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FD5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32237
	ctx.r5.s64 = -2112684032;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r30,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r30.u32);
	// addi r3,r5,0
	ctx.r3.s64 = ctx.r5.s64 + 0;
	// addi r11,r4,28680
	ctx.r11.s64 = ctx.r4.s64 + 28680;
	// stw r3,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FD608;
	sub_821C9790(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FD62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32112
	ctx.r8.s64 = -2104492032;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,28672
	ctx.r4.s64 = ctx.r7.s64 + 28672;
	// lwz r11,-1652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1652);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825fbdf0
	ctx.lr = 0x825FD64C;
	sub_825FBDF0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x825FD654;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd680
	if (ctx.cr6.eq) goto loc_825FD680;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r27,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r27.u16);
	// sth r27,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r27.u16);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stb r27,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r27.u8);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// b 0x825fd684
	goto loc_825FD684;
loc_825FD680:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_825FD684:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// addi r4,r11,28292
	ctx.r4.s64 = ctx.r11.s64 + 28292;
	// bl 0x825fbdf0
	ctx.lr = 0x825FD69C;
	sub_825FBDF0(ctx, base);
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,28664
	ctx.r4.s64 = ctx.r9.s64 + 28664;
	// lwz r11,-1656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1656);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825fbdf0
	ctx.lr = 0x825FD6BC;
	sub_825FBDF0(ctx, base);
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// addi r6,r8,14064
	ctx.r6.s64 = ctx.r8.s64 + 14064;
	// addi r4,r7,28648
	ctx.r4.s64 = ctx.r7.s64 + 28648;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825fbdf0
	ctx.lr = 0x825FD6DC;
	sub_825FBDF0(ctx, base);
	// lis r5,-32160
	ctx.r5.s64 = -2107637760;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// addi r11,r5,-14600
	ctx.r11.s64 = ctx.r5.s64 + -14600;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r4,28640
	ctx.r4.s64 = ctx.r4.s64 + 28640;
	// bl 0x825fbdf0
	ctx.lr = 0x825FD700;
	sub_825FBDF0(ctx, base);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// addi r8,r10,-26400
	ctx.r8.s64 = ctx.r10.s64 + -26400;
	// addi r4,r9,28632
	ctx.r4.s64 = ctx.r9.s64 + 28632;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825fbdf0
	ctx.lr = 0x825FD720;
	sub_825FBDF0(ctx, base);
	// lis r7,-32160
	ctx.r7.s64 = -2107637760;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r3,-1676(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1676);
	// addi r5,r7,-18584
	ctx.r5.s64 = ctx.r7.s64 + -18584;
	// addi r4,r6,23408
	ctx.r4.s64 = ctx.r6.s64 + 23408;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825fbdf0
	ctx.lr = 0x825FD740;
	sub_825FBDF0(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FD748"))) PPC_WEAK_FUNC(sub_825FD748);
PPC_FUNC_IMPL(__imp__sub_825FD748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825FD750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825fd7cc
	if (ctx.cr6.eq) goto loc_825FD7CC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825fd7d4
	if (ctx.cr6.eq) goto loc_825FD7D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef808
	ctx.lr = 0x825FD77C;
	sub_825EF808(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825fd82c
	if (ctx.cr6.lt) goto loc_825FD82C;
	// lhz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825fd82c
	if (!ctx.cr6.lt) goto loc_825FD82C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FD7CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825fd7dc
	if (!ctx.cr6.eq) goto loc_825FD7DC;
loc_825FD7D4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x825fd800
	goto loc_825FD800;
loc_825FD7DC:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r28,r11,6928
	ctx.r28.s64 = ctx.r11.s64 + 6928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825efb40
	ctx.lr = 0x825FD7F4;
	sub_825EFB40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x825FD800;
	sub_821C9790(ctx, base);
loc_825FD800:
	// lis r11,-27266
	ctx.r11.s64 = -1786904576;
	// ori r10,r11,9529
	ctx.r10.u64 = ctx.r11.u64 | 9529;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fd82c
	if (!ctx.cr6.eq) goto loc_825FD82C;
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_825FD82C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fcbd8
	ctx.lr = 0x825FD83C;
	sub_825FCBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FD844"))) PPC_WEAK_FUNC(sub_825FD844);
PPC_FUNC_IMPL(__imp__sub_825FD844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FD848"))) PPC_WEAK_FUNC(sub_825FD848);
PPC_FUNC_IMPL(__imp__sub_825FD848) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
loc_825FD860:
	// lwz r11,6924(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6924);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lhz r8,6(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r4,6(r6)
	PPC_STORE_U16(ctx.r6.u32 + 6, ctx.r4.u16);
	// bne cr6,0x825fd860
	if (!ctx.cr6.eq) goto loc_825FD860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FD898"))) PPC_WEAK_FUNC(sub_825FD898);
PPC_FUNC_IMPL(__imp__sub_825FD898) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,28172
	ctx.r10.s64 = ctx.r11.s64 + 28172;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd8ec
	if (ctx.cr6.eq) goto loc_825FD8EC;
loc_825FD8C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,192(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FD8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825fd8c8
	if (!ctx.cr6.eq) goto loc_825FD8C8;
loc_825FD8EC:
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd90c
	if (ctx.cr6.eq) goto loc_825FD90C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FD90C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FD90C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fd848
	ctx.lr = 0x825FD914;
	sub_825FD848(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x825edb80
	ctx.lr = 0x825FD91C;
	sub_825EDB80(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,20884
	ctx.r10.s64 = ctx.r11.s64 + 20884;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_825FD940"))) PPC_WEAK_FUNC(sub_825FD940);
PPC_FUNC_IMPL(__imp__sub_825FD940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x825FD948;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x825fda10
	if (!ctx.cr6.gt) goto loc_825FDA10;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825fda10
	if (ctx.cr6.eq) goto loc_825FDA10;
	// bl 0x825fd848
	ctx.lr = 0x825FD970;
	sub_825FD848(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r30.u32);
	// blt 0x825fda10
	if (ctx.cr0.lt) goto loc_825FDA10;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r25,r9,65535
	ctx.r25.u64 = ctx.r9.u64 | 65535;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r29,-32112
	ctx.r29.s64 = -2104492032;
	// addi r27,r10,22648
	ctx.r27.s64 = ctx.r10.s64 + 22648;
	// addi r26,r11,28528
	ctx.r26.s64 = ctx.r11.s64 + 28528;
loc_825FD9A8:
	// lwz r10,6924(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6924);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fd9c8
	if (!ctx.cr6.eq) goto loc_825FD9C8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821bd618
	ctx.lr = 0x825FD9C4;
	sub_821BD618(ctx, base);
	// lwz r10,6924(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6924);
loc_825FD9C8:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r8,r25
	ctx.r6.u64 = ctx.r8.u64 + ctx.r25.u64;
	// sth r6,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r6.u16);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// beq cr6,0x825fd9fc
	if (ctx.cr6.eq) goto loc_825FD9FC;
	// lwz r10,212(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x825fda00
	goto loc_825FDA00;
loc_825FD9FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FDA00:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,212(r28)
	PPC_STORE_U32(ctx.r28.u32 + 212, ctx.r11.u32);
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// bge 0x825fd9a8
	if (!ctx.cr0.lt) goto loc_825FD9A8;
loc_825FDA10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDA18"))) PPC_WEAK_FUNC(sub_825FDA18);
PPC_FUNC_IMPL(__imp__sub_825FDA18) {
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
	// bl 0x825fd898
	ctx.lr = 0x825FDA38;
	sub_825FD898(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fda74
	if (ctx.cr6.eq) goto loc_825FDA74;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,6916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6916);
	// beq cr6,0x825fda74
	if (ctx.cr6.eq) goto loc_825FDA74;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
loc_825FDA74:
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

__attribute__((alias("__imp__sub_825FDA8C"))) PPC_WEAK_FUNC(sub_825FDA8C);
PPC_FUNC_IMPL(__imp__sub_825FDA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDA90"))) PPC_WEAK_FUNC(sub_825FDA90);
PPC_FUNC_IMPL(__imp__sub_825FDA90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x825fdb24
	if (ctx.cr6.gt) {
		sub_825FDB24(ctx, base);
		return;
	}
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// addi r12,r12,-9536
	ctx.r12.s64 = ctx.r12.s64 + -9536;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x825FDAE4
		return;
	case 1:
		// ERROR: 0x825FDAEC
		return;
	case 2:
		// ERROR: 0x825FDAF4
		return;
	case 3:
		// ERROR: 0x825FDAFC
		return;
	case 4:
		// ERROR: 0x825FDB04
		return;
	case 5:
		// ERROR: 0x825FDB0C
		return;
	case 6:
		// ERROR: 0x825FDB14
		return;
	case 7:
		// ERROR: 0x825FDB24
		return;
	case 8:
		// ERROR: 0x825FDB1C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_825FDAC0"))) PPC_WEAK_FUNC(sub_825FDAC0);
PPC_FUNC_IMPL(__imp__sub_825FDAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,-9500(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9500);
	// lwz r18,-9492(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9492);
	// lwz r18,-9484(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9484);
	// lwz r18,-9476(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9476);
	// lwz r18,-9468(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9468);
	// lwz r18,-9460(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9460);
	// lwz r18,-9452(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9452);
	// lwz r18,-9436(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9436);
	// lwz r18,-9444(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9444);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82609350
	sub_82609350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDAEC"))) PPC_WEAK_FUNC(sub_825FDAEC);
PPC_FUNC_IMPL(__imp__sub_825FDAEC) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x825fdbf8
	sub_825FDBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDAF4"))) PPC_WEAK_FUNC(sub_825FDAF4);
PPC_FUNC_IMPL(__imp__sub_825FDAF4) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x826078c8
	sub_826078C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDAFC"))) PPC_WEAK_FUNC(sub_825FDAFC);
PPC_FUNC_IMPL(__imp__sub_825FDAFC) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82607098
	sub_82607098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDB04"))) PPC_WEAK_FUNC(sub_825FDB04);
PPC_FUNC_IMPL(__imp__sub_825FDB04) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x826059b0
	sub_826059B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDB0C"))) PPC_WEAK_FUNC(sub_825FDB0C);
PPC_FUNC_IMPL(__imp__sub_825FDB0C) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82604ff0
	sub_82604FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDB14"))) PPC_WEAK_FUNC(sub_825FDB14);
PPC_FUNC_IMPL(__imp__sub_825FDB14) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82605058
	sub_82605058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDB1C"))) PPC_WEAK_FUNC(sub_825FDB1C);
PPC_FUNC_IMPL(__imp__sub_825FDB1C) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82606fb0
	sub_82606FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDB24"))) PPC_WEAK_FUNC(sub_825FDB24);
PPC_FUNC_IMPL(__imp__sub_825FDB24) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,29056
	ctx.r3.s64 = ctx.r11.s64 + 29056;
	// b 0x821bd618
	sub_821BD618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDB30"))) PPC_WEAK_FUNC(sub_825FDB30);
PPC_FUNC_IMPL(__imp__sub_825FDB30) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fdb8c
	if (ctx.cr6.eq) goto loc_825FDB8C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,28252
	ctx.r5.s64 = ctx.r11.s64 + 28252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f9390
	ctx.lr = 0x825FDB70;
	sub_825F9390(ctx, base);
	// lhz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8260a710
	ctx.lr = 0x825FDB88;
	sub_8260A710(ctx, base);
	// b 0x825fdba4
	goto loc_825FDBA4;
loc_825FDB8C:
	// lhz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8260a7d0
	ctx.lr = 0x825FDBA4;
	sub_8260A7D0(ctx, base);
loc_825FDBA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f93f0
	ctx.lr = 0x825FDBAC;
	sub_825F93F0(ctx, base);
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

__attribute__((alias("__imp__sub_825FDBC4"))) PPC_WEAK_FUNC(sub_825FDBC4);
PPC_FUNC_IMPL(__imp__sub_825FDBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDBC8"))) PPC_WEAK_FUNC(sub_825FDBC8);
PPC_FUNC_IMPL(__imp__sub_825FDBC8) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,164(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 164);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8260a770
	sub_8260A770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDBDC"))) PPC_WEAK_FUNC(sub_825FDBDC);
PPC_FUNC_IMPL(__imp__sub_825FDBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDBE0"))) PPC_WEAK_FUNC(sub_825FDBE0);
PPC_FUNC_IMPL(__imp__sub_825FDBE0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 164);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FDBF4"))) PPC_WEAK_FUNC(sub_825FDBF4);
PPC_FUNC_IMPL(__imp__sub_825FDBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDBF8"))) PPC_WEAK_FUNC(sub_825FDBF8);
PPC_FUNC_IMPL(__imp__sub_825FDBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825FDC00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x821d2970
	ctx.lr = 0x825FDC10;
	sub_821D2970(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,21020
	ctx.r10.s64 = ctx.r11.s64 + 21020;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825fdc3c
	if (ctx.cr6.eq) goto loc_825FDC3C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217d890
	ctx.lr = 0x825FDC30;
	sub_8217D890(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825FDC3C:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fdc78
	if (ctx.cr6.eq) goto loc_825FDC78;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825FDC50:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825fdc64
	if (ctx.cr0.eq) goto loc_825FDC64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8260a830
	ctx.lr = 0x825FDC64;
	sub_8260A830(ctx, base);
loc_825FDC64:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825fdc50
	if (ctx.cr6.lt) goto loc_825FDC50;
loc_825FDC78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDC84"))) PPC_WEAK_FUNC(sub_825FDC84);
PPC_FUNC_IMPL(__imp__sub_825FDC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDC88"))) PPC_WEAK_FUNC(sub_825FDC88);
PPC_FUNC_IMPL(__imp__sub_825FDC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825FDC90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r10,21020
	ctx.r9.s64 = ctx.r10.s64 + 21020;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fdce4
	if (ctx.cr6.eq) goto loc_825FDCE4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x825fdcdc
	if (ctx.cr0.lt) goto loc_825FDCDC;
loc_825FDCC8:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260a6b8
	ctx.lr = 0x825FDCD4;
	sub_8260A6B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x825fdcc8
	if (!ctx.cr0.lt) goto loc_825FDCC8;
loc_825FDCDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x825FDCE4;
	sub_82130588(ctx, base);
loc_825FDCE4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,20968
	ctx.r10.s64 = ctx.r11.s64 + 20968;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x821d2810
	ctx.lr = 0x825FDCF8;
	sub_821D2810(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDD00"))) PPC_WEAK_FUNC(sub_825FDD00);
PPC_FUNC_IMPL(__imp__sub_825FDD00) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDD20"))) PPC_WEAK_FUNC(sub_825FDD20);
PPC_FUNC_IMPL(__imp__sub_825FDD20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FDD24"))) PPC_WEAK_FUNC(sub_825FDD24);
PPC_FUNC_IMPL(__imp__sub_825FDD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDD28"))) PPC_WEAK_FUNC(sub_825FDD28);
PPC_FUNC_IMPL(__imp__sub_825FDD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r3,14096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FDD34"))) PPC_WEAK_FUNC(sub_825FDD34);
PPC_FUNC_IMPL(__imp__sub_825FDD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDD38"))) PPC_WEAK_FUNC(sub_825FDD38);
PPC_FUNC_IMPL(__imp__sub_825FDD38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32112
	ctx.r8.s64 = -2104492032;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r10,r11,20112
	ctx.r10.s64 = ctx.r11.s64 + 20112;
	// lwz r11,14096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825fdd70
	if (!ctx.cr6.eq) goto loc_825FDD70;
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
loc_825FDD70:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,14096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14096, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FDDA4"))) PPC_WEAK_FUNC(sub_825FDDA4);
PPC_FUNC_IMPL(__imp__sub_825FDDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDDA8"))) PPC_WEAK_FUNC(sub_825FDDA8);
PPC_FUNC_IMPL(__imp__sub_825FDDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x825FDDB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FDDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fde40
	if (ctx.cr6.eq) goto loc_825FDE40;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,44
	ctx.r31.s64 = ctx.r29.s64 + 44;
	// li r26,1
	ctx.r26.s64 = 1;
loc_825FDDEC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825ed940
	ctx.lr = 0x825FDDF4;
	sub_825ED940(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x825FDE00;
	sub_821C9790(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FDE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825fddec
	if (ctx.cr6.lt) goto loc_825FDDEC;
loc_825FDE40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDE48"))) PPC_WEAK_FUNC(sub_825FDE48);
PPC_FUNC_IMPL(__imp__sub_825FDE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FDE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x825fde8c
	if (!ctx.cr6.gt) goto loc_825FDE8C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_825FDE68:
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
	ctx.lr = 0x825FDE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// bne 0x825fde68
	if (!ctx.cr0.eq) goto loc_825FDE68;
loc_825FDE8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x825FDE94;
	sub_82130588(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FDE9C"))) PPC_WEAK_FUNC(sub_825FDE9C);
PPC_FUNC_IMPL(__imp__sub_825FDE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FDEA0"))) PPC_WEAK_FUNC(sub_825FDEA0);
PPC_FUNC_IMPL(__imp__sub_825FDEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x825FDEA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,29704
	ctx.r10.s64 = ctx.r11.s64 + 29704;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825FDEE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x825fdf04
	if (ctx.cr6.eq) goto loc_825FDF04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fdee0
	if (ctx.cr6.eq) goto loc_825FDEE0;
loc_825FDF04:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fe028
	if (ctx.cr6.eq) goto loc_825FE028;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825fdfb8
	if (ctx.cr6.eq) goto loc_825FDFB8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c9790
	ctx.lr = 0x825FDF24;
	sub_821C9790(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FDF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825fdfb8
	if (ctx.cr6.eq) goto loc_825FDFB8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r31,-32112
	ctx.r31.s64 = -2104492032;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,14096(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14096);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FDF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,14096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14096);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x825fe028
	if (!ctx.cr6.gt) goto loc_825FE028;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fdd38
	ctx.lr = 0x825FDF98;
	sub_825FDD38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FDFB8:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,21264
	ctx.r11.s64 = ctx.r11.s64 + 21264;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x825fe018
	if (!ctx.cr6.gt) goto loc_825FE018;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825FDFD4:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825FDFDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x825fe000
	if (ctx.cr6.eq) goto loc_825FE000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fdfdc
	if (ctx.cr6.eq) goto loc_825FDFDC;
loc_825FE000:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fe030
	if (ctx.cr6.eq) goto loc_825FE030;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x825fdfd4
	if (ctx.cr6.lt) goto loc_825FDFD4;
loc_825FE018:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,29680
	ctx.r3.s64 = ctx.r11.s64 + 29680;
	// bl 0x82130000
	ctx.lr = 0x825FE028;
	sub_82130000(ctx, base);
loc_825FE028:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_825FE030:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-32112
	ctx.r31.s64 = -2104492032;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r30,14096(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14096);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FE058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,14096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14096);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x825fe028
	if (!ctx.cr6.gt) goto loc_825FE028;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fdd38
	ctx.lr = 0x825FE06C;
	sub_825FDD38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FE08C"))) PPC_WEAK_FUNC(sub_825FE08C);
PPC_FUNC_IMPL(__imp__sub_825FE08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE090"))) PPC_WEAK_FUNC(sub_825FE090);
PPC_FUNC_IMPL(__imp__sub_825FE090) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FE0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
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

__attribute__((alias("__imp__sub_825FE0D4"))) PPC_WEAK_FUNC(sub_825FE0D4);
PPC_FUNC_IMPL(__imp__sub_825FE0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE0D8"))) PPC_WEAK_FUNC(sub_825FE0D8);
PPC_FUNC_IMPL(__imp__sub_825FE0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x825FE0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825fe104
	if (!ctx.cr6.eq) goto loc_825FE104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x825fe114
	goto loc_825FE114;
loc_825FE104:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825efb40
	ctx.lr = 0x825FE114;
	sub_825EFB40(ctx, base);
loc_825FE114:
	// lbz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x825fe16c
	if (!ctx.cr6.gt) goto loc_825FE16C;
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
loc_825FE128:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825FE130:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x825fe154
	if (ctx.cr6.eq) goto loc_825FE154;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fe130
	if (ctx.cr6.eq) goto loc_825FE130;
loc_825FE154:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825fe190
	if (ctx.cr6.eq) goto loc_825FE190;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825fe128
	if (ctx.cr6.lt) goto loc_825FE128;
loc_825FE16C:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FE188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_825FE190:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FE1C8"))) PPC_WEAK_FUNC(sub_825FE1C8);
PPC_FUNC_IMPL(__imp__sub_825FE1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825FE1DC"))) PPC_WEAK_FUNC(sub_825FE1DC);
PPC_FUNC_IMPL(__imp__sub_825FE1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE1E0"))) PPC_WEAK_FUNC(sub_825FE1E0);
PPC_FUNC_IMPL(__imp__sub_825FE1E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825FE1F4"))) PPC_WEAK_FUNC(sub_825FE1F4);
PPC_FUNC_IMPL(__imp__sub_825FE1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE1F8"))) PPC_WEAK_FUNC(sub_825FE1F8);
PPC_FUNC_IMPL(__imp__sub_825FE1F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825FE20C"))) PPC_WEAK_FUNC(sub_825FE20C);
PPC_FUNC_IMPL(__imp__sub_825FE20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE210"))) PPC_WEAK_FUNC(sub_825FE210);
PPC_FUNC_IMPL(__imp__sub_825FE210) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825FE224"))) PPC_WEAK_FUNC(sub_825FE224);
PPC_FUNC_IMPL(__imp__sub_825FE224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE228"))) PPC_WEAK_FUNC(sub_825FE228);
PPC_FUNC_IMPL(__imp__sub_825FE228) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825FE23C"))) PPC_WEAK_FUNC(sub_825FE23C);
PPC_FUNC_IMPL(__imp__sub_825FE23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE240"))) PPC_WEAK_FUNC(sub_825FE240);
PPC_FUNC_IMPL(__imp__sub_825FE240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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

__attribute__((alias("__imp__sub_825FE254"))) PPC_WEAK_FUNC(sub_825FE254);
PPC_FUNC_IMPL(__imp__sub_825FE254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE258"))) PPC_WEAK_FUNC(sub_825FE258);
PPC_FUNC_IMPL(__imp__sub_825FE258) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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

__attribute__((alias("__imp__sub_825FE26C"))) PPC_WEAK_FUNC(sub_825FE26C);
PPC_FUNC_IMPL(__imp__sub_825FE26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE270"))) PPC_WEAK_FUNC(sub_825FE270);
PPC_FUNC_IMPL(__imp__sub_825FE270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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

__attribute__((alias("__imp__sub_825FE284"))) PPC_WEAK_FUNC(sub_825FE284);
PPC_FUNC_IMPL(__imp__sub_825FE284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE288"))) PPC_WEAK_FUNC(sub_825FE288);
PPC_FUNC_IMPL(__imp__sub_825FE288) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825FE29C"))) PPC_WEAK_FUNC(sub_825FE29C);
PPC_FUNC_IMPL(__imp__sub_825FE29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE2A0"))) PPC_WEAK_FUNC(sub_825FE2A0);
PPC_FUNC_IMPL(__imp__sub_825FE2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825FE2B4"))) PPC_WEAK_FUNC(sub_825FE2B4);
PPC_FUNC_IMPL(__imp__sub_825FE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE2B8"))) PPC_WEAK_FUNC(sub_825FE2B8);
PPC_FUNC_IMPL(__imp__sub_825FE2B8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,29724
	ctx.r10.s64 = ctx.r11.s64 + 29724;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lhz r9,86(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fe2ec
	if (ctx.cr6.eq) goto loc_825FE2EC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82130588
	ctx.lr = 0x825FE2EC;
	sub_82130588(ctx, base);
loc_825FE2EC:
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fe300
	if (ctx.cr6.eq) goto loc_825FE300;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82130588
	ctx.lr = 0x825FE300;
	sub_82130588(ctx, base);
loc_825FE300:
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fe314
	if (ctx.cr6.eq) goto loc_825FE314;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82130588
	ctx.lr = 0x825FE314;
	sub_82130588(ctx, base);
loc_825FE314:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,20884
	ctx.r10.s64 = ctx.r11.s64 + 20884;
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

__attribute__((alias("__imp__sub_825FE334"))) PPC_WEAK_FUNC(sub_825FE334);
PPC_FUNC_IMPL(__imp__sub_825FE334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE338"))) PPC_WEAK_FUNC(sub_825FE338);
PPC_FUNC_IMPL(__imp__sub_825FE338) {
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
	// bl 0x825fe2b8
	ctx.lr = 0x825FE358;
	sub_825FE2B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fe370
	if (ctx.cr6.eq) goto loc_825FE370;
	// bl 0x82130588
	ctx.lr = 0x825FE36C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825FE370:
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

__attribute__((alias("__imp__sub_825FE388"))) PPC_WEAK_FUNC(sub_825FE388);
PPC_FUNC_IMPL(__imp__sub_825FE388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x825FE390;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x825fe3ec
	if (ctx.cr6.eq) goto loc_825FE3EC;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825fe3e0
	if (ctx.cr6.eq) goto loc_825FE3E0;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fe3e0
	if (ctx.cr6.eq) goto loc_825FE3E0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x825FE3E0;
	sub_82130588(ctx, base);
loc_825FE3E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c7480
	ctx.lr = 0x825FE3EC;
	sub_826C7480(ctx, base);
loc_825FE3EC:
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825fe42c
	if (ctx.cr6.eq) goto loc_825FE42C;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825fe420
	if (ctx.cr6.eq) goto loc_825FE420;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fe420
	if (ctx.cr6.eq) goto loc_825FE420;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x825FE420;
	sub_82130588(ctx, base);
loc_825FE420:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c7480
	ctx.lr = 0x825FE42C;
	sub_826C7480(ctx, base);
loc_825FE42C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r28,r30,80
	ctx.r28.s64 = ctx.r30.s64 + 80;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lbz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r8,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r8.u8);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// lbz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// beq cr6,0x825fe4d4
	if (ctx.cr6.eq) goto loc_825FE4D4;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825fe4c8
	if (ctx.cr6.eq) goto loc_825FE4C8;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fe4c8
	if (ctx.cr6.eq) goto loc_825FE4C8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x825FE4C8;
	sub_82130588(ctx, base);
loc_825FE4C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247b780
	ctx.lr = 0x825FE4D4;
	sub_8247B780(ctx, base);
loc_825FE4D4:
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FE4E8"))) PPC_WEAK_FUNC(sub_825FE4E8);
PPC_FUNC_IMPL(__imp__sub_825FE4E8) {
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
	// mulli r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 * 92;
	// bl 0x82130528
	ctx.lr = 0x825FE504;
	sub_82130528(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x825fe568
	if (!ctx.cr6.gt) goto loc_825FE568;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,29724
	ctx.r9.s64 = ctx.r9.s64 + 29724;
loc_825FE51C:
	// addic. r8,r11,-18
	ctx.xer.ca = ctx.r11.u32 > 17;
	ctx.r8.s64 = ctx.r11.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825fe55c
	if (ctx.cr0.eq) goto loc_825FE55C;
	// stw r9,-18(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18, ctx.r9.u32);
	// stw r10,-14(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14, ctx.r10.u32);
	// stw r10,-6(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6, ctx.r10.u32);
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// stw r10,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r10.u32);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// stb r10,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stw r10,62(r11)
	PPC_STORE_U32(ctx.r11.u32 + 62, ctx.r10.u32);
	// sth r10,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// sth r10,68(r11)
	PPC_STORE_U16(ctx.r11.u32 + 68, ctx.r10.u16);
	// stb r10,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r10.u8);
loc_825FE55C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// bne 0x825fe51c
	if (!ctx.cr0.eq) goto loc_825FE51C;
loc_825FE568:
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

__attribute__((alias("__imp__sub_825FE57C"))) PPC_WEAK_FUNC(sub_825FE57C);
PPC_FUNC_IMPL(__imp__sub_825FE57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE580"))) PPC_WEAK_FUNC(sub_825FE580);
PPC_FUNC_IMPL(__imp__sub_825FE580) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FE588"))) PPC_WEAK_FUNC(sub_825FE588);
PPC_FUNC_IMPL(__imp__sub_825FE588) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825fc480
	ctx.lr = 0x825FE5A4;
	sub_825FC480(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82130588
	ctx.lr = 0x825FE5AC;
	sub_82130588(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_825FE5D0"))) PPC_WEAK_FUNC(sub_825FE5D0);
PPC_FUNC_IMPL(__imp__sub_825FE5D0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,29812
	ctx.r10.s64 = ctx.r11.s64 + 29812;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lhz r9,30(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fe608
	if (ctx.cr6.eq) goto loc_825FE608;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82130588
	ctx.lr = 0x825FE608;
	sub_82130588(ctx, base);
loc_825FE608:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,21260
	ctx.r10.s64 = ctx.r11.s64 + 21260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825fc480
	ctx.lr = 0x825FE620;
	sub_825FC480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825eea48
	ctx.lr = 0x825FE628;
	sub_825EEA48(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r9,20884
	ctx.r8.s64 = ctx.r9.s64 + 20884;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_825FE64C"))) PPC_WEAK_FUNC(sub_825FE64C);
PPC_FUNC_IMPL(__imp__sub_825FE64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE650"))) PPC_WEAK_FUNC(sub_825FE650);
PPC_FUNC_IMPL(__imp__sub_825FE650) {
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
	// bl 0x825fe5d0
	ctx.lr = 0x825FE670;
	sub_825FE5D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fe688
	if (ctx.cr6.eq) goto loc_825FE688;
	// bl 0x82130588
	ctx.lr = 0x825FE684;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825FE688:
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

__attribute__((alias("__imp__sub_825FE6A0"))) PPC_WEAK_FUNC(sub_825FE6A0);
PPC_FUNC_IMPL(__imp__sub_825FE6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x825FE6A8;
	__savegprlr_27(ctx, base);
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
	// bne cr6,0x825fe750
	if (!ctx.cr6.eq) goto loc_825FE750;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// bl 0x825fe4e8
	ctx.lr = 0x825FE6D0;
	sub_825FE4E8(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fe70c
	if (ctx.cr6.eq) goto loc_825FE70C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825FE6E4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 * 92;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x825fe388
	ctx.lr = 0x825FE6F8;
	sub_825FE388(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825fe6e4
	if (ctx.cr6.lt) goto loc_825FE6E4;
loc_825FE70C:
	// lhz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x825fe744
	if (!ctx.cr6.gt) goto loc_825FE744;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_825FE720:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FE738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// bne 0x825fe720
	if (!ctx.cr0.eq) goto loc_825FE720;
loc_825FE744:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82130588
	ctx.lr = 0x825FE74C;
	sub_82130588(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825FE750:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 * 92;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FE770"))) PPC_WEAK_FUNC(sub_825FE770);
PPC_FUNC_IMPL(__imp__sub_825FE770) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,21264
	ctx.r31.s64 = ctx.r11.s64 + 21264;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fe6a0
	ctx.lr = 0x825FE79C;
	sub_825FE6A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825fe388
	ctx.lr = 0x825FE7A4;
	sub_825FE388(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825FE7AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825fe7ac
	if (!ctx.cr6.eq) goto loc_825FE7AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825fe820
	if (!ctx.cr6.eq) goto loc_825FE820;
	// lis r6,-32112
	ctx.r6.s64 = -2104492032;
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,-32112
	ctx.r5.s64 = -2104492032;
	// mulli r8,r4,92
	ctx.r8.s64 = ctx.r4.s64 * 92;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,14096(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14096);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r5,20112
	ctx.r7.s64 = ctx.r5.s64 + 20112;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,-92
	ctx.r9.s64 = ctx.r9.s64 + -92;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,5
	ctx.r10.s64 = 5;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// stw r11,14096(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14096, ctx.r11.u32);
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
loc_825FE820:
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

__attribute__((alias("__imp__sub_825FE838"))) PPC_WEAK_FUNC(sub_825FE838);
PPC_FUNC_IMPL(__imp__sub_825FE838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x825FE840;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823db9d8
	ctx.lr = 0x825FE848;
	sub_823DB9D8(ctx, base);
	// addi r31,r1,-4720
	ctx.r31.s64 = ctx.r1.s64 + -4720;
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4720(r1)
	ea = -4720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r3,4740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4740, ctx.r3.u32);
	// stw r4,4748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4748, ctx.r4.u32);
	// stw r5,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r5.u32);
	// stw r6,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r6.u32);
	// stwu r11,-3152(r1)
	ea = -3152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// stw r7,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r7.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x825fe880
	if (!ctx.cr6.eq) goto loc_825FE880;
	// stw r11,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r11.u32);
loc_825FE880:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,20108
	ctx.r28.s64 = ctx.r11.s64 + 20108;
	// bne cr6,0x825fe8a0
	if (!ctx.cr6.eq) goto loc_825FE8A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// b 0x825fe8a4
	goto loc_825FE8A4;
loc_825FE8A0:
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_825FE8A4:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fee18
	if (ctx.cr6.eq) goto loc_825FEE18;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r11,-18440
	ctx.r8.s64 = ctx.r11.s64 + -18440;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r7,r11,30668
	ctx.r7.s64 = ctx.r11.s64 + 30668;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r7,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r7.u32);
	// addi r5,r11,-13568
	ctx.r5.s64 = ctx.r11.s64 + -13568;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r5,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r5.u32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// addi r4,r11,-13576
	ctx.r4.s64 = ctx.r11.s64 + -13576;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r3,r11,3998
	ctx.r3.s64 = ctx.r11.s64 + 3998;
	// addi r11,r10,29724
	ctx.r11.s64 = ctx.r10.s64 + 29724;
	// addi r10,r9,21260
	ctx.r10.s64 = ctx.r9.s64 + 21260;
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// addi r9,r8,29812
	ctx.r9.s64 = ctx.r8.s64 + 29812;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// addi r8,r6,30624
	ctx.r8.s64 = ctx.r6.s64 + 30624;
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// addi r11,r25,-19160
	ctx.r11.s64 = ctx.r25.s64 + -19160;
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// addi r6,r5,30596
	ctx.r6.s64 = ctx.r5.s64 + 30596;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// lis r26,-32249
	ctx.r26.s64 = -2113470464;
	// lis r24,-32248
	ctx.r24.s64 = -2113404928;
	// stw r6,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r6.u32);
	// lis r23,-32248
	ctx.r23.s64 = -2113404928;
	// lis r17,-32248
	ctx.r17.s64 = -2113404928;
	// addi r5,r4,30552
	ctx.r5.s64 = ctx.r4.s64 + 30552;
	// addi r4,r27,30512
	ctx.r4.s64 = ctx.r27.s64 + 30512;
	// addi r3,r26,12236
	ctx.r3.s64 = ctx.r26.s64 + 12236;
	// stw r5,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r5.u32);
	// addi r10,r24,30504
	ctx.r10.s64 = ctx.r24.s64 + 30504;
	// stw r4,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r4.u32);
	// addi r9,r23,30496
	ctx.r9.s64 = ctx.r23.s64 + 30496;
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// addi r11,r17,21084
	ctx.r11.s64 = ctx.r17.s64 + 21084;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// lis r21,-32248
	ctx.r21.s64 = -2113404928;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// lis r20,-32248
	ctx.r20.s64 = -2113404928;
	// lis r19,-32248
	ctx.r19.s64 = -2113404928;
	// lis r18,-32248
	ctx.r18.s64 = -2113404928;
	// lis r16,-32248
	ctx.r16.s64 = -2113404928;
	// lis r15,-32248
	ctx.r15.s64 = -2113404928;
	// addi r8,r22,-19128
	ctx.r8.s64 = ctx.r22.s64 + -19128;
	// addi r6,r21,30448
	ctx.r6.s64 = ctx.r21.s64 + 30448;
	// addi r5,r20,28640
	ctx.r5.s64 = ctx.r20.s64 + 28640;
	// stw r8,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r8.u32);
	// addi r4,r19,30408
	ctx.r4.s64 = ctx.r19.s64 + 30408;
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r5,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r5.u32);
	// lis r29,-32112
	ctx.r29.s64 = -2104492032;
	// stw r4,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r4.u32);
	// addi r3,r18,30360
	ctx.r3.s64 = ctx.r18.s64 + 30360;
	// addi r10,r16,30272
	ctx.r10.s64 = ctx.r16.s64 + 30272;
	// addi r9,r15,30224
	ctx.r9.s64 = ctx.r15.s64 + 30224;
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r14,r7,30144
	ctx.r14.s64 = ctx.r7.s64 + 30144;
	// addi r29,r29,20112
	ctx.r29.s64 = ctx.r29.s64 + 20112;
	// addi r4,r11,30080
	ctx.r4.s64 = ctx.r11.s64 + 30080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f28,7444(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7444);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,31292(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31292);
	ctx.f29.f64 = double(temp.f32);
	// stw r4,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r4.u32);
	// addi r10,r11,30032
	ctx.r10.s64 = ctx.r11.s64 + 30032;
	// lfs f30,3796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r23,100(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r17,4748(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4748);
	// addi r8,r11,30016
	ctx.r8.s64 = ctx.r11.s64 + 30016;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r8,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// addi r7,r11,29976
	ctx.r7.s64 = ctx.r11.s64 + 29976;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r20,3
	ctx.r20.s64 = 3;
	// stw r7,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r7.u32);
	// addi r6,r11,29964
	ctx.r6.s64 = ctx.r11.s64 + 29964;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// ori r15,r3,65534
	ctx.r15.u64 = ctx.r3.u64 | 65534;
	// stw r6,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r6.u32);
	// addi r5,r11,29912
	ctx.r5.s64 = ctx.r11.s64 + 29912;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// ori r16,r9,65535
	ctx.r16.u64 = ctx.r9.u64 | 65535;
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// addi r4,r11,29900
	ctx.r4.s64 = ctx.r11.s64 + 29900;
	// lwz r11,4740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4740);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_825FEA7C:
	// lwz r10,4764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4764);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825fea94
	if (ctx.cr6.eq) goto loc_825FEA94;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825fee18
	if (!ctx.cr6.lt) goto loc_825FEE18;
loc_825FEA94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825feac8
	if (ctx.cr6.eq) goto loc_825FEAC8;
	// lbz r11,1(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r18,r8,16
	ctx.r18.u64 = ctx.r8.u32 & 0xFFFF;
loc_825FEAC8:
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// cmplwi cr6,r11,153
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 153, ctx.xer);
	// bgt cr6,0x82603144
	if (ctx.cr6.gt) goto loc_82603144;
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// addi r12,r12,-5396
	ctx.r12.s64 = ctx.r12.s64 + -5396;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_825FEE50;
	case 1:
		goto loc_825FEE6C;
	case 2:
		goto loc_825FEE84;
	case 3:
		goto loc_825FEE9C;
	case 4:
		goto loc_825FEE04;
	case 5:
		goto loc_825FEE04;
	case 6:
		goto loc_825FF320;
	case 7:
		goto loc_825FF49C;
	case 8:
		goto loc_825FF618;
	case 9:
		goto loc_825FF6F8;
	case 10:
		goto loc_825FF7F4;
	case 11:
		goto loc_825FF8F8;
	case 12:
		goto loc_825FF9E4;
	case 13:
		goto loc_825FFAE0;
	case 14:
		goto loc_825FFBDC;
	case 15:
		goto loc_825FFC70;
	case 16:
		goto loc_825FFDB8;
	case 17:
		goto loc_82600034;
	case 18:
		goto loc_82603144;
	case 19:
		goto loc_825FF2E4;
	case 20:
		goto loc_826003B0;
	case 21:
		goto loc_82603144;
	case 22:
		goto loc_82603144;
	case 23:
		goto loc_82603144;
	case 24:
		goto loc_826005EC;
	case 25:
		goto loc_82600720;
	case 26:
		goto loc_82603144;
	case 27:
		goto loc_82603144;
	case 28:
		goto loc_82603144;
	case 29:
		goto loc_825FFE70;
	case 30:
		goto loc_82603144;
	case 31:
		goto loc_82603144;
	case 32:
		goto loc_82603144;
	case 33:
		goto loc_82603144;
	case 34:
		goto loc_825FF2E4;
	case 35:
		goto loc_82603144;
	case 36:
		goto loc_82603144;
	case 37:
		goto loc_8260023C;
	case 38:
		goto loc_82603144;
	case 39:
		goto loc_82603144;
	case 40:
		goto loc_82603144;
	case 41:
		goto loc_82603144;
	case 42:
		goto loc_82603144;
	case 43:
		goto loc_82603144;
	case 44:
		goto loc_826007F8;
	case 45:
		goto loc_825FFDB8;
	case 46:
		goto loc_82600430;
	case 47:
		goto loc_826004D4;
	case 48:
		goto loc_826007C0;
	case 49:
		goto loc_82600034;
	case 50:
		goto loc_82600430;
	case 51:
		goto loc_826004D4;
	case 52:
		goto loc_82603144;
	case 53:
		goto loc_82603144;
	case 54:
		goto loc_82602D50;
	case 55:
		goto loc_82603144;
	case 56:
		goto loc_826013C8;
	case 57:
		goto loc_82602B88;
	case 58:
		goto loc_82602D44;
	case 59:
		goto loc_82601D30;
	case 60:
		goto loc_82600BA8;
	case 61:
		goto loc_82601468;
	case 62:
		goto loc_82602E98;
	case 63:
		goto loc_82600E04;
	case 64:
		goto loc_826014D8;
	case 65:
		goto loc_82603144;
	case 66:
		goto loc_82603144;
	case 67:
		goto loc_826015F8;
	case 68:
		goto loc_82601844;
	case 69:
		goto loc_82601A28;
	case 70:
		goto loc_82603144;
	case 71:
		goto loc_82603144;
	case 72:
		goto loc_8260245C;
	case 73:
		goto loc_82602490;
	case 74:
		goto loc_826008C0;
	case 75:
		goto loc_82600F9C;
	case 76:
		goto loc_82602344;
	case 77:
		goto loc_826023D0;
	case 78:
		goto loc_826010C4;
	case 79:
		goto loc_82603144;
	case 80:
		goto loc_82603144;
	case 81:
		goto loc_82603144;
	case 82:
		goto loc_82603144;
	case 83:
		goto loc_82603144;
	case 84:
		goto loc_82603144;
	case 85:
		goto loc_82603144;
	case 86:
		goto loc_82603144;
	case 87:
		goto loc_82603144;
	case 88:
		goto loc_82603144;
	case 89:
		goto loc_82603144;
	case 90:
		goto loc_82603144;
	case 91:
		goto loc_82603144;
	case 92:
		goto loc_82601E34;
	case 93:
		goto loc_82601FE4;
	case 94:
		goto loc_8260226C;
	case 95:
		goto loc_82601F0C;
	case 96:
		goto loc_826020BC;
	case 97:
		goto loc_82602194;
	case 98:
		goto loc_826024EC;
	case 99:
		goto loc_82602604;
	case 100:
		goto loc_82603144;
	case 101:
		goto loc_82603144;
	case 102:
		goto loc_82603144;
	case 103:
		goto loc_82603144;
	case 104:
		goto loc_82603144;
	case 105:
		goto loc_82603144;
	case 106:
		goto loc_82603144;
	case 107:
		goto loc_82603144;
	case 108:
		goto loc_82603144;
	case 109:
		goto loc_82603144;
	case 110:
		goto loc_82603144;
	case 111:
		goto loc_82603144;
	case 112:
		goto loc_82603144;
	case 113:
		goto loc_82603144;
	case 114:
		goto loc_82603144;
	case 115:
		goto loc_82603144;
	case 116:
		goto loc_82603144;
	case 117:
		goto loc_82603144;
	case 118:
		goto loc_82603144;
	case 119:
		goto loc_82603144;
	case 120:
		goto loc_82603144;
	case 121:
		goto loc_82603144;
	case 122:
		goto loc_82603144;
	case 123:
		goto loc_82603144;
	case 124:
		goto loc_82603144;
	case 125:
		goto loc_825FED54;
	case 126:
		goto loc_82603144;
	case 127:
		goto loc_825FED84;
	case 128:
		goto loc_82603144;
	case 129:
		goto loc_82603144;
	case 130:
		goto loc_82603144;
	case 131:
		goto loc_826027EC;
	case 132:
		goto loc_82601344;
	case 133:
		goto loc_82603144;
	case 134:
		goto loc_82603144;
	case 135:
		goto loc_82603144;
	case 136:
		goto loc_82603144;
	case 137:
		goto loc_82603144;
	case 138:
		goto loc_82602844;
	case 139:
		goto loc_82603144;
	case 140:
		goto loc_82603144;
	case 141:
		goto loc_82603144;
	case 142:
		goto loc_82603144;
	case 143:
		goto loc_82603144;
	case 144:
		goto loc_82603144;
	case 145:
		goto loc_82603144;
	case 146:
		goto loc_825FEEB4;
	case 147:
		goto loc_82603144;
	case 148:
		goto loc_82603144;
	case 149:
		goto loc_826005C4;
	case 150:
		goto loc_82603018;
	case 151:
		goto loc_82602A68;
	case 152:
		goto loc_82603144;
	case 153:
		goto loc_82600568;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-4528(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4528);
	// lwz r18,-4500(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4500);
	// lwz r18,-4476(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4476);
	// lwz r18,-4452(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4452);
	// lwz r18,-4604(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4604);
	// lwz r18,-4604(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4604);
	// lwz r18,-3296(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3296);
	// lwz r18,-2916(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2916);
	// lwz r18,-2536(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2536);
	// lwz r18,-2312(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2312);
	// lwz r18,-2060(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2060);
	// lwz r18,-1800(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1800);
	// lwz r18,-1564(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1564);
	// lwz r18,-1312(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1312);
	// lwz r18,-1060(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1060);
	// lwz r18,-912(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -912);
	// lwz r18,-584(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -584);
	// lwz r19,52(0)
	ctx.r19.u64 = PPC_LOAD_U32(52);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r18,-3356(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3356);
	// lwz r19,944(0)
	ctx.r19.u64 = PPC_LOAD_U32(944);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,1516(0)
	ctx.r19.u64 = PPC_LOAD_U32(1516);
	// lwz r19,1824(0)
	ctx.r19.u64 = PPC_LOAD_U32(1824);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r18,-400(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -400);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r18,-3356(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3356);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,572(0)
	ctx.r19.u64 = PPC_LOAD_U32(572);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,2040(0)
	ctx.r19.u64 = PPC_LOAD_U32(2040);
	// lwz r18,-584(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -584);
	// lwz r19,1072(0)
	ctx.r19.u64 = PPC_LOAD_U32(1072);
	// lwz r19,1236(0)
	ctx.r19.u64 = PPC_LOAD_U32(1236);
	// lwz r19,1984(0)
	ctx.r19.u64 = PPC_LOAD_U32(1984);
	// lwz r19,52(0)
	ctx.r19.u64 = PPC_LOAD_U32(52);
	// lwz r19,1072(0)
	ctx.r19.u64 = PPC_LOAD_U32(1072);
	// lwz r19,1236(0)
	ctx.r19.u64 = PPC_LOAD_U32(1236);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,11600(0)
	ctx.r19.u64 = PPC_LOAD_U32(11600);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,5064(0)
	ctx.r19.u64 = PPC_LOAD_U32(5064);
	// lwz r19,11144(0)
	ctx.r19.u64 = PPC_LOAD_U32(11144);
	// lwz r19,11588(0)
	ctx.r19.u64 = PPC_LOAD_U32(11588);
	// lwz r19,7472(0)
	ctx.r19.u64 = PPC_LOAD_U32(7472);
	// lwz r19,2984(0)
	ctx.r19.u64 = PPC_LOAD_U32(2984);
	// lwz r19,5224(0)
	ctx.r19.u64 = PPC_LOAD_U32(5224);
	// lwz r19,11928(0)
	ctx.r19.u64 = PPC_LOAD_U32(11928);
	// lwz r19,3588(0)
	ctx.r19.u64 = PPC_LOAD_U32(3588);
	// lwz r19,5336(0)
	ctx.r19.u64 = PPC_LOAD_U32(5336);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,5624(0)
	ctx.r19.u64 = PPC_LOAD_U32(5624);
	// lwz r19,6212(0)
	ctx.r19.u64 = PPC_LOAD_U32(6212);
	// lwz r19,6696(0)
	ctx.r19.u64 = PPC_LOAD_U32(6696);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,9308(0)
	ctx.r19.u64 = PPC_LOAD_U32(9308);
	// lwz r19,9360(0)
	ctx.r19.u64 = PPC_LOAD_U32(9360);
	// lwz r19,2240(0)
	ctx.r19.u64 = PPC_LOAD_U32(2240);
	// lwz r19,3996(0)
	ctx.r19.u64 = PPC_LOAD_U32(3996);
	// lwz r19,9028(0)
	ctx.r19.u64 = PPC_LOAD_U32(9028);
	// lwz r19,9168(0)
	ctx.r19.u64 = PPC_LOAD_U32(9168);
	// lwz r19,4292(0)
	ctx.r19.u64 = PPC_LOAD_U32(4292);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,7732(0)
	ctx.r19.u64 = PPC_LOAD_U32(7732);
	// lwz r19,8164(0)
	ctx.r19.u64 = PPC_LOAD_U32(8164);
	// lwz r19,8812(0)
	ctx.r19.u64 = PPC_LOAD_U32(8812);
	// lwz r19,7948(0)
	ctx.r19.u64 = PPC_LOAD_U32(7948);
	// lwz r19,8380(0)
	ctx.r19.u64 = PPC_LOAD_U32(8380);
	// lwz r19,8596(0)
	ctx.r19.u64 = PPC_LOAD_U32(8596);
	// lwz r19,9452(0)
	ctx.r19.u64 = PPC_LOAD_U32(9452);
	// lwz r19,9732(0)
	ctx.r19.u64 = PPC_LOAD_U32(9732);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r18,-4780(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4780);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r18,-4732(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4732);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,10220(0)
	ctx.r19.u64 = PPC_LOAD_U32(10220);
	// lwz r19,4932(0)
	ctx.r19.u64 = PPC_LOAD_U32(4932);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,10308(0)
	ctx.r19.u64 = PPC_LOAD_U32(10308);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r18,-4428(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4428);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,1476(0)
	ctx.r19.u64 = PPC_LOAD_U32(1476);
	// lwz r19,12312(0)
	ctx.r19.u64 = PPC_LOAD_U32(12312);
	// lwz r19,10856(0)
	ctx.r19.u64 = PPC_LOAD_U32(10856);
	// lwz r19,12612(0)
	ctx.r19.u64 = PPC_LOAD_U32(12612);
	// lwz r19,1384(0)
	ctx.r19.u64 = PPC_LOAD_U32(1384);
loc_825FED54:
	// lbz r11,1(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825FED80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_825FED84:
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x823dd800
	ctx.lr = 0x825FED94;
	sub_823DD800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825fee40
	if (!ctx.cr6.eq) goto loc_825FEE40;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r11,20104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fee28
	if (ctx.cr6.eq) goto loc_825FEE28;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r22,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r22.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
loc_825FEDBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825fedbc
	if (!ctx.cr6.eq) goto loc_825FEDBC;
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x825ef9a8
	ctx.lr = 0x825FEDE8;
	sub_825EF9A8(ctx, base);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r4,r31,448
	ctx.r4.s64 = ctx.r31.s64 + 448;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,20104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825FEDFC:
	// bctrl 
	ctx.lr = 0x825FEE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FEE00:
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_825FEE04:
	// clrlwi r11,r18,16
	ctx.r11.u64 = ctx.r18.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825fea7c
	if (!ctx.cr6.eq) goto loc_825FEA7C;
loc_825FEE18:
	// addi r1,r31,4720
	ctx.r1.s64 = ctx.r31.s64 + 4720;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823dba24
	ctx.lr = 0x825FEE24;
	__restfpr_28(ctx, base);
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
loc_825FEE28:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x825FEE3C;
	sub_82130000(ctx, base);
	// b 0x825fee00
	goto loc_825FEE00;
loc_825FEE40:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82130000
	ctx.lr = 0x825FEE4C;
	sub_82130000(ctx, base);
	// b 0x825fee00
	goto loc_825FEE00;
loc_825FEE50:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FEE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_825FEE6C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FEE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_825FEE84:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FEE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_825FEE9C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FEEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_825FEEB4:
	// clrlwi r10,r18,16
	ctx.r10.u64 = ctx.r18.u32 & 0xFFFF;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// add r9,r10,r16
	ctx.r9.u64 = ctx.r10.u64 + ctx.r16.u64;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// clrlwi r18,r9,16
	ctx.r18.u64 = ctx.r9.u32 & 0xFFFF;
	// bgt cr6,0x825ff2d4
	if (ctx.cr6.gt) goto loc_825FF2D4;
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// addi r12,r12,-4376
	ctx.r12.s64 = ctx.r12.s64 + -4376;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_825FEF10;
	case 1:
		goto loc_825FEF80;
	case 2:
		goto loc_825FEFE0;
	case 3:
		goto loc_825FF00C;
	case 4:
		goto loc_825FF050;
	case 5:
		goto loc_825FF0A4;
	case 6:
		goto loc_825FF0F8;
	case 7:
		goto loc_825FF1D0;
	case 8:
		goto loc_825FF234;
	case 9:
		goto loc_825FF27C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-4336(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4336);
	// lwz r18,-4224(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4224);
	// lwz r18,-4128(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4128);
	// lwz r18,-4084(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4084);
	// lwz r18,-4016(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4016);
	// lwz r18,-3932(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3932);
	// lwz r18,-3848(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3848);
	// lwz r18,-3632(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3632);
	// lwz r18,-3532(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3532);
	// lwz r18,-3460(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3460);
loc_825FEF10:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stwx r21,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r21.u32);
	// bl 0x821c9790
	ctx.lr = 0x825FEF38;
	sub_821C9790(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r19,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r19.u32);
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fef68
	if (ctx.cr6.eq) goto loc_825FEF68;
loc_825FEF4C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// clrlwi r11,r18,16
	ctx.r11.u64 = ctx.r18.u32 & 0xFFFF;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// clrlwi r18,r10,16
	ctx.r18.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825fef4c
	if (!ctx.cr6.eq) goto loc_825FEF4C;
loc_825FEF68:
	// clrlwi r11,r18,16
	ctx.r11.u64 = ctx.r18.u32 & 0xFFFF;
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// clrlwi r18,r10,16
	ctx.r18.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x825ff2d4
	goto loc_825FF2D4;
loc_825FEF80:
	// lbz r8,2(r21)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r21.u32 + 2);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,1(r21)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// clrlwi r7,r18,16
	ctx.r7.u64 = ctx.r18.u32 & 0xFFFF;
	// lbz r9,3(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 3);
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// stb r8,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r8.u8);
	// stb r5,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r5.u8);
	// stb r9,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r9.u8);
	// addis r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 65536;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r4,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r4.u8);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// lwz r6,928(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// stwx r6,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r6.u32);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// b 0x825ff2c8
	goto loc_825FF2C8;
loc_825FEFE0:
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825ff2cc
	goto loc_825FF2CC;
loc_825FF00C:
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r5,236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + ctx.r29.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// bl 0x82130000
	ctx.lr = 0x825FF04C;
	sub_82130000(ctx, base);
	// b 0x825ff2d4
	goto loc_825FF2D4;
loc_825FF050:
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,4772(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4772);
	// clrlwi r7,r18,16
	ctx.r7.u64 = ctx.r18.u32 & 0xFFFF;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r7,r16
	ctx.r11.u64 = ctx.r7.u64 + ctx.r16.u64;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// clrlwi r18,r11,16
	ctx.r18.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// b 0x825ff2cc
	goto loc_825FF2CC;
loc_825FF0A4:
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ff0bc
	if (!ctx.cr6.eq) goto loc_825FF0BC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_825FF0BC:
	// stb r10,976(r31)
	PPC_STORE_U8(ctx.r31.u32 + 976, ctx.r10.u8);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,980(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// clrlwi r8,r18,16
	ctx.r8.u64 = ctx.r18.u32 & 0xFFFF;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r6,976(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r16
	ctx.r5.u64 = ctx.r8.u64 + ctx.r16.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// clrlwi r18,r5,16
	ctx.r18.u64 = ctx.r5.u32 & 0xFFFF;
	// stwx r6,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r6.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x825ff2cc
	goto loc_825FF2CC;
loc_825FF0F8:
	// lbz r11,1(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// lbz r10,7(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 7);
	// lbz r9,5(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 5);
	// lbz r8,4(r21)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// lbz r7,3(r21)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r21.u32 + 3);
	// lbz r6,2(r21)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r21.u32 + 2);
	// lbz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// lbz r4,6(r21)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r21.u32 + 6);
	// stb r11,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r11.u8);
	// stb r10,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r10.u8);
	// stb r9,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r9.u8);
	// stb r8,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r8.u8);
	// stb r7,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r7.u8);
	// stb r6,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r6.u8);
	// stb r5,107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 107, ctx.r5.u8);
	// stb r4,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r4.u8);
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x825ff190
	if (ctx.cr6.eq) goto loc_825FF190;
	// rldicl r9,r11,12,52
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFF;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r8,r30,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rldicl r6,r11,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// add r4,r30,r8
	ctx.r4.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r10,r6,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// rldicl r3,r11,35,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 35) & 0x7FFFFFFFF;
	// rlwinm r9,r5,23,0,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 23) & 0xFF800000;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r6,r3,9
	ctx.r6.u64 = ctx.r3.u32 & 0x7FFFFF;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// or r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 | ctx.r6.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stwx r4,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r4.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825ff1b8
	goto loc_825FF1B8;
loc_825FF190:
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
loc_825FF1B8:
	// clrlwi r11,r18,16
	ctx.r11.u64 = ctx.r18.u32 & 0xFFFF;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// clrlwi r18,r10,16
	ctx.r18.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x825ff2cc
	goto loc_825FF2CC;
loc_825FF1D0:
	// lbz r11,3(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 3);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,2(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 2);
	// clrlwi r8,r18,16
	ctx.r8.u64 = ctx.r18.u32 & 0xFFFF;
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,1(r21)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// add r5,r30,r10
	ctx.r5.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// or r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// addis r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 65536;
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// stwx r4,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r4.u32);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// clrlwi r18,r6,16
	ctx.r18.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// b 0x825ff2cc
	goto loc_825FF2CC;
loc_825FF234:
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// clrlwi r8,r18,16
	ctx.r8.u64 = ctx.r18.u32 & 0xFFFF;
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r16
	ctx.r4.u64 = ctx.r8.u64 + ctx.r16.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// clrlwi r18,r4,16
	ctx.r18.u64 = ctx.r4.u32 & 0xFFFF;
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x825ff2cc
	goto loc_825FF2CC;
loc_825FF27C:
	// lbz r10,1(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// clrlwi r8,r18,16
	ctx.r8.u64 = ctx.r18.u32 & 0xFFFF;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// or r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r15
	ctx.r9.u64 = ctx.r8.u64 + ctx.r15.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// lwzx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r7,r10,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_825FF2C8:
	// clrlwi r18,r9,16
	ctx.r18.u64 = ctx.r9.u32 & 0xFFFF;
loc_825FF2CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
loc_825FF2D4:
	// clrlwi r11,r18,16
	ctx.r11.u64 = ctx.r18.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825feeb4
	if (!ctx.cr6.eq) goto loc_825FEEB4;
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF2E4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ff314
	if (!ctx.cr6.eq) goto loc_825FF314;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF2F4;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FF314:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF320:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ff350
	if (!ctx.cr6.eq) goto loc_825FF350;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF330;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FF350:
	// addic. r27,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r27.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// stw r8,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r8.u32);
	// bne 0x825ff3a4
	if (!ctx.cr0.eq) goto loc_825FF3A4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF388;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_825FF3A4:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// stw r8,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r8.u32);
	// stw r7,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
	// bl 0x825efa80
	ctx.lr = 0x825FF3DC;
	sub_825EFA80(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825ff448
	if (ctx.cr6.eq) goto loc_825FF448;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x825efa80
	ctx.lr = 0x825FF3F0;
	sub_825EFA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ff448
	if (ctx.cr6.eq) goto loc_825FF448;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x825ef808
	ctx.lr = 0x825FF404;
	sub_825EF808(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x825ef808
	ctx.lr = 0x825FF410;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// add r7,r30,r3
	ctx.r7.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF448:
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF450;
	sub_825EF8C8(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF45C;
	sub_825EF8C8(ctx, base);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,564(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r7,560(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF49C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ff4cc
	if (!ctx.cr6.eq) goto loc_825FF4CC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF4AC;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FF4CC:
	// addic. r27,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r27.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// stw r9,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r9.u32);
	// stw r8,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r8.u32);
	// bne 0x825ff520
	if (!ctx.cr0.eq) goto loc_825FF520;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF504;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_825FF520:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// stw r8,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r8.u32);
	// stw r7,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r7.u32);
	// bl 0x825efa80
	ctx.lr = 0x825FF558;
	sub_825EFA80(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825ff5c4
	if (ctx.cr6.eq) goto loc_825FF5C4;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x825efa80
	ctx.lr = 0x825FF56C;
	sub_825EFA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ff5c4
	if (ctx.cr6.eq) goto loc_825FF5C4;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x825ef808
	ctx.lr = 0x825FF580;
	sub_825EF808(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x825ef808
	ctx.lr = 0x825FF58C;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// subf r7,r3,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r3.s64;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF5C4:
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF5CC;
	sub_825EF8C8(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF5D8;
	sub_825EF8C8(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,884(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r7,880(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF618:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ff648
	if (!ctx.cr6.eq) goto loc_825FF648;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF628;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FF648:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF664;
	sub_825EF8C8(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ff69c
	if (!ctx.cr6.eq) goto loc_825FF69C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF67C;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_825FF69C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF6B8;
	sub_825EF8C8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,592(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF6F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ff728
	if (!ctx.cr6.eq) goto loc_825FF728;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF708;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FF728:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF744;
	sub_825EF8C8(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ff77c
	if (!ctx.cr6.eq) goto loc_825FF77C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF75C;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_825FF77C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF798;
	sub_825EF8C8(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x825ff7e0
	if (ctx.cr6.eq) goto loc_825FF7E0;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// fdivs f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
	// lwz r8,852(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF7E0:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x825FF7F0;
	sub_82130000(ctx, base);
	// b 0x825fee00
	goto loc_825FEE00;
loc_825FF7F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ff824
	if (!ctx.cr6.eq) goto loc_825FF824;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF804;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FF824:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF840;
	sub_825EF8C8(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ff878
	if (!ctx.cr6.eq) goto loc_825FF878;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF858;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_825FF878:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF894;
	sub_825EF8C8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// blt cr6,0x825ff8ac
	if (ctx.cr6.lt) goto loc_825FF8AC;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_825FF8AC:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r9,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r9.u8);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r7,624(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,252(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x82130000
	ctx.lr = 0x825FF8F4;
	sub_82130000(ctx, base);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF8F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ff928
	if (!ctx.cr6.eq) goto loc_825FF928;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF908;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FF928:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF944;
	sub_825EF8C8(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ff97c
	if (!ctx.cr6.eq) goto loc_825FF97C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF95C;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_825FF97C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x825FF998;
	sub_825EF8C8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// blt cr6,0x825ff9a8
	if (ctx.cr6.lt) goto loc_825FF9A8;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_825FF9A8:
	// stb r9,912(r31)
	PPC_STORE_U8(ctx.r31.u32 + 912, ctx.r9.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,916(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r7,912(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FF9E4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ffa14
	if (!ctx.cr6.eq) goto loc_825FFA14;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FF9F4;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FFA14:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef780
	ctx.lr = 0x825FFA30;
	sub_825EF780(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ffa68
	if (!ctx.cr6.eq) goto loc_825FFA68;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFA48;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_825FFA68:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef780
	ctx.lr = 0x825FFA84;
	sub_825EF780(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ffaa0
	if (ctx.cr6.eq) goto loc_825FFAA0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne cr6,0x825ffaa4
	if (!ctx.cr6.eq) goto loc_825FFAA4;
loc_825FFAA0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825FFAA4:
	// stb r11,656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 656, ctx.r11.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,660(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,656(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FFAE0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ffb10
	if (!ctx.cr6.eq) goto loc_825FFB10;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFAF0;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FFB10:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef780
	ctx.lr = 0x825FFB2C;
	sub_825EF780(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ffb64
	if (!ctx.cr6.eq) goto loc_825FFB64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFB44;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_825FFB64:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef780
	ctx.lr = 0x825FFB80;
	sub_825EF780(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ffb9c
	if (!ctx.cr6.eq) goto loc_825FFB9C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x825ffba0
	if (ctx.cr6.eq) goto loc_825FFBA0;
loc_825FFB9C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_825FFBA0:
	// stb r11,944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 944, ctx.r11.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,948(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,944(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FFBDC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ffc0c
	if (!ctx.cr6.eq) goto loc_825FFC0C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFBEC;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FFC0C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef780
	ctx.lr = 0x825FFC28;
	sub_825EF780(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r8,692(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r5,688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 688, ctx.r5.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// stwx r3,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FFC70:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ffca0
	if (!ctx.cr6.eq) goto loc_825FFCA0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFC80;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FFCA0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x825ffccc
	if (!ctx.cr6.eq) goto loc_825FFCCC;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825ffce0
	goto loc_825FFCE0;
loc_825FFCCC:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x825FFCD8;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_825FFCE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ffd10
	if (!ctx.cr6.eq) goto loc_825FFD10;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFCF0;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_825FFD10:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x825ffd3c
	if (!ctx.cr6.eq) goto loc_825FFD3C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825ffd4c
	goto loc_825FFD4C;
loc_825FFD3C:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1232
	ctx.r4.s64 = ctx.r31.s64 + 1232;
	// bl 0x825efb40
	ctx.lr = 0x825FFD48;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_825FFD4C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_825FFD54:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x825ffd78
	if (ctx.cr6.eq) goto loc_825FFD78;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825ffd54
	if (ctx.cr6.eq) goto loc_825FFD54;
loc_825FFD78:
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r7,900(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r4,896(r31)
	PPC_STORE_U8(ctx.r31.u32 + 896, ctx.r4.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// lwz r8,896(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// stwx r8,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FFDB8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ffde8
	if (!ctx.cr6.eq) goto loc_825FFDE8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFDC8;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FFDE8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x825ffe14
	if (!ctx.cr6.eq) goto loc_825FFE14;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825ffe24
	goto loc_825FFE24;
loc_825FFE14:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x825FFE20;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_825FFE24:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_825FFE28:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ffe28
	if (!ctx.cr6.eq) goto loc_825FFE28;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// add r4,r8,r29
	ctx.r4.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stwx r5,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_825FFE70:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825ffea0
	if (!ctx.cr6.eq) goto loc_825FFEA0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFE80;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_825FFEA0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x825ffecc
	if (!ctx.cr6.eq) goto loc_825FFECC;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825ffee0
	goto loc_825FFEE0;
loc_825FFECC:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x825FFED8;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_825FFEE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825fff10
	if (!ctx.cr6.eq) goto loc_825FFF10;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x825FFEF0;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_825FFF10:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825fff3c
	if (!ctx.cr6.eq) goto loc_825FFF3C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825fff48
	goto loc_825FFF48;
loc_825FFF3C:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1232
	ctx.r4.s64 = ctx.r31.s64 + 1232;
	// bl 0x825efb40
	ctx.lr = 0x825FFF48;
	sub_825EFB40(ctx, base);
loc_825FFF48:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825FFF4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825fff4c
	if (!ctx.cr6.eq) goto loc_825FFF4C;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_825FFF6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825fff6c
	if (!ctx.cr6.eq) goto loc_825FFF6C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x825FFF9C;
	sub_823DBFF4(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
loc_825FFFB0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x825fffb0
	if (!ctx.cr6.eq) goto loc_825FFFB0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825FFFCC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825fffcc
	if (!ctx.cr6.eq) goto loc_825FFFCC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_825FFFE0:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x825fffe0
	if (!ctx.cr6.eq) goto loc_825FFFE0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x825eff20
	ctx.lr = 0x82600000;
	sub_825EFF20(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600034:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600064
	if (!ctx.cr6.eq) goto loc_82600064;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600044;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600064:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82600080;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826000b8
	if (!ctx.cr6.eq) goto loc_826000B8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600098;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_826000B8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x826000D4;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8260010c
	if (!ctx.cr6.eq) goto loc_8260010C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826000EC;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_8260010C:
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82600138
	if (!ctx.cr6.eq) goto loc_82600138;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82600148
	goto loc_82600148;
loc_82600138:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x82600144;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_82600148:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8260014C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8260014c
	if (!ctx.cr6.eq) goto loc_8260014C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blt cr6,0x826001f4
	if (ctx.cr6.lt) goto loc_826001F4;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826001f4
	if (!ctx.cr6.lt) goto loc_826001F4;
	// add r11,r27,r26
	ctx.r11.u64 = ctx.r27.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82600188
	if (!ctx.cr6.gt) goto loc_82600188;
	// subf r26,r27,r7
	ctx.r26.s64 = ctx.r7.s64 - ctx.r27.s64;
loc_82600188:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x82600198;
	sub_823DBFF4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823da950
	ctx.lr = 0x826001B4;
	sub_823DA950(ctx, base);
	// stbx r22,r30,r26
	PPC_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r22.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825eff20
	ctx.lr = 0x826001C0;
	sub_825EFF20(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826001F4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130000
	ctx.lr = 0x82600208;
	sub_82130000(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// stwx r3,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x82600230;
	sub_821C9790(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// stw r19,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r19.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_8260023C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8260026c
	if (!ctx.cr6.eq) goto loc_8260026C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x8260024C;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_8260026C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82600298
	if (!ctx.cr6.eq) goto loc_82600298;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826002ac
	goto loc_826002AC;
loc_82600298:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x826002A4;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_826002AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826002dc
	if (!ctx.cr6.eq) goto loc_826002DC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826002BC;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_826002DC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82600308
	if (!ctx.cr6.eq) goto loc_82600308;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82600318
	goto loc_82600318;
loc_82600308:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1232
	ctx.r4.s64 = ctx.r31.s64 + 1232;
	// bl 0x825efb40
	ctx.lr = 0x82600314;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_82600318:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82600320:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x82600344
	if (ctx.cr6.eq) goto loc_82600344;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82600320
	if (ctx.cr6.eq) goto loc_82600320;
loc_82600344:
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r7,724(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stb r8,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r8.u8);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r8,216(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r6,720(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// stwx r6,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r6.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82600394
	if (!ctx.cr6.eq) goto loc_82600394;
	// lwz r8,392(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
loc_82600394:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82130000
	ctx.lr = 0x826003AC;
	sub_82130000(ctx, base);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826003B0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826003e0
	if (!ctx.cr6.eq) goto loc_826003E0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826003C0;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_826003E0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x826003FC;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600430:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600460
	if (!ctx.cr6.eq) goto loc_82600460;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600440;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600460:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8260048c
	if (!ctx.cr6.eq) goto loc_8260048C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8260049c
	goto loc_8260049C;
loc_8260048C:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x82600498;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_8260049C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r6,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r6.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826004D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600504
	if (!ctx.cr6.eq) goto loc_82600504;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826004E4;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600504:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82600520;
	sub_825EF808(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r22,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r22.u8);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stb r10,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r10.u8);
	// bl 0x825eff20
	ctx.lr = 0x82600534;
	sub_825EFF20(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600568:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600598
	if (!ctx.cr6.eq) goto loc_82600598;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600578;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600598:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef780
	ctx.lr = 0x826005B4;
	sub_825EF780(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fee00
	if (ctx.cr6.eq) goto loc_825FEE00;
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_826005C4:
	// lbz r11,1(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// clrlwi r10,r18,16
	ctx.r10.u64 = ctx.r18.u32 & 0xFFFF;
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// or r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 | ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x825fee04
	goto loc_825FEE04;
loc_826005EC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8260061c
	if (!ctx.cr6.eq) goto loc_8260061C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826005FC;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_8260061C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r22,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r22.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,36(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// stw r8,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r8.u32);
	// stw r7,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r7.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82600674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x826006e8
	if (!ctx.cr6.eq) goto loc_826006E8;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8260069c
	if (ctx.cr6.eq) goto loc_8260069C;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x825efb40
	ctx.lr = 0x8260069C;
	sub_825EFB40(ctx, base);
loc_8260069C:
	// addi r6,r31,1088
	ctx.r6.s64 = ctx.r31.s64 + 1088;
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130000
	ctx.lr = 0x826006B0;
	sub_82130000(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// stw r20,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r20.u32);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// stw r22,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r22.u32);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826006D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r31,1088
	ctx.r6.s64 = ctx.r31.s64 + 1088;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x826006E8;
	sub_82130000(ctx, base);
loc_826006E8:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r7,136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600720:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600750
	if (!ctx.cr6.eq) goto loc_82600750;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600730;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600750:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x8260078c
	if (!ctx.cr0.eq) goto loc_8260078C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600770;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_8260078C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,56(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826007BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_826007C0:
	// bl 0x821c9788
	ctx.lr = 0x826007C4;
	sub_821C9788(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826007F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600828
	if (!ctx.cr6.eq) goto loc_82600828;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600808;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600828:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82600844;
	sub_825EF808(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// ori r6,r9,17405
	ctx.r6.u64 = ctx.r9.u64 | 17405;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r9,-18324(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	// twllei r3,0
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// mullw r5,r9,r6
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// addis r9,r5,39
	ctx.r9.s64 = ctx.r5.s64 + 2555904;
	// addi r9,r9,-24893
	ctx.r9.s64 = ctx.r9.s64 + -24893;
	// stw r9,-18324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18324, ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r11,-18324(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -18324);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// divw r5,r6,r3
	ctx.r5.s32 = ctx.r6.s32 / ctx.r3.s32;
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r5,r3
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	// andc r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// twlgei r6,-1
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826008C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826008f0
	if (!ctx.cr6.eq) goto loc_826008F0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826008D0;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_826008F0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r26,r11,r29
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r25,8(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r26,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r26.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r25,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r25.u32);
	// bne 0x82600944
	if (!ctx.cr0.eq) goto loc_82600944;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600928;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82600944:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r7,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// ble cr6,0x82600984
	if (!ctx.cr6.gt) goto loc_82600984;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82600984:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82600a60
	if (ctx.cr6.eq) goto loc_82600A60;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x826009a0
	if (!ctx.cr6.eq) goto loc_826009A0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x826009bc
	goto loc_826009BC;
loc_826009A0:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x825efb40
	ctx.lr = 0x826009B0;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
loc_826009BC:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_826009C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x826009e8
	if (ctx.cr6.eq) goto loc_826009E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826009c4
	if (ctx.cr6.eq) goto loc_826009C4;
loc_826009E8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82600a60
	if (!ctx.cr6.eq) goto loc_82600A60;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82600a00
	if (!ctx.cr6.eq) goto loc_82600A00;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x82600a14
	goto loc_82600A14;
loc_82600A00:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x825efb40
	ctx.lr = 0x82600A10;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_82600A14:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_82600A18:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82600a18
	if (!ctx.cr6.eq) goto loc_82600A18;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r6,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600A60:
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x82600acc
	if (ctx.cr6.eq) goto loc_82600ACC;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82600a84
	if (ctx.cr6.eq) goto loc_82600A84;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x825efb40
	ctx.lr = 0x82600A80;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_82600A84:
	// addi r6,r31,1088
	ctx.r6.s64 = ctx.r31.s64 + 1088;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x82600A98;
	sub_82130000(ctx, base);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600ACC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r22,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r22.u32);
	// addi r5,r31,336
	ctx.r5.s64 = ctx.r31.s64 + 336;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82600AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82600b38
	if (ctx.cr6.eq) goto loc_82600B38;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,340(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r7,344(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600B38:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82600b4c
	if (!ctx.cr6.eq) goto loc_82600B4C;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// b 0x82600b5c
	goto loc_82600B5C;
loc_82600B4C:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x825efb40
	ctx.lr = 0x82600B5C;
	sub_825EFB40(ctx, base);
loc_82600B5C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130000
	ctx.lr = 0x82600B70;
	sub_82130000(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600BA8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600bd8
	if (!ctx.cr6.eq) goto loc_82600BD8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600BB8;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600BD8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r25,r11,r29
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bne 0x82600c18
	if (!ctx.cr0.eq) goto loc_82600C18;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600BFC;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82600C18:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82600C34;
	sub_825EF808(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r31,1360
	ctx.r11.s64 = ctx.r31.s64 + 1360;
	// li r10,87
	ctx.r10.s64 = 87;
	// li r9,7
	ctx.r9.s64 = 7;
loc_82600C44:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82600c44
	if (!ctx.cr0.lt) goto loc_82600C44;
	// stw r22,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r22.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r9,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r9.u32);
	// ble cr6,0x82600ce0
	if (!ctx.cr6.gt) goto loc_82600CE0;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// addi r30,r31,1360
	ctx.r30.s64 = ctx.r31.s64 + 1360;
	// lwz r24,84(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82600C78:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82600ca4
	if (!ctx.cr6.eq) goto loc_82600CA4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600C88;
	sub_82130000(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r24,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r24.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_82600CA4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82600c78
	if (!ctx.cr0.eq) goto loc_82600C78;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
loc_82600CE0:
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82600CE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82600d0c
	if (ctx.cr6.eq) goto loc_82600D0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82600ce8
	if (ctx.cr6.eq) goto loc_82600CE8;
loc_82600D0C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82600d58
	if (!ctx.cr6.eq) goto loc_82600D58;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82130528
	ctx.lr = 0x82600D1C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82600d90
	if (ctx.cr6.eq) goto loc_82600D90;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// sth r22,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r22.u16);
	// sth r22,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r22.u16);
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// stb r22,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r22.u8);
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r22.u32);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r22,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r22.u32);
	// sth r22,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r22.u16);
	// sth r22,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r22.u16);
	// b 0x82600d94
	goto loc_82600D94;
loc_82600D58:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x82600D60;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82600d90
	if (ctx.cr6.eq) goto loc_82600D90;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r22,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r22.u16);
	// sth r22,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r22.u16);
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// stb r22,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r22.u8);
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r22.u32);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// b 0x82600d94
	goto loc_82600D94;
loc_82600D90:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82600D94:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r7,r31,960
	ctx.r7.s64 = ctx.r31.s64 + 960;
	// addi r6,r31,1360
	ctx.r6.s64 = ctx.r31.s64 + 1360;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,8088(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8088);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// lwz r11,8088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8088);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82600DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600E04:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600e34
	if (!ctx.cr6.eq) goto loc_82600E34;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600E14;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600E34:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82600E50;
	sub_825EF808(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x82600E5C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82600e8c
	if (ctx.cr6.eq) goto loc_82600E8C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r22,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r22.u16);
	// sth r22,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r22.u16);
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// stb r22,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r22.u8);
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r22.u32);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// b 0x82600e90
	goto loc_82600E90;
loc_82600E8C:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82600E90:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82600f68
	if (!ctx.cr6.gt) goto loc_82600F68;
	// lwz r24,84(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82600EA0:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82600ed0
	if (!ctx.cr6.eq) goto loc_82600ED0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600EB4;
	sub_82130000(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r24,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r24.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_82600ED0:
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// stw r8,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r8.u32);
	// bne 0x82600f24
	if (!ctx.cr0.eq) goto loc_82600F24;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600F08;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_82600F24:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x82202fb8
	ctx.lr = 0x82600F44;
	sub_82202FB8(ctx, base);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r5,r31,496
	ctx.r5.s64 = ctx.r31.s64 + 496;
	// addi r4,r31,1216
	ctx.r4.s64 = ctx.r31.s64 + 1216;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82600F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82600ea0
	if (!ctx.cr0.eq) goto loc_82600EA0;
loc_82600F68:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r25,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r25.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82600F9C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82600fcc
	if (!ctx.cr6.eq) goto loc_82600FCC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600FAC;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82600FCC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bne 0x8260100c
	if (!ctx.cr0.eq) goto loc_8260100C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82600FF0;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_8260100C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x82601048
	if (!ctx.cr0.eq) goto loc_82601048;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x8260102C;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82601048:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x826010a4
	if (ctx.cr6.eq) goto loc_826010A4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8260107c
	if (!ctx.cr6.eq) goto loc_8260107C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8260108c
	goto loc_8260108C;
loc_8260107C:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x82601088;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_8260108C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x826010A0;
	sub_82130000(ctx, base);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826010A4:
	// bl 0x825ef9f0
	ctx.lr = 0x826010A8;
	sub_825EF9F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826010C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_826010C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826010f4
	if (!ctx.cr6.eq) goto loc_826010F4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826010D4;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_826010F4:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82601120
	if (!ctx.cr6.eq) goto loc_82601120;
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82601134
	goto loc_82601134;
loc_82601120:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x8260112C;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82601134:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82601164
	if (!ctx.cr6.eq) goto loc_82601164;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601144;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82601164:
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r29
	ctx.r26.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x826011f4
	if (ctx.cr6.eq) goto loc_826011F4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82601198
	if (!ctx.cr6.eq) goto loc_82601198;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x826011ac
	goto loc_826011AC;
loc_82601198:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825efb40
	ctx.lr = 0x826011A8;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_826011AC:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x826011C0;
	sub_82130000(ctx, base);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826011F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82601220
	if (!ctx.cr6.eq) goto loc_82601220;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601204;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
loc_82601220:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x8260123C;
	sub_825EF808(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r31,2416
	ctx.r11.s64 = ctx.r31.s64 + 2416;
	// li r10,87
	ctx.r10.s64 = 87;
	// li r9,7
	ctx.r9.s64 = 7;
loc_8260124C:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x8260124c
	if (!ctx.cr0.lt) goto loc_8260124C;
	// stw r22,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r22.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// ble cr6,0x826012e8
	if (!ctx.cr6.gt) goto loc_826012E8;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// addi r30,r31,2416
	ctx.r30.s64 = ctx.r31.s64 + 2416;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8260127C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826012ac
	if (!ctx.cr6.eq) goto loc_826012AC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x8260128C;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_826012AC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8260127c
	if (!ctx.cr0.eq) goto loc_8260127C;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
loc_826012E8:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r7,r31,352
	ctx.r7.s64 = ctx.r31.s64 + 352;
	// addi r6,r31,2416
	ctx.r6.s64 = ctx.r31.s64 + 2416;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260130C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601344:
	// lbz r11,1(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// addi r27,r21,2
	ctx.r27.s64 = ctx.r21.s64 + 2;
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825fee04
	if (!ctx.cr6.gt) goto loc_825FEE04;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8260136C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x821c9790
	ctx.lr = 0x82601380;
	sub_821C9790(ctx, base);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
loc_8260138C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8260138c
	if (!ctx.cr6.eq) goto loc_8260138C;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x8260136c
	if (ctx.cr6.lt) goto loc_8260136C;
	// b 0x825fee00
	goto loc_825FEE00;
loc_826013C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826013f8
	if (!ctx.cr6.eq) goto loc_826013F8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826013D8;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_826013F8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x82601434
	if (!ctx.cr0.eq) goto loc_82601434;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601418;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82601434:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,56(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82601464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_82601468:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r22,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r22.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// bne cr6,0x826014a4
	if (!ctx.cr6.eq) goto loc_826014A4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601484;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_826014A4:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r5,r31,752
	ctx.r5.s64 = ctx.r31.s64 + 752;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,56(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826014D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_826014D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82601508
	if (!ctx.cr6.eq) goto loc_82601508;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826014E8;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82601508:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82601530
	if (!ctx.cr6.gt) goto loc_82601530;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82601530:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82601560
	if (ctx.cr6.eq) goto loc_82601560;
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x82601554;
	sub_821C9790(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// stw r19,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r19.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_82601560:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x826015d4
	if (ctx.cr6.eq) goto loc_826015D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x826015d4
	if (ctx.cr6.eq) goto loc_826015D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// bne cr6,0x8260159c
	if (!ctx.cr6.eq) goto loc_8260159C;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x82601590;
	sub_821C9790(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// stw r19,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r19.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_8260159C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826015bc
	if (!ctx.cr6.eq) goto loc_826015BC;
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x826015B0;
	sub_821C9790(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// stw r19,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r19.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_826015BC:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x826015C8;
	sub_821C9790(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// stw r19,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r19.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_826015D4:
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x826015EC;
	sub_821C9790(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// stw r19,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r19.u32);
	// b 0x825fee00
	goto loc_825FEE00;
loc_826015F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82601628
	if (!ctx.cr6.eq) goto loc_82601628;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601608;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82601628:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x82601664
	if (!ctx.cr0.eq) goto loc_82601664;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601648;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82601664:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// ble cr6,0x82601690
	if (!ctx.cr6.gt) goto loc_82601690;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82601690:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82601710
	if (!ctx.cr6.eq) goto loc_82601710;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// ble cr6,0x826016b0
	if (!ctx.cr6.gt) goto loc_826016B0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_826016B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82601710
	if (!ctx.cr6.eq) goto loc_82601710;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x826016C4;
	sub_825EF8C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825ef8c8
	ctx.lr = 0x826016D0;
	sub_825EF8C8(ctx, base);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r7,528(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601710:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82601720
	if (!ctx.cr6.eq) goto loc_82601720;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82601734
	goto loc_82601734;
loc_82601720:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825efb40
	ctx.lr = 0x82601730;
	sub_825EFB40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82601734:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82601748
	if (!ctx.cr6.eq) goto loc_82601748;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82601758
	goto loc_82601758;
loc_82601748:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1232
	ctx.r4.s64 = ctx.r31.s64 + 1232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825efb40
	ctx.lr = 0x82601758;
	sub_825EFB40(ctx, base);
loc_82601758:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8260175C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8260175c
	if (!ctx.cr6.eq) goto loc_8260175C;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8260177C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8260177c
	if (!ctx.cr6.eq) goto loc_8260177C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x826017AC;
	sub_823DBFF4(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
loc_826017C0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x826017c0
	if (!ctx.cr6.eq) goto loc_826017C0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826017DC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826017dc
	if (!ctx.cr6.eq) goto loc_826017DC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826017F0:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x826017f0
	if (!ctx.cr6.eq) goto loc_826017F0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x825eff20
	ctx.lr = 0x82601810;
	sub_825EFF20(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601844:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82601874
	if (!ctx.cr6.eq) goto loc_82601874;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601854;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82601874:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x826018b0
	if (!ctx.cr0.eq) goto loc_826018B0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601894;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_826018B0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r29
	ctx.r26.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// ble cr6,0x826018dc
	if (!ctx.cr6.gt) goto loc_826018DC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_826018DC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82601968
	if (!ctx.cr6.eq) goto loc_82601968;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// ble cr6,0x826018fc
	if (!ctx.cr6.gt) goto loc_826018FC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_826018FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82601968
	if (!ctx.cr6.eq) goto loc_82601968;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x82601910;
	sub_825EF8C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825ef8c8
	ctx.lr = 0x8260191C;
	sub_825EF8C8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// blt cr6,0x8260192c
	if (ctx.cr6.lt) goto loc_8260192C;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_8260192C:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r9,784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 784, ctx.r9.u8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,788(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r7,784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r7,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601968:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82601978
	if (!ctx.cr6.eq) goto loc_82601978;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82601990
	goto loc_82601990;
loc_82601978:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825efb40
	ctx.lr = 0x82601988;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82601990:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826019a4
	if (!ctx.cr6.eq) goto loc_826019A4;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x826019b8
	goto loc_826019B8;
loc_826019A4:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1232
	ctx.r4.s64 = ctx.r31.s64 + 1232;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825efb40
	ctx.lr = 0x826019B4;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_826019B8:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_826019C0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x826019e4
	if (ctx.cr6.eq) goto loc_826019E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826019c0
	if (ctx.cr6.eq) goto loc_826019C0;
loc_826019E4:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,868(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r3,864(r31)
	PPC_STORE_U8(ctx.r31.u32 + 864, ctx.r3.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r6,864(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stwx r6,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601A28:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82601a58
	if (!ctx.cr6.eq) goto loc_82601A58;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601A38;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82601A58:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bne 0x82601a98
	if (!ctx.cr0.eq) goto loc_82601A98;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601A7C;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82601A98:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// ble cr6,0x82601ac4
	if (!ctx.cr6.gt) goto loc_82601AC4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82601AC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82601c74
	if (!ctx.cr6.eq) goto loc_82601C74;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x82601ae4
	if (!ctx.cr6.gt) goto loc_82601AE4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82601AE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82601c74
	if (!ctx.cr6.eq) goto loc_82601C74;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x82601c14
	if (ctx.cr6.eq) goto loc_82601C14;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x82601c14
	if (ctx.cr6.eq) goto loc_82601C14;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82601bb8
	if (ctx.cr6.eq) goto loc_82601BB8;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82601bb8
	if (ctx.cr6.eq) goto loc_82601BB8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82601b58
	if (ctx.cr6.eq) goto loc_82601B58;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82601b58
	if (ctx.cr6.eq) goto loc_82601B58;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r5,284(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130000
	ctx.lr = 0x82601B30;
	sub_82130000(ctx, base);
	// stb r19,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r19.u8);
	// lwz r10,820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601B58:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ef780
	ctx.lr = 0x82601B60;
	sub_825EF780(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ef780
	ctx.lr = 0x82601B6C;
	sub_825EF780(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r8,548(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r4,544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 544, ctx.r4.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r7,544(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stwx r7,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r7.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601BB8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ef808
	ctx.lr = 0x82601BC0;
	sub_825EF808(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ef808
	ctx.lr = 0x82601BCC;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
	// lwz r8,580(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r5,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r5.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601C14:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x82601C1C;
	sub_825EF8C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825ef8c8
	ctx.lr = 0x82601C28;
	sub_825EF8C8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq cr6,0x82601c38
	if (ctx.cr6.eq) goto loc_82601C38;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82601C38:
	// stb r11,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r11.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,612(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,608(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601C74:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82601c84
	if (!ctx.cr6.eq) goto loc_82601C84;
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82601c9c
	goto loc_82601C9C;
loc_82601C84:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825efb40
	ctx.lr = 0x82601C94;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82601C9C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82601cb0
	if (!ctx.cr6.eq) goto loc_82601CB0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82601cc4
	goto loc_82601CC4;
loc_82601CB0:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1232
	ctx.r4.s64 = ctx.r31.s64 + 1232;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825efb40
	ctx.lr = 0x82601CC0;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_82601CC4:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82601CCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82601cf0
	if (ctx.cr6.eq) goto loc_82601CF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82601ccc
	if (ctx.cr6.eq) goto loc_82601CCC;
loc_82601CF0:
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r8,644(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stb r5,640(r31)
	PPC_STORE_U8(ctx.r31.u32 + 640, ctx.r5.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// lwz r3,640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// stwx r3,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r3.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601D30:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82601d60
	if (!ctx.cr6.eq) goto loc_82601D60;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601D40;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82601D60:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82601D7C;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82601db4
	if (!ctx.cr6.eq) goto loc_82601DB4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601D94;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82601DB4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82601DD0;
	sub_825EF808(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82601dfc
	if (ctx.cr6.eq) goto loc_82601DFC;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r10,r3,r30
	ctx.r10.s32 = ctx.r3.s32 / ctx.r30.s32;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r8,r10,r30
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// andc r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 & ~ctx.r9.u64;
	// twllei r30,0
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
	// twlgei r7,-1
	// b 0x82601e00
	goto loc_82601E00;
loc_82601DFC:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_82601E00:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601E34:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82601e64
	if (!ctx.cr6.eq) goto loc_82601E64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601E44;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82601E64:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82601E80;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82601eb8
	if (!ctx.cr6.eq) goto loc_82601EB8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601E98;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82601EB8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82601ED4;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// and r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 & ctx.r30.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601F0C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82601f3c
	if (!ctx.cr6.eq) goto loc_82601F3C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601F1C;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82601F3C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82601F58;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// clrlwi r30,r3,27
	ctx.r30.u64 = ctx.r3.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82601f90
	if (!ctx.cr6.eq) goto loc_82601F90;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601F70;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82601F90:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82601FAC;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// slw r8,r3,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82601FE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82602014
	if (!ctx.cr6.eq) goto loc_82602014;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82601FF4;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82602014:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82602030;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82602068
	if (!ctx.cr6.eq) goto loc_82602068;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602048;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82602068:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82602084;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// or r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 | ctx.r30.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826020BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826020ec
	if (!ctx.cr6.eq) goto loc_826020EC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826020CC;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_826020EC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82602108;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// clrlwi r30,r3,27
	ctx.r30.u64 = ctx.r3.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82602140
	if (!ctx.cr6.eq) goto loc_82602140;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602120;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82602140:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x8260215C;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// sraw r10,r3,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602194:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826021c4
	if (!ctx.cr6.eq) goto loc_826021C4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826021A4;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_826021C4:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x826021E0;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// clrlwi r30,r3,27
	ctx.r30.u64 = ctx.r3.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82602218
	if (!ctx.cr6.eq) goto loc_82602218;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826021F8;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82602218:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82602234;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// srw r8,r3,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r30.u8 & 0x3F));
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_8260226C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8260229c
	if (!ctx.cr6.eq) goto loc_8260229C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x8260227C;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_8260229C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x826022B8;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826022f0
	if (!ctx.cr6.eq) goto loc_826022F0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826022D0;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_826022F0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x8260230C;
	sub_825EF808(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// xor r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602344:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82602374
	if (!ctx.cr6.eq) goto loc_82602374;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602354;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82602374:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x82602390;
	sub_825EF8C8(ctx, base);
	// fadds f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// stfs f0,672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,676(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826023D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82602400
	if (!ctx.cr6.eq) goto loc_82602400;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826023E0;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82602400:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x8260241C;
	sub_825EF8C8(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// stfs f0,704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 704, temp.u32);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,708(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,704(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_8260245C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602490:
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// lwz r7,-12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r6,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826024EC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8260251c
	if (!ctx.cr6.eq) goto loc_8260251C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x826024FC;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_8260251C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r26,8(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// stw r26,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r26.u32);
	// bne 0x82602570
	if (!ctx.cr0.eq) goto loc_82602570;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602554;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82602570:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// stw r8,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r8.u32);
	// stw r7,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r7.u32);
	// bne cr6,0x826025c8
	if (!ctx.cr6.eq) goto loc_826025C8;
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x825efcb0
	ctx.lr = 0x826025B4;
	sub_825EFCB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// bne cr6,0x826025cc
	if (!ctx.cr6.eq) goto loc_826025CC;
loc_826025C8:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_826025CC:
	// stb r9,736(r31)
	PPC_STORE_U8(ctx.r31.u32 + 736, ctx.r9.u8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r8,740(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,736(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602604:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82602634
	if (!ctx.cr6.eq) goto loc_82602634;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602614;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82602634:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x82602670
	if (!ctx.cr0.eq) goto loc_82602670;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602654;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82602670:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r29
	ctx.r26.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// ble cr6,0x8260269c
	if (!ctx.cr6.gt) goto loc_8260269C;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8260269C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82602728
	if (!ctx.cr6.eq) goto loc_82602728;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// ble cr6,0x826026bc
	if (!ctx.cr6.gt) goto loc_826026BC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_826026BC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82602728
	if (!ctx.cr6.eq) goto loc_82602728;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x826026D0;
	sub_825EF8C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825ef8c8
	ctx.lr = 0x826026DC;
	sub_825EF8C8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bgt cr6,0x826026ec
	if (ctx.cr6.gt) goto loc_826026EC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_826026EC:
	// stb r11,768(r31)
	PPC_STORE_U8(ctx.r31.u32 + 768, ctx.r11.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r8,772(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,768(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602728:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82602738
	if (!ctx.cr6.eq) goto loc_82602738;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82602750
	goto loc_82602750;
loc_82602738:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825efb40
	ctx.lr = 0x82602748;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82602750:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82602764
	if (!ctx.cr6.eq) goto loc_82602764;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82602778
	goto loc_82602778;
loc_82602764:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1232
	ctx.r4.s64 = ctx.r31.s64 + 1232;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825efb40
	ctx.lr = 0x82602774;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_82602778:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82602780:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x826027a4
	if (ctx.cr6.eq) goto loc_826027A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82602780
	if (ctx.cr6.eq) goto loc_82602780;
loc_826027A4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// bgt cr6,0x826027b4
	if (ctx.cr6.gt) goto loc_826027B4;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_826027B4:
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r8,804(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,800(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stwx r5,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_826027EC:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// lwz r8,4772(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4772);
	// clrlwi r7,r18,16
	ctx.r7.u64 = ctx.r18.u32 & 0xFFFF;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r7,r16
	ctx.r4.u64 = ctx.r7.u64 + ctx.r16.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r3,-12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// clrlwi r18,r4,16
	ctx.r18.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602844:
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82130528
	ctx.lr = 0x8260284C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82602898
	if (ctx.cr6.eq) goto loc_82602898;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r22,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r22.u32);
	// sth r22,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r22.u16);
	// sth r22,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r22.u16);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// sth r22,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r22.u16);
	// sth r22,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r22.u16);
	// stb r22,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r22.u8);
	// stb r22,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r22.u8);
	// stw r22,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r22.u32);
	// sth r22,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r22.u16);
	// sth r22,86(r3)
	PPC_STORE_U16(ctx.r3.u32 + 86, ctx.r22.u16);
	// stb r22,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r22.u8);
	// b 0x8260289c
	goto loc_8260289C;
loc_82602898:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_8260289C:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r11,-1680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1680);
	// addi r10,r11,300
	ctx.r10.s64 = ctx.r11.s64 + 300;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// addi r9,r9,35
	ctx.r9.s64 = ctx.r9.s64 + 35;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r7.u32);
loc_826028C8:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826028c8
	if (!ctx.cr6.eq) goto loc_826028C8;
	// stw r21,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r21.u32);
	// subf r11,r21,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r21.s64;
	// addi r24,r27,80
	ctx.r24.s64 = ctx.r27.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r25,r21
	ctx.r11.u64 = ctx.r25.u64 + ctx.r21.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82478748
	ctx.lr = 0x82602914;
	sub_82478748(ctx, base);
	// clrlwi r7,r18,16
	ctx.r7.u64 = ctx.r18.u32 & 0xFFFF;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// subf r6,r25,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r25.s64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 3;
	// addi r5,r5,-6
	ctx.r5.s64 = ctx.r5.s64 + -6;
	// stb r4,76(r27)
	PPC_STORE_U8(ctx.r27.u32 + 76, ctx.r4.u8);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// ble cr6,0x82602994
	if (!ctx.cr6.gt) goto loc_82602994;
loc_82602940:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8260294C:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8260294c
	if (!ctx.cr6.eq) goto loc_8260294C;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stbx r7,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r11,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r3,r15
	ctx.r9.u64 = ctx.r3.u64 + ctx.r15.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82602940
	if (ctx.cr6.lt) goto loc_82602940;
loc_82602994:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stb r19,88(r27)
	PPC_STORE_U8(ctx.r27.u32 + 88, ctx.r19.u8);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r30,r27,12
	ctx.r30.s64 = ctx.r27.s64 + 12;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r5,r9,r15
	ctx.r5.u64 = ctx.r9.u64 + ctx.r15.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// clrlwi r18,r5,16
	ctx.r18.u64 = ctx.r5.u32 & 0xFFFF;
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8247bb70
	ctx.lr = 0x826029D8;
	sub_8247BB70(ctx, base);
	// addi r26,r27,20
	ctx.r26.s64 = ctx.r27.s64 + 20;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8247bb70
	ctx.lr = 0x826029E8;
	sub_8247BB70(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82602a34
	if (!ctx.cr6.gt) goto loc_82602A34;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82602A04:
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r5,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82602a04
	if (!ctx.cr0.eq) goto loc_82602A04;
loc_82602A34:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602A68:
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r21.u32);
	// stw r22,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r22.u32);
	// sth r22,1008(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1008, ctx.r22.u16);
	// sth r22,1010(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1010, ctx.r22.u16);
	// stw r10,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r10.u32);
	// stw r22,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r22.u32);
	// sth r22,1016(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1016, ctx.r22.u16);
	// sth r22,1018(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1018, ctx.r22.u16);
	// stb r22,1068(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1068, ctx.r22.u8);
	// stw r22,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r22.u32);
	// sth r22,1076(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1076, ctx.r22.u16);
	// sth r22,1078(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1078, ctx.r22.u16);
	// stb r22,1080(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1080, ctx.r22.u8);
loc_82602AA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82602aa4
	if (!ctx.cr6.eq) goto loc_82602AA4;
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// clrlwi r9,r18,16
	ctx.r9.u64 = ctx.r18.u32 & 0xFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r6,r7,r15
	ctx.r6.u64 = ctx.r7.u64 + ctx.r15.u64;
	// lbzx r8,r11,r21
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,1032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1032, ctx.r8.u8);
	// beq cr6,0x82602b40
	if (ctx.cr6.eq) goto loc_82602B40;
	// addi r8,r31,1036
	ctx.r8.s64 = ctx.r31.s64 + 1036;
loc_82602AF4:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82602AFC:
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82602afc
	if (!ctx.cr6.eq) goto loc_82602AFC;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lbz r3,1032(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1032);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// subf r7,r9,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// blt cr6,0x82602af4
	if (ctx.cr6.lt) goto loc_82602AF4;
loc_82602B40:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r30,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r30.u32);
	// add r5,r7,r15
	ctx.r5.u64 = ctx.r7.u64 + ctx.r15.u64;
	// lwz r3,4756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// addi r4,r31,992
	ctx.r4.s64 = ctx.r31.s64 + 992;
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// clrlwi r18,r5,16
	ctx.r18.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x825fe770
	ctx.lr = 0x82602B74;
	sub_825FE770(ctx, base);
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// add r21,r11,r30
	ctx.r21.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x825fe2b8
	ctx.lr = 0x82602B84;
	sub_825FE2B8(ctx, base);
	// b 0x825fee00
	goto loc_825FEE00;
loc_82602B88:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82602bb8
	if (!ctx.cr6.eq) goto loc_82602BB8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602B98;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82602BB8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82602be4
	if (!ctx.cr6.eq) goto loc_82602BE4;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82602bf8
	goto loc_82602BF8;
loc_82602BE4:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// bl 0x825efb40
	ctx.lr = 0x82602BF0;
	sub_825EFB40(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82602BF8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82602c28
	if (!ctx.cr6.eq) goto loc_82602C28;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602C08;
	sub_82130000(ctx, base);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82602C28:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82602C44;
	sub_825EF808(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r31,3472
	ctx.r11.s64 = ctx.r31.s64 + 3472;
	// li r10,87
	ctx.r10.s64 = 87;
	// li r9,7
	ctx.r9.s64 = 7;
loc_82602C54:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82602c54
	if (!ctx.cr0.lt) goto loc_82602C54;
	// stw r22,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r22.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r9,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r9.u32);
	// ble cr6,0x82602cf0
	if (!ctx.cr6.gt) goto loc_82602CF0;
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// addi r30,r31,3472
	ctx.r30.s64 = ctx.r31.s64 + 3472;
	// lwz r24,84(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82602C88:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82602cb4
	if (!ctx.cr6.eq) goto loc_82602CB4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602C98;
	sub_82130000(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r24,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r24.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_82602CB4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82602c88
	if (!ctx.cr0.eq) goto loc_82602C88;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
loc_82602CF0:
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// lwz r3,4756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// addi r7,r31,368
	ctx.r7.s64 = ctx.r31.s64 + 368;
	// addi r6,r31,3472
	ctx.r6.s64 = ctx.r31.s64 + 3472;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825fdea0
	ctx.lr = 0x82602D0C;
	sub_825FDEA0(ctx, base);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,372(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r7,376(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602D44:
	// lwz r21,120(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602D50:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82602d80
	if (!ctx.cr6.eq) goto loc_82602D80;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602D60;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82602D80:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r26,r11,r29
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bne 0x82602dc0
	if (!ctx.cr0.eq) goto loc_82602DC0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602DA4;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82602DC0:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// beq cr6,0x82602e34
	if (ctx.cr6.eq) goto loc_82602E34;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82602e08
	if (!ctx.cr6.eq) goto loc_82602E08;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82602e1c
	goto loc_82602E1C;
loc_82602E08:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x825efb40
	ctx.lr = 0x82602E18;
	sub_825EFB40(ctx, base);
	// lwz r30,-6012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
loc_82602E1C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x82602E30;
	sub_82130000(ctx, base);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602E34:
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x825ef9f0
	ctx.lr = 0x82602E3C;
	sub_825EF9F0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r22,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r22.u32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82602E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// lwz r6,200(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r6,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r6.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82602E98:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82602ec8
	if (!ctx.cr6.eq) goto loc_82602EC8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602EA8;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82602EC8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ef808
	ctx.lr = 0x82602EE4;
	sub_825EF808(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82130528
	ctx.lr = 0x82602EF0;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82602f20
	if (ctx.cr6.eq) goto loc_82602F20;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r22,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r22.u16);
	// sth r22,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r22.u16);
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// stb r22,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r22.u8);
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r22.u32);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// b 0x82602f24
	goto loc_82602F24;
loc_82602F20:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82602F24:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82602fe4
	if (!ctx.cr6.gt) goto loc_82602FE4;
	// lwz r25,84(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82602F34:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82602f64
	if (!ctx.cr6.eq) goto loc_82602F64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82602F48;
	sub_82130000(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r25,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r25.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_82602F64:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// stw r20,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r20.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r9.u32);
	// stw r8,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r8.u32);
	// stw r7,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r7.u32);
	// bl 0x825efb40
	ctx.lr = 0x82602FAC;
	sub_825EFB40(ctx, base);
	// bl 0x825ed940
	ctx.lr = 0x82602FB0;
	sub_825ED940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82202fb8
	ctx.lr = 0x82602FBC;
	sub_82202FB8(ctx, base);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r31,432
	ctx.r5.s64 = ctx.r31.s64 + 432;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82602FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82602f34
	if (ctx.cr6.lt) goto loc_82602F34;
loc_82602FE4:
	// lwz r11,-6012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6012);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r30.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// b 0x825fee04
	goto loc_825FEE04;
loc_82603018:
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82603050
	if (!ctx.cr6.eq) goto loc_82603050;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82603030;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82603050:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// stw r9,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r9.u32);
	// stw r8,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r8.u32);
	// bne 0x826030a4
	if (!ctx.cr0.eq) goto loc_826030A4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82130000
	ctx.lr = 0x82603088;
	sub_82130000(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_826030A4:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-6012(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6012, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// beq cr6,0x826030f0
	if (ctx.cr6.eq) goto loc_826030F0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,1088
	ctx.r4.s64 = ctx.r31.s64 + 1088;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x825efb40
	ctx.lr = 0x826030EC;
	sub_825EFB40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_826030F0:
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823dd800
	ctx.lr = 0x82603100;
	sub_823DD800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8260312c
	if (!ctx.cr6.eq) goto loc_8260312C;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r10,20104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fee28
	if (ctx.cr6.eq) goto loc_825FEE28;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,480
	ctx.r4.s64 = ctx.r31.s64 + 480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x825fedfc
	goto loc_825FEDFC;
loc_8260312C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130000
	ctx.lr = 0x82603140;
	sub_82130000(ctx, base);
	// b 0x825fee00
	goto loc_825FEE00;
loc_82603144:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130000
	ctx.lr = 0x82603154;
	sub_82130000(ctx, base);
	// b 0x825fee04
	goto loc_825FEE04;
}

__attribute__((alias("__imp__sub_82603158"))) PPC_WEAK_FUNC(sub_82603158);
PPC_FUNC_IMPL(__imp__sub_82603158) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,2
	ctx.r3.s64 = ctx.r5.s64 + 2;
	// b 0x825fe838
	sub_825FE838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82603170"))) PPC_WEAK_FUNC(sub_82603170);
PPC_FUNC_IMPL(__imp__sub_82603170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82603178;
	__savegprlr_27(ctx, base);
	// stwu r1,-3216(r1)
	ea = -3216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// beq cr6,0x8260330c
	if (ctx.cr6.eq) goto loc_8260330C;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x823da950
	ctx.lr = 0x826031BC;
	sub_823DA950(ctx, base);
	// lhz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82603224
	if (ctx.cr6.eq) goto loc_82603224;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_826031DC:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r6,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lhz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826031dc
	if (ctx.cr6.lt) goto loc_826031DC;
loc_82603224:
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r4,r7,-18432
	ctx.r4.s64 = ctx.r7.s64 + -18432;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82603258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r8,-18420
	ctx.r4.s64 = ctx.r8.s64 + -18420;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260328C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r8,-18408
	ctx.r4.s64 = ctx.r8.s64 + -18408;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826032C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-32126
	ctx.r28.s64 = -2105409536;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r27,r28,-18436
	ctx.r27.s64 = ctx.r28.s64 + -18436;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,-18436(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18436);
	// lwz r30,-4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// stw r11,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r11.u32);
	// stw r10,-18436(r28)
	PPC_STORE_U32(ctx.r28.u32 + -18436, ctx.r10.u32);
	// bl 0x825fe838
	ctx.lr = 0x826032FC;
	sub_825FE838(ctx, base);
	// stw r30,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r30.u32);
	// stw r29,-18436(r28)
	PPC_STORE_U32(ctx.r28.u32 + -18436, ctx.r29.u32);
	// addi r1,r1,3216
	ctx.r1.s64 = ctx.r1.s64 + 3216;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8260330C:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825fe838
	ctx.lr = 0x82603328;
	sub_825FE838(ctx, base);
	// addi r1,r1,3216
	ctx.r1.s64 = ctx.r1.s64 + 3216;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82603330"))) PPC_WEAK_FUNC(sub_82603330);
PPC_FUNC_IMPL(__imp__sub_82603330) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 152);
	// li r11,0
	ctx.r11.s64 = 0;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8260336c
	if (!ctx.cr6.gt) goto loc_8260336C;
	// addi r10,r3,164
	ctx.r10.s64 = ctx.r3.s64 + 164;
loc_82603348:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82603374
	if (ctx.cr6.eq) goto loc_82603374;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82603348
	if (ctx.cr6.lt) goto loc_82603348;
loc_8260336C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82603374:
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82603384"))) PPC_WEAK_FUNC(sub_82603384);
PPC_FUNC_IMPL(__imp__sub_82603384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82603388"))) PPC_WEAK_FUNC(sub_82603388);
PPC_FUNC_IMPL(__imp__sub_82603388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x82603390;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823db9d0
	ctx.lr = 0x82603398;
	sub_823DB9D0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82603690
	if (ctx.cr6.eq) goto loc_82603690;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826033d8
	if (ctx.cr6.eq) goto loc_826033D8;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x826033dc
	goto loc_826033DC;
loc_826033D8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826033DC:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r31,r11,21272
	ctx.r31.s64 = ctx.r11.s64 + 21272;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826033f8
	if (ctx.cr6.eq) goto loc_826033F8;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bl 0x8217d9a0
	ctx.lr = 0x826033F8;
	sub_8217D9A0(ctx, base);
loc_826033F8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8217bb68
	ctx.lr = 0x82603410;
	sub_8217BB68(ctx, base);
	// lfs f7,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lis r29,-32248
	ctx.r29.s64 = -2113404928;
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lis r28,-32124
	ctx.r28.s64 = -2105278464;
	// lis r27,-32124
	ctx.r27.s64 = -2105278464;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r25,-32112
	ctx.r25.s64 = -2104492032;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,31020(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// lis r21,-32112
	ctx.r21.s64 = -2104492032;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r26,-32124
	ctx.r26.s64 = -2105278464;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lis r24,-32124
	ctx.r24.s64 = -2105278464;
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lis r23,-32124
	ctx.r23.s64 = -2105278464;
	// lis r22,-32124
	ctx.r22.s64 = -2105278464;
	// lfs f1,-1644(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -1644);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lwz r9,-26892(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26892);
	// lfs f6,-26896(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f5,-26908(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// lfs f27,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f7,f27,f7
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f7.f64));
	// stfs f8,-26924(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + -26924, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f7,-26916(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + -26916, temp.u32);
	// lfs f27,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmuls f26,f0,f31
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f0,-1664(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -1664);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f28,f27
	ctx.f27.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f27,f27,f31
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmadds f11,f11,f27,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fmadds f10,f10,f27,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fmuls f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8217bc28
	ctx.lr = 0x826034D8;
	sub_8217BC28(ctx, base);
	// lfs f12,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,-26892(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26892);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,31020(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,-26916(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + -26916, temp.u32);
	// lfs f6,-26896(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-26908(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,-26924(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + -26924, temp.u32);
	// lfs f1,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fadds f27,f2,f29
	ctx.f27.f64 = double(float(ctx.f2.f64 + ctx.f29.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f26,f28,f1
	ctx.f26.f64 = double(float(ctx.f28.f64 + ctx.f1.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,-1644(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -1644);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f27,f27,f31
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// lfs f1,-1664(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -1664);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f26,f26,f31
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f12,f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f0.f64));
	// fmadds f11,f11,f26,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// bl 0x8217bc28
	ctx.lr = 0x8260356C;
	sub_8217BC28(ctx, base);
	// lfs f8,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,-26892(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26892);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fadds f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f0,31020(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,-1664(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -1664);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,-26896(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-26908(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,-26928(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f8,-26924(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + -26924, temp.u32);
	// stfs f7,-26916(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + -26916, temp.u32);
	// lfs f27,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmuls f26,f0,f31
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f0,-1644(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -1644);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f28,f27
	ctx.f27.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// fmuls f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f27,f27,f31
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f12,f26,f12
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fmadds f11,f27,f11,f13
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f10,f27,f10,f12
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// bl 0x8217bc28
	ctx.lr = 0x82603600;
	sub_8217BC28(ctx, base);
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,-26892(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26892);
	// lfs f0,31020(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,-26924(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + -26924, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,-26916(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + -26916, temp.u32);
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f2,f9,f29
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fmuls f30,f2,f31
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f28,f10
	ctx.f29.f64 = double(float(ctx.f28.f64 + ctx.f10.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,-26896(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-26908(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,-1644(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -1644);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f1,-1664(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -1664);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f29,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmadds f12,f31,f12,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f11,f31,f11,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// bl 0x8217bc28
	ctx.lr = 0x8260368C;
	sub_8217BC28(ctx, base);
	// bl 0x8217bc98
	ctx.lr = 0x82603690;
	sub_8217BC98(ctx, base);
loc_82603690:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823dba1c
	ctx.lr = 0x8260369C;
	__restfpr_26(ctx, base);
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826036A0"))) PPC_WEAK_FUNC(sub_826036A0);
PPC_FUNC_IMPL(__imp__sub_826036A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x826036A8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823db9d0
	ctx.lr = 0x826036B0;
	sub_823DB9D0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r30,-32248
	ctx.r30.s64 = -2113404928;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// lis r29,-32124
	ctx.r29.s64 = -2105278464;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lis r28,-32124
	ctx.r28.s64 = -2105278464;
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r27,-32112
	ctx.r27.s64 = -2104492032;
	// lfs f0,31020(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// lis r24,-32112
	ctx.r24.s64 = -2104492032;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r25,r27,21272
	ctx.r25.s64 = ctx.r27.s64 + 21272;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f12,21272(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 21272);
	ctx.f12.f64 = double(temp.f32);
	// lis r20,-32112
	ctx.r20.s64 = -2104492032;
	// lfs f1,-1644(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -1644);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r26,-32124
	ctx.r26.s64 = -2105278464;
	// lfs f11,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r23,-32124
	ctx.r23.s64 = -2105278464;
	// lfs f10,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r22,-32124
	ctx.r22.s64 = -2105278464;
	// lfs f9,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lis r21,-32124
	ctx.r21.s64 = -2105278464;
	// lfs f2,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,3796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,-26892(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26892);
	// lfs f6,-26896(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f8,-26924(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + -26924, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f7,-26916(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + -26916, temp.u32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fadds f0,f30,f3
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// fmuls f27,f0,f28
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f0,-1664(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -1664);
	ctx.f0.f64 = double(temp.f32);
	// fadds f26,f4,f29
	ctx.f26.f64 = double(float(ctx.f4.f64 + ctx.f29.f64));
	// lfs f5,-26908(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f26,f26,f28
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmadds f11,f11,f26,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmadds f10,f10,f26,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fmuls f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8217bc28
	ctx.lr = 0x8260379C;
	sub_8217BC28(ctx, base);
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,-26892(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26892);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,31020(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,-26916(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + -26916, temp.u32);
	// lfs f6,-26896(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-26908(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,21272(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 21272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,-26924(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + -26924, temp.u32);
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fadds f27,f30,f2
	ctx.f27.f64 = double(float(ctx.f30.f64 + ctx.f2.f64));
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f26,f1,f29
	ctx.f26.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// lfs f12,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f27,f27,f28
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// lfs f9,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f26,f26,f28
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// lfs f2,-1644(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -1644);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-1664(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -1664);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f12,f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f0.f64));
	// fmadds f11,f11,f26,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// bl 0x8217bc28
	ctx.lr = 0x82603830;
	sub_8217BC28(ctx, base);
	// lfs f8,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,-26892(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26892);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f0,31020(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f8,-26924(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + -26924, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f7,-26916(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + -26916, temp.u32);
	// lfs f13,21272(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 21272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,-1644(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -1644);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-1664(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -1664);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,-26896(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-26908(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// lfs f27,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fmuls f26,f0,f28
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f27,f29
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f27,f27,f28
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fmuls f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmadds f12,f27,f12,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f11,f27,f11,f13
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// bl 0x8217bc28
	ctx.lr = 0x826038BC;
	sub_8217BC28(ctx, base);
	// lfs f7,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,-26892(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26892);
	// fadds f1,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// lfs f0,31020(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f8,-26924(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + -26924, temp.u32);
	// lfs f11,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,-26896(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-26908(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f7,-26916(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + -26916, temp.u32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f12,f28
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,21272(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 21272);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f2,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f1,-1644(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -1644);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,-1664(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -1664);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f10,f0,f10,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f0,f10,f2
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fmuls f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8217bc28
	ctx.lr = 0x82603950;
	sub_8217BC28(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823dba1c
	ctx.lr = 0x8260395C;
	__restfpr_26(ctx, base);
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82603960"))) PPC_WEAK_FUNC(sub_82603960);
PPC_FUNC_IMPL(__imp__sub_82603960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x82603968;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823db9c8
	ctx.lr = 0x82603970;
	sub_823DB9C8(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// beq cr6,0x82603b2c
	if (ctx.cr6.eq) goto loc_82603B2C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r26,-32124
	ctx.r26.s64 = -2105278464;
	// lis r25,-32124
	ctx.r25.s64 = -2105278464;
	// lis r24,-32124
	ctx.r24.s64 = -2105278464;
	// lfs f28,3796(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3796);
	ctx.f28.f64 = double(temp.f32);
	// lis r23,-32124
	ctx.r23.s64 = -2105278464;
	// lis r22,-32124
	ctx.r22.s64 = -2105278464;
	// lis r21,-32124
	ctx.r21.s64 = -2105278464;
	// lis r27,-32112
	ctx.r27.s64 = -2104492032;
	// lis r28,-32112
	ctx.r28.s64 = -2104492032;
	// addi r31,r11,21272
	ctx.r31.s64 = ctx.r11.s64 + 21272;
loc_826039C8:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82603b20
	if (ctx.cr6.gt) goto loc_82603B20;
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// addi r12,r12,14832
	ctx.r12.s64 = ctx.r12.s64 + 14832;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82603A04;
	case 1:
		goto loc_82603B00;
	case 2:
		goto loc_82603B1C;
	case 3:
		goto loc_82603B1C;
	case 4:
		goto loc_82603B1C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,14852(0)
	ctx.r19.u64 = PPC_LOAD_U32(14852);
	// lwz r19,15104(0)
	ctx.r19.u64 = PPC_LOAD_U32(15104);
	// lwz r19,15132(0)
	ctx.r19.u64 = PPC_LOAD_U32(15132);
	// lwz r19,15132(0)
	ctx.r19.u64 = PPC_LOAD_U32(15132);
	// lwz r19,15132(0)
	ctx.r19.u64 = PPC_LOAD_U32(15132);
loc_82603A04:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8217bb68
	ctx.lr = 0x82603A10;
	sub_8217BB68(ctx, base);
	// fmuls f10,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f30,f29
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,-26892(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -26892);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,-26924(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -26924);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-26916(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26916);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-26896(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-26908(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f0,f9,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f9,f13,f9,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f1.f64));
	// lfs f0,-1644(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -1644);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1664(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1664);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f10,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// bl 0x8217bc28
	ctx.lr = 0x82603A78;
	sub_8217BC28(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,-26892(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -26892);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,-1644(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -1644);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-1664(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1664);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,-26924(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -26924);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-26916(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -26916);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-26896(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26896);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-26908(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26908);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-26928(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -26928);
	ctx.f4.f64 = double(temp.f32);
	// lfs f25,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fadds f31,f25,f31
	ctx.f31.f64 = double(float(ctx.f25.f64 + ctx.f31.f64));
	// lfs f25,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fadds f30,f30,f25
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// fmuls f25,f31,f29
	ctx.f25.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmuls f24,f30,f29
	ctx.f24.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmadds f12,f12,f24,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f0.f64));
	// fmadds f11,f11,f24,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f24.f64 + ctx.f13.f64));
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// bl 0x8217bc28
	ctx.lr = 0x82603AF4;
	sub_8217BC28(ctx, base);
	// bl 0x8217bc98
	ctx.lr = 0x82603AF8;
	sub_8217BC98(ctx, base);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// b 0x82603b20
	goto loc_82603B20;
loc_82603B00:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fadds f30,f13,f26
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// b 0x82603b20
	goto loc_82603B20;
loc_82603B1C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82603B20:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826039c8
	if (!ctx.cr6.eq) goto loc_826039C8;
loc_82603B2C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823dba14
	ctx.lr = 0x82603B38;
	__restfpr_24(ctx, base);
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82603B3C"))) PPC_WEAK_FUNC(sub_82603B3C);
PPC_FUNC_IMPL(__imp__sub_82603B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82603B40"))) PPC_WEAK_FUNC(sub_82603B40);
PPC_FUNC_IMPL(__imp__sub_82603B40) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,31028
	ctx.r10.s64 = ctx.r11.s64 + 31028;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82130588
	ctx.lr = 0x82603B70;
	sub_82130588(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,20968
	ctx.r8.s64 = ctx.r9.s64 + 20968;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x821d2810
	ctx.lr = 0x82603B84;
	sub_821D2810(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82603b9c
	if (ctx.cr6.eq) goto loc_82603B9C;
	// bl 0x82130588
	ctx.lr = 0x82603B98;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82603B9C:
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

__attribute__((alias("__imp__sub_82603BB4"))) PPC_WEAK_FUNC(sub_82603BB4);
PPC_FUNC_IMPL(__imp__sub_82603BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82603BB8"))) PPC_WEAK_FUNC(sub_82603BB8);
PPC_FUNC_IMPL(__imp__sub_82603BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x82603BC0;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823db9d8
	ctx.lr = 0x82603BC8;
	sub_823DB9D8(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r25,r10,21272
	ctx.r25.s64 = ctx.r10.s64 + 21272;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f30,7444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7444);
	ctx.f30.f64 = double(temp.f32);
	// li r23,1024
	ctx.r23.s64 = 1024;
	// li r26,0
	ctx.r26.s64 = 0;
	// fmadds f0,f11,f10,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f0,f9,f8,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f0,f4,f3,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f0,8(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmadds f0,f13,f12,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,12(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fadds f0,f2,f6
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f0,16(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 16, temp.u32);
	// lfs f0,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f1,f0,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,20(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 20, temp.u32);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8217d9a0
	ctx.lr = 0x82603CB8;
	sub_8217D9A0(ctx, base);
	// lbz r8,59(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 59);
	// lbz r7,63(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 63);
	// li r21,255
	ctx.r21.s64 = 255;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r6,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r6.s64;
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82603cec
	if (!ctx.cr0.lt) goto loc_82603CEC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82603cfc
	goto loc_82603CFC;
loc_82603CEC:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// bgt cr6,0x82603cfc
	if (ctx.cr6.gt) goto loc_82603CFC;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
loc_82603CFC:
	// lbz r11,58(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 58);
	// lbz r10,62(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 62);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// srawi r10,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 6;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82603d2c
	if (!ctx.cr0.lt) goto loc_82603D2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82603d3c
	goto loc_82603D3C;
loc_82603D2C:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// bgt cr6,0x82603d3c
	if (ctx.cr6.gt) goto loc_82603D3C;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_82603D3C:
	// lbz r11,57(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 57);
	// lbz r10,61(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 61);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// rlwinm r5,r8,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// srawi r10,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 6;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82603d6c
	if (!ctx.cr0.lt) goto loc_82603D6C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82603d7c
	goto loc_82603D7C;
loc_82603D6C:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bgt cr6,0x82603d7c
	if (ctx.cr6.gt) goto loc_82603D7C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_82603D7C:
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// lbz r8,60(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 60);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r6,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r6.s64;
	// srawi r8,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 6;
	// add. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82603dac
	if (!ctx.cr0.lt) goto loc_82603DAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82603dc0
	goto loc_82603DC0;
loc_82603DAC:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82603dbc
	if (!ctx.cr6.gt) goto loc_82603DBC;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82603dc0
	goto loc_82603DC0;
loc_82603DBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82603DC0:
	// rlwimi r11,r7,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r8,71(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 71);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r24,-32124
	ctx.r24.s64 = -2105278464;
	// rlwimi r10,r7,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r9,r10,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// lfs f31,3796(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// rlwinm r5,r9,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// mullw r4,r5,r8
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// divw r3,r4,r21
	ctx.r3.s32 = ctx.r4.s32 / ctx.r21.s32;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r10,r11,16,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF00;
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwimi r11,r5,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,-26892(r24)
	PPC_STORE_U32(ctx.r24.u32 + -26892, ctx.r11.u32);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826041dc
	if (ctx.cr6.eq) goto loc_826041DC;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r22,-32112
	ctx.r22.s64 = -2104492032;
	// lfs f28,31076(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31076);
	ctx.f28.f64 = double(temp.f32);
loc_82603E38:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x826041cc
	if (ctx.cr6.gt) goto loc_826041CC;
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// addi r12,r12,15968
	ctx.r12.s64 = ctx.r12.s64 + 15968;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82603E74;
	case 1:
		goto loc_82603EB4;
	case 2:
		goto loc_82604028;
	case 3:
		goto loc_8260406C;
	case 4:
		goto loc_826040B0;
	default:
		__builtin_unreachable();
	}
	// lwz r19,15988(0)
	ctx.r19.u64 = PPC_LOAD_U32(15988);
	// lwz r19,16052(0)
	ctx.r19.u64 = PPC_LOAD_U32(16052);
	// lwz r19,16424(0)
	ctx.r19.u64 = PPC_LOAD_U32(16424);
	// lwz r19,16492(0)
	ctx.r19.u64 = PPC_LOAD_U32(16492);
	// lwz r19,16560(0)
	ctx.r19.u64 = PPC_LOAD_U32(16560);
loc_82603E74:
	// lhz r23,2(r31)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r6,r23
	ctx.r6.s64 = ctx.r23.s16;
	// lwz r8,-1648(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + -1648);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r4,24(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// lwzx r26,r5,r4
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// fmuls f30,f12,f28
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// b 0x826041cc
	goto loc_826041CC;
loc_82603EB4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lbz r9,59(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 59);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r8,63(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 63);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// rlwinm r4,r6,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// rlwinm r7,r6,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r6,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// bge 0x82603f04
	if (!ctx.cr0.lt) goto loc_82603F04;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82603f14
	goto loc_82603F14;
loc_82603F04:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// bgt cr6,0x82603f14
	if (ctx.cr6.gt) goto loc_82603F14;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
loc_82603F14:
	// lbz r11,58(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 58);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbz r8,62(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 62);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82603f44
	if (!ctx.cr0.lt) goto loc_82603F44;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82603f54
	goto loc_82603F54;
loc_82603F44:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// bgt cr6,0x82603f54
	if (ctx.cr6.gt) goto loc_82603F54;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
loc_82603F54:
	// lbz r11,57(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 57);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lbz r9,61(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 61);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82603f84
	if (!ctx.cr0.lt) goto loc_82603F84;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82603f94
	goto loc_82603F94;
loc_82603F84:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bgt cr6,0x82603f94
	if (ctx.cr6.gt) goto loc_82603F94;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_82603F94:
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// lbz r7,60(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 60);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// mullw r3,r9,r5
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// srawi r11,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82603fc4
	if (!ctx.cr0.lt) goto loc_82603FC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82603fd8
	goto loc_82603FD8;
loc_82603FC4:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82603fd4
	if (!ctx.cr6.gt) goto loc_82603FD4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82603fd8
	goto loc_82603FD8;
loc_82603FD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82603FD8:
	// rlwimi r11,r6,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,71(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 71);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r10,r7,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r10,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r6,r8,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// divw r4,r5,r21
	ctx.r4.s32 = ctx.r5.s32 / ctx.r21.s32;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r8,r3,24,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r10,r11,16,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF00;
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwimi r11,r5,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,-26892(r24)
	PPC_STORE_U32(ctx.r24.u32 + -26892, ctx.r11.u32);
	// b 0x826041cc
	goto loc_826041CC;
loc_82604028:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r23
	ctx.r10.s64 = ctx.r23.s16;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// twllei r10,0
	// rlwinm r8,r9,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// andc r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// b 0x826041cc
	goto loc_826041CC;
loc_8260406C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r23
	ctx.r10.s64 = ctx.r23.s16;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// twllei r10,0
	// rlwinm r8,r9,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// andc r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// b 0x826041cc
	goto loc_826041CC;
loc_826040B0:
	// extsh r28,r23
	ctx.r28.s64 = ctx.r23.s16;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bl 0x82603330
	ctx.lr = 0x826040CC;
	sub_82603330(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82604154
	if (ctx.cr6.eq) goto loc_82604154;
loc_826040D8:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// extsh r20,r9
	ctx.r20.s64 = ctx.r9.s16;
	// bl 0x82603388
	ctx.lr = 0x82604104;
	sub_82603388(ctx, base);
	// rlwinm r8,r20,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 10) & 0xFFFFFC00;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// divw r7,r8,r28
	ctx.r7.s32 = ctx.r8.s32 / ctx.r28.s32;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// twllei r28,0
	// andc r4,r28,r5
	ctx.r4.u64 = ctx.r28.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// bne 0x826040d8
	if (!ctx.cr0.eq) goto loc_826040D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r11.u32);
	// bl 0x8217d9a0
	ctx.lr = 0x82604150;
	sub_8217D9A0(ctx, base);
	// b 0x826041cc
	goto loc_826041CC;
loc_82604154:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lhz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82603960
	ctx.lr = 0x82604190;
	sub_82603960(ctx, base);
	// rlwinm r5,r27,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 10) & 0xFFFFFC00;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// divw r4,r5,r28
	ctx.r4.s32 = ctx.r5.s32 / ctx.r28.s32;
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// andc r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// twllei r28,0
	// twlgei r10,-1
	// fadds f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// bne 0x82604154
	if (!ctx.cr0.eq) goto loc_82604154;
loc_826041CC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82603e38
	if (!ctx.cr6.eq) goto loc_82603E38;
loc_826041DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823dba24
	ctx.lr = 0x826041E8;
	__restfpr_28(ctx, base);
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826041EC"))) PPC_WEAK_FUNC(sub_826041EC);
PPC_FUNC_IMPL(__imp__sub_826041EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826041F0"))) PPC_WEAK_FUNC(sub_826041F0);
PPC_FUNC_IMPL(__imp__sub_826041F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x826041F8;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823db9d4
	ctx.lr = 0x82604200;
	sub_823DB9D4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
loc_8260421C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82604234
	if (ctx.cr6.eq) goto loc_82604234;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8260423c
	if (!ctx.cr6.eq) goto loc_8260423C;
loc_82604234:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8260421c
	goto loc_8260421C;
loc_8260423C:
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stb r28,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r28.u8);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// lfs f28,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f28.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// beq cr6,0x826043d0
	if (ctx.cr6.eq) goto loc_826043D0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r24,r10,31080
	ctx.r24.s64 = ctx.r10.s64 + 31080;
	// lfs f27,3020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3020);
	ctx.f27.f64 = double(temp.f32);
loc_82604280:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x826043d0
	if (ctx.cr6.eq) goto loc_826043D0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x826042a0
	if (!ctx.cr6.eq) goto loc_826042A0;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_826042A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// bge cr6,0x826042c0
	if (!ctx.cr6.lt) goto loc_826042C0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8260433c
	goto loc_8260433C;
loc_826042C0:
	// cmplwi cr6,r4,192
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 192, ctx.xer);
	// blt cr6,0x826042ec
	if (ctx.cr6.lt) goto loc_826042EC;
	// cmplwi cr6,r4,223
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 223, ctx.xer);
	// bgt cr6,0x826042ec
	if (ctx.cr6.gt) goto loc_826042EC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r4,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x7C0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x8260433c
	goto loc_8260433C;
loc_826042EC:
	// cmplwi cr6,r4,224
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 224, ctx.xer);
	// blt cr6,0x8260432c
	if (ctx.cr6.lt) goto loc_8260432C;
	// cmplwi cr6,r4,239
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 239, ctx.xer);
	// bgt cr6,0x8260432c
	if (ctx.cr6.gt) goto loc_8260432C;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r4,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r7,r10,26
	ctx.r7.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r6,r8,26
	ctx.r6.u64 = ctx.r8.u32 & 0x3F;
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x8260433c
	goto loc_8260433C;
loc_8260432C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x82604338;
	sub_82130000(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8260433C:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bge cr6,0x82604354
	if (!ctx.cr6.lt) goto loc_82604354;
	// add r11,r8,r27
	ctx.r11.u64 = ctx.r8.u64 + ctx.r27.u64;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// b 0x8260438c
	goto loc_8260438C;
loc_82604354:
	// lhz r10,160(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 160);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82604388
	if (!ctx.cr6.gt) goto loc_82604388;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
loc_8260436C:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826043a4
	if (ctx.cr6.eq) goto loc_826043A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8260436c
	if (ctx.cr6.lt) goto loc_8260436C;
loc_82604388:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8260438C:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826043ac
	if (ctx.cr6.eq) goto loc_826043AC;
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826043b0
	goto loc_826043B0;
loc_826043A4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8260438c
	goto loc_8260438C;
loc_826043AC:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
loc_826043B0:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x826043f4
	if (ctx.cr6.gt) goto loc_826043F4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82604280
	if (!ctx.cr6.eq) goto loc_82604280;
loc_826043D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823dba20
	ctx.lr = 0x826043F0;
	__restfpr_27(ctx, base);
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_826043F4:
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// beq cr6,0x82604414
	if (ctx.cr6.eq) goto loc_82604414;
	// stw r25,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r25.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823dba20
	ctx.lr = 0x82604410;
	__restfpr_27(ctx, base);
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_82604414:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823dba20
	ctx.lr = 0x82604430;
	__restfpr_27(ctx, base);
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604434"))) PPC_WEAK_FUNC(sub_82604434);
PPC_FUNC_IMPL(__imp__sub_82604434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604438"))) PPC_WEAK_FUNC(sub_82604438);
PPC_FUNC_IMPL(__imp__sub_82604438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,-13032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13032);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x826041f0
	ctx.lr = 0x82604474;
	sub_826041F0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,-18280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82604498"))) PPC_WEAK_FUNC(sub_82604498);
PPC_FUNC_IMPL(__imp__sub_82604498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826044A0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_826044CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826044cc
	if (!ctx.cr6.eq) goto loc_826044CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82604538
	if (!ctx.cr6.lt) goto loc_82604538;
loc_826044F4:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826041f0
	ctx.lr = 0x8260450C;
	sub_826041F0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82604528
	if (ctx.cr6.eq) goto loc_82604528;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x8260452c
	goto loc_8260452C;
loc_82604528:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8260452C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x826044f4
	if (ctx.cr6.lt) goto loc_826044F4;
loc_82604538:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604548"))) PPC_WEAK_FUNC(sub_82604548);
PPC_FUNC_IMPL(__imp__sub_82604548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x82604550;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823db9c8
	ctx.lr = 0x82604558;
	sub_823DB9C8(ctx, base);
	// addi r31,r1,-352
	ctx.r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r11,r11,21272
	ctx.r11.s64 = ctx.r11.s64 + 21272;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lfs f0,31076(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31076);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r23,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r23.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r25,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r25.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826045C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826045c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826045C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8217d9a0
	ctx.lr = 0x826045E4;
	sub_8217D9A0(ctx, base);
	// lbz r10,59(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 59);
	// lbz r7,63(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 63);
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// mullw r3,r11,r5
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r29,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r29,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82604620
	if (!ctx.cr0.lt) goto loc_82604620;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82604630
	goto loc_82604630;
loc_82604620:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// li r7,255
	ctx.r7.s64 = 255;
	// bgt cr6,0x82604630
	if (ctx.cr6.gt) goto loc_82604630;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
loc_82604630:
	// lbz r11,58(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 58);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lbz r9,62(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 62);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82604660
	if (!ctx.cr0.lt) goto loc_82604660;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82604670
	goto loc_82604670;
loc_82604660:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// li r9,255
	ctx.r9.s64 = 255;
	// bgt cr6,0x82604670
	if (ctx.cr6.gt) goto loc_82604670;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_82604670:
	// lbz r11,57(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 57);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// lbz r8,61(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x826046a0
	if (!ctx.cr0.lt) goto loc_826046A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826046b0
	goto loc_826046B0;
loc_826046A0:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// li r10,255
	ctx.r10.s64 = 255;
	// bgt cr6,0x826046b0
	if (ctx.cr6.gt) goto loc_826046B0;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_826046B0:
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// lbz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 6;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x826046e0
	if (!ctx.cr0.lt) goto loc_826046E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826046f4
	goto loc_826046F4;
loc_826046E0:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x826046f0
	if (!ctx.cr6.gt) goto loc_826046F0;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x826046f4
	goto loc_826046F4;
loc_826046F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_826046F4:
	// rlwimi r11,r7,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r8,71(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 71);
	// li r7,255
	ctx.r7.s64 = 255;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r5,-32124
	ctx.r5.s64 = -2105278464;
	// rlwimi r10,r6,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwimi r9,r10,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r11,r9,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// divw r8,r10,r7
	ctx.r8.s32 = ctx.r10.s32 / ctx.r7.s32;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r9,r7,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r6,r11,16,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF00;
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r6,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,-26892(r5)
	PPC_STORE_U32(ctx.r5.u32 + -26892, ctx.r11.u32);
	// bl 0x82603330
	ctx.lr = 0x82604754;
	sub_82603330(ctx, base);
	// lhz r5,154(r15)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r15.u32 + 154);
	// lhz r4,156(r15)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r15.u32 + 156);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lhz r7,22(r25)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + 22);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// std r5,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r5.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f26,3796(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3796);
	ctx.f26.f64 = double(temp.f32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82604d50
	if (ctx.cr6.eq) goto loc_82604D50;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r26,r11,31080
	ctx.r26.s64 = ctx.r11.s64 + 31080;
	// lfs f25,3020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3020);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,14884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14884);
	ctx.f24.f64 = double(temp.f32);
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
loc_826047C8:
	// li r22,0
	ctx.r22.s64 = 0;
	// lfs f1,32(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// stw r22,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r22.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// stw r22,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r22.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826041f0
	ctx.lr = 0x826047F0;
	sub_826041F0(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// beq cr6,0x82604d50
	if (ctx.cr6.eq) goto loc_82604D50;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x8260480c
	if (!ctx.cr6.eq) goto loc_8260480C;
	// lfs f0,32(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f0,f1
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// b 0x82604828
	goto loc_82604828;
loc_8260480C:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x82604824
	if (!ctx.cr6.eq) goto loc_82604824;
	// lfs f0,32(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f29,f13,f24
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// b 0x82604828
	goto loc_82604828;
loc_82604824:
	// fmr f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f26.f64;
loc_82604828:
	// lwz r17,84(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fmr f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f26.f64;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// bne cr6,0x82604870
	if (!ctx.cr6.eq) goto loc_82604870;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82604870
	if (!ctx.cr6.eq) goto loc_82604870;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// ble cr6,0x82604870
	if (!ctx.cr6.gt) goto loc_82604870;
	// addi r11,r17,-1
	ctx.r11.s64 = ctx.r17.s64 + -1;
	// lfs f0,32(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f30,f13,f10
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
loc_82604870:
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82604888
	if (ctx.cr6.eq) goto loc_82604888;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82604890
	if (!ctx.cr6.eq) goto loc_82604890;
loc_82604888:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x82604870
	goto loc_82604870;
loc_82604890:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82604bd4
	if (ctx.cr6.eq) goto loc_82604BD4;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x82604bd8
	if (!ctx.cr6.gt) goto loc_82604BD8;
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dbff4
	ctx.lr = 0x826048B0;
	sub_823DBFF4(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// neg r7,r10
	ctx.r7.s64 = -ctx.r10.s64;
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r7,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r18,r1,80
	ctx.r18.s64 = ctx.r1.s64 + 80;
	// bl 0x823dbff4
	ctx.lr = 0x826048C8;
	sub_823DBFF4(ctx, base);
	// lwz r6,0(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// neg r5,r10
	ctx.r5.s64 = -ctx.r10.s64;
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
	// stwux r6,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r5,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r16,r1,80
	ctx.r16.s64 = ctx.r1.s64 + 80;
	// bl 0x823dbff4
	ctx.lr = 0x826048E4;
	sub_823DBFF4(ctx, base);
	// lwz r4,0(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// neg r3,r17
	ctx.r3.s64 = -ctx.r17.s64;
	// stwux r4,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r3,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
	// bl 0x823dbff4
	ctx.lr = 0x826048FC;
	sub_823DBFF4(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x82604a9c
	if (!ctx.cr6.gt) goto loc_82604A9C;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82604938
	if (ctx.cr6.eq) goto loc_82604938;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
loc_8260492C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8260492c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8260492C;
loc_82604938:
	// subf r28,r16,r18
	ctx.r28.s64 = ctx.r18.s64 - ctx.r16.s64;
	// subf r27,r16,r19
	ctx.r27.s64 = ctx.r19.s64 - ctx.r16.s64;
loc_82604940:
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// bge cr6,0x8260495c
	if (!ctx.cr6.lt) goto loc_8260495C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x826049d8
	goto loc_826049D8;
loc_8260495C:
	// cmplwi cr6,r4,192
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 192, ctx.xer);
	// blt cr6,0x82604988
	if (ctx.cr6.lt) goto loc_82604988;
	// cmplwi cr6,r4,223
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 223, ctx.xer);
	// bgt cr6,0x82604988
	if (ctx.cr6.gt) goto loc_82604988;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rlwinm r10,r4,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x7C0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x826049d8
	goto loc_826049D8;
loc_82604988:
	// cmplwi cr6,r4,224
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 224, ctx.xer);
	// blt cr6,0x826049c8
	if (ctx.cr6.lt) goto loc_826049C8;
	// cmplwi cr6,r4,239
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 239, ctx.xer);
	// bgt cr6,0x826049c8
	if (ctx.cr6.gt) goto loc_826049C8;
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rlwinm r9,r4,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lbz r8,1(r21)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// clrlwi r7,r10,26
	ctx.r7.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r6,r8,26
	ctx.r6.u64 = ctx.r8.u32 & 0x3F;
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x826049d8
	goto loc_826049D8;
loc_826049C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82130000
	ctx.lr = 0x826049D4;
	sub_82130000(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_826049D8:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bge cr6,0x826049f0
	if (!ctx.cr6.lt) goto loc_826049F0;
	// add r11,r8,r15
	ctx.r11.u64 = ctx.r8.u64 + ctx.r15.u64;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// b 0x82604a28
	goto loc_82604A28;
loc_826049F0:
	// lhz r10,160(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 160);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82604a24
	if (!ctx.cr6.gt) goto loc_82604A24;
	// lwz r10,16(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
loc_82604A08:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82604a50
	if (ctx.cr6.eq) goto loc_82604A50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82604a08
	if (ctx.cr6.lt) goto loc_82604A08;
loc_82604A24:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82604A28:
	// lwz r10,20(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// fadds f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stwx r11,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82604a58
	if (ctx.cr6.eq) goto loc_82604A58;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82604a5c
	goto loc_82604A5C;
loc_82604A50:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82604a28
	goto loc_82604A28;
loc_82604A58:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_82604A5C:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lwz r10,12(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// beq cr6,0x82604a84
	if (ctx.cr6.eq) goto loc_82604A84;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82604a8c
	goto loc_82604A8C;
loc_82604A84:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82604A8C:
	// stwx r11,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r11.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82604940
	if (!ctx.cr0.eq) goto loc_82604940;
loc_82604A9C:
	// lwz r24,0(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82604d24
	if (ctx.cr6.eq) goto loc_82604D24;
loc_82604AAC:
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x82604b08
	if (!ctx.cr6.lt) goto loc_82604B08;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
loc_82604ACC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82604ba4
	if (!ctx.cr6.eq) goto loc_82604BA4;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpwi cr6,r22,256
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 256, ctx.xer);
	// bne cr6,0x82604bc0
	if (!ctx.cr6.eq) goto loc_82604BC0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82604b08
	if (!ctx.cr6.eq) goto loc_82604B08;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x82604b08
	if (!ctx.cr6.lt) goto loc_82604B08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r10,r19
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
loc_82604B08:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8217d9a0
	ctx.lr = 0x82604B10;
	sub_8217D9A0(ctx, base);
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8217bb68
	ctx.lr = 0x82604B1C;
	sub_8217BB68(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x82604b80
	if (!ctx.cr6.lt) goto loc_82604B80;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r26,r18,r19
	ctx.r26.s64 = ctx.r19.s64 - ctx.r18.s64;
	// add r30,r11,r18
	ctx.r30.u64 = ctx.r11.u64 + ctx.r18.u64;
	// subf r27,r18,r16
	ctx.r27.s64 = ctx.r16.s64 - ctx.r18.s64;
loc_82604B38:
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x82604b80
	if (!ctx.cr6.lt) goto loc_82604B80;
	// lwzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82604b70
	if (!ctx.cr6.eq) goto loc_82604B70;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfsx f1,r27,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x826036a0
	ctx.lr = 0x82604B64;
	sub_826036A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stbx r11,r29,r20
	PPC_STORE_U8(ctx.r29.u32 + ctx.r20.u32, ctx.r11.u8);
loc_82604B70:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x82604b38
	if (ctx.cr6.lt) goto loc_82604B38;
loc_82604B80:
	// bl 0x8217bc98
	ctx.lr = 0x82604B84;
	sub_8217BC98(ctx, base);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82604aac
	if (!ctx.cr6.eq) goto loc_82604AAC;
	// lwz r25,372(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r26,92(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r23,412(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// b 0x82604d24
	goto loc_82604D24;
loc_82604BA4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82604bc0
	if (!ctx.cr6.eq) goto loc_82604BC0;
	// lbzx r8,r11,r20
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82604bc0
	if (!ctx.cr6.eq) goto loc_82604BC0;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82604BC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x82604acc
	if (ctx.cr6.lt) goto loc_82604ACC;
	// b 0x82604b08
	goto loc_82604B08;
loc_82604BD4:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
loc_82604BD8:
	// beq cr6,0x82604d24
	if (ctx.cr6.eq) goto loc_82604D24;
loc_82604BDC:
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// addi r17,r17,-1
	ctx.r17.s64 = ctx.r17.s64 + -1;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// bge cr6,0x82604bfc
	if (!ctx.cr6.lt) goto loc_82604BFC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82604c78
	goto loc_82604C78;
loc_82604BFC:
	// cmplwi cr6,r4,192
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 192, ctx.xer);
	// blt cr6,0x82604c28
	if (ctx.cr6.lt) goto loc_82604C28;
	// cmplwi cr6,r4,223
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 223, ctx.xer);
	// bgt cr6,0x82604c28
	if (ctx.cr6.gt) goto loc_82604C28;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rlwinm r10,r4,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x7C0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x82604c78
	goto loc_82604C78;
loc_82604C28:
	// cmplwi cr6,r4,224
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 224, ctx.xer);
	// blt cr6,0x82604c68
	if (ctx.cr6.lt) goto loc_82604C68;
	// cmplwi cr6,r4,239
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 239, ctx.xer);
	// bgt cr6,0x82604c68
	if (ctx.cr6.gt) goto loc_82604C68;
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rlwinm r9,r4,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lbz r8,1(r21)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// clrlwi r7,r10,26
	ctx.r7.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r6,r8,26
	ctx.r6.u64 = ctx.r8.u32 & 0x3F;
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82604c78
	goto loc_82604C78;
loc_82604C68:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82130000
	ctx.lr = 0x82604C74;
	sub_82130000(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82604C78:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bge cr6,0x82604c90
	if (!ctx.cr6.lt) goto loc_82604C90;
	// add r11,r8,r15
	ctx.r11.u64 = ctx.r8.u64 + ctx.r15.u64;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// b 0x82604cc8
	goto loc_82604CC8;
loc_82604C90:
	// lhz r10,160(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 160);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82604cc4
	if (!ctx.cr6.gt) goto loc_82604CC4;
	// lwz r10,16(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
loc_82604CA8:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82604d08
	if (ctx.cr6.eq) goto loc_82604D08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82604ca8
	if (ctx.cr6.lt) goto loc_82604CA8;
loc_82604CC4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82604CC8:
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,12(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// rlwinm r11,r11,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// fadds f1,f29,f31
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82603960
	ctx.lr = 0x82604CF0;
	sub_82603960(ctx, base);
	// lwz r11,20(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82604d10
	if (ctx.cr6.eq) goto loc_82604D10;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82604d14
	goto loc_82604D14;
loc_82604D08:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82604cc8
	goto loc_82604CC8;
loc_82604D10:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_82604D14:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bne cr6,0x82604bdc
	if (!ctx.cr6.eq) goto loc_82604BDC;
loc_82604D24:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r9,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f28,f12,f28
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// bne cr6,0x826047c8
	if (!ctx.cr6.eq) goto loc_826047C8;
loc_82604D50:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82604d6c
	if (ctx.cr6.eq) goto loc_82604D6C;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x8217d9a0
	ctx.lr = 0x82604D6C;
	sub_8217D9A0(ctx, base);
loc_82604D6C:
	// addi r1,r31,352
	ctx.r1.s64 = ctx.r31.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823dba14
	ctx.lr = 0x82604D78;
	__restfpr_24(ctx, base);
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604D7C"))) PPC_WEAK_FUNC(sub_82604D7C);
PPC_FUNC_IMPL(__imp__sub_82604D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604D80"))) PPC_WEAK_FUNC(sub_82604D80);
PPC_FUNC_IMPL(__imp__sub_82604D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82604D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82604da8
	if (!ctx.cr6.eq) goto loc_82604DA8;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x82604dcc
	goto loc_82604DCC;
loc_82604DA8:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r29,r11,6928
	ctx.r29.s64 = ctx.r11.s64 + 6928;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825efb40
	ctx.lr = 0x82604DC0;
	sub_825EFB40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x82604DCC;
	sub_821C9790(ctx, base);
loc_82604DCC:
	// lhz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,21304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21304);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,31076(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31076);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bne cr6,0x82604e20
	if (!ctx.cr6.eq) goto loc_82604E20;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82604E20:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r11,21308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21308);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82604e50
	if (!ctx.cr6.eq) goto loc_82604E50;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82604E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604E5C"))) PPC_WEAK_FUNC(sub_82604E5C);
PPC_FUNC_IMPL(__imp__sub_82604E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604E60"))) PPC_WEAK_FUNC(sub_82604E60);
PPC_FUNC_IMPL(__imp__sub_82604E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82604E68;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82604e8c
	if (!ctx.cr6.eq) goto loc_82604E8C;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x82604eb0
	goto loc_82604EB0;
loc_82604E8C:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r29,r11,6928
	ctx.r29.s64 = ctx.r11.s64 + 6928;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825efb40
	ctx.lr = 0x82604EA4;
	sub_825EFB40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x82604EB0;
	sub_821C9790(ctx, base);
loc_82604EB0:
	// lhz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,21304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21304);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,31128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31128);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// fdivs f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bne cr6,0x82604f04
	if (!ctx.cr6.eq) goto loc_82604F04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x82604EEC;
	sub_825EF8C8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82604F04:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r11,21308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21308);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82604f54
	if (!ctx.cr6.eq) goto loc_82604F54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ef8c8
	ctx.lr = 0x82604F1C;
	sub_825EF8C8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82604F54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604F64"))) PPC_WEAK_FUNC(sub_82604F64);
PPC_FUNC_IMPL(__imp__sub_82604F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604F68"))) PPC_WEAK_FUNC(sub_82604F68);
PPC_FUNC_IMPL(__imp__sub_82604F68) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,31136
	ctx.r9.s64 = ctx.r11.s64 + 31136;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82604fa4
	if (ctx.cr6.eq) goto loc_82604FA4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82130588
	ctx.lr = 0x82604FA4;
	sub_82130588(ctx, base);
loc_82604FA4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82130588
	ctx.lr = 0x82604FAC;
	sub_82130588(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,20968
	ctx.r10.s64 = ctx.r11.s64 + 20968;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821d2810
	ctx.lr = 0x82604FC0;
	sub_821D2810(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82604fd8
	if (ctx.cr6.eq) goto loc_82604FD8;
	// bl 0x82130588
	ctx.lr = 0x82604FD4;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82604FD8:
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

__attribute__((alias("__imp__sub_82604FF0"))) PPC_WEAK_FUNC(sub_82604FF0);
PPC_FUNC_IMPL(__imp__sub_82604FF0) {
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
	// bl 0x821d2970
	ctx.lr = 0x82605010;
	sub_821D2970(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31028
	ctx.r10.s64 = ctx.r11.s64 + 31028;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8260503c
	if (ctx.cr6.eq) goto loc_8260503C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217d890
	ctx.lr = 0x82605030;
	sub_8217D890(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_8260503C:
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

__attribute__((alias("__imp__sub_82605058"))) PPC_WEAK_FUNC(sub_82605058);
PPC_FUNC_IMPL(__imp__sub_82605058) {
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
	// bl 0x821d2970
	ctx.lr = 0x82605078;
	sub_821D2970(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lhz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addi r10,r11,31136
	ctx.r10.s64 = ctx.r11.s64 + 31136;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x826050b0
	if (ctx.cr6.eq) goto loc_826050B0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826050bc
	if (ctx.cr6.eq) goto loc_826050BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217d890
	ctx.lr = 0x826050A4;
	sub_8217D890(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x826050b8
	goto loc_826050B8;
loc_826050B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,3998
	ctx.r10.s64 = ctx.r11.s64 + 3998;
loc_826050B8:
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_826050BC:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826050dc
	if (ctx.cr6.eq) goto loc_826050DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217d890
	ctx.lr = 0x826050D0;
	sub_8217D890(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_826050DC:
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

__attribute__((alias("__imp__sub_826050F8"))) PPC_WEAK_FUNC(sub_826050F8);
PPC_FUNC_IMPL(__imp__sub_826050F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82605100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8260512c
	if (ctx.cr6.eq) goto loc_8260512C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217d890
	ctx.lr = 0x82605120;
	sub_8217D890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8260512C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605168
	if (ctx.cr6.eq) goto loc_82605168;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82605140:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82605154
	if (ctx.cr0.eq) goto loc_82605154;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821d2aa8
	ctx.lr = 0x82605154;
	sub_821D2AA8(ctx, base);
loc_82605154:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82605140
	if (ctx.cr6.lt) goto loc_82605140;
loc_82605168:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605174"))) PPC_WEAK_FUNC(sub_82605174);
PPC_FUNC_IMPL(__imp__sub_82605174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605178"))) PPC_WEAK_FUNC(sub_82605178);
PPC_FUNC_IMPL(__imp__sub_82605178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82605180;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82130588
	ctx.lr = 0x82605190;
	sub_82130588(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826051d0
	if (!ctx.cr6.gt) goto loc_826051D0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826051A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826051bc
	if (ctx.cr6.eq) goto loc_826051BC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8217da18
	ctx.lr = 0x826051BC;
	sub_8217DA18(ctx, base);
loc_826051BC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826051a4
	if (ctx.cr6.lt) goto loc_826051A4;
loc_826051D0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x826051D8;
	sub_82130588(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82130588
	ctx.lr = 0x826051E0;
	sub_82130588(ctx, base);
	// lhz r31,22(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82605218
	if (ctx.cr6.eq) goto loc_82605218;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82605210
	if (!ctx.cr6.gt) goto loc_82605210;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_826051FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2aa0
	ctx.lr = 0x82605204;
	sub_821D2AA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x826051fc
	if (!ctx.cr0.eq) goto loc_826051FC;
loc_82605210:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x82605218;
	sub_82130588(ctx, base);
loc_82605218:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605220"))) PPC_WEAK_FUNC(sub_82605220);
PPC_FUNC_IMPL(__imp__sub_82605220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82605228;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826050f8
	ctx.lr = 0x82605244;
	sub_826050F8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82605264
	if (ctx.cr6.eq) goto loc_82605264;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217d890
	ctx.lr = 0x82605258;
	sub_8217D890(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82605264:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82605284
	if (ctx.cr6.eq) goto loc_82605284;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217d890
	ctx.lr = 0x82605278;
	sub_8217D890(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_82605284:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826052f4
	if (!ctx.cr6.gt) goto loc_826052F4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82605298:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826052d8
	if (!ctx.cr6.eq) goto loc_826052D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826052d8
	if (!ctx.cr6.eq) goto loc_826052D8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8217d9f8
	ctx.lr = 0x826052CC;
	sub_8217D9F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x826052e0
	goto loc_826052E0;
loc_826052D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217ebf8
	ctx.lr = 0x826052E0;
	sub_8217EBF8(ctx, base);
loc_826052E0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82605298
	if (ctx.cr6.lt) goto loc_82605298;
loc_826052F4:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8260535c
	if (ctx.cr6.eq) goto loc_8260535C;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217d828
	ctx.lr = 0x82605310;
	sub_8217D828(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82605338
	if (ctx.cr6.eq) goto loc_82605338;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x82605350
	goto loc_82605350;
loc_82605338:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26560
	ctx.r4.s64 = ctx.r11.s64 + -26560;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d2378
	ctx.lr = 0x8260534C;
	sub_821D2378(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605350:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8260535C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605368"))) PPC_WEAK_FUNC(sub_82605368);
PPC_FUNC_IMPL(__imp__sub_82605368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82605370;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,31188
	ctx.r10.s64 = ctx.r11.s64 + 31188;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x821bbea8
	ctx.lr = 0x82605388;
	sub_821BBEA8(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826053d8
	if (ctx.cr6.eq) goto loc_826053D8;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x826053d0
	if (ctx.cr0.lt) goto loc_826053D0;
loc_826053B4:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// bl 0x821bbea8
	ctx.lr = 0x826053BC;
	sub_821BBEA8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x826053C4;
	sub_82130588(ctx, base);
	// bl 0x821bbf00
	ctx.lr = 0x826053C8;
	sub_821BBF00(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x826053b4
	if (!ctx.cr0.lt) goto loc_826053B4;
loc_826053D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x826053D8;
	sub_82130588(ctx, base);
loc_826053D8:
	// bl 0x821bbf00
	ctx.lr = 0x826053DC;
	sub_821BBF00(ctx, base);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x82130588
	ctx.lr = 0x826053E4;
	sub_82130588(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82130588
	ctx.lr = 0x826053EC;
	sub_82130588(ctx, base);
	// lhz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 152);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82605438
	if (!ctx.cr6.gt) goto loc_82605438;
	// addi r31,r28,164
	ctx.r31.s64 = ctx.r28.s64 + 164;
loc_82605404:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82605420
	if (ctx.cr6.eq) goto loc_82605420;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82605178
	ctx.lr = 0x82605418;
	sub_82605178(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x82605420;
	sub_82130588(ctx, base);
loc_82605420:
	// lhz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 152);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82605404
	if (ctx.cr6.lt) goto loc_82605404;
loc_82605438:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,20968
	ctx.r10.s64 = ctx.r11.s64 + 20968;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x821d2810
	ctx.lr = 0x8260544C;
	sub_821D2810(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605454"))) PPC_WEAK_FUNC(sub_82605454);
PPC_FUNC_IMPL(__imp__sub_82605454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605458"))) PPC_WEAK_FUNC(sub_82605458);
PPC_FUNC_IMPL(__imp__sub_82605458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x82605460;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// sth r31,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r31.u16);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// sth r31,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r31.u16);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x821d40e8
	ctx.lr = 0x826054A0;
	sub_821D40E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826054B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x826057f8
	if (ctx.cr6.gt) goto loc_826057F8;
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// addi r12,r12,21724
	ctx.r12.s64 = ctx.r12.s64 + 21724;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82605508;
	case 1:
		goto loc_8260558C;
	case 2:
		goto loc_8260559C;
	case 3:
		goto loc_826055AC;
	case 4:
		goto loc_826057F8;
	case 5:
		goto loc_826056DC;
	case 6:
		goto loc_826056EC;
	case 7:
		goto loc_826056FC;
	case 8:
		goto loc_8260570C;
	case 9:
		goto loc_8260571C;
	case 10:
		goto loc_8260572C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,21768(0)
	ctx.r19.u64 = PPC_LOAD_U32(21768);
	// lwz r19,21900(0)
	ctx.r19.u64 = PPC_LOAD_U32(21900);
	// lwz r19,21916(0)
	ctx.r19.u64 = PPC_LOAD_U32(21916);
	// lwz r19,21932(0)
	ctx.r19.u64 = PPC_LOAD_U32(21932);
	// lwz r19,22520(0)
	ctx.r19.u64 = PPC_LOAD_U32(22520);
	// lwz r19,22236(0)
	ctx.r19.u64 = PPC_LOAD_U32(22236);
	// lwz r19,22252(0)
	ctx.r19.u64 = PPC_LOAD_U32(22252);
	// lwz r19,22268(0)
	ctx.r19.u64 = PPC_LOAD_U32(22268);
	// lwz r19,22284(0)
	ctx.r19.u64 = PPC_LOAD_U32(22284);
	// lwz r19,22300(0)
	ctx.r19.u64 = PPC_LOAD_U32(22300);
	// lwz r19,22316(0)
	ctx.r19.u64 = PPC_LOAD_U32(22316);
loc_82605508:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,31632
	ctx.r4.s64 = ctx.r11.s64 + 31632;
	// bl 0x821c75d0
	ctx.lr = 0x82605518;
	sub_821C75D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826057f8
	if (ctx.cr6.eq) goto loc_826057F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r11,652
	ctx.r4.s64 = ctx.r11.s64 + 652;
	// bl 0x823db730
	ctx.lr = 0x82605534;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82605544
	if (!ctx.cr6.eq) goto loc_82605544;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// b 0x826057f8
	goto loc_826057F8;
loc_82605544:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r11,644
	ctx.r4.s64 = ctx.r11.s64 + 644;
	// bl 0x823db730
	ctx.lr = 0x82605554;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82605568
	if (!ctx.cr6.eq) goto loc_82605568;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x826057f8
	goto loc_826057F8;
loc_82605568:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r11,31624
	ctx.r4.s64 = ctx.r11.s64 + 31624;
	// bl 0x823db730
	ctx.lr = 0x82605578;
	sub_823DB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826057f8
	if (!ctx.cr6.eq) goto loc_826057F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x826057f8
	goto loc_826057F8;
loc_8260558C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,31580
	ctx.r3.s64 = ctx.r11.s64 + 31580;
	// bl 0x82130000
	ctx.lr = 0x82605598;
	sub_82130000(ctx, base);
	// b 0x826057f8
	goto loc_826057F8;
loc_8260559C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,31536
	ctx.r3.s64 = ctx.r11.s64 + 31536;
	// bl 0x82130000
	ctx.lr = 0x826055A8;
	sub_82130000(ctx, base);
	// b 0x826057f8
	goto loc_826057F8;
loc_826055AC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,31528
	ctx.r4.s64 = ctx.r11.s64 + 31528;
	// bl 0x821c75d0
	ctx.lr = 0x826055BC;
	sub_821C75D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826055d0
	if (ctx.cr6.eq) goto loc_826055D0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825ee538
	ctx.lr = 0x826055CC;
	sub_825EE538(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
loc_826055D0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,31520
	ctx.r4.s64 = ctx.r11.s64 + 31520;
	// bl 0x821c75d0
	ctx.lr = 0x826055E0;
	sub_821C75D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82605604
	if (ctx.cr6.eq) goto loc_82605604;
	// bl 0x821c64f0
	ctx.lr = 0x826055F0;
	sub_821C64F0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82605604:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-18156
	ctx.r4.s64 = ctx.r11.s64 + -18156;
	// bl 0x821c75d0
	ctx.lr = 0x82605614;
	sub_821C75D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826057f8
	if (ctx.cr6.eq) goto loc_826057F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r22,r11,31516
	ctx.r22.s64 = ctx.r11.s64 + 31516;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x823dc018
	ctx.lr = 0x82605634;
	sub_823DC018(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823dc018
	ctx.lr = 0x82605640;
	sub_823DC018(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823dc018
	ctx.lr = 0x8260564C;
	sub_823DC018(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x823db670
	ctx.lr = 0x8260565C;
	sub_823DB670(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r27,3
	ctx.r4.s64 = ctx.r27.s64 + 3;
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// bl 0x823db670
	ctx.lr = 0x8260566C;
	sub_823DB670(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r27,5
	ctx.r4.s64 = ctx.r27.s64 + 5;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x823db670
	ctx.lr = 0x8260567C;
	sub_823DB670(ctx, base);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ddf40
	ctx.lr = 0x82605698;
	sub_823DDF40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ddf40
	ctx.lr = 0x826056AC;
	sub_823DDF40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ddf40
	ctx.lr = 0x826056C0;
	sub_823DDF40(ctx, base);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwimi r10,r3,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// or r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 | ctx.r27.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 | ctx.r31.u64;
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// b 0x826057f8
	goto loc_826057F8;
loc_826056DC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,31476
	ctx.r3.s64 = ctx.r11.s64 + 31476;
	// bl 0x82130000
	ctx.lr = 0x826056E8;
	sub_82130000(ctx, base);
	// b 0x826057f8
	goto loc_826057F8;
loc_826056EC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,31436
	ctx.r3.s64 = ctx.r11.s64 + 31436;
	// bl 0x82130000
	ctx.lr = 0x826056F8;
	sub_82130000(ctx, base);
	// b 0x826057f8
	goto loc_826057F8;
loc_826056FC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,31396
	ctx.r3.s64 = ctx.r11.s64 + 31396;
	// bl 0x82130000
	ctx.lr = 0x82605708;
	sub_82130000(ctx, base);
	// b 0x826057f8
	goto loc_826057F8;
loc_8260570C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,31348
	ctx.r3.s64 = ctx.r11.s64 + 31348;
	// bl 0x82130000
	ctx.lr = 0x82605718;
	sub_82130000(ctx, base);
	// b 0x826057f8
	goto loc_826057F8;
loc_8260571C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,31312
	ctx.r3.s64 = ctx.r11.s64 + 31312;
	// bl 0x82130000
	ctx.lr = 0x82605728;
	sub_82130000(ctx, base);
	// b 0x826057f8
	goto loc_826057F8;
loc_8260572C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,32320
	ctx.r4.s64 = ctx.r11.s64 + 32320;
	// bl 0x821c75d0
	ctx.lr = 0x8260573C;
	sub_821C75D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826057f8
	if (ctx.cr6.eq) goto loc_826057F8;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826057ec
	if (ctx.cr6.eq) goto loc_826057EC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82604548
	ctx.lr = 0x82605770;
	sub_82604548(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r7,22(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 22);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lfs f13,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfs f0,31076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31076);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lhz r5,156(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 156);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lhz r4,154(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 154);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fmadds f1,f2,f3,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f1,44(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// b 0x826057f8
	goto loc_826057F8;
loc_826057EC:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r3,r10,31240
	ctx.r3.s64 = ctx.r10.s64 + 31240;
	// bl 0x82130000
	ctx.lr = 0x826057F8;
	sub_82130000(ctx, base);
loc_826057F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260580C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82605874
	if (ctx.cr6.eq) goto loc_82605874;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261eeb0
	ctx.lr = 0x82605820;
	sub_8261EEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82605874
	if (!ctx.cr6.eq) goto loc_82605874;
loc_8260582C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261eec0
	ctx.lr = 0x82605834;
	sub_8261EEC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82605874
	if (!ctx.cr6.eq) goto loc_82605874;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82605458
	ctx.lr = 0x82605860;
	sub_82605458(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261eeb0
	ctx.lr = 0x82605868;
	sub_8261EEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260582c
	if (ctx.cr6.eq) goto loc_8260582C;
loc_82605874:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261eec0
	ctx.lr = 0x8260587C;
	sub_8261EEC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260589c
	if (!ctx.cr6.eq) goto loc_8260589C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260589C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260589C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c6f88
	ctx.lr = 0x826058A4;
	sub_821C6F88(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826058AC"))) PPC_WEAK_FUNC(sub_826058AC);
PPC_FUNC_IMPL(__imp__sub_826058AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826058B0"))) PPC_WEAK_FUNC(sub_826058B0);
PPC_FUNC_IMPL(__imp__sub_826058B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x826058B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1536(r1)
	ea = -1536 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,10516
	ctx.r9.s64 = ctx.r11.s64 + 10516;
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_826058F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826058f0
	if (!ctx.cr6.eq) goto loc_826058F0;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821cb740
	ctx.lr = 0x82605920;
	sub_821CB740(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821be0c8
	ctx.lr = 0x82605930;
	sub_821BE0C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8261ee60
	ctx.lr = 0x82605940;
	sub_8261EE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdcf8
	ctx.lr = 0x82605948;
	sub_821BDCF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdd08
	ctx.lr = 0x82605954;
	sub_821BDD08(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82605998
	if (!ctx.cr6.lt) goto loc_82605998;
loc_8260595C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82605458
	ctx.lr = 0x8260597C;
	sub_82605458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdcf8
	ctx.lr = 0x82605984;
	sub_821BDCF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdd08
	ctx.lr = 0x82605990;
	sub_821BDD08(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8260595c
	if (ctx.cr6.lt) goto loc_8260595C;
loc_82605998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821be610
	ctx.lr = 0x826059A0;
	sub_821BE610(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8261eea0
	ctx.lr = 0x826059A8;
	sub_8261EEA0(ctx, base);
	// addi r1,r1,1536
	ctx.r1.s64 = ctx.r1.s64 + 1536;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826059B0"))) PPC_WEAK_FUNC(sub_826059B0);
PPC_FUNC_IMPL(__imp__sub_826059B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x826059B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x821d2970
	ctx.lr = 0x826059C8;
	sub_821D2970(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31188
	ctx.r9.s64 = ctx.r11.s64 + 31188;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826059fc
	if (ctx.cr6.eq) goto loc_826059FC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8217d890
	ctx.lr = 0x826059F0;
	sub_8217D890(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_826059FC:
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82605a1c
	if (ctx.cr6.eq) goto loc_82605A1C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8217d890
	ctx.lr = 0x82605A10;
	sub_8217D890(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
loc_82605A1C:
	// lhz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 152);
	// li r26,0
	ctx.r26.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82605ac8
	if (!ctx.cr6.gt) goto loc_82605AC8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r29,164
	ctx.r28.s64 = ctx.r29.s64 + 164;
	// addi r25,r11,-26560
	ctx.r25.s64 = ctx.r11.s64 + -26560;
loc_82605A3C:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82605ab0
	if (ctx.cr6.eq) goto loc_82605AB0;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217d828
	ctx.lr = 0x82605A58;
	sub_8217D828(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82605a80
	if (ctx.cr6.eq) goto loc_82605A80;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x82605a94
	goto loc_82605A94;
loc_82605A80:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821d2378
	ctx.lr = 0x82605A90;
	sub_821D2378(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605A94:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82605ab0
	if (ctx.cr6.eq) goto loc_82605AB0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82605220
	ctx.lr = 0x82605AB0;
	sub_82605220(ctx, base);
loc_82605AB0:
	// lhz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 152);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82605a3c
	if (ctx.cr6.lt) goto loc_82605A3C;
loc_82605AC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605AD4"))) PPC_WEAK_FUNC(sub_82605AD4);
PPC_FUNC_IMPL(__imp__sub_82605AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605AD8"))) PPC_WEAK_FUNC(sub_82605AD8);
PPC_FUNC_IMPL(__imp__sub_82605AD8) {
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
	// bl 0x82605368
	ctx.lr = 0x82605AF8;
	sub_82605368(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605b10
	if (ctx.cr6.eq) goto loc_82605B10;
	// bl 0x82130588
	ctx.lr = 0x82605B0C;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82605B10:
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

__attribute__((alias("__imp__sub_82605B28"))) PPC_WEAK_FUNC(sub_82605B28);
PPC_FUNC_IMPL(__imp__sub_82605B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82605B30;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605b54
	if (ctx.cr6.eq) goto loc_82605B54;
	// bl 0x826058b0
	ctx.lr = 0x82605B4C;
	sub_826058B0(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82605B54:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605b98
	if (ctx.cr6.eq) goto loc_82605B98;
	// bl 0x825fb910
	ctx.lr = 0x82605B68;
	sub_825FB910(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82605b98
	if (ctx.cr6.eq) goto loc_82605B98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82605b84
	if (!ctx.cr6.eq) goto loc_82605B84;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82605b9c
	goto loc_82605B9C;
loc_82605B84:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825efb40
	ctx.lr = 0x82605B90;
	sub_825EFB40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82605b9c
	goto loc_82605B9C;
loc_82605B98:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82605B9C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825efa10
	ctx.lr = 0x82605BAC;
	sub_825EFA10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82605bb8
	if (ctx.cr6.eq) goto loc_82605BB8;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82605BB8:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lbz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 68);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// lbz r6,69(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 69);
	// lhz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// rlwimi r7,r10,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r10,70(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 70);
	// rotlwi r5,r5,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lbz r8,49(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// lwz r11,-1648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1648);
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r6,30(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x82604548
	ctx.lr = 0x82605C08;
	sub_82604548(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605C10"))) PPC_WEAK_FUNC(sub_82605C10);
PPC_FUNC_IMPL(__imp__sub_82605C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x82605C18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605c4c
	if (ctx.cr6.eq) goto loc_82605C4C;
loc_82605C3C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82605c3c
	if (!ctx.cr6.eq) goto loc_82605C3C;
loc_82605C4C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82130528
	ctx.lr = 0x82605C54;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq cr6,0x82605c7c
	if (ctx.cr6.eq) goto loc_82605C7C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// b 0x82605c80
	goto loc_82605C80;
loc_82605C7C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82605C80:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82605ca4
	if (!ctx.cr6.gt) goto loc_82605CA4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82605CA4:
	// bl 0x82130528
	ctx.lr = 0x82605CA8;
	sub_82130528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x823da950
	ctx.lr = 0x82605CC4;
	sub_823DA950(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82130528
	ctx.lr = 0x82605CCC;
	sub_82130528(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r3,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x823da950
	ctx.lr = 0x82605CE8;
	sub_823DA950(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605D00"))) PPC_WEAK_FUNC(sub_82605D00);
PPC_FUNC_IMPL(__imp__sub_82605D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82605D08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82605d70
	if (!ctx.cr6.gt) goto loc_82605D70;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82605D28:
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82605d5c
	if (ctx.cr6.eq) goto loc_82605D5C;
loc_82605D34:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82130588
	ctx.lr = 0x82605D44;
	sub_82130588(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stwx r28,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82605d34
	if (!ctx.cr6.eq) goto loc_82605D34;
loc_82605D5C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82605d28
	if (ctx.cr6.lt) goto loc_82605D28;
loc_82605D70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605D78"))) PPC_WEAK_FUNC(sub_82605D78);
PPC_FUNC_IMPL(__imp__sub_82605D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82605D80;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605dd0
	if (ctx.cr6.eq) goto loc_82605DD0;
loc_82605DB8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82605dfc
	if (ctx.cr6.eq) goto loc_82605DFC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82605db8
	if (!ctx.cr6.eq) goto loc_82605DB8;
loc_82605DD0:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82130528
	ctx.lr = 0x82605DD8;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82605e08
	if (ctx.cr6.eq) goto loc_82605E08;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x82605e0c
	goto loc_82605E0C;
loc_82605DFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82605E08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605E0C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605E38"))) PPC_WEAK_FUNC(sub_82605E38);
PPC_FUNC_IMPL(__imp__sub_82605E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605e78
	if (ctx.cr6.eq) goto loc_82605E78;
loc_82605E60:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82605e80
	if (ctx.cr6.eq) goto loc_82605E80;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82605e60
	if (!ctx.cr6.eq) goto loc_82605E60;
loc_82605E78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82605E80:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605E88"))) PPC_WEAK_FUNC(sub_82605E88);
PPC_FUNC_IMPL(__imp__sub_82605E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// divwu r8,r4,r9
	ctx.r8.u32 = ctx.r4.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82605EB4:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82605ed4
	if (ctx.cr6.eq) goto loc_82605ED4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82605eb4
	if (!ctx.cr6.eq) goto loc_82605EB4;
	// blr 
	return;
loc_82605ED4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605ee8
	if (ctx.cr6.eq) goto loc_82605EE8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82605ef0
	goto loc_82605EF0;
loc_82605EE8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82605EF0:
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605EF4"))) PPC_WEAK_FUNC(sub_82605EF4);
PPC_FUNC_IMPL(__imp__sub_82605EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605EF8"))) PPC_WEAK_FUNC(sub_82605EF8);
PPC_FUNC_IMPL(__imp__sub_82605EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82605f14
	if (!ctx.cr0.eq) goto loc_82605F14;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82605F14:
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x82605f54
	if (ctx.cr6.lt) goto loc_82605F54;
loc_82605F24:
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// divw r8,r4,r11
	ctx.r8.s32 = ctx.r4.s32 / ctx.r11.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// andc r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// subf. r5,r7,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// twlgei r3,-1
	// beq 0x82605f64
	if (ctx.cr0.eq) goto loc_82605F64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82605f24
	if (!ctx.cr6.gt) goto loc_82605F24;
loc_82605F54:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82605f14
	if (ctx.cr6.eq) goto loc_82605F14;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82605F64:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// b 0x82605f14
	goto loc_82605F14;
}

__attribute__((alias("__imp__sub_82605F6C"))) PPC_WEAK_FUNC(sub_82605F6C);
PPC_FUNC_IMPL(__imp__sub_82605F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605F70"))) PPC_WEAK_FUNC(sub_82605F70);
PPC_FUNC_IMPL(__imp__sub_82605F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82605fa4
	if (!ctx.cr6.gt) goto loc_82605FA4;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82605F88:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82605fac
	if (!ctx.cr6.eq) goto loc_82605FAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82605f88
	if (ctx.cr6.lt) goto loc_82605F88;
loc_82605FA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82605FAC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605FC4"))) PPC_WEAK_FUNC(sub_82605FC4);
PPC_FUNC_IMPL(__imp__sub_82605FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605FC8"))) PPC_WEAK_FUNC(sub_82605FC8);
PPC_FUNC_IMPL(__imp__sub_82605FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605fec
	if (ctx.cr6.eq) goto loc_82605FEC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82605fec
	if (ctx.cr6.eq) goto loc_82605FEC;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82605FEC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82606028
	if (!ctx.cr6.lt) goto loc_82606028;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8260600C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82606030
	if (!ctx.cr6.eq) goto loc_82606030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8260600c
	if (ctx.cr6.lt) goto loc_8260600C;
loc_82606028:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82606030:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606048"))) PPC_WEAK_FUNC(sub_82606048);
PPC_FUNC_IMPL(__imp__sub_82606048) {
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
	// bl 0x82605ef8
	ctx.lr = 0x82606060;
	sub_82605EF8(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8260607c
	if (!ctx.cr6.gt) goto loc_8260607C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8260607C:
	// bl 0x82130528
	ctx.lr = 0x82606080;
	sub_82130528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ble cr6,0x826060b8
	if (!ctx.cr6.gt) goto loc_826060B8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8260609C:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8260609c
	if (ctx.cr6.lt) goto loc_8260609C;
loc_826060B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_826060D4"))) PPC_WEAK_FUNC(sub_826060D4);
PPC_FUNC_IMPL(__imp__sub_826060D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826060D8"))) PPC_WEAK_FUNC(sub_826060D8);
PPC_FUNC_IMPL(__imp__sub_826060D8) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8260613c
	if (!ctx.cr6.gt) goto loc_8260613C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82606104:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82606120
	if (ctx.cr6.eq) goto loc_82606120;
loc_82606110:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82606110
	if (!ctx.cr6.eq) goto loc_82606110;
loc_82606120:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82606104
	if (!ctx.cr0.eq) goto loc_82606104;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8260613c
	if (ctx.cr6.eq) goto loc_8260613C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82605d00
	ctx.lr = 0x8260613C;
	sub_82605D00(ctx, base);
loc_8260613C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82130588
	ctx.lr = 0x82606144;
	sub_82130588(ctx, base);
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

__attribute__((alias("__imp__sub_82606158"))) PPC_WEAK_FUNC(sub_82606158);
PPC_FUNC_IMPL(__imp__sub_82606158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-18168
	ctx.r9.s64 = ctx.r11.s64 + -18168;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260616C"))) PPC_WEAK_FUNC(sub_8260616C);
PPC_FUNC_IMPL(__imp__sub_8260616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606170"))) PPC_WEAK_FUNC(sub_82606170);
PPC_FUNC_IMPL(__imp__sub_82606170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82606178;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261a5d8
	ctx.lr = 0x826061A4;
	sub_8261A5D8(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826061b4
	if (ctx.cr6.eq) goto loc_826061B4;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_826061B4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826061f8
	if (ctx.cr6.eq) goto loc_826061F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826061f8
	if (ctx.cr6.lt) goto loc_826061F8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1
	ctx.r3.s64 = 1;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v11,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826061F8:
	// lvx128 v62,r0,r31
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v62,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260620C"))) PPC_WEAK_FUNC(sub_8260620C);
PPC_FUNC_IMPL(__imp__sub_8260620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606210"))) PPC_WEAK_FUNC(sub_82606210);
PPC_FUNC_IMPL(__imp__sub_82606210) {
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
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82606274
	if (ctx.cr6.eq) goto loc_82606274;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8260626c
	if (ctx.cr6.eq) goto loc_8260626C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x82606264;
	sub_82130528(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82606274
	goto loc_82606274;
loc_8260626C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82606274:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826062d0
	if (ctx.cr6.eq) goto loc_826062D0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82606284:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,5
	ctx.r8.s64 = 5;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826062A8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x826062a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826062A8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82606284
	if (ctx.cr6.lt) goto loc_82606284;
loc_826062D0:
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

__attribute__((alias("__imp__sub_826062E8"))) PPC_WEAK_FUNC(sub_826062E8);
PPC_FUNC_IMPL(__imp__sub_826062E8) {
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
	// bne cr6,0x8260639c
	if (!ctx.cr6.eq) goto loc_8260639C;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82130528
	ctx.lr = 0x8260632C;
	sub_82130528(ctx, base);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82606390
	if (ctx.cr6.eq) goto loc_82606390;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82606340:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,5
	ctx.r8.s64 = 5;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82606368:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82606368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82606368;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82606340
	if (ctx.cr6.lt) goto loc_82606340;
loc_82606390:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x82606398;
	sub_82130588(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8260639C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_826063D4"))) PPC_WEAK_FUNC(sub_826063D4);
PPC_FUNC_IMPL(__imp__sub_826063D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826063D8"))) PPC_WEAK_FUNC(sub_826063D8);
PPC_FUNC_IMPL(__imp__sub_826063D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x826063E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8260640c
	if (ctx.cr6.eq) goto loc_8260640C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8217d890
	ctx.lr = 0x82606400;
	sub_8217D890(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_8260640C:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826064ac
	if (ctx.cr6.eq) goto loc_826064AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r24,r11,-26560
	ctx.r24.s64 = ctx.r11.s64 + -26560;
loc_82606428:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add. r29,r26,r11
	ctx.r29.u64 = ctx.r26.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82606498
	if (ctx.cr0.eq) goto loc_82606498;
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82606498
	if (ctx.cr6.eq) goto loc_82606498;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217d828
	ctx.lr = 0x82606450;
	sub_8217D828(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82606478
	if (ctx.cr6.eq) goto loc_82606478;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x8260648c
	goto loc_8260648C;
loc_82606478:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821d2378
	ctx.lr = 0x82606488;
	sub_821D2378(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260648C:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_82606498:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82606428
	if (ctx.cr6.lt) goto loc_82606428;
loc_826064AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826064B8"))) PPC_WEAK_FUNC(sub_826064B8);
PPC_FUNC_IMPL(__imp__sub_826064B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x826064C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826064e8
	if (ctx.cr6.eq) goto loc_826064E8;
	// bl 0x8217d890
	ctx.lr = 0x826064DC;
	sub_8217D890(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_826064E8:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82606634
	if (ctx.cr6.eq) goto loc_82606634;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_82606500:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add. r26,r24,r11
	ctx.r26.u64 = ctx.r24.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82606620
	if (ctx.cr0.eq) goto loc_82606620;
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,60
	ctx.r28.s64 = 60;
	// addi r31,r26,8
	ctx.r31.s64 = ctx.r26.s64 + 8;
	// lwzx r30,r28,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82606570
	if (ctx.cr6.eq) goto loc_82606570;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82606570
	if (ctx.cr6.eq) goto loc_82606570;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82187a38
	ctx.lr = 0x8260653C;
	sub_82187A38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82606570
	if (ctx.cr6.eq) goto loc_82606570;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217d890
	ctx.lr = 0x82606550;
	sub_8217D890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82606574
	if (ctx.cr6.eq) goto loc_82606574;
	// lwzx r4,r28,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x82608d70
	ctx.lr = 0x8260656C;
	sub_82608D70(ctx, base);
	// b 0x82606574
	goto loc_82606574;
loc_82606570:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_82606574:
	// lwzx r30,r28,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826065d0
	if (ctx.cr6.eq) goto loc_826065D0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826065d0
	if (ctx.cr6.eq) goto loc_826065D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82187a38
	ctx.lr = 0x8260659C;
	sub_82187A38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826065d0
	if (ctx.cr6.eq) goto loc_826065D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217d890
	ctx.lr = 0x826065B0;
	sub_8217D890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826065d4
	if (ctx.cr6.eq) goto loc_826065D4;
	// lwzx r4,r28,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x82608d70
	ctx.lr = 0x826065CC;
	sub_82608D70(ctx, base);
	// b 0x826065d4
	goto loc_826065D4;
loc_826065D0:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_826065D4:
	// lwzx r30,r28,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8260661c
	if (ctx.cr6.eq) goto loc_8260661C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82187a38
	ctx.lr = 0x826065F0;
	sub_82187A38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8260661c
	if (ctx.cr6.eq) goto loc_8260661C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82606620
	if (ctx.cr6.eq) goto loc_82606620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217d890
	ctx.lr = 0x8260660C;
	sub_8217D890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82606620
	goto loc_82606620;
loc_8260661C:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_82606620:
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,72
	ctx.r24.s64 = ctx.r24.s64 + 72;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82606500
	if (ctx.cr6.lt) goto loc_82606500;
loc_82606634:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606640"))) PPC_WEAK_FUNC(sub_82606640);
PPC_FUNC_IMPL(__imp__sub_82606640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82606648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r4,24
	ctx.r29.s64 = ctx.r4.s64 + 24;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lbz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r6,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r6.u8);
	// beq cr6,0x826066c0
	if (ctx.cr6.eq) goto loc_826066C0;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826066b4
	if (ctx.cr6.eq) goto loc_826066B4;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826066b4
	if (ctx.cr6.eq) goto loc_826066B4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x826066B4;
	sub_82130588(ctx, base);
loc_826066B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82606210
	ctx.lr = 0x826066C0;
	sub_82606210(ctx, base);
loc_826066C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826066CC"))) PPC_WEAK_FUNC(sub_826066CC);
PPC_FUNC_IMPL(__imp__sub_826066CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826066D0"))) PPC_WEAK_FUNC(sub_826066D0);
PPC_FUNC_IMPL(__imp__sub_826066D0) {
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
	// rlwinm r3,r31,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82130528
	ctx.lr = 0x826066EC;
	sub_82130528(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82606730
	if (!ctx.cr6.gt) goto loc_82606730;
	// addi r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 + 30;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82606700:
	// addic. r8,r11,-30
	ctx.xer.ca = ctx.r11.u32 > 29;
	ctx.r8.s64 = ctx.r11.s64 + -30;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82606724
	if (ctx.cr0.eq) goto loc_82606724;
	// stw r10,-6(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6, ctx.r10.u32);
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// stw r9,-22(r11)
	PPC_STORE_U32(ctx.r11.u32 + -22, ctx.r9.u32);
	// stw r9,-18(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18, ctx.r9.u32);
	// stw r9,-14(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14, ctx.r9.u32);
	// stb r10,-10(r11)
	PPC_STORE_U8(ctx.r11.u32 + -10, ctx.r10.u8);
loc_82606724:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82606700
	if (!ctx.cr0.eq) goto loc_82606700;
loc_82606730:
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

__attribute__((alias("__imp__sub_82606744"))) PPC_WEAK_FUNC(sub_82606744);
PPC_FUNC_IMPL(__imp__sub_82606744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606748"))) PPC_WEAK_FUNC(sub_82606748);
PPC_FUNC_IMPL(__imp__sub_82606748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82606750;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82606788
	if (!ctx.cr6.gt) goto loc_82606788;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82606768:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260677c
	if (ctx.cr6.eq) goto loc_8260677C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x8260677C;
	sub_82130588(ctx, base);
loc_8260677C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x82606768
	if (!ctx.cr0.eq) goto loc_82606768;
loc_82606788:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x82606790;
	sub_82130588(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606798"))) PPC_WEAK_FUNC(sub_82606798);
PPC_FUNC_IMPL(__imp__sub_82606798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x826067A0;
	__savegprlr_27(ctx, base);
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
	// bne cr6,0x82606844
	if (!ctx.cr6.eq) goto loc_82606844;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// bl 0x826066d0
	ctx.lr = 0x826067C8;
	sub_826066D0(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82606804
	if (ctx.cr6.eq) goto loc_82606804;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826067DC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82606640
	ctx.lr = 0x826067F0;
	sub_82606640(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826067dc
	if (ctx.cr6.lt) goto loc_826067DC;
loc_82606804:
	// lhz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82606838
	if (!ctx.cr6.gt) goto loc_82606838;
	// addi r30,r27,24
	ctx.r30.s64 = ctx.r27.s64 + 24;
loc_82606818:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260682c
	if (ctx.cr6.eq) goto loc_8260682C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x8260682C;
	sub_82130588(ctx, base);
loc_8260682C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x82606818
	if (!ctx.cr0.eq) goto loc_82606818;
loc_82606838:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82130588
	ctx.lr = 0x82606840;
	sub_82130588(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82606844:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606864"))) PPC_WEAK_FUNC(sub_82606864);
PPC_FUNC_IMPL(__imp__sub_82606864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606868"))) PPC_WEAK_FUNC(sub_82606868);
PPC_FUNC_IMPL(__imp__sub_82606868) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,-32580
	ctx.r10.s64 = ctx.r11.s64 + -32580;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lhz r9,74(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8260689c
	if (ctx.cr6.eq) goto loc_8260689C;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82130588
	ctx.lr = 0x8260689C;
	sub_82130588(ctx, base);
loc_8260689C:
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826068b0
	if (ctx.cr6.eq) goto loc_826068B0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82130588
	ctx.lr = 0x826068B0;
	sub_82130588(ctx, base);
loc_826068B0:
	// lhz r5,42(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826068c8
	if (ctx.cr6.eq) goto loc_826068C8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82606748
	ctx.lr = 0x826068C8;
	sub_82606748(ctx, base);
loc_826068C8:
	// lhz r5,18(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826068e0
	if (ctx.cr6.eq) goto loc_826068E0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82606748
	ctx.lr = 0x826068E0;
	sub_82606748(ctx, base);
loc_826068E0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,20968
	ctx.r10.s64 = ctx.r11.s64 + 20968;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821d2810
	ctx.lr = 0x826068F4;
	sub_821D2810(ctx, base);
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

__attribute__((alias("__imp__sub_82606908"))) PPC_WEAK_FUNC(sub_82606908);
PPC_FUNC_IMPL(__imp__sub_82606908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x82606910;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823db9d4
	ctx.lr = 0x82606918;
	sub_823DB9D4(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// sth r23,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r23.u16);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// sth r23,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82606aa0
	if (ctx.cr6.eq) goto loc_82606AA0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82606950:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82606798
	ctx.lr = 0x8260695C;
	sub_82606798(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r8.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 28);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82606a8c
	if (ctx.cr6.eq) goto loc_82606A8C;
	// addi r27,r3,24
	ctx.r27.s64 = ctx.r3.s64 + 24;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_826069D4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f30,f10,f31,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f29,f9,f31,f13
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// beq cr6,0x82606a60
	if (ctx.cr6.eq) goto loc_82606A60;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f28,f10,f31,f0
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f27,f9,f31,f13
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// bl 0x826062e8
	ctx.lr = 0x82606A48;
	sub_826062E8(ctx, base);
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// stfs f30,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f29,8(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f27,12(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f28,16(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// b 0x82606a70
	goto loc_82606A70;
loc_82606A60:
	// bl 0x826062e8
	ctx.lr = 0x82606A64;
	sub_826062E8(ctx, base);
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r23.u8);
	// stfs f30,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f29,8(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82606A70:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 28);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826069d4
	if (ctx.cr6.lt) goto loc_826069D4;
loc_82606A8C:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82606950
	if (ctx.cr6.lt) goto loc_82606950;
loc_82606AA0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8260a550
	ctx.lr = 0x82606AAC;
	sub_8260A550(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// bl 0x82607ea8
	ctx.lr = 0x82606AB8;
	sub_82607EA8(ctx, base);
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82606d8c
	if (ctx.cr6.eq) goto loc_82606D8C;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82606ACC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bgt cr6,0x82606d78
	if (ctx.cr6.gt) goto loc_82606D78;
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// addi r12,r12,27384
	ctx.r12.s64 = ctx.r12.s64 + 27384;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82606C08;
	case 1:
		goto loc_82606D78;
	case 2:
		goto loc_82606D78;
	case 3:
		goto loc_82606D78;
	case 4:
		goto loc_82606D78;
	case 5:
		goto loc_82606D78;
	case 6:
		goto loc_82606D78;
	case 7:
		goto loc_82606D78;
	case 8:
		goto loc_82606D78;
	case 9:
		goto loc_82606D78;
	case 10:
		goto loc_82606D78;
	case 11:
		goto loc_82606D78;
	case 12:
		goto loc_82606D78;
	case 13:
		goto loc_82606D78;
	case 14:
		goto loc_82606D78;
	case 15:
		goto loc_82606D78;
	case 16:
		goto loc_82606CF8;
	case 17:
		goto loc_82606D78;
	case 18:
		goto loc_82606CF8;
	case 19:
		goto loc_82606D78;
	case 20:
		goto loc_82606D78;
	case 21:
		goto loc_82606D78;
	case 22:
		goto loc_82606D78;
	case 23:
		goto loc_82606D78;
	case 24:
		goto loc_82606D78;
	case 25:
		goto loc_82606D78;
	case 26:
		goto loc_82606D78;
	case 27:
		goto loc_82606D78;
	case 28:
		goto loc_82606D78;
	case 29:
		goto loc_82606D78;
	case 30:
		goto loc_82606D78;
	case 31:
		goto loc_82606D78;
	case 32:
		goto loc_82606D78;
	case 33:
		goto loc_82606D78;
	case 34:
		goto loc_82606D78;
	case 35:
		goto loc_82606D78;
	case 36:
		goto loc_82606D78;
	case 37:
		goto loc_82606D78;
	case 38:
		goto loc_82606D78;
	case 39:
		goto loc_82606D78;
	case 40:
		goto loc_82606D78;
	case 41:
		goto loc_82606D78;
	case 42:
		goto loc_82606D78;
	case 43:
		goto loc_82606D78;
	case 44:
		goto loc_82606D78;
	case 45:
		goto loc_82606D78;
	case 46:
		goto loc_82606D78;
	case 47:
		goto loc_82606D78;
	case 48:
		goto loc_82606D78;
	case 49:
		goto loc_82606D78;
	case 50:
		goto loc_82606D78;
	case 51:
		goto loc_82606D78;
	case 52:
		goto loc_82606D78;
	case 53:
		goto loc_82606D78;
	case 54:
		goto loc_82606D78;
	case 55:
		goto loc_82606D78;
	case 56:
		goto loc_82606D78;
	case 57:
		goto loc_82606D78;
	case 58:
		goto loc_82606D78;
	case 59:
		goto loc_82606D78;
	case 60:
		goto loc_82606D78;
	case 61:
		goto loc_82606D78;
	case 62:
		goto loc_82606D78;
	case 63:
		goto loc_82606D78;
	case 64:
		goto loc_82606D50;
	case 65:
		goto loc_82606D50;
	case 66:
		goto loc_82606D50;
	case 67:
		goto loc_82606D50;
	default:
		__builtin_unreachable();
	}
	// lwz r19,27656(0)
	ctx.r19.u64 = PPC_LOAD_U32(27656);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,27896(0)
	ctx.r19.u64 = PPC_LOAD_U32(27896);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,27896(0)
	ctx.r19.u64 = PPC_LOAD_U32(27896);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,28024(0)
	ctx.r19.u64 = PPC_LOAD_U32(28024);
	// lwz r19,27984(0)
	ctx.r19.u64 = PPC_LOAD_U32(27984);
	// lwz r19,27984(0)
	ctx.r19.u64 = PPC_LOAD_U32(27984);
	// lwz r19,27984(0)
	ctx.r19.u64 = PPC_LOAD_U32(27984);
	// lwz r19,27984(0)
	ctx.r19.u64 = PPC_LOAD_U32(27984);
loc_82606C08:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r24,r1,128
	ctx.r24.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lvx128 v61,r0,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v59,v61,v0
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v61.s16)));
	// lbz r5,68(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 68);
	// vupklsb128 v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// vupklsb128 v57,v59,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v59.s16)));
	// vupklsb128 v60,v62,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v62.s16)));
	// vcsxwfp128 v56,v57,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v58,v60,0
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// vpermwi128 v54,v56,108
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0x93));
	// vpermwi128 v55,v58,108
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0x93));
	// stvx128 v54,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v55,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmadds f1,f4,f31,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f2,f6,f31,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f5,f8,f31,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f0,f3,f31,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v53,r0,r28
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v52,v53,198
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0x39));
	// vcfpsxws128 v51,v52,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_vctsxs(_mm_load_ps(ctx.v52.f32)));
	// vpkuwum128 v50,v51,v51
	// vpkuhum128 v49,v50,v50
	// stvx128 v49,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82606d74
	goto loc_82606D74;
loc_82606CF8:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82130528
	ctx.lr = 0x82606D00;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82606d38
	if (ctx.cr6.eq) goto loc_82606D38;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82608b20
	ctx.lr = 0x82606D20;
	sub_82608B20(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// b 0x82606d64
	goto loc_82606D64;
loc_82606D38:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// b 0x82606d64
	goto loc_82606D64;
loc_82606D50:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82606D64:
	// lbz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82606D74:
	// bl 0x82607f98
	ctx.lr = 0x82606D78;
	sub_82607F98(ctx, base);
loc_82606D78:
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82606acc
	if (ctx.cr6.lt) goto loc_82606ACC;
loc_82606D8C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// bl 0x82607f40
	ctx.lr = 0x82606D98;
	sub_82607F40(ctx, base);
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82606edc
	if (ctx.cr6.eq) goto loc_82606EDC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82606DAC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// lhz r26,2(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// extsw r26,r26
	ctx.r26.s64 = ctx.r26.s32;
	// lhz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r27,r27
	ctx.r27.s64 = ctx.r27.s32;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lvx128 v46,r0,r10
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lvx128 v48,r0,r8
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v44,v46,v0
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v46.s16)));
	// vupklsb128 v47,v48,v0
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v48.s16)));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// vupklsb128 v42,v44,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v44.s16)));
	// vupklsb128 v45,v47,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v47.s16)));
	// vcsxwfp128 v41,v42,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v41.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)));
	// frsp f10,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// vcsxwfp128 v43,v45,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v43.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)));
	// fsubs f8,f10,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// vpermwi128 v39,v41,108
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), 0x93));
	// vpermwi128 v40,v43,108
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0x93));
	// stvx128 v39,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmadds f6,f8,f31,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f9.f64));
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f5.u64);
	// lfs f7,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f2,f4,f31,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f3,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lhz r5,118(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmadds f6,f10,f31,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f7,f0,f31,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f5,f8,f31,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v38,r0,r7
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v37,v38,198
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), 0x39));
	// vcfpsxws128 v36,v37,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_vctsxs(_mm_load_ps(ctx.v37.f32)));
	// vpkuwum128 v35,v36,v36
	// vpkuhum128 v34,v35,v35
	// stvx128 v34,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82608000
	ctx.lr = 0x82606EC8;
	sub_82608000(ctx, base);
	// lhz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82606dac
	if (ctx.cr6.lt) goto loc_82606DAC;
loc_82606EDC:
	// lhz r30,86(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82606f24
	if (ctx.cr6.eq) goto loc_82606F24;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// ble cr6,0x82606f1c
	if (!ctx.cr6.gt) goto loc_82606F1C;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
loc_82606EFC:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82606f10
	if (ctx.cr6.eq) goto loc_82606F10;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x82606F10;
	sub_82130588(ctx, base);
loc_82606F10:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x82606efc
	if (!ctx.cr0.eq) goto loc_82606EFC;
loc_82606F1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x82606F24;
	sub_82130588(ctx, base);
loc_82606F24:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823dba20
	ctx.lr = 0x82606F30;
	__restfpr_27(ctx, base);
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606F34"))) PPC_WEAK_FUNC(sub_82606F34);
PPC_FUNC_IMPL(__imp__sub_82606F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

